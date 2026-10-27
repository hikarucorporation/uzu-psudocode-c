// Function : upsampling_perform_hold
// Namespace: 
// Entry    : 00573a20
// Prototype: long upsampling_perform_hold(long param_1)
// Body     : 00573a20 - 00573b66


long upsampling_perform_hold(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  bool bVar14;
  
  iVar5 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar5 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    uVar11 = (uint)uVar2;
    if (uVar11 != 0) {
      puVar3 = *(undefined4 **)(param_1 + 8);
      lVar4 = *(long *)(param_1 + 0x10);
      lVar10 = (long)iVar5;
      lVar12 = (long)(iVar5 + -1);
      puVar13 = (undefined4 *)(lVar4 + lVar12 * 4);
      do {
        puVar9 = puVar3;
        if ((uVar2 & 7) == 0) {
          puVar8 = (undefined4 *)(lVar4 + lVar12 * 4);
          uVar7 = uVar11;
        }
        else {
          uVar7 = 0;
          puVar8 = puVar13;
          do {
            uVar1 = *puVar9;
            puVar9 = puVar9 + 1;
            *puVar8 = uVar1;
            puVar8 = puVar8 + lVar10;
            uVar7 = uVar7 + 1;
          } while ((uVar11 & 7) != uVar7);
          uVar7 = uVar11 - uVar7;
        }
        if (6 < uVar11 - 1) {
          lVar6 = 0;
          do {
            *puVar8 = puVar9[lVar6];
            puVar8[lVar10] = puVar9[lVar6 + 1];
            puVar8[lVar10 * 2] = puVar9[lVar6 + 2];
            puVar8[lVar10 * 3] = puVar9[lVar6 + 3];
            puVar8[lVar10 * 4] = puVar9[lVar6 + 4];
            puVar8[lVar10 * 5] = puVar9[lVar6 + 5];
            puVar8[lVar10 * 6] = puVar9[lVar6 + 6];
            puVar8[lVar10 * 7] = puVar9[lVar6 + 7];
            puVar8 = puVar8 + lVar10 * 8;
            lVar6 = lVar6 + 8;
          } while (uVar7 != (uint)lVar6);
        }
        puVar13 = puVar13 + -1;
        bVar14 = lVar12 != 0;
        lVar12 = lVar12 + -1;
      } while (bVar14);
    }
  }
  return param_1 + 0x28;
}


