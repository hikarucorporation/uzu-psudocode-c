// Function : _fini
// Namespace: OT:cff2:accelerator_templ_t_CFF__cff2_private_dict_opset_t_CFF__cff2_private_dict_values_base_t_CF~37b89086
// Entry    : 0043e740
// Prototype: undefined _fini(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>> * this)
// Body     : 0043e740 - 0043e944


/* OT::cff2::accelerator_templ_t<CFF::cff2_private_dict_opset_t,
   CFF::cff2_private_dict_values_base_t<CFF::dict_val_t> >::_fini() */

void __thiscall
OT::cff2::
accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
::_fini(accelerator_templ_t<CFF::cff2_private_dict_opset_t,CFF::cff2_private_dict_values_base_t<CFF::dict_val_t>>
        *this)

{
  pthread_mutex_t *ppVar1;
  int *piVar2;
  uint uVar3;
  ulong uVar4;
  
  piVar2 = *(int **)(this + 0x30);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      *piVar2 = -0xdead;
      ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
      if (ppVar1 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar1[1].__data,ppVar1);
        free(ppVar1);
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043e79a to 0043e79b has its CatchHandler @ 0043e94d */
        (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
      }
      free(piVar2);
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (*(int *)(this + 0x50) != 0) {
    *(undefined4 *)(this + 0x54) = 0;
    free(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  if (*(int *)(this + 0xa0) != 0) {
    uVar4 = (ulong)*(uint *)(this + 0xa4);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(long *)(this + 0xa8) + uVar4 * 0x28 + -0x20);
      do {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar3;
        if (*piVar2 != 0) {
          piVar2[1] = 0;
          free(*(void **)(piVar2 + 2));
        }
        piVar2[0] = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2 = piVar2 + -10;
      } while (uVar3 != 0);
    }
    *(undefined4 *)(this + 0xa4) = 0;
    free(*(void **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  if (*(int *)(this + 0xb0) != 0) {
    uVar4 = (ulong)*(uint *)(this + 0xb4);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(long *)(this + 0xb8) + uVar4 * 0x30 + -0x28);
      do {
        uVar3 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar3;
        if (*piVar2 != 0) {
          piVar2[1] = 0;
          free(*(void **)(piVar2 + 2));
        }
        piVar2[0] = 0;
        piVar2[1] = 0;
        piVar2[2] = 0;
        piVar2[3] = 0;
        piVar2 = piVar2 + -0xc;
      } while (uVar3 != 0);
    }
    *(undefined4 *)(this + 0xb4) = 0;
    free(*(void **)(this + 0xb8));
  }
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  piVar2 = *(int **)(this + 0x40);
  if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      *piVar2 = -0xdead;
      ppVar1 = *(pthread_mutex_t **)(piVar2 + 2);
      if (ppVar1 != (pthread_mutex_t *)0x0) {
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar1[1].__data,ppVar1);
        free(ppVar1);
        piVar2[2] = 0;
        piVar2[3] = 0;
      }
      if (*(code **)(piVar2 + 10) != (code *)0x0) {
                    /* try { // try from 0043e927 to 0043e928 has its CatchHandler @ 0043e945 */
        (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
      }
      free(piVar2);
    }
  }
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


