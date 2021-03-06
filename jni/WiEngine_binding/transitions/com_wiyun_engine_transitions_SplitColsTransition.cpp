#include "com_wiyun_engine_transitions_SplitColsTransition.h"
#include "wySplitColsTransition.h"

extern jfieldID g_fid_BaseObject_mPointer;

JNIEXPORT void JNICALL Java_com_wiyun_engine_transitions_SplitColsTransition_nativeInit
  (JNIEnv * env, jobject thiz, jfloat duration, jobject inScene, jint cols) {
	wyScene* in = inScene == NULL ? NULL : (wyScene*)env->GetIntField(inScene, g_fid_BaseObject_mPointer);
	wySplitColsTransition* trans = WYNEW wySplitColsTransition(duration, in, cols);
	env->SetIntField(thiz, g_fid_BaseObject_mPointer, (jint)trans);
	wyObjectLazyRelease(trans);
}
