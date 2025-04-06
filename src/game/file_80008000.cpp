#include "game/file_80008000.h"

typedef struct {
    u8 unk0[4];
    char unk4[0x1C];
    s32 unk20;
    char unk24[0x20];
    s32 unk44;
    s32 unk48;
} unkStruct_008000;

void main(s32 arg0, s32 arg1) {
    fn_8008ACA4();
    fn_800084A4(arg0, arg1);
    fn_80008FE8();
    fn_80008260();
    fn_80009070();
    fn_800646A8(-1, &fn_80008358, 0x10000, 0x10000);
}
