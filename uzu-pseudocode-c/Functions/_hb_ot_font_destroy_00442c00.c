// Function : _hb_ot_font_destroy
// Namespace: 
// Entry    : 00442c00
// Prototype: undefined _hb_ot_font_destroy(void * param_1)
// Body     : 00442c00 - 00442c15


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _hb_ot_font_destroy(void*) */

void __cdecl _hb_ot_font_destroy(void *param_1)

{
  free(*(void **)((long)param_1 + 0x18));
  free(param_1);
  return;
}


