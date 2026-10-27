// Function : ~hb_vector_t
// Namespace: hb_vector_t_hb_pair_t_int_int__false_
// Entry    : 0043e710
// Prototype: undefined ~hb_vector_t(hb_vector_t<hb_pair_t<int,int>,false> * this)
// Body     : 0043e710 - 0043e730


/* hb_vector_t<hb_pair_t<int, int>, false>::~hb_vector_t() */

void __thiscall
hb_vector_t<hb_pair_t<int,int>,false>::~hb_vector_t(hb_vector_t<hb_pair_t<int,int>,false> *this)

{
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  return;
}


