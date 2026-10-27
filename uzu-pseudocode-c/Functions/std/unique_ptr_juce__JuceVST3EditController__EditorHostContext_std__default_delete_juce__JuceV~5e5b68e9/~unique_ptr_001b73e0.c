// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__JuceVST3EditController__EditorHostContext_std__default_delete_juce__JuceV~5e5b68e9
// Entry    : 001b73e0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>> * this)
// Body     : 001b73e0 - 001b73f9


/* std::unique_ptr<juce::JuceVST3EditController::EditorHostContext,
   std::default_delete<juce::JuceVST3EditController::EditorHostContext> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>>
::~unique_ptr(unique_ptr<juce::JuceVST3EditController::EditorHostContext,std::default_delete<juce::JuceVST3EditController::EditorHostContext>>
              *this)

{
  if (*(void **)this != (void *)0x0) {
    operator_delete(*(void **)this);
  }
  *(undefined8 *)this = 0;
  return;
}


