/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ZeroTier */

#ifndef _Included_ZeroTier
#define _Included_ZeroTier
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ZeroTier
 * Method:    ztjni_start
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ZeroTier_ztjni_1start
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ZeroTier
 * Method:    ztjni_startjoin
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ZeroTier_ztjni_1startjoin
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     ZeroTier
 * Method:    ztjni_join
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ZeroTier_ztjni_1join
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ZeroTier
 * Method:    ztjni_leave
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_ZeroTier_ztjni_1leave
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ZeroTier
 * Method:    ztjni_get_addresses
 * Signature: (Ljava/lang/String;)Ljava/util/ArrayList;
 */
JNIEXPORT jobject JNICALL Java_ZeroTier_ztjni_1get_1addresses
  (JNIEnv *, jobject, jstring);

/*
 * Class:     ZeroTier
 * Method:    ztjni_running
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_ZeroTier_ztjni_1running
  (JNIEnv *, jobject);

/*
 * Class:     ZeroTier
 * Method:    ztjni_socket
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1socket
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_connect
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1connect
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_bind
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1bind
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_accept4
 * Signature: (ILjava/lang/String;I)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1accept4
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_accept
 * Signature: (ILAddress;)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1accept
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     ZeroTier
 * Method:    ztjni_listen
 * Signature: (II)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1listen
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_close
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1close
  (JNIEnv *, jobject, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_read
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1read
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_write
 * Signature: (I[BI)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1write
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_sendto
 * Signature: (I[BIILAddress;)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1sendto
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint, jobject);

/*
 * Class:     ZeroTier
 * Method:    ztjni_send
 * Signature: (I[BII)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1send
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint);

/*
 * Class:     ZeroTier
 * Method:    ztjni_recvfrom
 * Signature: (I[BIILAddress;)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1recvfrom
  (JNIEnv *, jobject, jint, jbyteArray, jint, jint, jobject);

/*
 * Class:     ZeroTier
 * Method:    ztjni_fcntl
 * Signature: (III)I
 */
JNIEXPORT jint JNICALL Java_ZeroTier_ztjni_1fcntl
  (JNIEnv *, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif
