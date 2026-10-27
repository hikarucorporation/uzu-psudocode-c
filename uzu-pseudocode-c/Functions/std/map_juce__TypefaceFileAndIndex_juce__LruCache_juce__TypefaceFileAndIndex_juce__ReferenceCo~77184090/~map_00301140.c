// Function : ~map
// Namespace: std:map_juce__TypefaceFileAndIndex_juce__LruCache_juce__TypefaceFileAndIndex_juce__ReferenceCo~77184090
// Entry    : 00301140
// Prototype: undefined8 ~map(map<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>> * this)
// Body     : 00301140 - 0030114b


/* std::map<juce::TypefaceFileAndIndex, juce::LruCache<juce::TypefaceFileAndIndex,
   juce::ReferenceCountedObjectPtr<juce::Typeface>, 128ul>::Pair,
   std::less<juce::TypefaceFileAndIndex>, std::allocator<std::pair<juce::TypefaceFileAndIndex const,
   juce::LruCache<juce::TypefaceFileAndIndex, juce::ReferenceCountedObjectPtr<juce::Typeface>,
   128ul>::Pair> > >::~map() */

undefined8 __thiscall
std::
map<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>
::~map(map<juce::TypefaceFileAndIndex,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>
       *this)

{
  undefined8 in_RAX;
  
                    /* try { // try from 00301145 to 00301149 has its CatchHandler @ 0030114c */
  _Rb_tree<juce::TypefaceFileAndIndex,std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>,std::_Select1st<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>,std::less<juce::TypefaceFileAndIndex>,std::allocator<std::pair<juce::TypefaceFileAndIndex_const,juce::LruCache<juce::TypefaceFileAndIndex,juce::ReferenceCountedObjectPtr<juce::Typeface>,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x10));
  return in_RAX;
}


