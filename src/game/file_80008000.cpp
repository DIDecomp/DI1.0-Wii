#include "game/file_80008000.h"

unkStruct_008000* fn_80008000(const char* arg0) {
    unkStruct_008188 sp8;
    u32 temp_r0;
    u32 temp_r3;
    s32 var_r4;
    s32 temp_r5;
    unkStruct_008000* var_r30;
    s32 temp_r29;
    unkStruct_008000* temp_r31;
    u32 var_r28;

    fn_80009F60(&sp8);
    fn_80009FBC(&sp8, arg0);
    var_r30 = fn_8008AEA0(0x60, 0x80, 0x20);
    fn_8000A0E0(&sp8, (u32)var_r30, 0x60, 0);
    temp_r29 = (fn_8000A064(&sp8) + 0x1F) & ~31;
    var_r28 = temp_r29;
    temp_r5 = (u32)var_r30 + temp_r29;
    if ((((u32)var_r30 + var_r30->unk48) % var_r30->unk44) != 0) {
        temp_r0 = var_r30->unk20;
        temp_r3 = ((u32)var_r30 + var_r30->unk48) & ~(var_r30->unk44 - 1);
        temp_r3 += var_r30->unk44;
        if (temp_r0 + temp_r3 > temp_r5) {
            var_r28 = temp_r29 + (temp_r0 - temp_r5);
        }
    }
    fn_80089FE0(0x80, 0x20);
    fn_8008AEDC(var_r30);
    fn_8000A1E0(&sp8, 0);
    temp_r31 = fn_8008AEA0(var_r28, 0x80, 0x20);
    var_r30 = (unkStruct_008000*)(((char*)temp_r31) + var_r28);
    fn_8000A0E0(&sp8, temp_r29, (u32)temp_r31, 0);
    fn_8000A020(&sp8);
    var_r4 = (u32)temp_r31 + temp_r31->unk48;
    if ((((u32)temp_r31 + temp_r31->unk48) % temp_r31->unk44) != 0) {
        var_r4 = (u32)temp_r31->unk44 + (var_r4 & ~(temp_r31->unk44 - 1));
    }
    var_r28 = var_r4 + ((temp_r31->unk20 + 0x1F) & ~31);
    fn_803B4110(temp_r31);
    if (var_r28 < (u32)var_r30) {
        fn_8008AEFC(temp_r31, var_r28 - (u32)temp_r31, 0);
    }
    fn_80089FE0(0x80, 0x20);
    lbl_804BC770 = temp_r31;
    fn_80009F70(&sp8, -1);
    return temp_r31;
}

void fn_80008188(void) {
    unkStruct_008188 sp8;
    s32 temp_r31;
    unkStruct_008000* var_r30;

    var_r30 = 0;
    fn_80009F60(&sp8);
    if (fn_80009FBC(&sp8, "Game-M2.consumer.wii.str") != 0) {
        temp_r31 = (fn_8000A064(&sp8) + 0x1F) & 0xFFFFFFE0;
        if (temp_r31 > 0) {
            var_r30 = fn_8008AEA0(temp_r31, 0x80, 0x20);
            fn_8000A0E0(&sp8, (u32)var_r30, temp_r31, 0);
            fn_8000A020(&sp8);
            fn_803B3B30(var_r30);
        }
    } else {
        OSReport("Unable to load .rel symbols file\n");
    }
    fn_80008000("GameRel.consumer.wii.rel")->unk34();
    fn_8008AEEC(var_r30);
    fn_80009F70(&sp8, -1);
}
