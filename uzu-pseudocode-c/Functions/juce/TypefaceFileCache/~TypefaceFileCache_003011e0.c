// Function : ~TypefaceFileCache
// Namespace: juce:TypefaceFileCache
// Entry    : 003011e0
// Prototype: undefined ~TypefaceFileCache(TypefaceFileCache * this)
// Body     : 003011e0 - 00301255


/* juce::TypefaceFileCache::~TypefaceFileCache() */

void __thiscall juce::TypefaceFileCache::~TypefaceFileCache(TypefaceFileCache *this)

{
  TypefaceFileCache *pTVar1;
  TypefaceFileCache *pTVar2;
  
  *(undefined ***)this = &PTR__TypefaceFileCache_00712370;
  LOCK();
  if (this == singletonHolder) {
    singletonHolder = (TypefaceFileCache *)0x0;
  }
  UNLOCK();
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x58) = 0;
  pTVar2 = *(TypefaceFileCache **)(this + 0x38);
  while (pTVar2 != this + 0x38) {
    pTVar1 = *(TypefaceFileCache **)pTVar2;
    operator_delete(pTVar2);
    pTVar2 = pTVar1;
  }
                    /* try { // try from 00301244 to 00301248 has its CatchHandler @ 00301256 */
  std::
  _Rb_tree<juce::TypefaceFileAndIndex,std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>,std::_Select1st<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x18));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


