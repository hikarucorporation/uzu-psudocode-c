// Function : data_create_khmer
// Namespace: 
// Entry    : 00423c90
// Prototype: undefined data_create_khmer(long param_1)
// Body     : 00423c90 - 00423e38


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_create_khmer(hb_ot_shape_plan_t const*) */

void __cdecl data_create_khmer(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  puVar3 = calloc(1,0x24);
  if (puVar3 != (undefined4 *)0x0) {
    iVar9 = *(int *)(param_1 + 0x3c);
    if (iVar9 < 1) {
      *(undefined8 *)(puVar3 + 1) = 0;
      puVar3[3] = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x40);
      iVar6 = iVar9 + -1;
      iVar8 = 0;
      iVar5 = iVar6;
      do {
        while( true ) {
          uVar7 = (uint)(iVar5 + iVar8) >> 1;
          uVar1 = *(uint *)(lVar2 + (ulong)uVar7 * 0x24);
          if (0x70726566 < uVar1) break;
          if (uVar1 == 0x70726566) {
            uVar4 = *(undefined4 *)(lVar2 + 0x1c + (ulong)uVar7 * 0x24);
            goto LAB_00423d1c;
          }
          iVar8 = uVar7 + 1;
          if (iVar5 < iVar8) goto LAB_00423cff;
        }
        iVar5 = uVar7 - 1;
      } while (iVar8 <= iVar5);
LAB_00423cff:
      uVar4 = 0;
LAB_00423d1c:
      *puVar3 = uVar4;
      iVar8 = 0;
      iVar5 = iVar6;
      do {
        while( true ) {
          uVar7 = (uint)(iVar5 + iVar8) >> 1;
          uVar1 = *(uint *)(lVar2 + (ulong)uVar7 * 0x24);
          if (0x626c7766 < uVar1) break;
          if (uVar1 == 0x626c7766) {
            uVar4 = *(undefined4 *)(lVar2 + 0x1c + (ulong)uVar7 * 0x24);
            goto LAB_00423d60;
          }
          iVar8 = uVar7 + 1;
          if (iVar5 < iVar8) goto LAB_00423d57;
        }
        iVar5 = uVar7 - 1;
      } while (iVar8 <= iVar5);
LAB_00423d57:
      uVar4 = 0;
LAB_00423d60:
      puVar3[1] = uVar4;
      iVar5 = 0;
      do {
        while( true ) {
          uVar7 = (uint)(iVar6 + iVar5) >> 1;
          uVar1 = *(uint *)(lVar2 + (ulong)uVar7 * 0x24);
          if (0x61627666 < uVar1) break;
          if (uVar1 == 0x61627666) {
            puVar3[2] = *(undefined4 *)(lVar2 + 0x1c + (ulong)uVar7 * 0x24);
            goto joined_r0x00423de6;
          }
          iVar5 = uVar7 + 1;
          if (iVar6 < iVar5) goto LAB_00423d9b;
        }
        iVar6 = uVar7 - 1;
      } while (iVar5 <= iVar6);
LAB_00423d9b:
      puVar3[2] = 0;
joined_r0x00423de6:
      if (iVar9 < 1) {
        puVar3[3] = 0;
      }
      else {
        iVar9 = iVar9 + -1;
        iVar5 = 0;
        iVar6 = iVar9;
        do {
          while( true ) {
            uVar7 = (uint)(iVar6 + iVar5) >> 1;
            uVar1 = *(uint *)(lVar2 + (ulong)uVar7 * 0x24);
            if (0x70737466 < uVar1) break;
            if (uVar1 == 0x70737466) {
              uVar4 = *(undefined4 *)(lVar2 + 0x1c + (ulong)uVar7 * 0x24);
              goto LAB_00423df6;
            }
            iVar5 = uVar7 + 1;
            if (iVar6 < iVar5) goto LAB_00423dd7;
          }
          iVar6 = uVar7 - 1;
        } while (iVar5 <= iVar6);
LAB_00423dd7:
        uVar4 = 0;
LAB_00423df6:
        puVar3[3] = uVar4;
        iVar6 = 0;
        do {
          while( true ) {
            uVar7 = (uint)(iVar9 + iVar6) >> 1;
            uVar1 = *(uint *)(lVar2 + (ulong)uVar7 * 0x24);
            if (0x63666172 < uVar1) break;
            if (uVar1 == 0x63666172) {
              uVar4 = *(undefined4 *)(lVar2 + 0x1c + (ulong)uVar7 * 0x24);
              goto LAB_00423e2d;
            }
            iVar6 = uVar7 + 1;
            if (iVar9 < iVar6) goto LAB_00423e2b;
          }
          iVar9 = uVar7 - 1;
        } while (iVar6 <= iVar9);
      }
    }
LAB_00423e2b:
    uVar4 = 0;
LAB_00423e2d:
    puVar3[4] = uVar4;
  }
  return;
}


