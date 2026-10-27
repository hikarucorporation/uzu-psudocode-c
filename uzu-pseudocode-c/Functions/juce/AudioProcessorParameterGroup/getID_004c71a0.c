// Function : getID
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c71a0
// Prototype: long * getID(long * param_1, long * param_2)
// Body     : 004c71a0 - 004c71bd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameterGroup::getID() const */

long * __cdecl juce::AudioProcessorParameterGroup::getID(long *param_1,long *param_2)

{
  long lVar1;
  int *piVar2;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  piVar2 = (int *)(lVar1 + -0x10);
  if (piVar2 != &emptyString) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  return param_1;
}


