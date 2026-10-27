// Function : clear
// Namespace: juce:FloatVectorOperationsBase_double_unsigned_long_
// Entry    : 004d1630
// Prototype: undefined clear(void * param_1, long param_2)
// Body     : 004d1630 - 004d163e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<double, unsigned long>::clear(double*, unsigned long) */

void __cdecl
juce::FloatVectorOperationsBase<double,unsigned_long>::clear(void *param_1,long param_2)

{
  memset(param_1,0,param_2 * 8);
  return;
}


