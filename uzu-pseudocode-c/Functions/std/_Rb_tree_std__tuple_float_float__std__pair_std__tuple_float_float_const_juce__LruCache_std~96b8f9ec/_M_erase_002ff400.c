// Function : _M_erase
// Namespace: std:_Rb_tree_std__tuple_float_float__std__pair_std__tuple_float_float_const_juce__LruCache_std~96b8f9ec
// Entry    : 002ff400
// Prototype: undefined _M_erase(void * param_1)
// Body     : 002ff400 - 002ff444


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<std::tuple<float, float>, std::pair<std::tuple<float, float> const,
   juce::LruCache<std::tuple<float, float>, juce::HbPtr<hb_font_t, &hb_font_reference,
   &hb_font_destroy>, 128ul>::Pair>, std::_Select1st<std::pair<std::tuple<float, float> const,
   juce::LruCache<std::tuple<float, float>, juce::HbPtr<hb_font_t, &hb_font_reference,
   &hb_font_destroy>, 128ul>::Pair> >, std::less<std::tuple<float, float> >,
   std::allocator<std::pair<std::tuple<float, float> const, juce::LruCache<std::tuple<float, float>,
   juce::HbPtr<hb_font_t, &hb_font_reference, &hb_font_destroy>, 128ul>::Pair> >
   >::_M_erase(std::_Rb_tree_node<std::pair<std::tuple<float, float> const,
   juce::LruCache<std::tuple<float, float>, juce::HbPtr<hb_font_t, &hb_font_reference,
   &hb_font_destroy>, 128ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<std::tuple<float,float>,std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>,std::_Select1st<std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>>,std::less<std::tuple<float,float>>,std::allocator<std::pair<std::tuple<float,float>const,juce::LruCache<std::tuple<float,float>,juce::HbPtr<hb_font_t,&hb_font_reference,&hb_font_destroy>,128ul>::Pair>>>
::_M_erase(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      if (*(int **)((long)param_1 + 0x28) != (int *)0x0) {
                    /* try { // try from 002ff436 to 002ff43a has its CatchHandler @ 002ff445 */
        hb_font_destroy(*(int **)((long)param_1 + 0x28));
      }
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


