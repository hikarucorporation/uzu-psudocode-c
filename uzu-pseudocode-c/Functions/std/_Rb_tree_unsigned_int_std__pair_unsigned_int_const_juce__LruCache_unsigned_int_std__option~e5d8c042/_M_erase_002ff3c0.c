// Function : _M_erase
// Namespace: std:_Rb_tree_unsigned_int_std__pair_unsigned_int_const_juce__LruCache_unsigned_int_std__option~e5d8c042
// Entry    : 002ff3c0
// Prototype: undefined _M_erase(void * param_1)
// Body     : 002ff3c0 - 002ff3f4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, juce::LruCache<unsigned int,
   std::optional<hb_glyph_extents_t>, 512ul>::Pair>, std::_Select1st<std::pair<unsigned int const,
   juce::LruCache<unsigned int, std::optional<hb_glyph_extents_t>, 512ul>::Pair> >,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const, juce::LruCache<unsigned
   int, std::optional<hb_glyph_extents_t>, 512ul>::Pair> >
   >::_M_erase(std::_Rb_tree_node<std::pair<unsigned int const, juce::LruCache<unsigned int,
   std::optional<hb_glyph_extents_t>, 512ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::Pair>,std::_Select1st<std::pair<unsigned_int_const,juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::Pair>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::LruCache<unsigned_int,std::optional<hb_glyph_extents_t>,512ul>::Pair>>>
::_M_erase(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      operator_delete(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


