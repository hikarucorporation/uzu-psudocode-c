// Function : ~hb_vector_t
// Namespace: hb_vector_t_hb_serialize_context_t__object_t__false_
// Entry    : 0043a710
// Prototype: undefined ~hb_vector_t(hb_vector_t<hb_serialize_context_t::object_t*,false> * this)
// Body     : 0043a710 - 0043a730


/* hb_vector_t<hb_serialize_context_t::object_t*, false>::~hb_vector_t() */

void __thiscall
hb_vector_t<hb_serialize_context_t::object_t*,false>::~hb_vector_t
          (hb_vector_t<hb_serialize_context_t::object_t*,false> *this)

{
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


