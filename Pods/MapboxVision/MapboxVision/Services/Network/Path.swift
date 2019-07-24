import Foundation

// Path represents absolute path consisted of components
struct Path {
    var components: [String]

    init(_ components: [String]) {
        self.components = components
    }

    var basePath: String {
        return "/" + components.dropLast().joined(separator: "/")
    }

    var rendered: String {
        return "/" + components.joined(separator: "/")
    }

    func appending(_ component: String) -> Path {
        return Path(components + [component])
    }

    func prepending(base: String) -> Path {
        return Path([base] + components)
    }

    var subpaths: [String] {
        var paths = [String]()
        var currentPath = ""
        for component in components {
            currentPath += "/\(component)"
            paths.append(currentPath)
        }
        return paths
    }
}

extension Path: CustomStringConvertible {
    var description: String {
        return rendered
    }
}
