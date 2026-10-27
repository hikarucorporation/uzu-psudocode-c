// Function : fini
// Namespace: hb_serialize_context_t:object_t
// Entry    : 0043a7b0
// Prototype: undefined fini(object_t * this)
// Body     : 0043a7b0 - 0043a800


/* hb_serialize_context_t::object_t::fini() */

void __thiscall hb_serialize_context_t::object_t::fini(object_t *this)

{
  if (*(int *)(this + 0x10) != 0) {
    *(undefined4 *)(this + 0x14) = 0;
    free(*(void **)(this + 0x18));
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  if (*(int *)(this + 0x20) != 0) {
    *(undefined4 *)(this + 0x24) = 0;
    free(*(void **)(this + 0x28));
  }
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


