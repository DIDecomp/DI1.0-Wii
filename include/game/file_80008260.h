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

typedef void (*baseFunc)(void);

void fn_80009F60(unkStruct_008188*);
void fn_80009F70(unkStruct_008188*, s32);
s32 fn_80009FBC(unkStruct_008188*, const char*);
s32 fn_8000A064(unkStruct_008188*);
void fn_8000A020(unkStruct_008188*);
void fn_8000A0E0(unkStruct_008188*, u32, s32, s32);
void fn_8000A1E0(unkStruct_008188*, s32);
