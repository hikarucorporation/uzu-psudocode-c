// Function : tabosc4_tilde_perform
// Namespace: 
// Entry    : 00599b60
// Prototype: long tabosc4_tilde_perform(long param_1)
// Body     : 00599b60 - 00599d44


long tabosc4_tilde_perform(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  long lVar6;
  void *__s;
  long lVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  dVar10 = DAT_0065da20;
  dVar18 = DAT_0065ab18;
  fVar9 = DAT_00652610;
  lVar6 = *(long *)(param_1 + 8);
  __s = *(void **)(param_1 + 0x18);
  lVar7 = *(long *)(lVar6 + 0x38);
  iVar13 = (int)*(ulong *)(param_1 + 0x20);
  if (lVar7 == 0) {
    if (iVar13 != 0) {
      memset(__s,0,(*(ulong *)(param_1 + 0x20) & 0xffffffff) << 2);
    }
  }
  else {
    fVar1 = *(float *)(lVar6 + 0x30);
    dVar19 = *(double *)(lVar6 + 0x50) * (double)fVar1 + DAT_0065da18;
    if (iVar13 != 0) {
      fVar15 = DAT_005d9054 + fVar1;
      fVar2 = *(float *)(lVar6 + 0x58);
      lVar8 = *(long *)(param_1 + 0x10);
      lVar12 = 0;
      do {
        lVar11 = (long)(int)((uint)((ulong)dVar19 >> 0x20) & (int)fVar15);
        fVar14 = (float)((double)((ulong)dVar19 & 0xffffffff | 0x4138000000000000) + dVar10);
        fVar3 = *(float *)(lVar7 + lVar11 * 8);
        fVar4 = *(float *)(lVar7 + 8 + lVar11 * 8);
        fVar5 = *(float *)(lVar7 + 0x18 + lVar11 * 8);
        fVar16 = *(float *)(lVar7 + 0x10 + lVar11 * 8) - fVar4;
        dVar17 = (double)fVar14;
        dVar19 = (double)(*(float *)(lVar8 + lVar12 * 4) * fVar1 * fVar2) + dVar19;
        *(float *)((long)__s + lVar12 * 4) =
             (float)(((double)(fVar3 + fVar3 + fVar5 + fVar4 * fVar9 +
                              ((fVar5 - fVar3) + fVar16 * fVar9) * fVar14) *
                      (dVar17 * dVar18 - dVar18) + (double)fVar16) * dVar17 + (double)fVar4);
        lVar12 = lVar12 + 1;
      } while (iVar13 != (int)lVar12);
    }
    dVar18 = (double)fVar1 * DAT_0065da18;
    *(double *)(lVar6 + 0x50) =
         (double)*(float *)(lVar6 + 0x34) *
         ((double)((ulong)(DAT_0065da20 + dVar18 + dVar19) & 0xffffffff |
                  (ulong)dVar18 & 0xffffffff00000000) - dVar18);
  }
  return param_1 + 0x28;
}


