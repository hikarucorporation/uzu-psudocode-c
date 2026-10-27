// Function : copy
// Namespace: juce:FloatVectorOperationsBase_double_unsigned_long_
// Entry    : 004d1640
// Prototype: undefined copy(void * param_1, void * param_2, long param_3)
// Body     : 004d1640 - 004d1648


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::FloatVectorOperationsBase<double, unsigned long>::copy(double*, double const*, unsigned
   long) */

void __cdecl
juce::FloatVectorOperationsBase<double,unsigned_long>::copy
          (void *param_1,void *param_2,long param_3)

{
  memcpy(param_1,param_2,param_3 << 3);
  return;
}


