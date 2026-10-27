// Function : push
// Namespace: hb_vector_t_hb_ot_map_builder_t__stage_info_t_false_
// Entry    : 0041d2c0
// Prototype: undefined8 * push(hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> * this)
// Body     : 0041d2c0 - 0041d384


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<hb_ot_map_builder_t::stage_info_t, false>::push() */

undefined8 * __thiscall
hb_vector_t<hb_ot_map_builder_t::stage_info_t,false>::push
          (hb_vector_t<hb_ot_map_builder_t::stage_info_t,false> *this)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  undefined8 *puVar5;
  
  uVar2 = *(uint *)this;
  uVar4 = *(int *)(this + 4) + 1;
  if ((int)uVar4 < 0) {
    uVar4 = 0;
  }
  if ((int)uVar2 < 0) {
LAB_0041d35f:
    _hb_CrapPool = 0;
    _DAT_0071cd88 = 0;
    puVar5 = &_hb_CrapPool;
  }
  else {
    if (uVar2 < uVar4) {
      uVar1 = uVar2;
      do {
        uVar1 = uVar1 + (uVar1 >> 1) + 8;
      } while (uVar1 < uVar4);
      if (0xfffffff < uVar1) {
LAB_0041d35a:
        *(uint *)this = ~uVar2;
        goto LAB_0041d35f;
      }
      if (uVar1 == 0) {
        free(*(void **)(this + 8));
        pvVar3 = (void *)0x0;
      }
      else {
        pvVar3 = realloc(*(void **)(this + 8),(ulong)uVar1 << 4);
        if (pvVar3 == (void *)0x0) {
          uVar2 = *(uint *)this;
          if (uVar1 <= uVar2) goto LAB_0041d2e1;
          goto LAB_0041d35a;
        }
      }
      *(void **)(this + 8) = pvVar3;
      *(uint *)this = uVar1;
    }
LAB_0041d2e1:
    uVar2 = *(uint *)(this + 4);
    if ((uVar2 < uVar4) && (uVar1 = (uVar4 - uVar2) * 0x10, uVar1 != 0)) {
      memset((void *)((ulong)uVar2 * 0x10 + *(long *)(this + 8)),0,(ulong)uVar1);
    }
    *(uint *)(this + 4) = uVar4;
    puVar5 = (undefined8 *)((ulong)(uVar4 - 1) * 0x10 + *(long *)(this + 8));
  }
  return puVar5;
}


