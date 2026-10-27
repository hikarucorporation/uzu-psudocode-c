// Function : boolEquals
// Namespace: juce:var:VariantType
// Entry    : 004abad0
// Prototype: bool boolEquals(char * param_1, undefined8 param_2, long param_3)
// Body     : 004abad0 - 004abae0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::boolEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

bool __cdecl juce::var::VariantType::boolEquals(char *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  
                    /* try { // try from 004abad4 to 004abad9 has its CatchHandler @ 004abae1 */
  cVar1 = (**(code **)(param_3 + 0x30))(param_2);
  return *param_1 == cVar1;
}


