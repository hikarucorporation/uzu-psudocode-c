// Function : sigbp_perform
// Namespace: 
// Entry    : 005959d0
// Prototype: long sigbp_perform(undefined8 param_1, float param_2, undefined8 param_3, undefined8 param_4, float param_5, long param_6)
// Body     : 005959d0 - 00595af9


/* WARNING: Removing unreachable block (ram,0x00595a09) */

long sigbp_perform(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,long param_6)

{
  uint uVar1;
  float *pfVar2;
  long lVar3;
  float *pfVar4;
  float *pfVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pfVar2 = *(float **)(param_6 + 0x18);
  uVar1 = *(uint *)(param_6 + 0x20);
  uVar7 = *(undefined8 *)pfVar2;
  if ((int)uVar1 < 1) {
    fVar12 = (float)uVar7;
    fVar8 = (float)((ulong)uVar7 >> 0x20);
  }
  else {
    fVar9 = pfVar2[4];
    pfVar5 = *(float **)(param_6 + 8);
    pfVar4 = *(float **)(param_6 + 0x10);
    fVar10 = (float)*(undefined8 *)(pfVar2 + 2);
    fVar11 = (float)((ulong)*(undefined8 *)(pfVar2 + 2) >> 0x20);
    if (uVar1 != 1) {
      lVar6 = 0;
      lVar3 = 0;
      do {
        fVar8 = (float)((ulong)uVar7 >> 0x20) * fVar11 + (float)uVar7 * fVar10 + pfVar5[lVar6];
        pfVar4[lVar6] = fVar8 * fVar9;
        fVar12 = (float)uVar7 * fVar11 + fVar8 * fVar10 + pfVar5[lVar6 + 1];
        pfVar4[lVar6 + 1] = fVar12 * fVar9;
        uVar7 = CONCAT44(fVar8,fVar12);
        lVar3 = lVar3 + -8;
        lVar6 = lVar6 + 2;
      } while ((uVar1 & 0xfffffffe) != (uint)lVar6);
      pfVar5 = (float *)((long)pfVar5 - lVar3);
      pfVar4 = (float *)((long)pfVar4 - lVar3);
      if ((uVar1 & 1) == 0) goto LAB_00595ab8;
    }
    fVar8 = (float)uVar7;
    fVar12 = fVar11 * (float)((ulong)uVar7 >> 0x20) + fVar10 * fVar8 + *pfVar5;
    *pfVar4 = fVar9 * fVar12;
  }
LAB_00595ab8:
  fVar9 = 0.0;
  if ((((uint)fVar12 >> 0x1d ^ (uint)fVar12 >> 0x1e) & 1) != 0) {
    fVar9 = fVar12;
  }
  fVar12 = 0.0;
  if ((((uint)fVar8 >> 0x1d ^ (uint)fVar8 >> 0x1e) & 1) != 0) {
    fVar12 = fVar8;
  }
  *pfVar2 = fVar9;
  pfVar2[1] = fVar12;
  return param_6 + 0x28;
}


