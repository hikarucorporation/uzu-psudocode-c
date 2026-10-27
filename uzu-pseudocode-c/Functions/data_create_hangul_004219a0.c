// Function : data_create_hangul
// Namespace: 
// Entry    : 004219a0
// Prototype: undefined data_create_hangul(long param_1)
// Body     : 004219a0 - 00421acc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_create_hangul(hb_ot_shape_plan_t const*) */

void __cdecl data_create_hangul(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  puVar2 = calloc(1,0x10);
  if ((puVar2 != (undefined4 *)0x0) && (0 < *(int *)(param_1 + 0x3c))) {
    lVar1 = *(long *)(param_1 + 0x40);
    uVar8 = *(int *)(param_1 + 0x3c) - 1;
    uVar4 = uVar8;
    do {
      uVar5 = uVar4 >> 1;
      if (*(int *)(lVar1 + (ulong)uVar5 * 0x24) == 0) {
        uVar3 = *(undefined4 *)(lVar1 + 0x1c + (ulong)uVar5 * 0x24);
        goto LAB_00421a00;
      }
      bVar9 = 1 < uVar4;
      uVar4 = uVar5 - 1;
    } while (bVar9);
    uVar3 = 0;
LAB_00421a00:
    *puVar2 = uVar3;
    iVar7 = 0;
    uVar4 = uVar8;
    do {
      while( true ) {
        uVar6 = uVar4 + iVar7 >> 1;
        uVar5 = *(uint *)(lVar1 + (ulong)uVar6 * 0x24);
        if (0x6c6a6d6f < uVar5) break;
        if (uVar5 == 0x6c6a6d6f) {
          uVar3 = *(undefined4 *)(lVar1 + 0x1c + (ulong)uVar6 * 0x24);
          goto LAB_00421a3e;
        }
        iVar7 = uVar6 + 1;
        if ((int)uVar4 < iVar7) goto LAB_00421a36;
      }
      uVar4 = uVar6 - 1;
    } while (iVar7 <= (int)uVar4);
LAB_00421a36:
    uVar3 = 0;
LAB_00421a3e:
    puVar2[1] = uVar3;
    iVar7 = 0;
    uVar4 = uVar8;
    do {
      while( true ) {
        uVar6 = uVar4 + iVar7 >> 1;
        uVar5 = *(uint *)(lVar1 + (ulong)uVar6 * 0x24);
        if (0x766a6d6f < uVar5) break;
        if (uVar5 == 0x766a6d6f) {
          uVar3 = *(undefined4 *)(lVar1 + 0x1c + (ulong)uVar6 * 0x24);
          goto LAB_00421a7e;
        }
        iVar7 = uVar6 + 1;
        if ((int)uVar4 < iVar7) goto LAB_00421a76;
      }
      uVar4 = uVar6 - 1;
    } while (iVar7 <= (int)uVar4);
LAB_00421a76:
    uVar3 = 0;
LAB_00421a7e:
    puVar2[2] = uVar3;
    iVar7 = 0;
    do {
      while( true ) {
        uVar5 = uVar8 + iVar7 >> 1;
        uVar4 = *(uint *)(lVar1 + (ulong)uVar5 * 0x24);
        if (0x746a6d6f < uVar4) break;
        if (uVar4 == 0x746a6d6f) {
          uVar3 = *(undefined4 *)(lVar1 + 0x1c + (ulong)uVar5 * 0x24);
          goto LAB_00421ac2;
        }
        iVar7 = uVar5 + 1;
        if ((int)uVar8 < iVar7) goto LAB_00421aba;
      }
      uVar8 = uVar5 - 1;
    } while (iVar7 <= (int)uVar8);
LAB_00421aba:
    uVar3 = 0;
LAB_00421ac2:
    puVar2[3] = uVar3;
  }
  return;
}


