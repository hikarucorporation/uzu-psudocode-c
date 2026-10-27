// Function : hb_paint_extents_push_group
// Namespace: 
// Entry    : 0046b910
// Prototype: undefined hb_paint_extents_push_group(undefined8 param_1, long param_2)
// Body     : 0046b910 - 0046b9cf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_paint_extents_push_group(hb_paint_funcs_t*, void*, void*) */

void __cdecl hb_paint_extents_push_group(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *(uint *)(param_2 + 0x20);
  if ((int)uVar4 <= *(int *)(param_2 + 0x24)) {
    if ((int)uVar4 < 0) {
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      DAT_0071cd90._0_4_ = 0;
      return;
    }
    uVar6 = *(int *)(param_2 + 0x24) + 1;
    if (uVar4 < uVar6) {
      uVar7 = uVar4;
      do {
        uVar7 = uVar7 + (uVar7 >> 1) + 8;
      } while (uVar7 < uVar6);
      if (0xccccccc < uVar7) {
LAB_0046b99b:
        *(uint *)(param_2 + 0x20) = ~uVar4;
        _hb_CrapPool = 0;
        _DAT_0071cd88 = 0;
        DAT_0071cd90._0_4_ = 0;
        return;
      }
      if (uVar7 == 0) {
        free(*(void **)(param_2 + 0x28));
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(*(void **)(param_2 + 0x28),(ulong)uVar7 * 0x14);
        if (pvVar5 == (void *)0x0) {
          uVar4 = *(uint *)(param_2 + 0x20);
          if (uVar7 <= uVar4) goto LAB_0046b92c;
          goto LAB_0046b99b;
        }
      }
      *(void **)(param_2 + 0x28) = pvVar5;
      *(uint *)(param_2 + 0x20) = uVar7;
    }
  }
LAB_0046b92c:
  lVar2 = *(long *)(param_2 + 0x28);
  uVar4 = *(uint *)(param_2 + 0x24);
  *(uint *)(param_2 + 0x24) = uVar4 + 1;
  *(undefined4 *)(lVar2 + (ulong)uVar4 * 0x14) = 2;
  uVar3 = _UNK_005de1f8;
  puVar1 = (undefined8 *)(lVar2 + 4 + (ulong)uVar4 * 0x14);
  *puVar1 = _DAT_005de1f0;
  puVar1[1] = uVar3;
  return;
}


