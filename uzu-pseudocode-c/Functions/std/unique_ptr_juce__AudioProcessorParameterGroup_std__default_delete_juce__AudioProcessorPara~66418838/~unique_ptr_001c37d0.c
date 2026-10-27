// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__AudioProcessorParameterGroup_std__default_delete_juce__AudioProcessorPara~66418838
// Entry    : 001c37d0
// Prototype: undefined ~unique_ptr(unique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>> * this)
// Body     : 001c37d0 - 001c3860


/* std::unique_ptr<juce::AudioProcessorParameterGroup,
   std::default_delete<juce::AudioProcessorParameterGroup> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>>
::~unique_ptr(unique_ptr<juce::AudioProcessorParameterGroup,std::default_delete<juce::AudioProcessorParameterGroup>>
              *this)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    juce::
    OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
    ::~OwnedArray((OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
                   *)(plVar2 + 3));
    piVar3 = (int *)(plVar2[2] + -0x10);
    if (piVar3 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
    piVar3 = (int *)(plVar2[1] + -0x10);
    if (piVar3 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
    piVar3 = (int *)(*plVar2 + -0x10);
    if (piVar3 != &juce::emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
    operator_delete(plVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


