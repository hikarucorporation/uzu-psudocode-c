// Function : process
// Namespace: juce:JuceVST3Component
// Entry    : 001aa100
// Prototype: undefined process(JuceVST3Component * this, int * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, undefined8 param_5)
// Body     : 001aa100 - 001aa108


/* non-virtual thunk to juce::JuceVST3Component::process(Steinberg::Vst::ProcessData&) */

void __thiscall
juce::JuceVST3Component::process
          (JuceVST3Component *this,int *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          undefined8 param_5)

{
  process(this + -8,param_1,param_2,param_3,param_4,param_5);
  return;
}


