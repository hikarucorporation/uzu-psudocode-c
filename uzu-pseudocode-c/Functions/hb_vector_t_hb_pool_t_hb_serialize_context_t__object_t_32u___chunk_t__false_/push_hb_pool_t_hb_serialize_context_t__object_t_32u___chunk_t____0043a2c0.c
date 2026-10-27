// Function : push<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*&>
// Namespace: hb_vector_t_hb_pool_t_hb_serialize_context_t__object_t_32u___chunk_t__false_
// Entry    : 0043a2c0
// Prototype: chunk_t * * push<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*&>(hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false> * this, undefined8 * param_1)
// Body     : 0043a2c0 - 0043a35b


/* hb_pool_t<hb_serialize_context_t::object_t, 32u>::chunk_t**
   hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t, 32u>::chunk_t*,
   false>::push<hb_pool_t<hb_serialize_context_t::object_t,
   32u>::chunk_t*&>(hb_pool_t<hb_serialize_context_t::object_t, 32u>::chunk_t*&) */

chunk_t ** __thiscall
hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>::
push<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*&>
          (hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false> *this,
          undefined8 *param_1)

{
  chunk_t **ppcVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar2 = *(uint *)this;
  if (*(int *)(this + 4) < (int)uVar2) goto LAB_0043a2df;
  if ((int)uVar2 < 0) goto LAB_0043a33b;
  uVar4 = *(int *)(this + 4) + 1;
  if (uVar4 <= uVar2) goto LAB_0043a2df;
  uVar5 = uVar2;
  do {
    uVar5 = uVar5 + (uVar5 >> 1) + 8;
  } while (uVar5 < uVar4);
  if (0x1fffffff < uVar5) {
LAB_0043a337:
    uVar2 = ~uVar2;
    *(uint *)this = uVar2;
LAB_0043a33b:
    _hb_CrapPool = 0;
    return (chunk_t **)(ulong)uVar2;
  }
  if (uVar5 == 0) {
    free(*(void **)(this + 8));
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = realloc(*(void **)(this + 8),(ulong)uVar5 << 3);
    if (pvVar3 == (void *)0x0) {
      uVar2 = *(uint *)this;
      if (uVar5 <= uVar2) goto LAB_0043a2df;
      goto LAB_0043a337;
    }
  }
  *(void **)(this + 8) = pvVar3;
  *(uint *)this = uVar5;
LAB_0043a2df:
  ppcVar1 = *(chunk_t ***)(this + 8);
  uVar2 = *(uint *)(this + 4);
  *(uint *)(this + 4) = uVar2 + 1;
  ppcVar1[uVar2] = (chunk_t *)*param_1;
  return ppcVar1;
}


