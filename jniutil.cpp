#include "jniutil.h"

#include <iostream>
#include <jni.h>

using std::string;

JNIEnv *jni_env;

// TODO: fix signatures
jobject create_class_instance(jclass type, jobject params...) {
    return jni_env->NewObject(type,
                              jni_env->GetMethodID(type, "<init>", ""),
                              params);
}

void env(JNIEnv *env) {
    jni_env = env;
}

jclass find_class(string name) {
    return jni_env->FindClass(name.c_str());
}
