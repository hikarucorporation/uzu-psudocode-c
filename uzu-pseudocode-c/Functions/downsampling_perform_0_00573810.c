// Function : downsampling_perform_0
// Namespace: 
// Entry    : 00573810
// Prototype: undefined1[16] downsampling_perform_0(long param_1)
// Body     : 00573810 - 005738fd


undefined1  [16] downsampling_perform_0(long param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  iVar6 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar2 = (long)*(int *)(param_1 + 0x20) / (long)iVar6;
  uVar3 = (uint)uVar2;
  puVar5 = (undefined4 *)((long)*(int *)(param_1 + 0x20) % (long)iVar6 & 0xffffffff);
  if (uVar3 != 0) {
    puVar4 = *(undefined4 **)(param_1 + 8);
    puVar5 = *(undefined4 **)(param_1 + 0x10);
    lVar7 = (long)iVar6;
    uVar10 = uVar3 - 1;
    if ((uVar2 & 7) != 0) {
      uVar8 = 0;
      do {
        *puVar5 = *puVar4;
        puVar5 = puVar5 + 1;
        uVar8 = uVar8 + 1;
        puVar4 = puVar4 + lVar7;
      } while ((uVar3 & 7) != uVar8);
      uVar3 = uVar3 - uVar8;
    }
    if (6 < uVar10) {
      lVar9 = 0;
      do {
        puVar5[lVar9] = *puVar4;
        puVar5[lVar9 + 1] = puVar4[lVar7];
        puVar5[lVar9 + 2] = puVar4[lVar7 * 2];
        puVar5[lVar9 + 3] = puVar4[lVar7 * 3];
        puVar5[lVar9 + 4] = puVar4[lVar7 * 4];
        puVar5[lVar9 + 5] = puVar4[lVar7 * 5];
        puVar5[lVar9 + 6] = puVar4[lVar7 * 6];
        puVar1 = puVar4 + lVar7 * 7;
        puVar4 = puVar4 + lVar7 * 8;
        puVar5[lVar9 + 7] = *puVar1;
        lVar9 = lVar9 + 8;
      } while (uVar3 != (uint)lVar9);
    }
  }
  auVar11._8_8_ = puVar5;
  auVar11._0_8_ = param_1 + 0x28;
  return auVar11;
}


