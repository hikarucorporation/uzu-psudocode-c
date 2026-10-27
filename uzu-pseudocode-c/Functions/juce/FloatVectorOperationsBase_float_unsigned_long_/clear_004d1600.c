// Function : clear
// Namespace: juce:FloatVectorOperationsBase_float_unsigned_long_
// Entry    : 004d1600
// Prototype: undefined clear(void * param_1, long param_2)
// Body     : 004d1600 - 004d160e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<float, unsigned long>::clear(float*, unsigned long) */

void __cdecl juce::FloatVectorOperationsBase<float,unsigned_long>::clear(void *param_1,long param_2)

{
  memset(param_1,0,param_2 * 4);
  return;
}


