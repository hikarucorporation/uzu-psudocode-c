// Function : hb_paint_extents_context_t
// Namespace: hb_paint_extents_context_t
// Entry    : 004649f0
// Prototype: undefined hb_paint_extents_context_t(hb_paint_extents_context_t * this)
// Body     : 004649f0 - 00464bcb


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_paint_extents_context_t::hb_paint_extents_context_t() */

void __thiscall
hb_paint_extents_context_t::hb_paint_extents_context_t(hb_paint_extents_context_t *this)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  puVar3 = malloc(0xc0);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined4 *)this = 0xffffffff;
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90 = 0;
    uVar8 = *(uint *)(this + 0x10);
    if (-1 < (int)uVar8) {
      uVar5 = *(int *)(this + 0x14) + 1;
      goto LAB_00464a46;
    }
LAB_00464b2d:
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90 = DAT_0071cd90 & 0xffffffff00000000;
    uVar8 = 0;
    uVar6 = 1;
    uVar5 = uVar8;
  }
  else {
    *(undefined8 **)(this + 8) = puVar3;
    *(undefined1 **)this = &DAT_100000008;
    uVar2 = _UNK_005dd408;
    *puVar3 = _DAT_005dd400;
    puVar3[1] = uVar2;
    puVar3[2] = 0;
    uVar8 = 0;
    uVar5 = 1;
LAB_00464a46:
    uVar7 = (ulong)uVar8;
    do {
      uVar6 = (uint)uVar7 + ((uint)uVar7 >> 1) + 8;
      uVar7 = (ulong)uVar6;
    } while (uVar6 < uVar5);
    if (0xccccccc < uVar6) {
LAB_00464b27:
      *(uint *)(this + 0x10) = ~uVar8;
      goto LAB_00464b2d;
    }
    pvVar4 = malloc(uVar7 * 0x14);
    if (pvVar4 == (void *)0x0) {
      uVar8 = *(uint *)(this + 0x10);
      goto LAB_00464b27;
    }
    *(void **)(this + 0x18) = pvVar4;
    *(uint *)(this + 0x10) = uVar6;
    uVar8 = *(uint *)(this + 0x14);
    *(uint *)(this + 0x14) = uVar8 + 1;
    *(undefined4 *)((long)pvVar4 + (ulong)uVar8 * 0x14) = 0;
    uVar2 = _UNK_005de1f8;
    puVar3 = (undefined8 *)((long)pvVar4 + (ulong)uVar8 * 0x14 + 4);
    *puVar3 = _DAT_005de1f0;
    puVar3[1] = uVar2;
    uVar8 = *(uint *)(this + 0x20);
    if (*(int *)(this + 0x24) < (int)uVar8) goto LAB_00464aca;
    if ((int)uVar8 < 0) goto LAB_00464b9e;
    uVar6 = *(int *)(this + 0x24) + 1;
    uVar5 = uVar8;
    if (uVar6 <= uVar8) goto LAB_00464aca;
  }
  do {
    uVar8 = uVar8 + (uVar8 >> 1) + 8;
  } while (uVar8 < uVar6);
  if (0xccccccc < uVar8) {
LAB_00464b98:
    *(uint *)(this + 0x20) = ~uVar5;
LAB_00464b9e:
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    DAT_0071cd90 = DAT_0071cd90 & 0xffffffff00000000;
    return;
  }
  if (uVar8 == 0) {
    free(*(void **)(this + 0x28));
    pvVar4 = (void *)0x0;
  }
  else {
    pvVar4 = realloc(*(void **)(this + 0x28),(ulong)uVar8 * 0x14);
    if (pvVar4 == (void *)0x0) {
      uVar5 = *(uint *)(this + 0x20);
      if (uVar8 <= uVar5) goto LAB_00464aca;
      goto LAB_00464b98;
    }
  }
  *(void **)(this + 0x28) = pvVar4;
  *(uint *)(this + 0x20) = uVar8;
LAB_00464aca:
  lVar1 = *(long *)(this + 0x28);
  uVar8 = *(uint *)(this + 0x24);
  *(uint *)(this + 0x24) = uVar8 + 1;
  *(undefined4 *)(lVar1 + (ulong)uVar8 * 0x14) = 2;
  uVar2 = _UNK_005de1f8;
  puVar3 = (undefined8 *)(lVar1 + 4 + (ulong)uVar8 * 0x14);
  *puVar3 = _DAT_005de1f0;
  puVar3[1] = uVar2;
  return;
}


