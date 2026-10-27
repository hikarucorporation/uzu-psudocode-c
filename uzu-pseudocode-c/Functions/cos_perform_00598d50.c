// Function : cos_perform
// Namespace: 
// Entry    : 00598d50
// Prototype: long cos_perform(long param_1)
// Body     : 00598d50 - 00598e58


long cos_perform(long param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  double dVar9;
  long lVar10;
  int iVar11;
  double dVar12;
  
  lVar6 = cos_newtable;
  dVar5 = DAT_0065da20;
  dVar4 = DAT_0065da18;
  fVar3 = DAT_0065da04;
  pfVar2 = *(float **)(param_1 + 8);
  pfVar7 = *(float **)(param_1 + 0x10);
  dVar12 = (double)(*pfVar2 * DAT_0065da04) + DAT_0065da18;
  dVar9 = (double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000);
  pfVar8 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x1ffc) + cos_newtable);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar11 != 1) {
    lVar10 = 1;
    do {
      fVar1 = pfVar2[lVar10];
      *pfVar7 = (pfVar8[1] - *pfVar8) * (float)(dVar9 + dVar5) + *pfVar8;
      pfVar7 = pfVar7 + 1;
      dVar12 = (double)(fVar1 * fVar3) + dVar4;
      dVar9 = (double)((ulong)dVar12 & 0xffffffff | 0x4138000000000000);
      pfVar8 = (float *)((ulong)((uint)((ulong)dVar12 >> 0x1e) & 0x1ffc) + lVar6);
      lVar10 = lVar10 + 1;
    } while (iVar11 != (int)lVar10);
  }
  *pfVar7 = (pfVar8[1] - *pfVar8) * (float)(dVar9 + DAT_0065da20) + *pfVar8;
  return param_1 + 0x20;
}


