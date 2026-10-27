// Function : ~ArrayBase
// Namespace: juce:ArrayBase_juce__UndoManager__ActionSet__juce__DummyCriticalSection_
// Entry    : 004c6340
// Prototype: undefined ~ArrayBase(ArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection> * this)
// Body     : 004c6340 - 004c634e


/* juce::ArrayBase<juce::UndoManager::ActionSet*, juce::DummyCriticalSection>::~ArrayBase() */

void __thiscall
juce::ArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection>::~ArrayBase
          (ArrayBase<juce::UndoManager::ActionSet*,juce::DummyCriticalSection> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


