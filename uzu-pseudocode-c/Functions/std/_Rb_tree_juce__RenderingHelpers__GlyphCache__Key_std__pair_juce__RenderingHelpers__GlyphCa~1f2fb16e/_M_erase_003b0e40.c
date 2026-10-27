// Function : _M_erase
// Namespace: std:_Rb_tree_juce__RenderingHelpers__GlyphCache__Key_std__pair_juce__RenderingHelpers__GlyphCa~1f2fb16e
// Entry    : 003b0e40
// Prototype: undefined _M_erase(void * param_1)
// Body     : 003b0e40 - 003b0e74


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,
   std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair>,
   std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair> >,
   std::less<juce::RenderingHelpers::GlyphCache::Key>,
   std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair> >
   >::_M_erase(std::_Rb_tree_node<std::pair<juce::RenderingHelpers::GlyphCache::Key const,
   juce::LruCache<juce::RenderingHelpers::GlyphCache::Key, std::vector<juce::GlyphLayer,
   std::allocator<juce::GlyphLayer> >, 128ul>::Pair> >*) */

void __cdecl
std::
_Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
::_M_erase(void *param_1)

{
  void *pvVar1;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar1 = *(void **)((long)param_1 + 0x10);
      _M_drop_node(param_1);
      param_1 = pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}


