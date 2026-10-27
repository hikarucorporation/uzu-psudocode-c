// Function : sigdelread_perform
// Namespace: 
// Entry    : 00591950
// Prototype: long sigdelread_perform(long param_1)
// Body     : 00591950 - 00591a9c


long sigdelread_perform(long param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  long lVar14;
  
  uVar11 = (uint)*(ulong *)(param_1 + 0x20);
  if (uVar11 != 0) {
    puVar1 = *(uint **)(param_1 + 0x10);
    iVar7 = puVar1[4] - **(int **)(param_1 + 0x18);
    uVar13 = *puVar1;
    puVar12 = (undefined4 *)(*(long *)(puVar1 + 2) + (long)(int)uVar13 * 4 + 0x10);
    puVar9 = (undefined4 *)
             (*(long *)(puVar1 + 2) + (long)(int)((iVar7 >> 0x1f & uVar13) + iVar7) * 4);
    puVar8 = *(undefined4 **)(param_1 + 8);
    lVar14 = -(long)(int)uVar13;
    uVar13 = uVar11 - 1;
    if ((*(ulong *)(param_1 + 0x20) & 3) != 0) {
      uVar3 = 0;
      do {
        *puVar8 = *puVar9;
        puVar8 = puVar8 + 1;
        lVar4 = 0;
        if (puVar9 + 1 == puVar12) {
          lVar4 = lVar14;
        }
        puVar9 = puVar9 + lVar4 + 1;
        uVar3 = uVar3 + 1;
      } while ((uVar11 & 3) != uVar3);
      uVar11 = uVar11 - uVar3;
    }
    if (2 < uVar13) {
      lVar4 = 0;
      do {
        puVar8[lVar4] = *puVar9;
        lVar5 = lVar14;
        if (puVar9 + 1 != puVar12) {
          lVar5 = 0;
        }
        puVar8[lVar4 + 1] = puVar9[lVar5 + 1];
        lVar2 = lVar14;
        if (puVar9 + lVar5 + 2 != puVar12) {
          lVar2 = 0;
        }
        puVar8[lVar4 + 2] = puVar9[lVar5 + lVar2 + 2];
        lVar10 = lVar14;
        if (puVar9 + lVar5 + lVar2 + 3 != puVar12) {
          lVar10 = 0;
        }
        puVar8[lVar4 + 3] = puVar9[lVar5 + lVar2 + lVar10 + 3];
        lVar6 = lVar14;
        if (puVar9 + lVar5 + lVar2 + lVar10 + 4 != puVar12) {
          lVar6 = 0;
        }
        puVar9 = puVar9 + lVar5 + lVar2 + lVar10 + lVar6 + 4;
        lVar4 = lVar4 + 4;
      } while (uVar11 != (uint)lVar4);
    }
  }
  return param_1 + 0x28;
}


