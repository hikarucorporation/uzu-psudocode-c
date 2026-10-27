// Function : getAlternateDisplayNames
// Namespace: juce:AudioProcessor
// Entry    : 004c8e40
// Prototype: undefined8 * getAlternateDisplayNames(undefined8 * param_1, long * param_2)
// Body     : 004c8e40 - 004c8ec1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessor::getAlternateDisplayNames() const */

undefined8 * __cdecl
juce::AudioProcessor::getAlternateDisplayNames(undefined8 *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long local_10;
  
  (**(code **)(*param_2 + 0x28))(&local_10);
  *param_1 = 0;
  param_1[1] = 0;
  plVar2 = malloc(0x40);
  *param_1 = plVar2;
  param_1[1] = &DAT_100000008;
  *plVar2 = local_10;
  piVar3 = (int *)(local_10 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  piVar3 = (int *)(local_10 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      return param_1;
    }
  }
  return param_1;
}


