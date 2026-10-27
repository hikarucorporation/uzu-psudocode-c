// Function : getGroupForParameter
// Namespace: juce:AudioProcessorParameterGroup
// Entry    : 004c7690
// Prototype: AudioProcessorParameterGroup * getGroupForParameter(AudioProcessorParameterGroup * this, long param_1)
// Body     : 004c7690 - 004c76fc


/* juce::AudioProcessorParameterGroup::getGroupForParameter(juce::AudioProcessorParameter*) const */

AudioProcessorParameterGroup * __thiscall
juce::AudioProcessorParameterGroup::getGroupForParameter
          (AudioProcessorParameterGroup *this,long param_1)

{
  int iVar1;
  long lVar2;
  AudioProcessorParameterGroup *pAVar3;
  long lVar4;
  
  iVar1 = *(int *)(this + 0x24);
  if ((long)iVar1 != 0) {
    lVar2 = *(long *)(this + 0x18);
    lVar4 = 0;
    do {
      if ((*(undefined8 **)(lVar2 + lVar4))[1] == param_1) {
        return this;
      }
      pAVar3 = (AudioProcessorParameterGroup *)**(undefined8 **)(lVar2 + lVar4);
      if ((pAVar3 != (AudioProcessorParameterGroup *)0x0) &&
         (pAVar3 = getGroupForParameter(pAVar3,param_1),
         pAVar3 != (AudioProcessorParameterGroup *)0x0)) {
        return pAVar3;
      }
      lVar4 = lVar4 + 8;
    } while ((long)iVar1 * 8 != lVar4);
  }
  return (AudioProcessorParameterGroup *)0x0;
}


