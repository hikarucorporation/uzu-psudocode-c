// Function : fini
// Namespace: hb_serialize_context_t
// Entry    : 0043a520
// Prototype: undefined fini(hb_serialize_context_t * this)
// Body     : 0043a520 - 0043a6a3


/* hb_serialize_context_t::fini() */

void __thiscall hb_serialize_context_t::fini(hb_serialize_context_t *this)

{
  long lVar1;
  long lVar2;
  pthread_mutex_t *__ptr;
  uint uVar3;
  long lVar4;
  hb_serialize_context_t *local_38;
  
  uVar3 = *(int *)(this + 0x54) - 1;
  if ((*(int *)(this + 0x54) != 0) && (uVar3 != 0)) {
    lVar1 = *(long *)(this + 0x58);
    lVar4 = 0;
    do {
      lVar2 = *(long *)(lVar1 + 8 + lVar4);
      if (*(int *)(lVar2 + 0x10) != 0) {
        *(undefined4 *)(lVar2 + 0x14) = 0;
        free(*(void **)(lVar2 + 0x18));
      }
      *(undefined8 *)(lVar2 + 0x10) = 0;
      *(undefined8 *)(lVar2 + 0x18) = 0;
      if (*(int *)(lVar2 + 0x20) != 0) {
        *(undefined4 *)(lVar2 + 0x24) = 0;
        free(*(void **)(lVar2 + 0x28));
      }
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      lVar4 = lVar4 + 8;
    } while ((ulong)uVar3 * 8 != lVar4);
  }
  local_38 = this + 0x50;
  if (*(int *)local_38 != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)local_38 = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0xffff2153;
  __ptr = *(pthread_mutex_t **)(this + 0x68);
  if (__ptr != (pthread_mutex_t *)0x0) {
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
  while (lVar1 = *(long *)(this + 0x48), lVar1 != 0) {
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(lVar1 + 0x30);
    if (*(int *)(lVar1 + 0x10) != 0) {
      *(undefined4 *)(lVar1 + 0x14) = 0;
      free(*(void **)(lVar1 + 0x18));
    }
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    if (*(int *)(lVar1 + 0x20) != 0) {
      *(undefined4 *)(lVar1 + 0x24) = 0;
      free(*(void **)(lVar1 + 0x28));
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
  }
  return;
}


