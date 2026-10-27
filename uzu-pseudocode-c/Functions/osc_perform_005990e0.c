// Function : osc_perform
// Namespace: 
// Entry    : 005990e0
// Prototype: long osc_perform(long param_1)
// Body     : 005990e0 - 00599223


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long osc_perform(long param_1)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  double dVar4;
  double dVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  
  lVar6 = cos_newtable;
  dVar5 = DAT_0065da20;
  lVar2 = *(long *)(param_1 + 8);
  pfVar3 = *(float **)(param_1 + 0x10);
  pfVar8 = *(float **)(param_1 + 0x18);
  dVar12 = *(double *)(lVar2 + 0x30) + DAT_0065da18;
  fVar1 = *(float *)(lVar2 + 0x38);
  dVar4 = (double)(*pfVar3 * fVar1) + dVar12;
  fVar11 = (float)((double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000) + DAT_0065da20);
  pfVar9 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x1ffc) + cos_newtable);
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  if (iVar10 != 1) {
    lVar7 = 1;
    dVar12 = dVar4;
    do {
      dVar4 = (double)(pfVar3[lVar7] * fVar1) + dVar12;
      *pfVar8 = (pfVar9[1] - *pfVar9) * fVar11 + *pfVar9;
      pfVar8 = pfVar8 + 1;
      fVar11 = (float)((double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000) + dVar5);
      pfVar9 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x1ffc) + lVar6);
      lVar7 = lVar7 + 1;
      dVar12 = dVar4;
    } while (iVar10 != (int)lVar7);
  }
  *pfVar8 = (pfVar9[1] - *pfVar9) * fVar11 + *pfVar9;
  *(double *)(lVar2 + 0x30) =
       (double)((ulong)(dVar4 + _DAT_0065da40) & 0xffffffff | 0x41e8000000000000) + _DAT_0065da48;
  return param_1 + 0x28;
}


