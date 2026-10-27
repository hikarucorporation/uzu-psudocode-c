// Function : setStateInformation
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170da0
// Prototype: undefined setStateInformation(AudioPluginAudioProcessor * this, int * param_1, int param_2, undefined8 param_3, ulong param_4, ulong param_5)
// Body     : 00170da0 - 00170e4b


/* AudioPluginAudioProcessor::setStateInformation(void const*, int) */

void __thiscall
AudioPluginAudioProcessor::setStateInformation
          (AudioPluginAudioProcessor *this,int *param_1,int param_2,undefined8 param_3,ulong param_4
          ,ulong param_5)

{
  XmlElement *pXVar1;
  bool bVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_var;
  XmlElement *local_58;
  byte *local_50 [6];
  Identifier local_20 [8];
  
  juce::AudioProcessor::getXmlFromBinary((AudioProcessor *)&local_58,param_1,param_2);
  pXVar1 = local_58;
  if (local_58 != (XmlElement *)0x0) {
    juce::ValueTree::getType((long *)local_20,(long *)(this + 400));
    juce::StringRef::StringRef((StringRef *)local_50,(undefined8 *)local_20);
    bVar2 = juce::XmlElement::hasTagName((long)pXVar1,local_50[0]);
    juce::Identifier::~Identifier(local_20);
    if (bVar2) {
                    /* try { // try from 00170e01 to 00170e0a has its CatchHandler @ 00170e5b */
      juce::ValueTree::fromXml
                ((ValueTree *)local_50,(long)local_58,CONCAT44(extraout_var,extraout_EDX),param_3,
                 param_4,param_5);
                    /* try { // try from 00170e12 to 00170e1e has its CatchHandler @ 00170e4c */
      juce::AudioProcessorValueTreeState::replaceState
                ((AudioProcessorValueTreeState *)(this + 0x158),(long *)local_50);
      juce::ValueTree::~ValueTree((ValueTree *)local_50);
    }
    if (local_58 != (XmlElement *)0x0) {
      juce::XmlElement::~XmlElement(local_58);
      operator_delete(local_58);
    }
  }
  return;
}


