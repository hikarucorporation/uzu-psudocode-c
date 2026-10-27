// Function : __cxx_global_var_init.378
// Namespace: 
// Entry    : 00164b00
// Prototype: undefined __cxx_global_var_init.378(void)
// Body     : 00164b00 - 00164b6a


void __cxx_global_var_init_378(void)

{
  pthread_mutexattr_t apStack_18 [2];
  
  pthread_mutexattr_init(apStack_18);
  pthread_mutexattr_settype(apStack_18,1);
  pthread_mutexattr_setprotocol(apStack_18,1);
  pthread_mutex_init((pthread_mutex_t *)
                     juce::(anonymous_namespace)::
                     GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
                     ::singletonHolder,apStack_18);
  pthread_mutexattr_destroy(apStack_18);
  juce::(anonymous_namespace)::
  GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
  ::singletonHolder._40_8_ = 0;
  __cxa_atexit(juce::
               SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>,juce::CriticalSection,false>
               ::~SingletonHolder,
               juce::(anonymous_namespace)::
               GlyphArrangementCache<juce::Graphics::drawFittedText(juce::String_const&,juce::Rectangle<int>,juce::Justification,int,float,juce::GlyphArrangementOptions)const::ArrangementArgs>
               ::singletonHolder,&__dso_handle);
  return;
}


