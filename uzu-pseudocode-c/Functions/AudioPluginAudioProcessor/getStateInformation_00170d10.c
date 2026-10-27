// Function : getStateInformation
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170d10
// Prototype: undefined getStateInformation(AudioPluginAudioProcessor * this, long * param_1)
// Body     : 00170d10 - 00170d6f


/* AudioPluginAudioProcessor::getStateInformation(juce::MemoryBlock&) */

void __thiscall
AudioPluginAudioProcessor::getStateInformation(AudioPluginAudioProcessor *this,long *param_1)

{
  XmlElement *local_48;
  ValueTree local_40 [48];
  
  juce::AudioProcessorValueTreeState::copyState((undefined8 *)local_40,(long)(this + 0x158));
                    /* try { // try from 00170d2e to 00170d38 has its CatchHandler @ 00170d7d */
  juce::ValueTree::createXml(&local_48,(undefined8 *)local_40);
                    /* try { // try from 00170d3d to 00170d44 has its CatchHandler @ 00170d70 */
  juce::AudioProcessor::copyXmlToBinary(local_48,param_1);
  if (local_48 != (XmlElement *)0x0) {
    juce::XmlElement::~XmlElement(local_48);
    operator_delete(local_48);
  }
  juce::ValueTree::~ValueTree(local_40);
  return;
}


