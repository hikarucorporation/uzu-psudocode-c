// Function : deallocate_buffer_var
// Namespace: 
// Entry    : 00434f60
// Prototype: undefined8 deallocate_buffer_var(undefined8 param_1, undefined8 param_2, long param_3)
// Body     : 00434f60 - 00434f69


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* deallocate_buffer_var(hb_ot_shape_plan_t const*, hb_font_t*, hb_buffer_t*) */

undefined8 __cdecl deallocate_buffer_var(undefined8 param_1,undefined8 param_2,long param_3)

{
  *(byte *)(param_3 + 0xb8) = *(byte *)(param_3 + 0xb8) & 0x7f;
  return 0;
}


