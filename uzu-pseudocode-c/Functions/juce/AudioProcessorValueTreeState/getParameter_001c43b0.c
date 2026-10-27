// Function : getParameter
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c43b0
// Prototype: undefined8 getParameter(AudioProcessorValueTreeState * this, byte * param_1)
// Body     : 001c43b0 - 001c4440


/* juce::AudioProcessorValueTreeState::getParameter(juce::StringRef) const */

undefined8 __thiscall
juce::AudioProcessorValueTreeState::getParameter(AudioProcessorValueTreeState *this,byte *param_1)

{
  uint uVar1;
  AudioProcessorValueTreeState *pAVar2;
  AudioProcessorValueTreeState *pAVar3;
  AudioProcessorValueTreeState *pAVar4;
  AudioProcessorValueTreeState *pAVar5;
  
  pAVar3 = *(AudioProcessorValueTreeState **)(this + 0x98);
  if (pAVar3 != (AudioProcessorValueTreeState *)0x0) {
    pAVar5 = this + 0x90;
    pAVar4 = pAVar5;
    do {
      uVar1 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(pAVar3 + 0x20),param_1);
      pAVar2 = pAVar3 + 0x18;
      if (-1 < (int)uVar1) {
        pAVar2 = pAVar3 + 0x10;
        pAVar4 = pAVar3;
      }
      pAVar3 = *(AudioProcessorValueTreeState **)pAVar2;
    } while (pAVar3 != (AudioProcessorValueTreeState *)0x0);
    if (pAVar4 != pAVar5) {
      uVar1 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (param_1,*(byte **)(pAVar4 + 0x20));
      if ((int)uVar1 < 0) {
        pAVar4 = pAVar5;
      }
      if ((pAVar4 != pAVar5) && (*(long *)(pAVar4 + 0x28) != 0)) {
        return *(undefined8 *)(*(long *)(pAVar4 + 0x28) + 0x38);
      }
    }
  }
  return 0;
}


