// Function : getSubgroups
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c72a0
// Prototype: long * getSubgroups(long * param_1, AudioProcessorParameterGroup * param_2, char param_3)
// Body     : 004c72a0 - 004c72b9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterGroup::getSubgroups(bool) const */

long * __cdecl
juce::AudioProcessorParameterGroup::getSubgroups
          (long *param_1,AudioProcessorParameterGroup *param_2,char param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  getSubgroups(param_2,param_1,param_3);
  return param_1;
}


