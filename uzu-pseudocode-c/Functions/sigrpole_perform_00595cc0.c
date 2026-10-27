// Function : sigrpole_perform
// Namespace: 
// Entry    : 00595cc0
// Prototype: long sigrpole_perform(long param_1)
// Body     : 00595cc0 - 00595dac


long sigrpole_perform(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(ulong *)(param_1 + 0x28);
  fVar9 = *(float *)(lVar1 + 0x34);
  uVar7 = (uint)uVar2;
  if (0 < (int)uVar7) {
    lVar8 = *(long *)(param_1 + 0x18);
    lVar6 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    if (2 < uVar7 - 1) {
      lVar5 = 0;
      lVar4 = 0;
      do {
        fVar9 = fVar9 * *(float *)(lVar3 + lVar5 * 4) + *(float *)(lVar6 + lVar5 * 4);
        *(float *)(lVar8 + lVar5 * 4) = fVar9;
        fVar9 = fVar9 * *(float *)(lVar3 + 4 + lVar5 * 4) + *(float *)(lVar6 + 4 + lVar5 * 4);
        *(float *)(lVar8 + 4 + lVar5 * 4) = fVar9;
        fVar9 = fVar9 * *(float *)(lVar3 + 8 + lVar5 * 4) + *(float *)(lVar6 + 8 + lVar5 * 4);
        *(float *)(lVar8 + 8 + lVar5 * 4) = fVar9;
        fVar9 = fVar9 * *(float *)(lVar3 + 0xc + lVar5 * 4) + *(float *)(lVar6 + 0xc + lVar5 * 4);
        *(float *)(lVar8 + 0xc + lVar5 * 4) = fVar9;
        lVar4 = lVar4 + -0x10;
        lVar5 = lVar5 + 4;
      } while ((uVar7 & 0xfffffffc) != (uint)lVar5);
      lVar6 = lVar6 - lVar4;
      lVar3 = lVar3 - lVar4;
      lVar8 = lVar8 - lVar4;
    }
    if ((uVar2 & 3) != 0) {
      lVar4 = 0;
      do {
        fVar9 = fVar9 * *(float *)(lVar3 + lVar4 * 4) + *(float *)(lVar6 + lVar4 * 4);
        *(float *)(lVar8 + lVar4 * 4) = fVar9;
        lVar4 = lVar4 + 1;
      } while ((uVar7 & 3) != (uint)lVar4);
    }
  }
  fVar10 = 0.0;
  if ((((uint)fVar9 >> 0x1d ^ (uint)fVar9 >> 0x1e) & 1) != 0) {
    fVar10 = fVar9;
  }
  *(float *)(lVar1 + 0x34) = fVar10;
  return param_1 + 0x30;
}


