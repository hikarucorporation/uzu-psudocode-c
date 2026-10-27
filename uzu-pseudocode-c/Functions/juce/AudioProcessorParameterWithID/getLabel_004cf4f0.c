// Function : getLabel
// Namespace: juce:AudioProcessorParameterWithID
// Entry    : 004cf4f0
// Prototype: long * getLabel(long * param_1, long param_2)
// Body     : 004cf4f0 - 004cf50e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterWithID::getLabel() const */

long * __cdecl juce::AudioProcessorParameterWithID::getLabel(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_2 + 0x70);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


