// Function : ~hb_hashmap_t
// Namespace: hb_hashmap_t_unsigned_int_unsigned_int_true_
// Entry    : 004604a0
// Prototype: undefined ~hb_hashmap_t(hb_hashmap_t<unsigned_int,unsigned_int,true> * this)
// Body     : 004604a0 - 004604f7


/* hb_hashmap_t<unsigned int, unsigned int, true>::~hb_hashmap_t() */

void __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::~hb_hashmap_t
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this)

{
  pthread_mutex_t *__ptr;
  
  *(undefined4 *)this = 0xffff2153;
  __ptr = *(pthread_mutex_t **)(this + 8);
  if (__ptr != (pthread_mutex_t *)0x0) {
                    /* try { // try from 004604ba to 004604c1 has its CatchHandler @ 004604f8 */
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &__ptr[1].__data,__ptr);
    free(__ptr);
    *(undefined8 *)(this + 8) = 0;
  }
  if (*(void **)(this + 0x28) != (void *)0x0) {
    free(*(void **)(this + 0x28));
    *(undefined8 *)(this + 0x28) = 0;
  }
  *(undefined8 *)(this + 0x14) = 0;
  return;
}


