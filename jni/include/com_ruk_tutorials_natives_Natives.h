/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_ruk_tutorials_natives_Natives */

#ifndef _Included_com_ruk_tutorials_natives_Natives
#define _Included_com_ruk_tutorials_natives_Natives
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_ruk_tutorials_natives_Natives
 * Method:    takePics
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_ruk_tutorials_natives_Natives_takePics
  (JNIEnv *, jclass);

/*
 * Class:     com_ruk_tutorials_natives_Natives
 * Method:    takePicsFromFFMpeg
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ruk_tutorials_natives_Natives_takePicsFromFFMpeg
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_ruk_tutorials_natives_Natives
 * Method:    cut
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_ruk_tutorials_natives_Natives_cut
  (JNIEnv *, jclass, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
