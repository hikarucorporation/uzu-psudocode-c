// Function : ~hb_vector_t
// Namespace: hb_vector_t_unsigned_int_false_
// Entry    : 0043ee20
// Prototype: undefined ~hb_vector_t(hb_vector_t<unsigned_int,false> * this)
// Body     : 0043ee20 - 0043ee40


/* hb_vector_t<unsigned int, false>::~hb_vector_t() */

void __thiscall hb_vector_t<unsigned_int,false>::~hb_vector_t(hb_vector_t<unsigned_int,false> *this)

{
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


