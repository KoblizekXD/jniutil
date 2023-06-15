#ifndef JNIUTIL_H
#define JNIUTIL_H

#include <jni.h>
#include <iostream>

using std::string;

jclass find_class(string name);
void env(JNIEnv* env);
jobject create_class_instance(jclass type, jobject params...);

#endif // JNIUTIL_H
