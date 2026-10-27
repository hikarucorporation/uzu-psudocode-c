// Function : hb_font_get_glyph_extents_nil
// Namespace: 
// Entry    : 004124d0
// Prototype: undefined8 hb_font_get_glyph_extents_nil(void)
// Body     : 004124d0 - 004124d8


/* hb_font_get_glyph_extents_nil(hb_font_t*, void*, unsigned int, hb_glyph_extents_t*, void*) */

undefined8 hb_font_get_glyph_extents_nil(void)

{
  undefined8 *in_RCX;
  
  *in_RCX = 0;
  in_RCX[1] = 0;
  return 0;
}


