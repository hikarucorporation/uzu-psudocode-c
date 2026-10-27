// Function : __cxx_global_var_init.377
// Namespace: 
// Entry    : 00164a90
// Prototype: undefined __cxx_global_var_init.377(void)
// Body     : 00164a90 - 00164afa


void __cxx_global_var_init_377(void)

{
  pthread_mutexattr_t apStack_18 [2];
  
  pthread_mutexattr_init(apStack_18);
  pthread_mutexattr_settype(apStack_18,1);
  pthread_mutexattr_setprotocol(apStack_18,1);
  pthread_mutex_init((pthread_mutex_t *)
                     juce::(anonymous_namespace)::
                     GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
                     ::singletonHolder,apStack_18);
  pthread_mutexattr_destroy(apStack_18);
  juce::(anonymous_namespace)::
  GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
  ::singletonHolder._40_8_ = 0;
  __cxa_atexit(juce::
               SingletonHolder<juce::(anonymous_namespace)::GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>,juce::CriticalSection,false>
               ::~SingletonHolder,
               juce::(anonymous_namespace)::
               GlyphArrangementCache<juce::Graphics::drawText(juce::String_const&,juce::Rectangle<float>,juce::Justification,bool)const::ArrangementArgs>
               ::singletonHolder,&__dso_handle);
  return;
}


