// Function : sigvd_perform
// Namespace: 
// Entry    : 00591cc0
// Prototype: long sigvd_perform(long param_1)
// Body     : 00591cc0 - 00591e3f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigvd_perform(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  void *__s;
  int *piVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long lVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  fVar14 = _DAT_0065d624;
  dVar13 = DAT_0065ab18;
  fVar12 = DAT_00652610;
  fVar11 = DAT_005d9054;
  __s = *(void **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x18);
  iVar5 = *piVar7;
  iVar15 = (int)*(ulong *)(param_1 + 0x28);
  iVar17 = iVar5 - iVar15;
  if (iVar17 < 0) {
    if (iVar15 != 0) {
      memset(__s,0,(*(ulong *)(param_1 + 0x28) & 0xffffffff) << 2);
    }
  }
  else if (iVar15 != 0) {
    fVar23 = (float)iVar17;
    fVar20 = (float)(iVar15 + -1);
    lVar8 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(piVar7 + 2);
    iVar17 = piVar7[4];
    iVar6 = *(int *)(lVar9 + 0x3c);
    lVar18 = 0;
    do {
      fVar22 = *(float *)(lVar8 + lVar18 * 4) * *(float *)(lVar9 + 0x38) - (float)iVar6;
      if (fVar22 <= fVar14) {
        fVar22 = fVar14;
      }
      if (fVar23 <= fVar22) {
        fVar22 = fVar23;
      }
      fVar22 = fVar22 + fVar20;
      lVar1 = lVar10 + ((long)iVar17 - (long)(int)fVar22) * 4;
      lVar16 = 0;
      if ((long)iVar17 - (long)(int)fVar22 < 4) {
        lVar16 = (long)iVar5;
      }
      fVar2 = *(float *)(lVar1 + -0xc + lVar16 * 4);
      fVar3 = *(float *)(lVar1 + -4 + lVar16 * 4);
      fVar4 = *(float *)(lVar1 + lVar16 * 4);
      fVar21 = *(float *)(lVar1 + -8 + lVar16 * 4) - fVar3;
      dVar19 = (double)(fVar22 - (float)(int)fVar22);
      *(float *)((long)__s + lVar18 * 4) =
           (float)(((double)(fVar4 + fVar4 + fVar2 + fVar3 * fVar12 +
                            ((fVar2 - fVar4) + fVar21 * fVar12) * (fVar22 - (float)(int)fVar22)) *
                    (dVar19 * dVar13 - dVar13) + (double)fVar21) * dVar19 + (double)fVar3);
      fVar20 = fVar20 + fVar11;
      lVar18 = lVar18 + 1;
    } while (iVar15 != (int)lVar18);
  }
  return param_1 + 0x30;
}


