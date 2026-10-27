// Function : free_static_paint_extents_funcs
// Namespace: 
// Entry    : 0046c150
// Prototype: undefined free_static_paint_extents_funcs(void)
// Body     : 0046c150 - 0046c17d


/* WARNING: Removing unreachable block (ram,0x0046c161) */
/* free_static_paint_extents_funcs() */

void free_static_paint_extents_funcs(void)

{
  int *piVar1;
  
  piVar1 = static_paint_extents_funcs;
  if (static_paint_extents_funcs != (int *)0x0) {
    LOCK();
    static_paint_extents_funcs = (int *)0x0;
    UNLOCK();
    if (piVar1 != (int *)&_hb_Null_hb_paint_funcs_t) {
      hb_paint_funcs_destroy(piVar1);
      return;
    }
  }
  return;
}


