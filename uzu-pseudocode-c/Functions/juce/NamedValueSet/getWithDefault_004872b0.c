// Function : getWithDefault
// Namespace: juce:NamedValueSet
// Entry    : 004872b0
// Prototype: long * getWithDefault(long * param_1, long * param_2, long * param_3, long * param_4)
// Body     : 004872b0 - 00487311


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::NamedValueSet::getWithDefault(juce::Identifier const&, juce::var const&) const */

long * __cdecl
juce::NamedValueSet::getWithDefault(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  if ((long)*(int *)((long)param_2 + 0xc) != 0) {
    lVar2 = *param_2 + 0x10;
    lVar1 = (long)*(int *)((long)param_2 + 0xc) * 0x18;
    do {
      if (*(long *)(lVar2 + -0x10) == *param_3) {
        lVar1 = *(long *)(lVar2 + -8);
        *param_1 = lVar1;
        (**(code **)(lVar1 + 0x60))(param_1 + 1);
        return param_1;
      }
      lVar2 = lVar2 + 0x18;
      lVar1 = lVar1 + -0x18;
    } while (lVar1 != 0);
  }
  lVar1 = *param_4;
  *param_1 = lVar1;
  (**(code **)(lVar1 + 0x60))(param_1 + 1,param_4 + 1);
  return param_1;
}


