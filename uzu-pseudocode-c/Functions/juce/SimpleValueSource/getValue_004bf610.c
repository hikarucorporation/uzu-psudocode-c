// Function : getValue
// Namespace: juce:SimpleValueSource
// Entry    : 004bf610
// Prototype: long * getValue(long * param_1, long param_2)
// Body     : 004bf610 - 004bf62a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SimpleValueSource::getValue() const */

long * __cdecl juce::SimpleValueSource::getValue(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x30);
  *param_1 = lVar1;
  (**(code **)(lVar1 + 0x60))(param_1 + 1,param_2 + 0x38);
  return param_1;
}


