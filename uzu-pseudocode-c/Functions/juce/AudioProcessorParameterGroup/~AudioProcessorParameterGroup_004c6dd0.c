// Function : ~AudioProcessorParameterGroup
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c6dd0
// Prototype: undefined ~AudioProcessorParameterGroup(AudioProcessorParameterGroup * this)
// Body     : 004c6dd0 - 004c6e60


/* juce::AudioProcessorParameterGroup::~AudioProcessorParameterGroup() */

void __thiscall
juce::AudioProcessorParameterGroup::~AudioProcessorParameterGroup
          (AudioProcessorParameterGroup *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
  ::~OwnedArray((OwnedArray<juce::AudioProcessorParameterGroup::AudioProcessorParameterNode,juce::DummyCriticalSection>
                 *)(this + 0x18));
  piVar3 = (int *)(*(long *)(this + 0x10) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      lVar2 = *(long *)(this + 8);
      goto joined_r0x004c6e32;
    }
  }
  lVar2 = *(long *)(this + 8);
joined_r0x004c6e32:
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  piVar3 = (int *)(*(long *)this + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      return;
    }
  }
  return;
}


