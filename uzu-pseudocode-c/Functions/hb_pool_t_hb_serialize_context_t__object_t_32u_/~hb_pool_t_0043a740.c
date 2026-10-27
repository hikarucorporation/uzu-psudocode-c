// Function : ~hb_pool_t
// Namespace: hb_pool_t_hb_serialize_context_t__object_t_32u_
// Entry    : 0043a740
// Prototype: undefined ~hb_pool_t(hb_pool_t<hb_serialize_context_t::object_t,32u> * this)
// Body     : 0043a740 - 0043a7aa


/* hb_pool_t<hb_serialize_context_t::object_t, 32u>::~hb_pool_t() */

void __thiscall
hb_pool_t<hb_serialize_context_t::object_t,32u>::~hb_pool_t
          (hb_pool_t<hb_serialize_context_t::object_t,32u> *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 != 0) {
    lVar2 = *(long *)(this + 0x10);
    lVar3 = 0;
    do {
      free(*(void **)(lVar2 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (iVar1 != (int)lVar3);
  }
  if (*(int *)(this + 8) != 0) {
    *(undefined4 *)(this + 0xc) = 0;
    free(*(void **)(this + 0x10));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


