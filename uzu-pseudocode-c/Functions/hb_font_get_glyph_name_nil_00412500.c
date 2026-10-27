// Function : hb_font_get_glyph_name_nil
// Namespace: 
// Entry    : 00412500
// Prototype: undefined8 hb_font_get_glyph_name_nil(void)
// Body     : 00412500 - 0041250a


/* hb_font_get_glyph_name_nil(hb_font_t*, void*, unsigned int, char*, unsigned int, void*) */

undefined8 hb_font_get_glyph_name_nil(void)

{
  undefined1 *in_RCX;
  int in_R8D;
  
  if (in_R8D != 0) {
    *in_RCX = 0;
  }
  return 0;
}


