// Function : addArrow
// Namespace: juce:Path
// Entry    : 002f32c0
// Prototype: undefined addArrow(Path * param_1)
// Body     : 002f32c0 - 002f35da


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Path::addArrow(juce::Line<float>, float, float, float) */

void __cdecl juce::Path::addArrow(Path *param_1)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar13;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float local_28;
  float fStack_24;
  
  fVar4 = hypotf(0.0,DAT_005d94c4);
  dVar6 = hypot(0.0,DAT_005de6d8);
  fVar5 = _DAT_005dd2e0;
  fVar13 = _UNK_005dd2e4;
  if (0.0 < dVar6) {
    auVar14._8_8_ = dVar6;
    auVar14._0_8_ = dVar6;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = DAT_005de6e0;
    auVar7 = divpd(auVar7,auVar14);
    fVar5 = (float)auVar7._0_8_ + _DAT_005dd2e0;
    fVar13 = (float)auVar7._8_8_ + _UNK_005dd2e4;
  }
  fVar4 = fVar4 * DAT_005de3cc;
  startNewSubPath(fVar5,fVar13,param_1);
  auVar8._0_8_ = hypot(0.0,DAT_005de6d8);
  fVar5 = _DAT_005dd2e0;
  fVar13 = _UNK_005dd2e4;
  if (0.0 < auVar8._0_8_) {
    auVar8._8_8_ = auVar8._0_8_;
    auVar7 = divpd(_DAT_005dd2f0,auVar8);
    fVar5 = (float)auVar7._0_8_ + _DAT_005dd2e0;
    fVar13 = (float)auVar7._8_8_ + _UNK_005dd2e4;
  }
  if (DAT_005d94c0 <= fVar4) {
    fVar4 = DAT_005d94c0;
  }
  lineTo(fVar5,fVar13,param_1);
  auVar9._0_8_ = hypot(0.0,DAT_005d90a0);
  fVar13 = 0.0;
  local_28 = DAT_005d94c0;
  fStack_24 = 0.0;
  fVar5 = DAT_005d94c0;
  if (0.0 < auVar9._0_8_) {
    auVar15._0_8_ = (double)(DAT_005de548 + fVar4 * (float)DAT_005dd020);
    auVar15._8_8_ = (double)(fVar4 * DAT_005dd020._4_4_ + 0.0);
    auVar9._8_8_ = auVar9._0_8_;
    auVar7 = divpd(auVar15,auVar9);
    fVar5 = DAT_005d94c0 + (float)auVar7._0_8_;
    fVar13 = (float)auVar7._8_8_ + 0.0;
  }
  lineTo(fVar5,fVar13,param_1);
  auVar10._0_8_ = hypot(0.0,DAT_005d90a0);
  fVar13 = 0.0;
  fVar5 = DAT_005d94c0;
  if (0.0 < auVar10._0_8_) {
    auVar16._0_8_ = (double)(DAT_005de54c + fVar4 * (float)DAT_005dd020);
    auVar16._8_8_ = (double)(fVar4 * DAT_005dd020._4_4_ + 0.0);
    auVar10._8_8_ = auVar10._0_8_;
    auVar7 = divpd(auVar16,auVar10);
    fVar5 = DAT_005d94c0 + (float)auVar7._0_8_;
    fVar13 = (float)auVar7._8_8_ + 0.0;
  }
  lineTo(fVar5,fVar13,param_1);
  lineTo(DAT_005d94c0,0.0,param_1);
  auVar11._0_8_ = hypot(0.0,DAT_005d90a0);
  fVar13 = 0.0;
  fVar5 = DAT_005d94c0;
  if (0.0 < auVar11._0_8_) {
    auVar17._0_8_ = (double)(fVar4 * (float)DAT_005dd020 + _DAT_005dd300);
    auVar17._8_8_ = (double)(fVar4 * DAT_005dd020._4_4_ + _UNK_005dd304);
    auVar11._8_8_ = auVar11._0_8_;
    auVar7 = divpd(auVar17,auVar11);
    fVar5 = DAT_005d94c0 + (float)auVar7._0_8_;
    fVar13 = (float)auVar7._8_8_ + 0.0;
  }
  lineTo(fVar5,fVar13,param_1);
  auVar12._0_8_ = hypot(0.0,DAT_005d90a0);
  if (0.0 < auVar12._0_8_) {
    auVar18._0_8_ = (double)(fVar4 * (float)DAT_005dd020 + _DAT_005dd310);
    auVar18._8_8_ = (double)(fVar4 * DAT_005dd020._4_4_ + _UNK_005dd314);
    auVar12._8_8_ = auVar12._0_8_;
    auVar7 = divpd(auVar18,auVar12);
    local_28 = DAT_005d94c0 + (float)auVar7._0_8_;
    fStack_24 = (float)auVar7._8_8_ + 0.0;
  }
  lineTo(local_28,fStack_24,param_1);
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) &&
     (((iVar1 < 1 ||
       (fVar4 = *(float *)(*(long *)param_1 + (ulong)(iVar1 - 1) * 4), fVar4 != DAT_005de41c)) ||
      (NAN(fVar4) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(param_1 + 8) <= iVar1) {
      uVar3 = iVar1 + ((iVar1 - (iVar1 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_1 + 8) != uVar3) {
        if ((int)uVar3 < 1) {
          free(*(void **)param_1);
          *(undefined8 *)param_1 = 0;
        }
        else {
          pvVar2 = realloc(*(void **)param_1,(ulong)uVar3 << 2);
          *(void **)param_1 = pvVar2;
        }
      }
      *(uint *)(param_1 + 8) = uVar3;
      iVar1 = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0xc) = iVar1 + 1;
    *(undefined4 *)(*(long *)param_1 + (long)iVar1 * 4) = 0x47c35280;
    return;
  }
  return;
}


