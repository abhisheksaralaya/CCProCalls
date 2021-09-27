// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "CometChatCallsSwift",
    platforms: [
        // Only add support for iOS 11 and up.
        .iOS(.v11)
    ],
    products: [
        // Products define the executables and libraries a package produces, and make them visible to other packages.
        .library(
            name: "CometChatCalls",
            targets: ["CometChatCalls","WebRTC"]),
    ],
    targets: [
        // Targets are the basic building blocks of a package. A target can define a module or a test suite.
        // Targets can depend on other targets in this package, and on products in packages this package depends on.
        
        .binaryTarget(
            name: "CometChatCalls",
            path: "./Sources/CometChatProCalls.xcframework"),
        .binaryTarget(
            name: "WebRTC",
            path: "./Sources/WebRTC.xcframework")
    ]
)
