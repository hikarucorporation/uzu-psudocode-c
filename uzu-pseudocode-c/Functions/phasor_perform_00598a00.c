// Function : phasor_perform
// Namespace: 
// Entry    : 00598a00
// Prototype: long phasor_perform(undefined8 param_1, uint param_2, long param_3)
// Body     : 00598a00 - 00598b36


long phasor_perform(undefined8 param_1,uint param_2,long param_3)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  long lVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  double dVar13;
  
  lVar4 = *(long *)(param_3 + 8);
  uVar3 = *(uint *)(param_3 + 0x20);
  dVar13 = *(double *)(lVar4 + 0x30) + DAT_0065da18;
  uVar12 = SUB84(dVar13,0);
  if (uVar3 != 0) {
    fVar1 = *(float *)(lVar4 + 0x38);
    pfVar11 = *(float **)(param_3 + 0x10);
    pfVar10 = *(float **)(param_3 + 0x18);
    uVar12 = param_2;
    uVar6 = uVar3;
    dVar7 = DAT_0065da20;
    if ((uVar3 & 1) != 0) {
      uVar8 = (ulong)dVar13 & 0xffffffff;
      fVar2 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      dVar13 = (double)(fVar2 * fVar1) + dVar13;
      *pfVar10 = (float)((double)(uVar8 | 0x4138000000000000) + DAT_0065da20);
      pfVar10 = pfVar10 + 1;
      uVar12 = SUB84(dVar13,0);
      uVar6 = uVar3 - 1;
      dVar7 = DAT_0065da20;
    }
    DAT_0065da20 = dVar7;
    if (uVar3 != 1) {
      lVar9 = 0;
      do {
        dVar5 = (double)(pfVar11[lVar9] * fVar1) + dVar13;
        pfVar10[lVar9] = (float)((double)((ulong)dVar13 & 0xffffffff | 0x4138000000000000) + dVar7);
        dVar13 = (double)(pfVar11[lVar9 + 1] * fVar1) + dVar5;
        uVar12 = SUB84(dVar13,0);
        pfVar10[lVar9 + 1] =
             (float)((double)((ulong)dVar5 & 0xffffffff | 0x4138000000000000) + dVar7);
        lVar9 = lVar9 + 2;
      } while (uVar6 != (uint)lVar9);
    }
  }
  *(double *)(lVar4 + 0x30) = (double)((ulong)uVar12 | 0x4138000000000000) + DAT_0065da20;
  return param_3 + 0x28;
}


