// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__JuceVST3EditController__JuceVST3Editor__ContentWrapperComponent_juce__Juc~14eed066
// Entry    : 001b5a00
// Prototype: undefined ~unique_ptr(unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter> * this)
// Body     : 001b5a00 - 001b5a4c


/* std::unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,
   juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter>::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter>
::~unique_ptr(unique_ptr<juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent,juce::JuceVST3EditController::JuceVST3Editor::MessageManagerLockedDeleter>
              *this)

{
  ContentWrapperComponent *this_00;
  MessageManagerLock local_b0 [160];
  
  this_00 = *(ContentWrapperComponent **)this;
  if (this_00 != (ContentWrapperComponent *)0x0) {
                    /* try { // try from 001b5a15 to 001b5a20 has its CatchHandler @ 001b5a4d */
    juce::MessageManagerLock::MessageManagerLock(local_b0,0);
    juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::~ContentWrapperComponent
              (this_00);
    operator_delete(this_00);
    juce::MessageManagerLock::~MessageManagerLock(local_b0);
  }
  *(undefined8 *)this = 0;
  return;
}


