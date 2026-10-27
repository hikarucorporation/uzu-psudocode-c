// Function : _fini
// Namespace: OT:cff1:accelerator_templ_t_CFF__cff1_private_dict_opset_t_CFF__cff1_private_dict_values_base_t_CF~c1ca8b38
// Entry    : 0043ea90
// Prototype: undefined _fini(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>> * this)
// Body     : 0043ea90 - 0043eca4


/* OT::cff1::accelerator_templ_t<CFF::cff1_private_dict_opset_t,
   CFF::cff1_private_dict_values_base_t<CFF::dict_val_t> >::_fini() */

void __thiscall
OT::cff1::
accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
::_fini(accelerator_templ_t<CFF::cff1_private_dict_opset_t,CFF::cff1_private_dict_values_base_t<CFF::dict_val_t>>
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
                    /* try { // try from 0043eaea to 0043eaeb has its CatchHandler @ 0043ecad */
        (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
      }
      free(piVar2);
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (*(int *)(this + 0xa0) != 0) {
    *(undefined4 *)(this + 0xa4) = 0;
    free(*(void **)(this + 0xa8));
  }
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  if (*(int *)(this + 0x108) != 0) {
    uVar4 = (ulong)*(uint *)(this + 0x10c);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(long *)(this + 0x110) + uVar4 * 0x28 + -0x20);
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
    *(undefined4 *)(this + 0x10c) = 0;
    free(*(void **)(this + 0x110));
  }
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  if (*(int *)(this + 0x118) != 0) {
    uVar4 = (ulong)*(uint *)(this + 0x11c);
    if (uVar4 != 0) {
      piVar2 = (int *)(*(long *)(this + 0x120) + uVar4 * 0x28 + -0x20);
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
    *(undefined4 *)(this + 0x11c) = 0;
    free(*(void **)(this + 0x120));
  }
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
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
                    /* try { // try from 0043ec87 to 0043ec88 has its CatchHandler @ 0043eca5 */
        (**(code **)(piVar2 + 10))(*(undefined8 *)(piVar2 + 8));
      }
      free(piVar2);
    }
  }
  *(undefined8 *)(this + 0x40) = 0;
  return;
}


