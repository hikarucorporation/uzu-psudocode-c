// Function : free_static_ot_funcs
// Namespace: 
// Entry    : 00449df0
// Prototype: undefined free_static_ot_funcs(void)
// Body     : 00449df0 - 00449e1d


/* WARNING: Removing unreachable block (ram,0x00449e01) */
/* free_static_ot_funcs() */

void free_static_ot_funcs(void)

{
  int *piVar1;
  
  piVar1 = static_ot_funcs;
  if (static_ot_funcs != (int *)0x0) {
    LOCK();
    static_ot_funcs = (int *)0x0;
    UNLOCK();
    if (piVar1 != &_hb_font_funcs_default) {
      hb_font_funcs_destroy(piVar1);
      return;
    }
  }
  return;
}


