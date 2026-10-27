// Function : getParameterText
// Namespace: juce:AudioProcessor
// Entry    : 004ca6e0
// Prototype: undefined8 * getParameterText(undefined8 * param_1, long * param_2, uint param_3)
// Body     : 004ca6e0 - 004ca729


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getParameterText(int) */

undefined8 * __cdecl
juce::AudioProcessor::getParameterText(undefined8 *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_2 + 0x1b0))(param_2);
  if (param_3 < uVar1) {
    (**(code **)(*param_2 + 0x1e0))(param_1,param_2,param_3,0x400);
  }
  else {
    *param_1 = &DAT_0061ac58;
  }
  return param_1;
}


