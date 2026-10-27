// Function : osc_perform_old
// Namespace: 
// Entry    : 00598f90
// Prototype: long osc_perform_old(long param_1)
// Body     : 00598f90 - 005990d3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long osc_perform_old(long param_1)

{
  float fVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  
  dVar6 = DAT_0065da20;
  lVar2 = *(long *)(param_1 + 8);
  pfVar3 = *(float **)(param_1 + 0x10);
  pfVar8 = *(float **)(param_1 + 0x18);
  lVar4 = *(long *)PTR_cos_table_00715460;
  dVar12 = *(double *)(lVar2 + 0x30) + DAT_0065da18;
  fVar1 = *(float *)(lVar2 + 0x38);
  dVar5 = (double)(*pfVar3 * fVar1) + dVar12;
  fVar11 = (float)((double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000) + DAT_0065da20);
  pfVar9 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x7fc) + lVar4);
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  if (iVar10 != 1) {
    lVar7 = 1;
    dVar12 = dVar5;
    do {
      dVar5 = (double)(pfVar3[lVar7] * fVar1) + dVar12;
      *pfVar8 = (pfVar9[1] - *pfVar9) * fVar11 + *pfVar9;
      pfVar8 = pfVar8 + 1;
      fVar11 = (float)((double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000) + dVar6);
      pfVar9 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x7fc) + lVar4);
      lVar7 = lVar7 + 1;
      dVar12 = dVar5;
    } while (iVar10 != (int)lVar7);
  }
  *pfVar8 = (pfVar9[1] - *pfVar9) * fVar11 + *pfVar9;
  *(double *)(lVar2 + 0x30) =
       (double)((ulong)(dVar5 + _DAT_0065da30) & 0xffffffff | 0x41c8000000000000) + _DAT_0065da38;
  return param_1 + 0x28;
}


