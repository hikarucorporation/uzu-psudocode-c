// Function : copy
// Namespace: juce:FloatVectorOperationsBase_float_unsigned_long_
// Entry    : 004d1610
// Prototype: undefined copy(void * param_1, void * param_2, long param_3)
// Body     : 004d1610 - 004d1618


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<float, unsigned long>::copy(float*, float const*, unsigned long)
    */

void __cdecl
juce::FloatVectorOperationsBase<float,unsigned_long>::copy(void *param_1,void *param_2,long param_3)

{
  memcpy(param_1,param_2,param_3 << 2);
  return;
}


