// Function : binaryEquals
// Namespace: juce:var:VariantType
// Entry    : 00489fb0
// Prototype: undefined8 binaryEquals(long * param_1, undefined8 param_2, long param_3)
// Body     : 00489fb0 - 00489fe1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::var::VariantType::binaryEquals(juce::var::ValueUnion const&, juce::var::ValueUnion const&,
   juce::var::VariantType const&) */

undefined8 __cdecl
juce::var::VariantType::binaryEquals(long *param_1,undefined8 param_2,long param_3)

{
  size_t __n;
  int iVar1;
  undefined8 *puVar2;
  undefined4 extraout_var;
  
                    /* try { // try from 00489fb4 to 00489fb9 has its CatchHandler @ 00489fe2 */
  puVar2 = (undefined8 *)(**(code **)(param_3 + 0x48))(param_2);
  if (puVar2 != (undefined8 *)0x0) {
    __n = ((undefined8 *)*param_1)[1];
    if (puVar2[1] == __n) {
      iVar1 = bcmp((void *)*puVar2,*(void **)*param_1,__n);
      return CONCAT71((int7)(CONCAT44(extraout_var,iVar1) >> 8),iVar1 == 0);
    }
  }
  return 0;
}


