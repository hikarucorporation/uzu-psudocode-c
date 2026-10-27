// Function : getChannelIndexForType
// Namespace: juce:AudioChannelSet
// Entry    : 004d3450
// Prototype: int getChannelIndexForType(AudioChannelSet * this, uint param_1)
// Body     : 004d3450 - 004d34fa


/* juce::AudioChannelSet::getChannelIndexForType(juce::AudioChannelSet::ChannelType) const */

int __thiscall juce::AudioChannelSet::getChannelIndexForType(AudioChannelSet *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  AudioChannelSet *pAVar5;
  bool bVar6;
  
  pAVar5 = this + 8;
  if (*(AudioChannelSet **)this != (AudioChannelSet *)0x0) {
    pAVar5 = *(AudioChannelSet **)this;
  }
  uVar1 = *(uint *)(this + 0x20);
  if ((int)uVar1 < 0) {
    return -1;
  }
  uVar3 = 0;
  while ((*(uint *)(pAVar5 + (long)((int)uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0) {
    uVar3 = uVar3 + 1;
    if (uVar1 + 1 == uVar3) {
      return -1;
    }
  }
  iVar4 = 0;
  bVar6 = -1 < (int)uVar3;
  if ((bVar6) && (param_1 != uVar3)) {
    iVar4 = 0;
    do {
      if ((int)uVar1 <= (int)uVar3) {
        return -1;
      }
      iVar4 = iVar4 + 1;
      while (uVar3 = uVar3 + 1,
            (*(uint *)(pAVar5 + (long)((int)uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0) {
        if (uVar3 == uVar1) {
          return -1;
        }
      }
      bVar6 = -1 < (int)uVar3;
    } while ((bVar6) && (param_1 != uVar3));
  }
  iVar2 = -1;
  if (bVar6) {
    iVar2 = iVar4;
  }
  return iVar2;
}


