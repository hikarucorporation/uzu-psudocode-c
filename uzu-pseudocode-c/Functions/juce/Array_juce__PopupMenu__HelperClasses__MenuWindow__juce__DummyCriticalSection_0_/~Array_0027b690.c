// Function : ~Array
// Namespace: juce:Array_juce__PopupMenu__HelperClasses__MenuWindow__juce__DummyCriticalSection_0_
// Entry    : 0027b690
// Prototype: undefined ~Array(Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0> * this)
// Body     : 0027b690 - 0027b69e


/* juce::Array<juce::PopupMenu::HelperClasses::MenuWindow*, juce::DummyCriticalSection, 0>::~Array()
    */

void __thiscall
juce::Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0>::~Array
          (Array<juce::PopupMenu::HelperClasses::MenuWindow*,juce::DummyCriticalSection,0> *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  free(*(void **)this);
  return;
}


