// Function : ~GlyphArrangementCache
// Namespace: juce:_anonymous_namespace_:GlyphArrangementCache_juce__Graphics__drawText_juce__String_const__juce__Rectangle_float__~0464ad9a
// Entry    : 003266d0
// Prototype: undefined ~GlyphArrangementCache(GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs> * this)
// Body     : 003266d0 - 00326745


/* juce::(anonymous namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String const&,
   juce::Rectangle<float>, juce::Justification, bool)
   const::ArrangementArgs>::~GlyphArrangementCache() */

void __thiscall
juce::(anonymous_namespace)::
GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
::~GlyphArrangementCache
          (GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
           *this)

{
  GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
  *pGVar1;
  GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
  *pGVar2;
  
  LOCK();
  if (this == (GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
               *)singletonHolder._40_8_) {
    singletonHolder._40_8_ = 0;
  }
  UNLOCK();
  pthread_mutex_destroy((pthread_mutex_t *)(this + 0x60));
  if (*(void **)(this + 0x58) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x58));
  }
  *(undefined8 *)(this + 0x58) = 0;
  pGVar2 = *(GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
             **)(this + 0x38);
  while (pGVar2 != this + 0x38) {
    pGVar1 = *(GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
               **)pGVar2;
    operator_delete(pGVar2);
    pGVar2 = pGVar1;
  }
                    /* try { // try from 00326734 to 00326738 has its CatchHandler @ 00326746 */
  std::
  _Rb_tree<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs,std::pair<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>,std::_Select1st<std::pair<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>>,std::less<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,std::allocator<std::pair<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs_const,juce::LruCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs,juce::GlyphArrangement,128ul>::Pair>>>
  ::_M_erase(*(void **)(this + 0x18));
  DeletedAtShutdown::~DeletedAtShutdown((DeletedAtShutdown *)this);
  return;
}


