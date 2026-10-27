// Function : ~accelerator_t
// Namespace: OT:hmtxvmtx_OT__vmtx_OT__vhea_OT__VVAR_:accelerator_t
// Entry    : 0043dfe0
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 0043dfe0 - 0043e0af


/* OT::hmtxvmtx<OT::vmtx, OT::vhea, OT::VVAR>::accelerator_t::~accelerator_t() */

void __thiscall
OT::hmtxvmtx<OT::vmtx,OT::vhea,OT::VVAR>::accelerator_t::~accelerator_t(accelerator_t *this)

{
  int *piVar1;
  pthread_mutex_t *ppVar2;
  
  piVar1 = *(int **)(this + 0x18);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *piVar1 = -0xdead;
      ppVar2 = *(pthread_mutex_t **)(piVar1 + 2);
      if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043e012 to 0043e019 has its CatchHandler @ 0043e0c0 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      if (*(code **)(piVar1 + 10) != (code *)0x0) {
                    /* try { // try from 0043e037 to 0043e038 has its CatchHandler @ 0043e0b8 */
        (**(code **)(piVar1 + 10))(*(undefined8 *)(piVar1 + 8));
      }
      free(piVar1);
    }
  }
  *(undefined8 *)(this + 0x18) = 0;
  piVar1 = *(int **)(this + 0x20);
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      *piVar1 = -0xdead;
      ppVar2 = *(pthread_mutex_t **)(piVar1 + 2);
      if (ppVar2 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0043e073 to 0043e07a has its CatchHandler @ 0043e0c0 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      if (*(code **)(piVar1 + 10) != (code *)0x0) {
                    /* try { // try from 0043e098 to 0043e099 has its CatchHandler @ 0043e0b0 */
        (**(code **)(piVar1 + 10))(*(undefined8 *)(piVar1 + 8));
      }
      free(piVar1);
    }
  }
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


