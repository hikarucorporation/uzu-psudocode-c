// Function : fini
// Namespace: hb_lockable_set_t_hb_user_data_array_t__hb_user_data_item_t_hb_mutex_t_
// Entry    : 003d0650
// Prototype: undefined fini(hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> * this, pthread_mutex_t * param_1)
// Body     : 003d0650 - 003d0716


/* hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t, hb_mutex_t>::fini(hb_mutex_t&) */

void __thiscall
hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
          (hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *this,
          pthread_mutex_t *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(this + 4) == 0) {
    if (*(int *)this != 0) {
      *(undefined4 *)(this + 4) = 0;
      free(*(void **)(this + 8));
    }
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  while( true ) {
    iVar3 = pthread_mutex_lock(param_1);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
    }
    if (*(int *)(this + 4) == 0) break;
    uVar4 = *(int *)(this + 4) - 1;
    uVar1 = *(undefined8 *)(*(long *)(this + 8) + 8 + (ulong)uVar4 * 0x18);
    pcVar2 = *(code **)(*(long *)(this + 8) + 0x10 + (ulong)uVar4 * 0x18);
    *(uint *)(this + 4) = uVar4;
    pthread_mutex_unlock(param_1);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar1);
    }
  }
  if (*(int *)this != 0) {
    *(undefined4 *)(this + 4) = 0;
    free(*(void **)(this + 8));
  }
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  pthread_mutex_unlock(param_1);
  return;
}


