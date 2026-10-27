// Function : getParameterName
// Namespace: juce:AudioProcessor
// Entry    : 004ca3b0
// Prototype: undefined8 * getParameterName(undefined8 * param_1, long param_2, uint param_3)
// Body     : 004ca3b0 - 004ca3f0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getParameterName(int) */

undefined8 * __cdecl
juce::AudioProcessor::getParameterName(undefined8 *param_1,long param_2,uint param_3)

{
  long *plVar1;
  
  if (param_3 < *(uint *)(param_2 + 0x134)) {
    plVar1 = *(long **)(*(long *)(param_2 + 0x128) + (long)(int)param_3 * 8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x28))(param_1,plVar1,0x200);
      return param_1;
    }
  }
  *param_1 = &DAT_0061ac58;
  return param_1;
}


