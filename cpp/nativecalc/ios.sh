xcodebuild -create-xcframework \
-library ../target/aarch64-apple-ios/libnativecalc.a \
-library ../target/aarch64-apple-ios-sim/libnativecalc.a \
-output nativecalc.xcframework
