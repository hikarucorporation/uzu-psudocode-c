// Function : addTransform
// Namespace: juce:RenderingHelpers:StackBasedLowLevelGraphicsContext_juce__RenderingHelpers__SoftwareRendererSavedState_
// Entry    : 00330110
// Prototype: undefined addTransform(long param_1, undefined8 * param_2, undefined8 param_3, undefined4 param_4)
// Body     : 00330110 - 003302e9


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::RenderingHelpers::StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::addTransform(juce::AffineTransform
   const&) */

void __cdecl
juce::RenderingHelpers::
StackBasedLowLevelGraphicsContext<juce::RenderingHelpers::SoftwareRendererSavedState>::addTransform
          (long param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  float fVar1;
  long lVar2;
  undefined1 auVar3 [16];
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(char *)(lVar2 + 0x28) == '\0') {
    fVar12 = *(float *)(lVar2 + 8);
    fVar1 = *(float *)(lVar2 + 0xc);
    fVar10 = fVar12 * *(float *)(param_2 + 1) + fVar1 * *(float *)((long)param_2 + 0x14) +
             *(float *)(lVar2 + 0x10);
    fVar7 = *(float *)(lVar2 + 0x14);
    fVar9 = *(float *)(lVar2 + 0x18);
    fVar16 = (float)*(undefined8 *)((long)param_2 + 0xc);
    fVar17 = (float)((ulong)*(undefined8 *)((long)param_2 + 0xc) >> 0x20);
    fVar14 = (float)*param_2;
    fVar15 = (float)((ulong)*param_2 >> 0x20);
    uVar6 = CONCAT44(fVar12 * fVar15 + fVar1 * fVar17,fVar12 * fVar14 + fVar1 * fVar16);
    uVar8 = CONCAT44(fVar7 * fVar15 + fVar9 * fVar17,fVar7 * fVar14 + fVar9 * fVar16);
    fVar12 = fVar7 * *(float *)(param_2 + 1) + *(float *)((long)param_2 + 0x14) * fVar9;
    pfVar5 = (float *)(lVar2 + 0x1c);
  }
  else {
    uVar6 = *param_2;
    uVar8 = *(undefined8 *)((long)param_2 + 0xc);
    auVar3._4_4_ = -(uint)((float)uVar8 != _UNK_00653f24);
    auVar3._0_4_ = -(uint)((float)((ulong)uVar6 >> 0x20) != _DAT_00653f20);
    auVar3._8_4_ = -(uint)((float)uVar6 != _UNK_00653f28);
    auVar3._12_4_ = -(uint)((float)((ulong)uVar8 >> 0x20) != _UNK_00653f2c);
    iVar4 = movmskps(param_4,auVar3);
    if (iVar4 == 0) {
      uVar11 = (uint)(*(float *)((long)param_2 + 0x14) * _DAT_005dd2d0);
      uVar13 = (uint)(*(float *)(param_2 + 1) * _UNK_005dd2d4);
      if (((uVar11 | uVar13) & 0xf8) == 0) {
        *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + ((int)uVar13 >> 8);
        *(int *)(lVar2 + 0x24) = *(int *)(lVar2 + 0x24) + ((int)uVar11 >> 8);
        return;
      }
    }
    fVar12 = (float)(int)((ulong)*(undefined8 *)(lVar2 + 0x20) >> 0x20);
    fVar10 = *(float *)(param_2 + 1) + (float)(int)*(undefined8 *)(lVar2 + 0x20);
    pfVar5 = (float *)((long)param_2 + 0x14);
  }
  fVar1 = *pfVar5;
  *(float *)(lVar2 + 8) = (float)uVar6;
  fVar7 = (float)((ulong)uVar6 >> 0x20);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  *(float *)(lVar2 + 0xc) = fVar7;
  *(float *)(lVar2 + 0x10) = fVar10;
  fVar10 = (float)uVar8;
  *(float *)(lVar2 + 0x14) = fVar10;
  *(float *)(lVar2 + 0x18) = fVar9;
  *(float *)(lVar2 + 0x1c) = fVar12 + fVar1;
  fVar12 = (float)((uint)fVar7 & _DAT_005d91c0);
  *(undefined1 *)(lVar2 + 0x28) = 0;
  if (fVar12 == DAT_005d94c8) {
    if ((fVar7 != 0.0) || (NAN(fVar7))) {
      *(undefined1 *)(lVar2 + 0x29) = 1;
      return;
    }
  }
  else if ((DAT_005d94cc < fVar12) && (DAT_005d94d0 * fVar12 < fVar12)) goto LAB_00330266;
  fVar12 = (float)(_DAT_005d91c0 & (uint)fVar10);
  if (fVar12 == DAT_005d94c8) {
    if (fVar10 != 0.0) goto LAB_00330266;
  }
  else if (DAT_005d94cc < fVar12 && DAT_005d94d0 * fVar12 < fVar12) goto LAB_00330266;
  if (0.0 <= (float)uVar6) {
    *(bool *)(lVar2 + 0x29) = fVar9 < 0.0;
    return;
  }
LAB_00330266:
  *(undefined1 *)(lVar2 + 0x29) = 1;
  return;
}


