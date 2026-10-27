// Function : fold_perform
// Namespace: 
// Entry    : 00572650
// Prototype: long fold_perform(long param_1)
// Body     : 00572650 - 005727ba


long fold_perform(long param_1)

{
  float fVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar3 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar3 + 0x40);
  if (0 < (int)uVar2) {
    uVar4 = *(ulong *)(lVar3 + 0x48);
    iVar13 = (int)uVar4;
    if (0 < iVar13) {
      lVar14 = *(long *)(param_1 + 0x10);
      lVar5 = *(long *)(param_1 + 0x18);
      lVar6 = *(long *)(param_1 + 0x20);
      lVar9 = *(long *)(param_1 + 0x28);
      lVar7 = *(long *)(lVar3 + 0x50);
      lVar8 = *(long *)(lVar3 + 0x58);
      lVar3 = (long)iVar13 * 4;
      lVar11 = 0;
      uVar15 = 0;
      do {
        uVar10 = 0;
        do {
          uVar12 = lVar11 + uVar10;
          if (lVar7 == 1) {
            uVar12 = uVar10;
          }
          fVar1 = *(float *)(lVar5 + uVar12 * 4);
          uVar12 = lVar11 + uVar10;
          if (lVar8 == 1) {
            uVar12 = uVar10;
          }
          fVar18 = *(float *)(lVar6 + uVar12 * 4);
          fVar19 = fVar18;
          if (fVar1 <= fVar18) {
            fVar19 = fVar1;
            fVar1 = fVar18;
          }
          if (fVar19 != fVar1) {
            fVar18 = *(float *)(lVar14 + uVar10 * 4);
            if ((fVar1 < fVar18) || (fVar18 < fVar19)) {
              fVar16 = fVar1 - fVar19;
              if (fVar19 <= fVar18) {
                fVar18 = fVar18 - fVar1;
                fVar17 = (float)(int)(fVar18 / fVar16);
                if (((int)(fVar18 / fVar16) & 1U) != 0) {
                  fVar18 = (fVar18 + fVar19) - fVar16 * fVar17;
                  goto LAB_005726d6;
                }
              }
              else {
                fVar18 = fVar19 - fVar18;
                fVar17 = (float)(int)(fVar18 / fVar16);
                if (((int)(fVar18 / fVar16) & 1U) == 0) {
                  fVar19 = (fVar18 + fVar19) - fVar16 * fVar17;
                  goto LAB_005726d9;
                }
              }
              fVar19 = (fVar1 - fVar18) + fVar16 * fVar17;
            }
            else {
LAB_005726d6:
              fVar19 = fVar18;
            }
          }
LAB_005726d9:
          *(float *)(lVar9 + uVar10 * 4) = fVar19;
          uVar10 = uVar10 + 1;
        } while ((uVar4 & 0xffffffff) != uVar10);
        uVar15 = uVar15 + 1;
        lVar14 = lVar14 + lVar3;
        lVar11 = lVar11 + iVar13;
        lVar9 = lVar9 + lVar3;
      } while (uVar15 != uVar2);
    }
  }
  return param_1 + 0x30;
}


