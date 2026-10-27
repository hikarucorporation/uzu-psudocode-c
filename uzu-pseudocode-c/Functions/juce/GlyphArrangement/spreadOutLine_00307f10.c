// Function : spreadOutLine
// Namespace: juce:GlyphArrangement
// Entry    : 00307f10
// Prototype: undefined spreadOutLine(float param_1, long param_2_00, int param_3, int param_4, uint param_5)
// Body     : 00307f10 - 0030807e


/* WARNING: Removing unreachable block (ram,0x00307f5c) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::GlyphArrangement::spreadOutLine(int, int, float) */

void __cdecl
juce::GlyphArrangement::spreadOutLine
          (float param_1,long param_2_00,int param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  
  fVar5 = DAT_00652e14;
  iVar13 = param_5 + param_4;
  if (param_3 <= iVar13) {
    return;
  }
  iVar9 = *(int *)((long)iVar13 * 0x20 + -0x18 + param_2_00);
  if (iVar9 == 10) {
    return;
  }
  if (iVar9 == 0xd) {
    return;
  }
  lVar12 = (long)param_4;
  if ((int)param_5 < 1) {
    iVar9 = 0;
    iVar11 = 0;
  }
  else {
    if (param_5 == 1) {
      uVar7 = 0;
      iVar11 = 0;
      iVar6 = 1;
    }
    else {
      pbVar10 = (byte *)(lVar12 * 0x20 + param_2_00 + 0x3c);
      uVar7 = 0;
      iVar11 = 0;
      iVar9 = 0;
      do {
        iVar9 = iVar9 + 2;
        if (pbVar10[-0x20] == 0) {
          iVar9 = 1;
        }
        if (*pbVar10 == 0) {
          iVar9 = 0;
        }
        iVar11 = iVar11 + (uint)pbVar10[-0x20] + (uint)*pbVar10;
        uVar7 = uVar7 + 2;
        pbVar10 = pbVar10 + 0x40;
      } while ((param_5 & 0xfffffffe) != uVar7);
      iVar6 = iVar9 + 1;
      if ((param_5 & 1) == 0) goto LAB_00307fd4;
    }
    iVar9 = iVar6;
    bVar4 = *(byte *)(param_2_00 + 0x1c + (uVar7 + lVar12) * 0x20);
    if (bVar4 == 0) {
      iVar9 = 0;
    }
    iVar11 = iVar11 + (uint)bVar4;
  }
LAB_00307fd4:
  if ((iVar11 - iVar9 != 0 && iVar9 <= iVar11) && (0 < (int)param_5)) {
    lVar8 = (long)((iVar13 + -1) - iVar9) * 0x20;
    fVar1 = *(float *)(param_2_00 + 0x10 + lVar8);
    fVar2 = *(float *)(param_2_00 + 0x18 + lVar8);
    fVar3 = *(float *)(param_2_00 + 0x10 + lVar12 * 0x20);
    lVar12 = param_2_00 + lVar12 * 0x20;
    lVar8 = 0;
    fVar14 = 0.0;
    do {
      *(float *)(lVar12 + 0x10 + lVar8) = *(float *)(lVar12 + 0x10 + lVar8) + fVar14;
      *(float *)(lVar12 + 0x14 + lVar8) = *(float *)(lVar12 + 0x14 + lVar8) + 0.0;
      fVar15 = fVar5;
      if (*(char *)(lVar12 + 0x1c + lVar8) != '\0') {
        fVar15 = (param_1 - ((fVar1 + fVar2) - fVar3)) / (float)(iVar11 - iVar9);
      }
      fVar14 = fVar14 + fVar15;
      lVar8 = lVar8 + 0x20;
    } while ((ulong)param_5 * 0x20 != lVar8);
  }
  return;
}


