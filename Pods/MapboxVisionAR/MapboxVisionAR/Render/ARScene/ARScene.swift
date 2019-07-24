/**
 A custom container for the node hierarchy and global properties.
 Together they are used to form a displayable AR scene.
 The implementation is similar to Apple's implementation of `SCNScene`.
 */
class ARScene {
    // MARK: - Properties

    /// The root node of the scene graph.
    var rootNode = ARRootNode()

    /// Node with a set of camera attributes to provide a point of view for displaying the scene.
    var cameraNode = ARCameraNode()

    // MARK: - Public methods

    /**
     Return `ARLaneNode` node from the root’s child node subtree.

     - Returns: An array containing `ARLaneNode` nodes.
     */
    func arLaneNode() -> ARLaneNode? {
        return rootNode.childNodes.compactMap { $0 as? ARLaneNode }.first
    }
}
