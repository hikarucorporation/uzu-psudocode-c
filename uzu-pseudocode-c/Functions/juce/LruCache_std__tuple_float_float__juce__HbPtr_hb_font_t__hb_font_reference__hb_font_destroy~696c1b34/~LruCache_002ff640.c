// Function : ~LruCache
// Namespace: juce:LruCache_std__tuple_float_float__juce__HbPtr_hb_font_t__hb_font_reference__hb_font_destroy~696c1b34
// Entry    : 002ff640
// Prototype: undefined ~LruCache(LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul> * this)
// Body     : 002ff640 - 002ff68d


/* juce::LruCache<std::tuple<float, float>, juce::HbPtr<hb_font_t, &hb_font_reference,
   &hb_font_destroy>, 128ul>::~LruCache() */

void __thiscall
juce::
LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::
~LruCache(LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>
          *this)

{
  LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>
  *pLVar1;
  LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>
  *pLVar2;
  
  if (*(void **)(this + 0x50) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x50));
  }
  *(undefined8 *)(this + 0x50) = 0;
  pLVar2 = *(LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>
             **)(this + 0x30);
  while (pLVar2 != this + 0x30) {
    pLVar1 = *(LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>
               **)pLVar2;
    operator_delete(pLVar2);
    pLVar2 = pLVar1;
  }
  std::
  _Rb_tree<std::tuple<float,float>,std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>,std::_Select1st<std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>>,std::less<std::tuple<float,float>>,std::allocator<std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x10));
  return;
}


