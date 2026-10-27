// Function : updateSpeakerFormatStrings
// Namespace: juce:AudioProcessor
// Entry    : 004c8460
// Prototype: undefined updateSpeakerFormatStrings(AudioProcessor * this)
// Body     : 004c8460 - 004c858f


/* juce::AudioProcessor::updateSpeakerFormatStrings() */

void __thiscall juce::AudioProcessor::updateSpeakerFormatStrings(AudioProcessor *this)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  long local_20;
  
  piVar3 = (int *)(*(long *)(this + 0xe0) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  *(undefined1 **)(this + 0xe0) = &DAT_0061ac58;
  piVar3 = (int *)(*(long *)(this + 0xe8) + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
      *(undefined1 **)(this + 0xe8) = &DAT_0061ac58;
      iVar1 = *(int *)(this + 0xcc);
      goto joined_r0x004c8530;
    }
  }
  *(undefined1 **)(this + 0xe8) = &DAT_0061ac58;
  iVar1 = *(int *)(this + 0xcc);
joined_r0x004c8530:
  if (0 < iVar1) {
    AudioChannelSet::getSpeakerArrangementAsString
              (&local_20,(long *)(**(long **)(this + 0xc0) + 0x10));
    lVar2 = *(long *)(this + 0xe0);
    *(long *)(this + 0xe0) = local_20;
    piVar3 = (int *)(lVar2 + -0x10);
    local_20 = lVar2;
    if (piVar3 != &emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar3);
      }
    }
  }
  if (0 < *(int *)(this + 0xdc)) {
    AudioChannelSet::getSpeakerArrangementAsString
              (&local_20,(long *)(**(long **)(this + 0xd0) + 0x10));
    lVar2 = *(long *)(this + 0xe8);
    *(long *)(this + 0xe8) = local_20;
    piVar3 = (int *)(lVar2 + -0x10);
    if (piVar3 != &emptyString) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_20 = lVar2;
        operator_delete__(piVar3);
      }
    }
  }
  return;
}


