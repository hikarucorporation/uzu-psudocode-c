// Function : clear
// Namespace: juce:FloatVectorOperationsBase_double_int_
// Entry    : 004d1620
// Prototype: undefined clear(void * param_1, int param_2)
// Body     : 004d1620 - 004d162d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<double, int>::clear(double*, int) */

void __cdecl juce::FloatVectorOperationsBase<double,int>::clear(void *param_1,int param_2)

{
  memset(param_1,0,(long)param_2 << 3);
  return;
}


