import MetalKit
import simd

/// Represents AR Lane that can be rendered as a part of `ARScene`.
class ARLaneNode: ARNode {
    // MARK: - Properties

    /// Attributes that define the appearance of AR lane.
    private(set) var arMaterial = ARMaterial()
    /// Width of AR lane in meters.
    private(set) var width: Float = 1.0

    // MARK: - Lifecycle

    /**
     Creates an instance of `ARLaneNode`.
     The instance has `lane` node type.
     */
    init() {
        super.init(with: .lane)
    }

    // MARK: - Public methods

    /**
     Set a new color for underlying AR Lane.

     Method does nothing if `laneColor` does not have compatible color space
     or there's no underlying AR lane's representation.

     - Parameters:
       - laneColor: New color of AR lane. It must be in RGBA color space.
     */
    func set(laneColor: UIColor) {
        if let (red, green, blue, alpha) = laneColor.rgbaComponents() {
            let newARLaneColor = float4(Float(red),
                                        Float(green),
                                        Float(blue),
                                        Float(alpha))
            self.arMaterial.diffuseColor = newARLaneColor
        }
    }

    /**
     Set a new width for AR lane.

     Method does nothing if there's no underlying AR lane's representation.

     - Parameters:
       - laneWidth: Width of AR lane in meters.
     */
    func set(laneWidth: Float) {
        self.width = laneWidth
    }

    /**
     Set new position of light source for AR lane.

     Method does nothing if there's no underlying AR lane's representation.

     - Parameters:
       - laneLightPosition: Position of a light source for AR lane in render coordinate system.
     */
    func set(laneLightPosition: float3) {
        self.arMaterial.light.position = laneLightPosition
    }

    /**
     Set a new color of a light source for AR lane.

     Method does nothing if `laneLightColor` does not have compatible color space
     or there's no underlying AR lane's representation.

     - Parameters:
       - laneLightColor: Color of a light source for AR lane. It must be in RGB color space.
     */
    func set(laneLightColor: UIColor) {
        if let (red, green, blue) = laneLightColor.rgbComponents() {
            let newLaneLightColor = float3(Float(red),
                                           Float(green),
                                           Float(blue))
            self.arMaterial.light.color = newLaneLightColor
        }
    }

    /**
     Set a new ambient color for AR lane.

     Method does nothing if `laneAmbientColor` does not have compatible color space
     or there's no underlying AR lane's representation.

     - Parameters:
       - laneAmbientColor: Ambient color for AR lane. It must be in RGB color space.
     */
    func set(laneAmbientColor: UIColor) {
        if let (red, green, blue) = laneAmbientColor.rgbComponents() {
            let newAmbientLightColor = float3(Float(red),
                                              Float(green),
                                              Float(blue))
            self.arMaterial.ambientLightColor = newAmbientLightColor
        }
    }
}
