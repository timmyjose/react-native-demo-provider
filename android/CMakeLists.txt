cmake_minimum_required(VERSION 3.4.1)
project(DemoProvider)

set (CMAKE_VERBOSE_MAKEFILE ON)
set (CMAKE_CXX_STANDARD 11)

add_library(react-native-demo-provider            SHARED
            ../cpp/react-native-demo-provider.cpp
            cpp-adapter.cpp
)

# Link against the correct Android library

if(CMAKE_ANDROID_ARCH_ABI STREQUAL arm64-v8a)
    message(INFO "[Android] Building for ARM 64")
    target_link_directories(react-native-demo-provider PUBLIC ../cpp/target/aarch64-linux-android/release/)
    target_link_libraries(react-native-demo-provider libnativecalc.a)
elseif(CMAKE_ANDROID_ARCH_ABI STREQUAL x86)
    message(INFO "[Android] Building for x86")
    target_link_directories(react-native-demo-provider PUBLIC ../cpp/target/i686-linux-android/release/)
    target_link_libraries(react-native-demo-provider libnativecalc.a)
elseif(CMAKE_ANDROID_ARCH_ABI STREQUAL x86_64)
    message(INFO "[Android] Building for x86_64")
    target_link_directories(react-native-demo-provider PUBLIC ../cpp/target/x86_64-linux-android/release/)
    target_link_libraries(react-native-demo-provider libnativecalc.a)
elseif(CMAKE_ANDROID_ARCH_ABI STREQUAL armeabi-v7a)
    message(INFO "[Android] Building for armeabi-v7a")
    target_link_directories(react-native-demo-provider PUBLIC ../cpp/target/armv7-linux-androideabi/release/)
    target_link_libraries(react-native-demo-provider libnativecalc.a)
else()
    message(ERROR "Building for UNKNOWN or UNSUPPORTED platform and abi")
endif()


# Specifies a path to native header files.
include_directories(
            ../cpp
)
