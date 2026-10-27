// Function : ~hb_vector_t
// Namespace: hb_vector_t_hb_ot_name_entry_t_false_
// Entry    : 0043edf0
// Prototype: undefined ~hb_vector_t(hb_vector_t<hb_ot_name_entry_t,false> * this)
// Body     : 0043edf0 - 0043ee10


/* hb_vector_t<hb_ot_name_entry_t, false>::~hb_vector_t() */

void __thiscall
hb_vector_t<hb_ot_name_entry_t,false>::~hb_vector_t(hb_vector_t<hb_ot_name_entry_t,false> *this)

{
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


