// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__ImageCache__Pimpl_juce__CriticalSection_false_
// Entry    : 002e9b50
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false> * this)
// Body     : 002e9b50 - 002e9b54


/* juce::SingletonHolder<juce::ImageCache::Pimpl, juce::CriticalSection, false>::~SingletonHolder()
    */

void __thiscall
juce::SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::ImageCache::Pimpl,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


