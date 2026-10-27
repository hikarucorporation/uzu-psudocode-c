// Function : hb_blob_create_sub_blob
// Namespace: 
// Entry    : 003f5550
// Prototype: undefined4 * hb_blob_create_sub_blob(int * param_1, uint param_2, uint param_3)
// Body     : 003f5550 - 003f56b2


undefined4 * hb_blob_create_sub_blob(int *param_1,uint param_2,uint param_3)

{
  long lVar1;
  pthread_mutex_t *ppVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (param_1 == (int *)0x0) {
    return &_hb_NullPool;
  }
  if (param_3 == 0) {
    return &_hb_NullPool;
  }
  uVar3 = param_1[6] - param_2;
  if ((uint)param_1[6] < param_2 || uVar3 == 0) {
    return &_hb_NullPool;
  }
  if (param_1[1] != 0) {
    param_1[1] = 0;
  }
  lVar1 = *(long *)(param_1 + 4);
  if (uVar3 < param_3) {
    param_3 = uVar3;
  }
  if (*param_1 != 0) {
    LOCK();
    *param_1 = *param_1 + 1;
    UNLOCK();
  }
  if (param_3 == 0) {
    if (*param_1 == 0) {
      return &_hb_NullPool;
    }
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 != 0) {
      return &_hb_NullPool;
    }
    *param_1 = -0xdead;
    ppVar2 = *(pthread_mutex_t **)(param_1 + 2);
    if (ppVar2 != (pthread_mutex_t *)0x0) {
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                 &ppVar2[1].__data,ppVar2);
      free(ppVar2);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(code **)(param_1 + 10) != (code *)0x0) {
                    /* try { // try from 003f5651 to 003f5652 has its CatchHandler @ 003f56bb */
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
    }
  }
  else {
    if ((-1 < (int)param_3) && (puVar4 = calloc(1,0x30), puVar4 != (undefined4 *)0x0)) {
      *puVar4 = 1;
      puVar4[1] = 1;
      *(undefined8 *)(puVar4 + 2) = 0;
      *(ulong *)(puVar4 + 4) = (ulong)param_2 + lVar1;
      puVar4[6] = param_3;
      puVar4[7] = 1;
      *(int **)(puVar4 + 8) = param_1;
      *(code **)(puVar4 + 10) = _hb_blob_destroy;
      return puVar4;
    }
    if (*param_1 == 0) {
      return &_hb_NullPool;
    }
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 != 0) {
      return &_hb_NullPool;
    }
    *param_1 = -0xdead;
    ppVar2 = *(pthread_mutex_t **)(param_1 + 2);
    if (ppVar2 != (pthread_mutex_t *)0x0) {
      hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                 &ppVar2[1].__data,ppVar2);
      free(ppVar2);
      param_1[2] = 0;
      param_1[3] = 0;
    }
    if (*(code **)(param_1 + 10) != (code *)0x0) {
                    /* try { // try from 003f569b to 003f569c has its CatchHandler @ 003f56b3 */
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
    }
  }
  free(param_1);
  return &_hb_NullPool;
}


