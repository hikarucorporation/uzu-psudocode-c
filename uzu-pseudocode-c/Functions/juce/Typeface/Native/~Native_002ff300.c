// Function : ~Native
// Namespace: juce:Typeface:Native
// Entry    : 002ff300
// Prototype: undefined ~Native(Native * this)
// Body     : 002ff300 - 002ff3ab


/* juce::Typeface::Native::~Native() */

void __thiscall juce::Typeface::Native::~Native(Native *this)

{
  Native *pNVar1;
  Native *pNVar2;
  
  if (*(void **)(this + 200) != (void *)0x0) {
    operator_delete(*(void **)(this + 200));
  }
  *(undefined8 *)(this + 200) = 0;
  pNVar2 = *(Native **)(this + 0xa8);
  while (pNVar2 != this + 0xa8) {
    pNVar1 = *(Native **)pNVar2;
    operator_delete(pNVar2);
    pNVar2 = pNVar1;
  }
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::Pair>,std::_Select1st<std::pair<unsigned_int_const,juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::Pair>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x88));
  if (*(void **)(this + 0x70) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x70));
  }
  *(undefined8 *)(this + 0x70) = 0;
  pNVar2 = *(Native **)(this + 0x50);
  while (pNVar2 != this + 0x50) {
    pNVar1 = *(Native **)pNVar2;
    operator_delete(pNVar2);
    pNVar2 = pNVar1;
  }
  std::
  _Rb_tree<std::tuple<float,float>,std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>,std::_Select1st<std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>>,std::less<std::tuple<float,float>>,std::allocator<std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x30));
  if (*(int **)this != (int *)0x0) {
                    /* try { // try from 002ff3a1 to 002ff3a5 has its CatchHandler @ 002ff3ac */
    hb_font_destroy(*(int **)this);
  }
  return;
}


