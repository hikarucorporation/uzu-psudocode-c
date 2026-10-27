// Function : ~hb_serialize_context_t
// Namespace: hb_serialize_context_t
// Entry    : 00438250
// Prototype: undefined ~hb_serialize_context_t(hb_serialize_context_t * this)
// Body     : 00438250 - 0043832a


/* hb_serialize_context_t::~hb_serialize_context_t() */

void __thiscall hb_serialize_context_t::~hb_serialize_context_t(hb_serialize_context_t *this)

{
  int iVar1;
  pthread_mutex_t *__ptr;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 0043825c to 00438260 has its CatchHandler @ 00438333 */
  fini(this);
  *(undefined4 *)(this + 0x60) = 0xffff2153;
  __ptr = *(pthread_mutex_t **)(this + 0x68);
  if (__ptr != (pthread_mutex_t *)0x0) {
                    /* try { // try from 00438276 to 0043827d has its CatchHandler @ 0043832b */
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &__ptr[1].__data,__ptr);
    free(__ptr);
    *(undefined8 *)(this + 0x68) = 0;
  }
  if (*(void **)(this + 0x88) != (void *)0x0) {
    free(*(void **)(this + 0x88));
    *(undefined8 *)(this + 0x88) = 0;
  }
  *(undefined8 *)(this + 0x74) = 0;
  if (*(int *)(this + 0x50) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  iVar1 = *(int *)(this + 0x3c);
  if (iVar1 != 0) {
    lVar2 = *(long *)(this + 0x40);
    lVar3 = 0;
    do {
      free(*(void **)(lVar2 + lVar3 * 8));
      lVar3 = lVar3 + 1;
    } while (iVar1 != (int)lVar3);
  }
  if (*(int *)(this + 0x38) != 0) {
    *(undefined4 *)(this + 0x3c) = 0;
    free(*(void **)(this + 0x40));
  }
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


