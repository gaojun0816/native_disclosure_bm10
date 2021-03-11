//
// Created by Jun GAO on 3/11/21.
//

#include <jni.h>

#ifndef NDK_CALLEE_STRUCDEF_H
#define NDK_CALLEE_STRUCDEF_H

#endif //NDK_CALLEE_STRUCDEF_H


typedef struct {
    jclass theCls;
    jobject theObj;
    jmethodID theMID;
} InfoStruct;
