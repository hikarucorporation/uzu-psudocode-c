// Function : free_static_outline_recording_pen_funcs
// Namespace: 
// Entry    : 00479450
// Prototype: undefined free_static_outline_recording_pen_funcs(void)
// Body     : 00479450 - 0047947d


/* WARNING: Removing unreachable block (ram,0x00479461) */
/* free_static_outline_recording_pen_funcs() */

void free_static_outline_recording_pen_funcs(void)

{
  int *piVar1;
  
  piVar1 = static_outline_recording_pen_funcs;
  if (static_outline_recording_pen_funcs != (int *)0x0) {
    LOCK();
    static_outline_recording_pen_funcs = (int *)0x0;
    UNLOCK();
    if (piVar1 != (int *)&_hb_Null_hb_draw_funcs_t) {
      hb_draw_funcs_destroy(piVar1);
      return;
    }
  }
  return;
}


