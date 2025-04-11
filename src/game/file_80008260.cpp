#include "game/file_80008260.h"

typedef struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    f32 unk10;
} unkStruct_0084A4;

typedef struct {
    s32 unk0;
    s32 unk4;
} unkStruct_0082C0_sub;

typedef struct {
    s32 unk0;
    s32 unk4;
    const unkStruct_0082C0_sub* unk8;
} unkStruct_0082C0_sub2;

typedef struct {
    unkStruct_0082C0_sub2 unk0[3];
    s32 unk4;
} unkStruct_0082C0;

s32 lbl_804BC780;
s32 lbl_804BC7F8;
// type unknown
s32 lbl_80502268[198];

// prototypes
void fn_80008260();
void fn_800082C0();
s32 fn_80008358();
void fn_80008450();
void fn_8000849C(s32);
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
void fn_8000A0E0(unkStruct_008188*, u32, s32, s32);
void fn_8000A1E0(unkStruct_008188*, s32);
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

extern void Printf(const char*, ...);

extern s32 fn_80042624();
extern void fn_80042734(s32);
extern void fn_80044EF4();
extern void fn_800451FC();
extern void fn_800645E0();
extern void fn_800646A8(s32, s32(*)(), u32, u32);
extern void fn_8008ACA4();
extern s32 fn_8008ACAC(const char*, s32, const char*);
extern void fn_8008ACE8(s32);
extern s32 fn_8008AE00(s32);
extern unkStruct_008000* fn_8008AEA0(s32, s32, s32);
extern s32 fn_8008AEBC(s32, s32, s32, s32);
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
extern void fn_8044A830(void(*)(s32), void(*)(s32));
extern void fn_80461268(OSTime, s32, s32);
extern void fn_80461724();

void fn_80008260(void) {
    OSTime start;
    OSTime elapsed;

    start = OSGetTime();
    fn_80008188();
    elapsed = OSGetTime() - start;
    fn_80461268(elapsed, 0, OSMillisecondsToTicks(1));
    fn_80461724();
}

const unkStruct_0082C0_sub lbl_80486558[7] = {
    { 0x2E, 0xB480B480 },
    { 0x2D, 0xA22CA28E },
    { 0x2E, 0x839C832C },
    { 0x2E, 0x7048703A },
    { 0x2E, 0x54B854C6 },
    { 0x2D, 0x416441D4 },
    { 0x2E, 0x23D42372 }
};
const unkStruct_0082C0_sub lbl_80486590[7] = {
    { 0x2E, 0x23D42372 },
    { 0x2D, 0x10801080 },
    { 0x2E, 0x54B854C6 },
    { 0x2E, 0x10801080 },
    { 0x2E, 0x839C832C },
    { 0x2D, 0x10801080 },
    { 0x2E, 0xB480B480 },
};
const unkStruct_0082C0_sub lbl_804865C8[8] = {
    { 0x3A, 0x10AD1094 },
    { 0x39, 0xEB80EB80 },
    { 0x39, 0x109E105F },
    { 0x39, 0x10801080 },
    { 0x0F, 0x08800880 },
    { 0x0F, 0x10801080 },
    { 0x0F, 0x18801880 },
    { 0x2E, 0x10801080 }
};

const unkStruct_0082C0 lbl_80486608 = {
    {
        { 0x140, 7, lbl_80486558 },
        { 0x028, 7, lbl_80486590 },
        { 0x078, 8, lbl_804865C8 },
    },
    0
};

void fn_800082C0(s32* arg0) {
    u32 var_r5;
    s32 var_r6;
    s32 var_r0;
    const unkStruct_0082C0_sub* var_r8;
    const unkStruct_0082C0* var_r9;
    u32 var_r10;
    u32 var_r11;
    const unkStruct_0082C0_sub* temp_r12;
    u32 var_r31;
    
    var_r9 = &lbl_80486608;
    for (var_r10 = 0; var_r10 < 3; var_r10++) {
        var_r0 = var_r9->unk0[var_r10].unk0;
        var_r8 = var_r9->unk0[var_r10].unk8;
        var_r6 = var_r9->unk0[var_r10].unk4;
        
        for (var_r11 = 0; var_r11 < var_r0; var_r11++) {
            for (var_r5 = 0; var_r5 < var_r6; var_r5++) {
                temp_r12 = &var_r8[var_r5];
                for (var_r31 = 0; var_r31 < temp_r12->unk0; var_r31++) {
                    *arg0++ = temp_r12->unk4;
                }
            }
        }
    }
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

baseFunc lbl_804BD830[6] = {
    0
};

void fn_80008440(baseFunc** arg0) {
    baseFunc* temp = &lbl_804BD830[0];
    *arg0 = temp;
}

void fn_80008450(s32 arg0) {
    const char* var_r5 = "\n\n";
    s32 var_r4 = 0x81;
    if (arg0 != arg0) {
        Printf("State:   %04X");
        Printf("Suspend: %04X");
    }
    s32 temp = fn_8008ACAC("RuntimePermanent", var_r4, var_r5);
    fn_8008AEA0(arg0, temp, 0x20);
}

void fn_800084A4(s32 arg0, s32 arg1) {
    s32 var_r31;
    u32 var_r30;

    OSInitFastCast();
    fn_80444180();
    fn_8044A830(&fn_80008450, &fn_8000849C);
    fn_804318D0();
    for (var_r30 = 0; var_r30 <= 3; var_r30++) {
        fn_8042DC60(var_r30, 0.05f, 1.0f);
        fn_8042DC80(var_r30, 0.0f, 1.0f);
        fn_8042DCA0(var_r30, 0.0f, 1.0f);
        fn_8042DCC0(var_r30, 0.0f, 1.0f);
        fn_8042DBD0(var_r30, 0.75f, 0.25f);
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
