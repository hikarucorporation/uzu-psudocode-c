// Function : getCurrentValueAsText
// Namespace: juce:AudioProcessorParameter
// Entry    : 004c6bc0
// Prototype: undefined8 getCurrentValueAsText(undefined8 param_1, long * param_2)
// Body     : 004c6bc0 - 004c6bee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameter::getCurrentValueAsText() const */

undefined8 __cdecl
juce::AudioProcessorParameter::getCurrentValueAsText(undefined8 param_1,long *param_2)

{
  (**(code **)(*param_2 + 0x10))(param_2);
  (**(code **)(*param_2 + 0x50))(param_1,param_2,0x400);
  return param_1;
}


