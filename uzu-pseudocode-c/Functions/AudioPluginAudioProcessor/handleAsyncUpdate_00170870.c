// Function : handleAsyncUpdate
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170870
// Prototype: undefined handleAsyncUpdate(AudioPluginAudioProcessor * this)
// Body     : 00170870 - 001708b4


/* non-virtual thunk to AudioPluginAudioProcessor::handleAsyncUpdate() */

void __thiscall AudioPluginAudioProcessor::handleAsyncUpdate(AudioPluginAudioProcessor *this)

{
  uint uVar1;
  uint uVar2;
  
  LOCK();
  uVar1 = *(uint *)(this + 0x3d8);
  *(uint *)(this + 0x3d8) = 0xffffffff;
  UNLOCK();
  if (-1 < (int)uVar1) {
    uVar2 = 0x200;
    if (0x200 < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar2 != *(uint *)(this + -0x10c)) {
      juce::AudioProcessor::setLatencySamples((AudioProcessor *)(this + -0x148),uVar2);
    }
    *(uint *)(this + 0x3dc) = uVar2;
  }
  return;
}


