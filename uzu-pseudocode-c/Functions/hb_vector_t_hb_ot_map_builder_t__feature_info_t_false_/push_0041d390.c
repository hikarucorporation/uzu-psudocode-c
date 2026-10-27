// Function : push
// Namespace: hb_vector_t_hb_ot_map_builder_t__feature_info_t_false_
// Entry    : 0041d390
// Prototype: undefined8 * push(hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> * this)
// Body     : 0041d390 - 0041d47a


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_vector_t<hb_ot_map_builder_t::feature_info_t, false>::push() */

undefined8 * __thiscall
hb_vector_t<hb_ot_map_builder_t::feature_info_t,false>::push
          (hb_vector_t<hb_ot_map_builder_t::feature_info_t,false> *this)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(uint *)this;
  uVar3 = *(int *)(this + 4) + 1;
  if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  if ((int)uVar1 < 0) {
    _hb_CrapPool = 0;
    DAT_0071cd88 = 0;
    _DAT_0071cd8c = 0;
    DAT_0071cd90._0_4_ = 0;
    ram0x0071cd94 = 0;
    return &_hb_CrapPool;
  }
  if (uVar1 < uVar3) {
    uVar4 = uVar1;
    do {
      uVar4 = uVar4 + (uVar4 >> 1) + 8;
    } while (uVar4 < uVar3);
    if (0x9249249 < uVar4) {
LAB_0041d445:
      *(uint *)this = ~uVar1;
      DAT_0071cd90._0_4_ = 0;
      ram0x0071cd94 = 0;
      _hb_CrapPool = 0;
      DAT_0071cd88 = 0;
      _DAT_0071cd8c = 0;
      return &_hb_CrapPool;
    }
    if (uVar4 == 0) {
      free(*(void **)(this + 8));
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(*(void **)(this + 8),(ulong)uVar4 * 0x1c);
      if (pvVar2 == (void *)0x0) {
        uVar1 = *(uint *)this;
        if (uVar4 <= uVar1) goto LAB_0041d3b1;
        goto LAB_0041d445;
      }
    }
    *(void **)(this + 8) = pvVar2;
    *(uint *)this = uVar4;
  }
LAB_0041d3b1:
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 < uVar3) && (uVar4 = (uVar3 - uVar1) * 0x1c, uVar4 != 0)) {
    memset((void *)((ulong)uVar1 * 0x1c + *(long *)(this + 8)),0,(ulong)uVar4);
  }
  *(uint *)(this + 4) = uVar3;
  return (undefined8 *)((ulong)(uVar3 - 1) * 0x1c + *(long *)(this + 8));
}


