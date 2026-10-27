// Function : ~hb_paint_context_t
// Namespace: OT:hb_paint_context_t
// Entry    : 004683a0
// Prototype: undefined ~hb_paint_context_t(hb_paint_context_t * this)
// Body     : 004683a0 - 00468448


/* OT::hb_paint_context_t::~hb_paint_context_t() */

void __thiscall OT::hb_paint_context_t::~hb_paint_context_t(hb_paint_context_t *this)

{
  pthread_mutex_t *ppVar1;
  
  *(undefined4 *)(this + 0x68) = 0xffff2153;
  ppVar1 = *(pthread_mutex_t **)(this + 0x70);
  if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 004683bb to 004683c2 has its CatchHandler @ 00468451 */
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &ppVar1[1].__data,ppVar1);
    free(ppVar1);
    *(undefined8 *)(this + 0x70) = 0;
  }
  if (*(void **)(this + 0x90) != (void *)0x0) {
    free(*(void **)(this + 0x90));
    *(undefined8 *)(this + 0x90) = 0;
  }
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x38) = 0xffff2153;
  ppVar1 = *(pthread_mutex_t **)(this + 0x40);
  if (ppVar1 != (pthread_mutex_t *)0x0) {
                    /* try { // try from 0046840b to 00468412 has its CatchHandler @ 00468449 */
    hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t>::fini
              ((hb_lockable_set_t<hb_user_data_array_t::hb_user_data_item_t,hb_mutex_t> *)
               &ppVar1[1].__data,ppVar1);
    free(ppVar1);
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (*(void **)(this + 0x60) != (void *)0x0) {
    free(*(void **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
  }
  *(undefined8 *)(this + 0x4c) = 0;
  return;
}


