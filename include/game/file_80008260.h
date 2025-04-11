#pragma once
#include "dolphin.h"

#include "game/file_80008000.h"
#include "game/global.h"

typedef void (*baseFunc)(void);

void fn_80009F60(unkStruct_008188*);
void fn_80009F70(unkStruct_008188*, s32);
s32 fn_80009FBC(unkStruct_008188*, const char*);
s32 fn_8000A064(unkStruct_008188*);
void fn_8000A020(unkStruct_008188*);
void fn_8000A0E0(unkStruct_008188*, u32, s32, s32);
void fn_8000A1E0(unkStruct_008188*, s32);
