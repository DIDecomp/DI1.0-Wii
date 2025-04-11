#pragma once
#include "dolphin.h"

#include "game/file_80008260.h"
#include "game/global.h"

extern void fn_80089FE0(s32, s32);
extern unkStruct_008000* fn_8008AEA0(s32, s32, s32);
extern void fn_8008AEDC(void*);
extern void fn_8008AEEC(unkStruct_008000*);
extern void fn_8008AEFC(unkStruct_008000*, s32, s32);

extern void fn_803B3B30(unkStruct_008000*);
extern void fn_803B4110(void*);

extern unkStruct_008000* lbl_804BC770;

// true header
void fn_80008188();
