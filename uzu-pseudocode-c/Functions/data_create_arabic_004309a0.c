// Function : data_create_arabic
// Namespace: 
// Entry    : 004309a0
// Prototype: undefined data_create_arabic(long param_1)
// Body     : 004309a0 - 00430b53


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* data_create_arabic(hb_ot_shape_plan_t const*) */

void __cdecl data_create_arabic(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  bool bVar14;
  
  pvVar4 = calloc(1,0x30);
  if (pvVar4 != (void *)0x0) {
    iVar11 = *(int *)(param_1 + 0x3c);
    bVar14 = *(int *)(param_1 + 4) == 0x41726162;
    lVar3 = *(long *)(param_1 + 0x40);
    iVar1 = iVar11 + -1;
    if (0 < iVar11) {
      iVar8 = 0;
      iVar10 = iVar1;
      do {
        while( true ) {
          uVar7 = (uint)(iVar10 + iVar8) >> 1;
          uVar2 = *(uint *)(lVar3 + (ulong)uVar7 * 0x24);
          if (0x73746368 < uVar2) break;
          if (uVar2 == 0x73746368) {
            uVar6 = 2;
            if (*(int *)(lVar3 + 0x1c + (ulong)uVar7 * 0x24) != 0) {
              *(byte *)((long)pvVar4 + 0x28) = bVar14 | 2;
              goto joined_r0x00430a3f;
            }
            goto LAB_00430b39;
          }
          iVar8 = uVar7 + 1;
          if (iVar10 < iVar8) goto LAB_00430b39;
        }
        iVar10 = uVar7 - 1;
      } while (iVar8 <= iVar10);
    }
LAB_00430b39:
    uVar6 = 0;
    *(bool *)((long)pvVar4 + 0x28) = bVar14;
joined_r0x00430a3f:
    if (iVar11 < 1) {
      *(undefined1 *)((long)pvVar4 + 0x28) = uVar6;
    }
    else {
      uVar12 = 0;
      do {
        uVar2 = *(uint *)("losianif2nif3nifidem2demtini" + uVar12 * 4);
        iVar10 = 0;
        iVar11 = iVar1;
        do {
          while( true ) {
            uVar9 = (uint)(iVar11 + iVar10) >> 1;
            uVar7 = *(uint *)(lVar3 + (ulong)uVar9 * 0x24);
            if (uVar2 < uVar7) break;
            if (uVar2 <= uVar7) {
              *(undefined4 *)((long)pvVar4 + uVar12 * 4) =
                   *(undefined4 *)(lVar3 + 0x1c + (ulong)uVar9 * 0x24);
              bVar13 = *(byte *)((long)pvVar4 + 0x28);
              if ((bVar13 & 1) != 0) goto LAB_00430ae6;
              goto LAB_00430a60;
            }
            iVar10 = uVar9 + 1;
            if (iVar11 < iVar10) goto LAB_00430ab2;
          }
          iVar11 = uVar9 - 1;
        } while (iVar10 <= iVar11);
LAB_00430ab2:
        *(undefined4 *)((long)pvVar4 + uVar12 * 4) = 0;
        bVar13 = *(byte *)((long)pvVar4 + 0x28);
        if ((bVar13 & 1) == 0) {
LAB_00430a60:
          bVar5 = 0;
        }
        else {
LAB_00430ae6:
          bVar5 = 1;
          if ((0x2cUL >> (uVar12 & 0x3f) & 1) == 0) {
            iVar10 = 0;
            iVar11 = iVar1;
            do {
              while( true ) {
                uVar9 = (uint)(iVar11 + iVar10) >> 1;
                uVar7 = *(uint *)(lVar3 + (ulong)uVar9 * 0x24);
                if (uVar2 < uVar7) break;
                if (uVar2 <= uVar7) {
                  bVar5 = *(byte *)(lVar3 + 0x20 + (ulong)uVar9 * 0x24) & 1;
                  goto LAB_00430a62;
                }
                iVar10 = uVar9 + 1;
                if (iVar11 < iVar10) goto LAB_00430a60;
              }
              iVar11 = uVar9 - 1;
            } while (iVar10 <= iVar11);
            goto LAB_00430a60;
          }
        }
LAB_00430a62:
        *(byte *)((long)pvVar4 + 0x28) = bVar13 & 0xfe | bVar5;
        uVar12 = uVar12 + 1;
      } while (uVar12 != 7);
    }
  }
  return;
}


