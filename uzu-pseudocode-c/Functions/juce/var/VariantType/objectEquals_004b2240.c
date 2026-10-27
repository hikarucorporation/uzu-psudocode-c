// Function : objectEquals
// Namespace: juce:var:VariantType
// Entry    : 004b2240
// Prototype: bool objectEquals(long * param_1, undefined8 param_2, long param_3)
// Body     : 004b2240 - 004b2251


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::objectEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

bool __cdecl juce::var::VariantType::objectEquals(long *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
                    /* try { // try from 004b2244 to 004b2249 has its CatchHandler @ 004b2252 */
  lVar1 = (**(code **)(param_3 + 0x38))(param_2);
  return lVar1 == *param_1;
}


