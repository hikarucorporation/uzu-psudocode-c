// Function : siglop_perf_vector
// Namespace: 
// Entry    : 005957c0
// Prototype: long siglop_perf_vector(long param_1)
// Body     : 005957c0 - 00595862


long siglop_perf_vector(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar8 = DAT_005d9038;
  lVar1 = *(long *)(param_1 + 8);
  fVar7 = *(float *)(lVar1 + 0x34);
  iVar6 = (int)*(undefined8 *)(param_1 + 0x28);
  if (0 < iVar6) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar4 = *(long *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      fVar10 = *(float *)(lVar1 + 0x30) * *(float *)(lVar4 + lVar5 * 4);
      fVar9 = fVar8;
      if ((fVar10 <= fVar8) && (fVar9 = fVar10, fVar10 < 0.0)) {
        fVar9 = 0.0;
      }
      fVar7 = fVar7 + (*(float *)(lVar3 + lVar5 * 4) - fVar7) * fVar9;
      *(float *)(lVar2 + lVar5 * 4) = fVar7;
      lVar5 = lVar5 + 1;
    } while (iVar6 != (int)lVar5);
  }
  fVar8 = 0.0;
  if ((((uint)fVar7 >> 0x1d ^ (uint)fVar7 >> 0x1e) & 1) != 0) {
    fVar8 = fVar7;
  }
  *(float *)(lVar1 + 0x34) = fVar8;
  return param_1 + 0x30;
}


