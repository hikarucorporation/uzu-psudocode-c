// Function : getName
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c71c0
// Prototype: long * getName(long * param_1, long param_2)
// Body     : 004c71c0 - 004c71de


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterGroup::getName() const */

long * __cdecl juce::AudioProcessorParameterGroup::getName(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_2 + 8);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


