// Function : push<OT::Layout::GSUB_impl::SubstLookup>
// Namespace: hb_serialize_context_t
// Entry    : 004379a0
// Prototype: undefined8 push<OT::Layout::GSUB_impl::SubstLookup>(hb_serialize_context_t * this)
// Body     : 004379a0 - 00437a52


/* OT::Layout::GSUB_impl::SubstLookup*
   hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookup>() */

undefined8 __thiscall
hb_serialize_context_t::push<OT::Layout::GSUB_impl::SubstLookup>(hb_serialize_context_t *this)

{
  undefined8 uVar1;
  ulong uVar2;
  chunk_t *pcVar3;
  chunk_t *local_20;
  
  if (*(int *)(this + 0x2c) != 0) goto LAB_004379eb;
  pcVar3 = *(chunk_t **)(this + 0x30);
  if (pcVar3 == (chunk_t *)0x0) {
    uVar2 = hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>::alloc
                      ((uint *)(this + 0x38),*(int *)(this + 0x3c) + 1);
    if ((char)uVar2 != '\0') {
      pcVar3 = malloc(0x700);
      if (pcVar3 != (chunk_t *)0x0) {
        local_20 = pcVar3;
        hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false>::
        push<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*&>
                  ((hb_vector_t<hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t*,false> *)
                   (this + 0x38),&local_20);
        pcVar3 = hb_pool_t<hb_serialize_context_t::object_t,32u>::chunk_t::thread(pcVar3);
        *(chunk_t **)(this + 0x30) = pcVar3;
        goto LAB_004379bb;
      }
    }
    if (*(int *)(this + 0x2c) == 0) {
      *(undefined4 *)(this + 0x2c) = 1;
    }
  }
  else {
LAB_004379bb:
    *(undefined8 *)(this + 0x30) = *(undefined8 *)pcVar3;
    *(undefined8 *)(pcVar3 + 0x20) = 0;
    *(undefined8 *)(pcVar3 + 0x28) = 0;
    *(undefined8 *)(pcVar3 + 0x10) = 0;
    *(undefined8 *)(pcVar3 + 0x18) = 0;
    *(undefined8 *)pcVar3 = 0;
    *(undefined8 *)(pcVar3 + 8) = 0;
    *(undefined8 *)(pcVar3 + 0x30) = 0;
    uVar1 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)pcVar3 = *(undefined8 *)(this + 8);
    *(undefined8 *)(pcVar3 + 8) = uVar1;
    *(undefined8 *)(pcVar3 + 0x30) = *(undefined8 *)(this + 0x48);
    *(chunk_t **)(this + 0x48) = pcVar3;
  }
LAB_004379eb:
  return *(undefined8 *)(this + 8);
}


