import Foundation

enum RecordFileType: Int {
    case video
    case bin
    case json
    case archive
    case image

    var fileExtension: String {
        switch self {
        case .video:
            return "mp4"
        case .bin:
            return "bin"
        case .json:
            return "json"
        case .archive:
            return "zip"
        case .image:
            return "jpg"
        }
    }
}
