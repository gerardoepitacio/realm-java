/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_TableViewBase */

#ifndef _Included_com_tightdb_TableViewBase
#define _Included_com_tightdb_TableViewBase
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSize
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeSize
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetLong
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeGetLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetBoolean
 * Signature: (JJJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_TableViewBase_nativeGetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetDateTimeValue
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeGetDateTimeValue
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetString
 * Signature: (JJJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_TableViewBase_nativeGetString
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetBinary
 * Signature: (JJJ)Ljava/nio/ByteBuffer;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableViewBase_nativeGetBinary
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetByteArray
 * Signature: (JJJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_tightdb_TableViewBase_nativeGetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetMixedType
 * Signature: (JJJ)I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_TableViewBase_nativeGetMixedType
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetMixed
 * Signature: (JJJ)Lcom/tightdb/Mixed;
 */
JNIEXPORT jobject JNICALL Java_com_tightdb_TableViewBase_nativeGetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetSubTable
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeGetSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetSubTableSize
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeGetSubTableSize
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeClearSubTable
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeClearSubTable
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetLong
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetLong
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetBoolean
 * Signature: (JJJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetBoolean
  (JNIEnv *, jobject, jlong, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetDateTimeValue
 * Signature: (JJJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetDateTimeValue
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetString
 * Signature: (JJJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetString
  (JNIEnv *, jobject, jlong, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetBinary
 * Signature: (JJJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetBinary
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetByteArray
 * Signature: (JJJ[B)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetByteArray
  (JNIEnv *, jobject, jlong, jlong, jlong, jbyteArray);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSetMixed
 * Signature: (JJJLcom/tightdb/Mixed;)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSetMixed
  (JNIEnv *, jobject, jlong, jlong, jlong, jobject);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeAddInt
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeAddInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeClear
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeClear
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeRemoveRow
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeRemoveRow
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindFirstInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindFirstInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindFirstBoolean
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindFirstBoolean
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindFirstDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindFirstDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindFirstString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindFirstString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindAllInt
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindAllInt
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindAllBool
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindAllBool
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindAllDate
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindAllDate
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeFindAllString
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeFindAllString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeSum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeMaximum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeMaximum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeMinimum
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeMinimum
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeSort
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeSort
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeGetSortedView
 * Signature: (JJZ)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_nativeGetSortedView
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    createNativeTableView
 * Signature: (Lcom/tightdb/TableBase;J)J
 */
JNIEXPORT jlong JNICALL Java_com_tightdb_TableViewBase_createNativeTableView
  (JNIEnv *, jobject, jobject, jlong);

/*
 * Class:     com_tightdb_TableViewBase
 * Method:    nativeClose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_tightdb_TableViewBase_nativeClose
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
