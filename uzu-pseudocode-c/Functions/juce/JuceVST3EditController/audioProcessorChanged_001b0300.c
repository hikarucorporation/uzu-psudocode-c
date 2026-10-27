// Function : audioProcessorChanged
// Namespace: juce:JuceVST3EditController
// Entry    : 001b0300
// Prototype: undefined audioProcessorChanged(JuceVST3EditController * this, undefined8 param_1, char * param_2)
// Body     : 001b0300 - 001b030b


/* non-virtual thunk to juce::JuceVST3EditController::audioProcessorChanged(juce::AudioProcessor*,
   juce::AudioProcessorListener::ChangeDetails const&) */

void __thiscall
juce::JuceVST3EditController::audioProcessorChanged
          (JuceVST3EditController *this,undefined8 param_1,char *param_2)

{
  audioProcessorChanged(this + -0xa8,param_1,param_2);
  return;
}


