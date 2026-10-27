// Function : cos_perform_old
// Namespace: 
// Entry    : 00598c40
// Prototype: long cos_perform_old(long param_1)
// Body     : 00598c40 - 00598d48


long cos_perform_old(long param_1)

{
  float fVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float *pfVar7;
  float *pfVar8;
  double dVar9;
  long lVar10;
  int iVar11;
  double dVar12;
  
  dVar6 = DAT_0065da20;
  dVar5 = DAT_0065da18;
  fVar4 = DAT_0065da00;
  pfVar2 = *(float **)(param_1 + 8);
  pfVar7 = *(float **)(param_1 + 0x10);
  lVar3 = *(long *)PTR_cos_table_00715460;
  dVar12 = (double)(*pfVar2 * DAT_0065da00) + DAT_0065da18;
  dVar9 = (double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000);
  pfVar8 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x7fc) + lVar3);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar11 != 1) {
    lVar10 = 1;
    do {
      fVar1 = pfVar2[lVar10];
      *pfVar7 = (pfVar8[1] - *pfVar8) * (float)(dVar9 + dVar6) + *pfVar8;
      pfVar7 = pfVar7 + 1;
      dVar12 = (double)(fVar1 * fVar4) + dVar5;
      dVar9 = (double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000);
      pfVar8 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x7fc) + lVar3);
      lVar10 = lVar10 + 1;
    } while (iVar11 != (int)lVar10);
  }
  *pfVar7 = (pfVar8[1] - *pfVar8) * (float)(dVar9 + DAT_0065da20) + *pfVar8;
  return param_1 + 0x20;
}


