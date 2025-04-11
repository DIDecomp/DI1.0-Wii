// better name in the future once i find the origin of the structs
#pragma once
#include "dolphin.h"

typedef struct {
    u8 unk0[4];
    char unk4[0x1C];
    s32 unk20;
    char unk24[0x10];
    void (*unk34)();
    char unk38[0xC];
    u32 unk44;
    s32 unk48;
} unkStruct_008000;

typedef struct {
    char unk[0x48];
} unkStruct_008188;
