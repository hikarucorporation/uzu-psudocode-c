// Function : sigczero_rev_perform
// Namespace: 
// Entry    : 00596360
// Prototype: long sigczero_rev_perform(long param_1)
// Body     : 00596360 - 0059640e


long sigczero_rev_perform(long param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar3 = *(long *)(param_1 + 0x38);
  fVar13 = *(float *)(lVar3 + 0x34);
  fVar14 = *(float *)(lVar3 + 0x38);
  iVar11 = (int)*(undefined8 *)(param_1 + 0x40);
  if (0 < iVar11) {
    lVar4 = *(long *)(param_1 + 0x30);
    lVar5 = *(long *)(param_1 + 0x28);
    lVar6 = *(long *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x18);
    lVar8 = *(long *)(param_1 + 8);
    lVar9 = *(long *)(param_1 + 0x10);
    lVar10 = 0;
    fVar12 = fVar14;
    fVar15 = fVar13;
    do {
      fVar13 = *(float *)(lVar8 + lVar10 * 4);
      fVar14 = *(float *)(lVar9 + lVar10 * 4);
      fVar1 = *(float *)(lVar7 + lVar10 * 4);
      fVar2 = *(float *)(lVar6 + lVar10 * 4);
      *(float *)(lVar5 + lVar10 * 4) = fVar15 - (fVar2 * fVar14 + fVar1 * fVar13);
      *(float *)(lVar4 + lVar10 * 4) = (fVar1 * fVar14 + fVar12) - fVar2 * fVar13;
      lVar10 = lVar10 + 1;
      fVar12 = fVar14;
      fVar15 = fVar13;
    } while (iVar11 != (int)lVar10);
  }
  *(float *)(lVar3 + 0x34) = fVar13;
  *(float *)(lVar3 + 0x38) = fVar14;
  return param_1 + 0x48;
}


