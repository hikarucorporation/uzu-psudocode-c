// Function : JuceAudioProcessor
// Namespace: juce:JuceAudioProcessor
// Entry    : 001a78f0
// Prototype: undefined JuceAudioProcessor(JuceAudioProcessor * this, undefined8 param_1)
// Body     : 001a78f0 - 001a7a51


/* juce::JuceAudioProcessor::JuceAudioProcessor(juce::AudioProcessor*) */

void __thiscall
juce::JuceAudioProcessor::JuceAudioProcessor(JuceAudioProcessor *this,undefined8 param_1)

{
  *(undefined ***)this = &PTR_queryInterface_00705838;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 100) = 0x70727374;
  this[0x68] = (JuceAudioProcessor)0x0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(JuceAudioProcessor **)(this + 0x88) = this + 0x78;
  *(JuceAudioProcessor **)(this + 0x90) = this + 0x78;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(JuceAudioProcessor **)(this + 0xb8) = this + 0xa8;
  *(JuceAudioProcessor **)(this + 0xc0) = this + 0xa8;
  *(undefined8 *)(this + 200) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = param_1;
  *(undefined8 *)(this + 0xe0) = 0;
                    /* try { // try from 001a79b3 to 001a79b7 has its CatchHandler @ 001a7ab4 */
  AudioProcessorParameterGroup::AudioProcessorParameterGroup
            ((AudioProcessorParameterGroup *)(this + 0xe8));
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined ***)(this + 0x128) = &PTR__Listener_00714858;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined2 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(JuceAudioProcessor **)(this + 0x158) = this + 0x148;
  *(JuceAudioProcessor **)(this + 0x160) = this + 0x148;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
                    /* try { // try from 001a7a40 to 001a7a47 has its CatchHandler @ 001a7a52 */
  setupParameters(this);
  return;
}


