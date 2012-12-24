/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_tmx_TMXTileMap */

#ifndef _Included_com_wiyun_engine_tmx_TMXTileMap
#define _Included_com_wiyun_engine_tmx_TMXTileMap
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_tmx_TMXTileMap_ORIENTATION_ORTHOGONAL
#define com_wiyun_engine_tmx_TMXTileMap_ORIENTATION_ORTHOGONAL 1L
#undef com_wiyun_engine_tmx_TMXTileMap_ORIENTATION_ISOMETRIC
#define com_wiyun_engine_tmx_TMXTileMap_ORIENTATION_ISOMETRIC 2L
#undef com_wiyun_engine_tmx_TMXTileMap_ORIENTATION_HEXAGONAL
#define com_wiyun_engine_tmx_TMXTileMap_ORIENTATION_HEXAGONAL 3L
/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeInit
 * Signature: (I[Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeInit__I_3Lcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jobject, jint, jobjectArray);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeInit
 * Signature: (Ljava/lang/String;Z[Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeInit__Ljava_lang_String_2Z_3Lcom_wiyun_engine_opengl_Texture2D_2
  (JNIEnv *, jobject, jstring, jboolean, jobjectArray);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeGetTMXLayer
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeGetTMXLayer
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeGetTMXLayerAt
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeGetTMXLayerAt
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeGetObjectGroup
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeGetObjectGroup
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getProperty
 * Signature: (Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getProperty
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getTileProperties
 * Signature: (ILjava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getTileProperties
  (JNIEnv *, jobject, jint, jstring);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getMapWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getMapWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getMapHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getMapHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getTileWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getTileWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getTileHeight
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getTileHeight
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getOrientation
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getOrientation
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    setDebugDrawObjects
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_setDebugDrawObjects
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeNodeToTMXSpace
 * Signature: (Lcom/wiyun/engine/types/WYPoint;Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeNodeToTMXSpace
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeTMXToNodeSpace
 * Signature: (Lcom/wiyun/engine/types/WYPoint;Lcom/wiyun/engine/types/WYPoint;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeTMXToNodeSpace
  (JNIEnv *, jobject, jobject, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_tmx_TMXTileMap
 * Method:    nativeSetColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_tmx_TMXTileMap_nativeSetColor
  (JNIEnv *, jobject, jint, jint, jint);

#ifdef __cplusplus
}
#endif
#endif