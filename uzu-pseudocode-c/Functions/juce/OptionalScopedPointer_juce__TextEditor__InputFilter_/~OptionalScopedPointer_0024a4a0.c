// Function : ~OptionalScopedPointer
// Namespace: juce:OptionalScopedPointer_juce__TextEditor__InputFilter_
// Entry    : 0024a4a0
// Prototype: undefined ~OptionalScopedPointer(OptionalScopedPointer<juce::TextEditor::InputFilter> * this)
// Body     : 0024a4a0 - 0024a4d5


/* juce::OptionalScopedPointer<juce::TextEditor::InputFilter>::~OptionalScopedPointer() */

void __thiscall
juce::OptionalScopedPointer<juce::TextEditor::InputFilter>::~OptionalScopedPointer
          (OptionalScopedPointer<juce::TextEditor::InputFilter> *this)

{
  long *plVar1;
  
  if (this[8] != (OptionalScopedPointer<juce::TextEditor::InputFilter>)0x0) {
    plVar1 = *(long **)this;
    *(undefined8 *)this = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
      if (*(long **)this != (long *)0x0) {
        (**(code **)(**(long **)this + 8))();
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}


