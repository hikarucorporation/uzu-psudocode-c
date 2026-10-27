// Function : ~SingletonHolder
// Namespace: juce:SingletonHolder_juce__X11Symbols_juce__CriticalSection_false_
// Entry    : 0019f900
// Prototype: undefined ~SingletonHolder(SingletonHolder<juce::X11Symbols,juce::CriticalSection,false> * this)
// Body     : 0019f900 - 0019f904


/* juce::SingletonHolder<juce::X11Symbols, juce::CriticalSection, false>::~SingletonHolder() */

void __thiscall
juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::~SingletonHolder
          (SingletonHolder<juce::X11Symbols,juce::CriticalSection,false> *this)

{
  (*(code *)PTR_pthread_mutex_destroy_007162d8)();
  return;
}


