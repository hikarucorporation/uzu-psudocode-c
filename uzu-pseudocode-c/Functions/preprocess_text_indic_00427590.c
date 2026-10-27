// Function : preprocess_text_indic
// Namespace: 
// Entry    : 00427590
// Prototype: undefined preprocess_text_indic(long param_1, hb_buffer_t * param_2)
// Body     : 00427590 - 004275a5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* preprocess_text_indic(hb_ot_shape_plan_t const*, hb_buffer_t*, hb_font_t*) */

void __cdecl preprocess_text_indic(long param_1,hb_buffer_t *param_2)

{
  if (*(char *)(*(long *)(param_1 + 0x88) + 9) == '\0') {
    _hb_preprocess_text_vowel_constraints(param_2);
    return;
  }
  return;
}


