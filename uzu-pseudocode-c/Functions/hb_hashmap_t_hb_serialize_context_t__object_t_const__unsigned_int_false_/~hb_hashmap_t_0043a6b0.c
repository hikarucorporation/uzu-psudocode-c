// Function : ~hb_hashmap_t
// Namespace: hb_hashmap_t_hb_serialize_context_t__object_t_const__unsigned_int_false_
// Entry    : 0043a6b0
// Prototype: undefined ~hb_hashmap_t(hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> * this)
// Body     : 0043a6b0 - 0043a707


/* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::~hb_hashmap_t() */

void __thiscall
hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::~hb_hashmap_t
          (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this)

{
  pthread_mutex_t *__ptr;
  
  *(undefined4 *)this = 0xffff2153;
  __ptr = *(pthread_mutex_t **)(this + 8);
  if (__ptr != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043a6ca to 0043a6d1 has its CatchHandler @ 0043a708 */
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


