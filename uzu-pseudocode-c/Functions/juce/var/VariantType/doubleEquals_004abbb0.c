// Function : doubleEquals
// Namespace: juce:var:VariantType
// Entry    : 004abbb0
// Prototype: bool doubleEquals(double * param_1, undefined8 param_2, long param_3)
// Body     : 004abbb0 - 004abbd6


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::doubleEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

bool __cdecl juce::var::VariantType::doubleEquals(double *param_1,undefined8 param_2,long param_3)

{
  double dVar1;
  
                    /* try { // try from 004abbb4 to 004abbb9 has its CatchHandler @ 004abbd7 */
  dVar1 = (double)(**(code **)(param_3 + 0x20))(param_2);
  return (double)((ulong)(dVar1 - *param_1) & _DAT_005d91b0) < DAT_005db370;
}


