// Function : _output_with_dotted_circle
// Namespace: 
// Entry    : 0042a840
// Prototype: undefined _output_with_dotted_circle(hb_buffer_t * param_1)
// Body     : 0042a840 - 0042a9c8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _output_with_dotted_circle(hb_buffer_t*) */

void __cdecl _output_with_dotted_circle(hb_buffer_t *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  void *pvVar12;
  
  uVar9 = *(int *)(param_1 + 100) + 1;
  if (((uVar9 == 0) || (uVar9 < *(uint *)(param_1 + 0x68))) ||
     (uVar7 = hb_buffer_t::enlarge(param_1,uVar9), (char)uVar7 != '\0')) {
    pvVar10 = *(void **)(param_1 + 0x70);
    pvVar12 = *(void **)(param_1 + 0x78);
    pvVar11 = pvVar12;
    if (pvVar12 == pvVar10) {
      uVar9 = *(uint *)(param_1 + 100);
      if (*(uint *)(param_1 + 0x5c) < uVar9 + 1) {
        pvVar11 = *(void **)(param_1 + 0x80);
        *(void **)(param_1 + 0x78) = pvVar11;
        if ((ulong)uVar9 != 0) {
          memcpy(pvVar11,pvVar10,(ulong)uVar9 * 0x14);
          pvVar11 = *(void **)(param_1 + 0x78);
          pvVar10 = *(void **)(param_1 + 0x70);
          goto LAB_0042a89e;
        }
      }
      pvVar10 = pvVar12;
    }
    else {
    }
LAB_0042a89e:
    uVar9 = *(uint *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 100);
    uVar6 = (ulong)uVar4;
    uVar8 = uVar4 - 1;
    if (uVar4 == 0) {
      uVar8 = 0;
    }
    if (uVar9 < *(uint *)(param_1 + 0x60)) {
      uVar8 = uVar9;
    }
    if (uVar9 >= *(uint *)(param_1 + 0x60)) {
      pvVar10 = pvVar11;
    }
    puVar1 = (undefined8 *)((long)pvVar10 + (ulong)uVar8 * 0x14);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)((long)pvVar11 + uVar6 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    *(undefined4 *)((long)pvVar11 + uVar6 * 0x14 + 0x10) =
         *(undefined4 *)((long)pvVar10 + (ulong)uVar8 * 0x14 + 0x10);
    *(undefined4 *)((long)pvVar11 + uVar6 * 0x14) = 0x25cc;
    iVar5 = *(int *)(param_1 + 100) + 1;
    *(int *)(param_1 + 100) = iVar5;
  }
  else {
    iVar5 = *(int *)(param_1 + 100);
  }
  uVar6 = (ulong)(iVar5 - 1);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  puVar3 = (ushort *)(*(long *)(param_1 + 0x78) + 0x10 + uVar6 * 0x14);
  *puVar3 = *puVar3 & 0xff7f;
  if (param_1[0x5a] == (hb_buffer_t)0x0) goto LAB_0042a98b;
  pvVar12 = *(void **)(param_1 + 0x78);
  pvVar10 = *(void **)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 100);
  if ((pvVar12 != pvVar10) || (iVar5 != *(int *)(param_1 + 0x5c))) {
    uVar9 = iVar5 + 1;
    if ((uVar9 == 0) || (uVar9 < *(uint *)(param_1 + 0x68))) {
      if (pvVar12 == pvVar10) goto LAB_0042a92a;
    }
    else {
      uVar7 = hb_buffer_t::enlarge(param_1,uVar9);
      if ((char)uVar7 == '\0') {
        return;
      }
      pvVar10 = *(void **)(param_1 + 0x70);
      pvVar12 = *(void **)(param_1 + 0x78);
      if (pvVar12 == pvVar10) {
LAB_0042a92a:
        uVar9 = *(uint *)(param_1 + 100);
        if (*(int *)(param_1 + 0x5c) + 1U < uVar9 + 1) {
          pvVar12 = *(void **)(param_1 + 0x80);
          *(void **)(param_1 + 0x78) = pvVar12;
          if ((ulong)uVar9 != 0) {
            memcpy(pvVar12,pvVar10,(ulong)uVar9 * 0x14);
            pvVar10 = *(void **)(param_1 + 0x70);
            pvVar12 = *(void **)(param_1 + 0x78);
          }
        }
        else {
          pvVar12 = pvVar10;
        }
      }
    }
    uVar9 = *(uint *)(param_1 + 0x5c);
    uVar4 = *(uint *)(param_1 + 100);
    *(undefined4 *)((long)pvVar12 + (ulong)uVar4 * 0x14 + 0x10) =
         *(undefined4 *)((long)pvVar10 + (ulong)uVar9 * 0x14 + 0x10);
    puVar1 = (undefined8 *)((long)pvVar10 + (ulong)uVar9 * 0x14);
    uVar7 = puVar1[1];
    puVar2 = (undefined8 *)((long)pvVar12 + (ulong)uVar4 * 0x14);
    *puVar2 = *puVar1;
    puVar2[1] = uVar7;
    iVar5 = *(int *)(param_1 + 100);
  }
  *(int *)(param_1 + 100) = iVar5 + 1;
LAB_0042a98b:
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  return;
}


