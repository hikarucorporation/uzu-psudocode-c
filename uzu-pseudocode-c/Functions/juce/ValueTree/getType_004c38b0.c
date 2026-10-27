// Function : getType
// Namespace: juce:ValueTree
// Entry    : 004c38b0
// Prototype: undefined getType(long * param_1, long * param_2)
// Body     : 004c38b0 - 004c38e1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ValueTree::getType() const */

void __cdecl juce::ValueTree::getType(long *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  
  if (*param_2 == 0) {
    *param_1 = (long)&DAT_0061ac58;
  }
  else {
    lVar1 = *(long *)(*param_2 + 0x10);
    *param_1 = lVar1;
    piVar2 = (int *)(lVar1 + -0x10);
    if (piVar2 != &emptyString) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      return;
    }
  }
  return;
}


