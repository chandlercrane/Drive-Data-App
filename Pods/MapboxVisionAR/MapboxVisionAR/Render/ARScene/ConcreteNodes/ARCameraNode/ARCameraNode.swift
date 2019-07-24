import simd

class ARCameraNode: ARNode {
    // MARK: - Public properties

    var nearClipPlane: Float = 0.01 {
        didSet {
            setNeedsUpdateProjection()
        }
    }

    var farClipPlane: Float = 1000 {
        didSet {
            setNeedsUpdateProjection()
        }
    }

    var fovRadians = degreesToRadians(60) {
        didSet {
            setNeedsUpdateProjection()
        }
    }

    var aspectRatio = Float(4.0 / 3.0) {
        didSet {
            setNeedsUpdateProjection()
        }
    }


    // MARK: - Private properties

    private var cachedProjectionMatrix = float4x4()
    private var needsUpdateProjection = true

    // MARK: - Lifecycle

    init() {
        super.init(with: .camera)
    }

    // MARK: - Internal functions

    func frameSize(size: float2) {
        assert(size.y > 0)
        aspectRatio = size.x / size.y
    }

    func projectionMatrix() -> float4x4 {
        if needsUpdateProjection {
            needsUpdateProjection = false
            cachedProjectionMatrix = makePerpectiveProjectionMatrix(fovRadians: fovRadians,
                                                                    aspectRatio: aspectRatio,
                                                                    nearZ: nearClipPlane,
                                                                    farZ: farClipPlane)
        }

        return cachedProjectionMatrix
    }

    func setNeedsUpdateProjection() {
        needsUpdateProjection = true
    }
}
