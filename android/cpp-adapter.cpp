#include <jni.h>
#include "react-native-demo-provider.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_demoprovider_DemoProviderModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return demoprovider::multiply(a, b);
}

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_demoprovider_DemoProviderModule_nativeAdd(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return demoprovider::add(a, b);
}
