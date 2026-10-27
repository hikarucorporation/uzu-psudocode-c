// Function : free_static_ucd_funcs
// Namespace: 
// Entry    : 0043c160
// Prototype: undefined free_static_ucd_funcs(void)
// Body     : 0043c160 - 0043c18d


/* WARNING: Removing unreachable block (ram,0x0043c171) */
/* free_static_ucd_funcs() */

void free_static_ucd_funcs(void)

{
  int *piVar1;
  
  piVar1 = static_ucd_funcs;
  if (static_ucd_funcs != (int *)0x0) {
    LOCK();
    static_ucd_funcs = (int *)0x0;
    UNLOCK();
    if (piVar1 != &_hb_Null_hb_unicode_funcs_t) {
      hb_unicode_funcs_destroy(piVar1);
      return;
    }
  }
  return;
}


