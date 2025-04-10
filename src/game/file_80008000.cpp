#include "game/file_80008000.h"

typedef struct {
    u8 unk0[4];
    char unk4[0x1C];
    s32 unk20;
    char unk24[0x10];
    void (*unk34)();
    char unk38[0xC];
    s32 unk44;
    s32 unk48;
} unkStruct_008000;

typedef struct {
    char unk[0x48];
} unkStruct_008188;

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
} unkStruct_0084A4;

unkStruct_0084A4 lbl_80483010;
s32 lbl_804BC780;
s32 lbl_804BC7F8;
// type unknown
s32 lbl_80502268[198];

// prototypes
unkStruct_008000* fn_80008000(const char*);
void fn_80008188();
void fn_80008260();
void fn_800082C0();
s32 fn_80008358();
void fn_80008450();
void fn_8000849C();
void fn_800084A4(s32, s32);
void fn_800087A4();
void fn_80008FD0();
void fn_80008FDC();
void fn_80008FE8();
void fn_80009070();
void fn_80009F60(unkStruct_008188*);
void fn_80009F70(unkStruct_008188*, s32);
s32 fn_80009FBC(unkStruct_008188*, const char*);
void fn_8000A020(unkStruct_008188*);
s32 fn_8000A064(unkStruct_008188*);
void fn_8000A0E0(unkStruct_008188*, unkStruct_008000*, s32, s32);

// external
class unkClass {
    public:
        virtual ~unkClass() {}
        virtual void unkC();
        virtual void unk10();
        virtual void unk14();
};
extern unkClass* lbl_804BC764;
extern u8 lbl_804BC77B;

extern s32 fn_80042624();
extern void fn_80042734(s32);
extern void fn_80044EF4();
extern void fn_800451FC();
extern void fn_800645E0();
extern void fn_800646A8(s32, s32(*)(), u32, u32);
extern void fn_8008ACA4();
extern void fn_8008ACE8(s32);
extern s32 fn_8008AE00(s32);
extern unkStruct_008000* fn_8008AEA0(s32, s32, s32);
extern s32 fn_8008AEBC(s32, s32, s32, s32);
extern void fn_8008AEEC(unkStruct_008000*);
extern void fn_803B3B30(unkStruct_008000*);
extern void fn_803B7620(s32*, void*, s32, s32, s32, s32, s32);
extern void fn_803B7D50(s32*);
extern void fn_803B94D0(void*);
extern void fn_803B95C0(void*);
extern void fn_8042DBD0(u32, f32, f32);
extern void fn_8042DC60(u32, f32, f32);
extern void fn_8042DC80(u32, f32, f32);
extern void fn_8042DCA0(u32, f32, f32);
extern void fn_8042DCC0(u32, f32, f32);
extern void fn_804318D0();
extern void fn_8043D6F0();
extern void fn_80444180();
extern void fn_80445820();
extern void fn_8044A830(void*, void*);
extern void fn_80461268(OSTime, s32, s32);
extern void fn_80461724();


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
            fn_8000A0E0(&sp8, var_r30, temp_r31, 0);
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

void fn_80008260(void) {
    OSTime start;
    OSTime elapsed;

    start = OSGetTime();
    fn_80008188();
    elapsed = OSGetTime() - start;
    fn_80461268(elapsed, 0, OSMillisecondsToTicks(1));
    fn_80461724();
}

s32 fn_80008358() {
    unkClass* temp = lbl_804BC764;
    temp->unkC();
    
    while ((s32) lbl_804BC77B == 0) {
        fn_8008ACE8(8);
        temp->unk14();
    }
    fn_80445820();
    fn_800082C0();
    temp->unk10();
    return 0;
}

void main(s32 arg0, s32 arg1) {
    fn_8008ACA4();
    fn_800084A4(arg0, arg1);
    fn_80008FE8();
    fn_80008260();
    fn_80009070();
    fn_800646A8(-1, &fn_80008358, 0x10000, 0x10000);
}

void fn_800084A4(s32 arg0, s32 arg1) {
    s32 var_r31;
    u32 var_r30;

    OSInitFastCast();
    fn_80444180();
    fn_8044A830(&fn_80008450, &fn_8000849C);
    fn_804318D0();
    for (var_r30 = 0; var_r30 <= 3; var_r30++) {
        fn_8042DC60(var_r30, lbl_80483010.unk0, lbl_80483010.unk4);
        fn_8042DC80(var_r30, lbl_80483010.unk8, lbl_80483010.unk4);
        fn_8042DCA0(var_r30, lbl_80483010.unk8, lbl_80483010.unk4);
        fn_8042DCC0(var_r30, lbl_80483010.unk8, lbl_80483010.unk4);
        fn_8042DBD0(var_r30, lbl_80483010.unkC, lbl_80483010.unk10);
    }
    fn_8043D6F0();
    var_r31 = fn_8008AE00(0x578);
    if (var_r31 != 0) {
        var_r31 = fn_80042624();
    }
    fn_80042734(var_r31);
    lbl_804BC7F8 = var_r31;
    fn_80044EF4();
    var_r31 = fn_8008AEBC(0x6000, 0x80, 0x20, 0x80);
    lbl_804BC780 = var_r31;
    fn_803B7620(lbl_80502268, &fn_800087A4, 0, var_r31 + 0x6000, 0x6000, 1, 1);
    fn_803B7D50(lbl_80502268);
    fn_803B95C0(&fn_80008FD0);
    fn_803B94D0(&fn_80008FDC);
    fn_800645E0();
    fn_800451FC();
}
