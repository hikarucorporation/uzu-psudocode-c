// Function : ~GlyphCache
// Namespace: juce:RenderingHelpers:GlyphCache
// Entry    : 003b0e80
// Prototype: undefined ~GlyphCache(GlyphCache * this)
// Body     : 003b0e80 - 003b0ee5


/* juce::RenderingHelpers::GlyphCache::~GlyphCache() */

void __thiscall juce::RenderingHelpers::GlyphCache::~GlyphCache(GlyphCache *this)

{
  GlyphCache *pGVar1;
  GlyphCache *pGVar2;
  
  *(undefined ***)this = &PTR__GlyphCache_00712010;
  getSingletonPointer()::g = 0;
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x58) = 0;
  pGVar2 = *(GlyphCache **)(this + 0x38);
  while (pGVar2 != this + 0x38) {
    pGVar1 = *(GlyphCache **)pGVar2;
    operator_delete(pGVar2);
    pGVar2 = pGVar1;
  }
  std::
  _Rb_tree<juce::RenderingHelpers::GlyphCache::Key,std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>,std::_Select1st<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>,std::less<juce::RenderingHelpers::GlyphCache::Key>,std::allocator<std::pair<juce::RenderingHelpers::GlyphCache::Key_const,juce::LruCache<juce::RenderingHelpers::GlyphCache::Key,std::vector<juce::GlyphLayer,std::allocator<juce::GlyphLayer>>,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x18));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


