// Function : clear
// Namespace: juce:FloatVectorOperationsBase_float_int_
// Entry    : 004d15e0
// Prototype: undefined clear(void * param_1, int param_2)
// Body     : 004d15e0 - 004d15ed


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<float, int>::clear(float*, int) */

void __cdecl juce::FloatVectorOperationsBase<float,int>::clear(void *param_1,int param_2)

{
  memset(param_1,0,(long)param_2 << 2);
  return;
}


