// Function : copy
// Namespace: juce:FloatVectorOperationsBase_float_int_
// Entry    : 004d15f0
// Prototype: undefined copy(void * param_1, void * param_2, int param_3)
// Body     : 004d15f0 - 004d15fb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<float, int>::copy(float*, float const*, int) */

void __cdecl
juce::FloatVectorOperationsBase<float,int>::copy(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,(long)param_3 << 2);
  return;
}


