// Function : hb_font_paint_glyph_default
// Namespace: 
// Entry    : 00413010
// Prototype: undefined hb_font_paint_glyph_default(long param_1, undefined8 param_2, undefined4 param_3, long param_4, undefined8 param_5, undefined4 param_6, undefined4 param_7)
// Body     : 00413010 - 00413132


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_font_paint_glyph_default(hb_font_t*, void*, unsigned int, hb_paint_funcs_t*, void*, unsigned
   int, unsigned int, void*) */

void __cdecl
hb_font_paint_glyph_default
          (long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5,
          undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  float fVar8;
  undefined1 auVar10 [16];
  undefined1 auVar9 [16];
  float fVar11;
  undefined4 in_XMM4_Db;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (*(int *)(lVar2 + 0x28) == 0) {
    fVar8 = 0.0;
    iVar1 = *(int *)(lVar2 + 0x2c);
  }
  else {
    fVar8 = (float)*(int *)(param_1 + 0x28) / (float)*(int *)(lVar2 + 0x28);
    iVar1 = *(int *)(lVar2 + 0x2c);
  }
  if (iVar1 == 0) {
    pcVar3 = *(code **)(param_4 + 0x10);
    puVar4 = *(undefined8 **)(param_4 + 0x80);
  }
  else {
    fVar11 = (float)iVar1;
    auVar9._0_4_ = (float)*(int *)(param_1 + 0x28) *
                   (*(float *)(param_1 + 0x44) - *(float *)(lVar2 + 0x44));
    auVar10._4_8_ = 0;
    auVar10._0_4_ = auVar9._0_4_;
    auVar10._12_4_ = in_XMM4_Db;
    auVar9._8_8_ = auVar10._8_8_;
    auVar9._4_4_ = (float)*(int *)(param_1 + 0x2c);
    auVar6._4_4_ = fVar11;
    auVar6._0_4_ = fVar11;
    auVar6._8_4_ = fVar11;
    auVar6._12_4_ = fVar11;
    divps(auVar9,auVar6);
    pcVar3 = *(code **)(param_4 + 0x10);
    puVar4 = *(undefined8 **)(param_4 + 0x80);
  }
  if (puVar4 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *puVar4;
  }
  (*pcVar3)(fVar8,param_4,param_5,uVar7);
  lVar2 = *(long *)(param_1 + 0x18);
  lVar5 = *(long *)(*(long *)(lVar2 + 0x90) + 0x10);
  if (lVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x90);
  }
  (**(code **)(*(long *)(lVar2 + 0x90) + 0xb0))
            (lVar2,*(undefined8 *)(lVar2 + 0x98),param_3,param_4,param_5,param_6,param_7,uVar7);
  if (*(long *)(param_4 + 0x80) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *(undefined8 *)(*(long *)(param_4 + 0x80) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00413131. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))(param_4,param_5,uVar7);
  return;
}


