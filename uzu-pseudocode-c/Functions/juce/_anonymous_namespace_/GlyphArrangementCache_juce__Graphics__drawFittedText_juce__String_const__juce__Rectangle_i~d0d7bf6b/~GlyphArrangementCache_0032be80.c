// Function : ~GlyphArrangementCache
// Namespace: juce:_anonymous_namespace_:GlyphArrangementCache_juce__Graphics__drawFittedText_juce__String_const__juce__Rectangle_i~d0d7bf6b
// Entry    : 0032be80
// Prototype: undefined ~GlyphArrangementCache(GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs> * this)
// Body     : 0032be80 - 0032bef5


/* juce::(anonymous namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String
   const&, juce::Rectangle<int>, juce::Justification, int, float, juce::GlyphArrangementOptions)
   const::ArrangementArgs>::~GlyphArrangementCache() */

void __thiscall
juce::(anonymous_namespace)::
GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
::~GlyphArrangementCache
          (GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
           *this)

{
  GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
  *pGVar1;
  GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
  *pGVar2;
  
  LOCK();
  if (this == (GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
               *)singletonHolder._40_8_) {
    singletonHolder._40_8_ = 0;
  }
  UNLOCK();
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x60));
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x58) = 0;
  pGVar2 = *(GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
             **)(this + 0x38);
  while (pGVar2 != this + 0x38) {
    pGVar1 = *(GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
               **)pGVar2;
    operator_delete(pGVar2);
    pGVar2 = pGVar1;
  }
                    /* try { // try from 0032bee4 to 0032bee8 has its CatchHandler @ 0032bef6 */
  std::
  _Rb_tree<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,std::pair<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>,std::_Select1st<std::pair<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>>,std::less<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,std::allocator<std::pair<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x18));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


