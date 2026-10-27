// Function : push
// Namespace: hb_vector_t_hb_serialize_context_t__object_t__link_t_false_
// Entry    : 00439c20
// Prototype: undefined8 * push(hb_vector_t<hb_serialize_context_t::object_t::link_t,false> * this)
// Body     : 00439c20 - 00439d05


/* hb_vector_t<hb_serialize_context_t::object_t::link_t, false>::push() */

undefined8 * __thiscall
hb_vector_t<hb_serialize_context_t::object_t::link_t,false>::push
          (hb_vector_t<hb_serialize_context_t::object_t::link_t,false> *this)

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
    return &_hb_CrapPool;
  }
  if (uVar1 < uVar3) {
    uVar4 = uVar1;
    do {
      uVar4 = uVar4 + (uVar4 >> 1) + 8;
    } while (uVar4 < uVar3);
    if (0x15555555 < uVar4) {
LAB_00439ccc:
      *(uint *)this = ~uVar1;
      DAT_0071cd88 = 0;
      _hb_CrapPool = 0;
      return &_hb_CrapPool;
    }
    if (uVar4 == 0) {
      free(*(void **)(this + 8));
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = realloc(*(void **)(this + 8),(ulong)uVar4 * 0xc);
      if (pvVar2 == (void *)0x0) {
        uVar1 = *(uint *)this;
        if (uVar4 <= uVar1) goto LAB_00439c41;
        goto LAB_00439ccc;
      }
    }
    *(void **)(this + 8) = pvVar2;
    *(uint *)this = uVar4;
  }
LAB_00439c41:
  uVar1 = *(uint *)(this + 4);
  if ((uVar1 < uVar3) && (uVar4 = (uVar3 - uVar1) * 0xc, uVar4 != 0)) {
    memset((void *)((ulong)uVar1 * 0xc + *(long *)(this + 8)),0,(ulong)uVar4);
  }
  *(uint *)(this + 4) = uVar3;
  return (undefined8 *)((ulong)(uVar3 - 1) * 0xc + *(long *)(this + 8));
}


