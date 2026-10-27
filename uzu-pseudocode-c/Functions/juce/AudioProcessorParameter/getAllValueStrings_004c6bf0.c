// Function : getAllValueStrings
// Namespace: juce:AudioProcessorParameter
// Entry    : 004c6bf0
// Prototype: ArrayBase<juce::String,juce::DummyCriticalSection> * getAllValueStrings(ArrayBase<juce::String,juce::DummyCriticalSection> * param_1, long * param_2)
// Body     : 004c6bf0 - 004c6cda


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::AudioProcessorParameter::getAllValueStrings() const */

ArrayBase<juce::String,juce::DummyCriticalSection> * __cdecl
juce::AudioProcessorParameter::getAllValueStrings
          (ArrayBase<juce::String,juce::DummyCriticalSection> *param_1,long *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  long local_38;
  
  cVar1 = (**(code **)(*param_2 + 0x40))(param_2);
  if ((cVar1 != '\0') && (*(int *)((long)param_2 + 0x5c) == 0)) {
    iVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    iVar3 = (**(code **)(*param_2 + 0x38))(param_2);
    if (0 < iVar3) {
      iVar3 = 0;
      do {
        (**(code **)(*param_2 + 0x50))((float)iVar3 / (float)(iVar2 + -1),&local_38,param_2,0x400);
        StringArray::add((StringArray *)(param_2 + 10),&local_38);
        piVar5 = (int *)(local_38 + -0x10);
        if (piVar5 != &emptyString) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            operator_delete__(piVar5);
          }
        }
        iVar3 = iVar3 + 1;
        iVar4 = (**(code **)(*param_2 + 0x38))(param_2);
      } while (iVar3 < iVar4);
    }
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  ArrayBase<juce::String,juce::DummyCriticalSection>::addArray<juce::String>
            (param_1,(long *)param_2[10],*(uint *)((long)param_2 + 0x5c));
  return param_1;
}


