// Function : sigcpole_perform
// Namespace: 
// Entry    : 005961c0
// Prototype: long sigcpole_perform(long param_1)
// Body     : 005961c0 - 00596298


long sigcpole_perform(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar4 = *(long *)(param_1 + 0x38);
  fVar14 = *(float *)(lVar4 + 0x34);
  fVar13 = *(float *)(lVar4 + 0x38);
  iVar12 = (int)*(undefined8 *)(param_1 + 0x40);
  if (0 < iVar12) {
    lVar5 = *(long *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x28);
    lVar7 = *(long *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x18);
    lVar9 = *(long *)(param_1 + 8);
    lVar10 = *(long *)(param_1 + 0x10);
    lVar11 = 0;
    fVar15 = fVar14;
    do {
      fVar1 = *(float *)(lVar8 + lVar11 * 4);
      fVar2 = *(float *)(lVar7 + lVar11 * 4);
      fVar14 = (fVar1 * fVar15 + *(float *)(lVar9 + lVar11 * 4)) - fVar2 * fVar13;
      fVar3 = *(float *)(lVar10 + lVar11 * 4);
      *(float *)(lVar6 + lVar11 * 4) = fVar14;
      fVar13 = fVar2 * fVar15 + fVar1 * fVar13 + fVar3;
      *(float *)(lVar5 + lVar11 * 4) = fVar13;
      lVar11 = lVar11 + 1;
      fVar15 = fVar14;
    } while (iVar12 != (int)lVar11);
  }
  fVar15 = 0.0;
  if ((((uint)fVar14 >> 0x1d ^ (uint)fVar14 >> 0x1e) & 1) != 0) {
    fVar15 = fVar14;
  }
  fVar14 = 0.0;
  if ((((uint)fVar13 >> 0x1d ^ (uint)fVar13 >> 0x1e) & 1) != 0) {
    fVar14 = fVar13;
  }
  *(float *)(lVar4 + 0x34) = fVar15;
  *(float *)(lVar4 + 0x38) = fVar14;
  return param_1 + 0x48;
}


