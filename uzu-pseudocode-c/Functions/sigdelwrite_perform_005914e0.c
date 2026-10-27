// Function : sigdelwrite_perform
// Namespace: 
// Entry    : 005914e0
// Prototype: long sigdelwrite_perform(long param_1)
// Body     : 005914e0 - 005915b4


long sigdelwrite_perform(long param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  long lVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  
  piVar4 = *(int **)(param_1 + 0x10);
  iVar7 = (int)*(undefined8 *)(param_1 + 0x18);
  iVar10 = piVar4[4] + iVar7;
  if (iVar7 != 0) {
    iVar2 = *piVar4;
    puVar5 = *(undefined4 **)(piVar4 + 2);
    puVar1 = puVar5 + iVar2;
    lVar6 = *(long *)(param_1 + 8);
    lVar9 = 0;
    puVar8 = puVar5 + piVar4[4];
    do {
      while( true ) {
        uVar3 = *(uint *)(lVar6 + lVar9 * 4);
        uVar11 = 0;
        if (((uVar3 >> 0x1d ^ uVar3 >> 0x1e) & 1) != 0) {
          uVar11 = uVar3;
        }
        *puVar8 = uVar11;
        if (puVar8 + 1 == puVar1 + 4) break;
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 1;
        if (iVar7 == (int)lVar9) goto LAB_005915a6;
      }
      *puVar5 = *puVar1;
      puVar5[1] = puVar1[1];
      puVar5[2] = puVar1[2];
      puVar5[3] = puVar1[3];
      iVar10 = iVar10 - iVar2;
      lVar9 = lVar9 + 1;
      puVar8 = puVar5 + 4;
    } while (iVar7 != (int)lVar9);
  }
LAB_005915a6:
  piVar4[4] = iVar10;
  return param_1 + 0x20;
}


