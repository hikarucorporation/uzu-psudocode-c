// Function : ~accelerator_t
// Namespace: OT:hmtxvmtx_OT__hmtx_OT__hhea_OT__HVAR_:accelerator_t
// Entry    : 0043de30
// Prototype: undefined ~accelerator_t(accelerator_t * this)
// Body     : 0043de30 - 0043deff


/* OT::hmtxvmtx<OT::hmtx, OT::hhea, OT::HVAR>::accelerator_t::~accelerator_t() */

void __thiscall
OT::hmtxvmtx<OT::hmtx,OT::hhea,OT::HVAR>::accelerator_t::~accelerator_t(accelerator_t *this)

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
                    /* try { // try from 0043de62 to 0043de69 has its CatchHandler @ 0043df10 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      if (*(code **)(piVar1 + 10) != (code *)0x0) {
                    /* try { // try from 0043de87 to 0043de88 has its CatchHandler @ 0043df08 */
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
                    /* try { // try from 0043dec3 to 0043deca has its CatchHandler @ 0043df10 */
        hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
                  ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
                   &ppVar2[1].__data,ppVar2);
        free(ppVar2);
        piVar1[2] = 0;
        piVar1[3] = 0;
      }
      if (*(code **)(piVar1 + 10) != (code *)0x0) {
                    /* try { // try from 0043dee8 to 0043dee9 has its CatchHandler @ 0043df00 */
        (**(code **)(piVar1 + 10))(*(undefined8 *)(piVar1 + 8));
      }
      free(piVar1);
    }
  }
  *(undefined8 *)(this + 0x20) = 0;
  return;
}


