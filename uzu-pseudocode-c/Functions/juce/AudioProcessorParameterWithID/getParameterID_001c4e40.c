// Function : getParameterID
// Namespace: juce:AudioProcessorParameterWithID
// Entry    : 001c4e40
// Prototype: long * getParameterID(long * param_1, long param_2)
// Body     : 001c4e40 - 001c4e5e


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterWithID::getParameterID() const */

long * __cdecl juce::AudioProcessorParameterWithID::getParameterID(long *param_1,long param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *(long *)(param_2 + 0x60);
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


