// Function : handleAsyncUpdate
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170830
// Prototype: undefined handleAsyncUpdate(AudioPluginAudioProcessor * this)
// Body     : 00170830 - 0017086d


/* AudioPluginAudioProcessor::handleAsyncUpdate() */

void __thiscall AudioPluginAudioProcessor::handleAsyncUpdate(AudioPluginAudioProcessor *this)

{
  uint uVar1;
  uint uVar2;
  
  LOCK();
  uVar1 = *(uint *)(this + 0x520);
  *(uint *)(this + 0x520) = 0xffffffff;
  UNLOCK();
  if (-1 < (int)uVar1) {
    uVar2 = 0x200;
    if (0x200 < uVar1) {
      uVar2 = uVar1;
    }
    if (uVar2 != *(uint *)(this + 0x3c)) {
      juce::AudioProcessor::setLatencySamples((AudioProcessor *)this,uVar2);
    }
    *(uint *)(this + 0x524) = uVar2;
  }
  return;
}


