// Function : free_static_draw_extents_funcs
// Namespace: 
// Entry    : 0046ca10
// Prototype: undefined free_static_draw_extents_funcs(void)
// Body     : 0046ca10 - 0046ca3d


/* WARNING: Removing unreachable block (ram,0x0046ca21) */
/* free_static_draw_extents_funcs() */

void free_static_draw_extents_funcs(void)

{
  int *piVar1;
  
  piVar1 = static_draw_extents_funcs;
  if (static_draw_extents_funcs != (int *)0x0) {
    LOCK();
    static_draw_extents_funcs = (int *)0x0;
    UNLOCK();
    if (piVar1 != (int *)&_hb_Null_hb_draw_funcs_t) {
      hb_draw_funcs_destroy(piVar1);
      return;
    }
  }
  return;
}


