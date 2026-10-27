// Function : getProperty
// Namespace: juce:ValueTree
// Entry    : 004c38f0
// Prototype: long * getProperty(long * param_1, long * param_2, long * param_3, long * param_4)
// Body     : 004c38f0 - 004c3961


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ValueTree::getProperty(juce::Identifier const&, juce::var const&) const */

long * __cdecl juce::ValueTree::getProperty(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if ((lVar1 != 0) && ((long)*(int *)(lVar1 + 0x24) != 0)) {
    lVar2 = *(long *)(lVar1 + 0x18) + 0x10;
    lVar1 = (long)*(int *)(lVar1 + 0x24) * 0x18;
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


