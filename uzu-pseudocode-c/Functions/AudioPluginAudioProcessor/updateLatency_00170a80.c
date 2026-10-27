// Function : updateLatency
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170a80
// Prototype: undefined updateLatency(float param_1, AudioPluginAudioProcessor * this)
// Body     : 00170a80 - 00170aee


/* AudioPluginAudioProcessor::updateLatency(float) */

void __thiscall
AudioPluginAudioProcessor::updateLatency(float param_1,AudioPluginAudioProcessor *this)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = SUB84((double)(param_1 * DAT_005d94d4) + DAT_005d9098,0);
  uVar3 = 4;
  if ((int)uVar1 < 4) {
    uVar3 = uVar1;
  }
  uVar2 = 0;
  if (-1 < (int)uVar3) {
    uVar2 = (ulong)uVar3;
  }
  iVar4 = (&(anonymous_namespace)::blocksizeChoices)[uVar2] + -100;
  if (iVar4 == *(int *)(this + 0x524)) {
    return;
  }
  applyPipelineLatencyChange(this,iVar4);
  *(int *)(this + 0x520) = iVar4;
  juce::AsyncUpdater::triggerAsyncUpdate((AsyncUpdater *)(this + 0x148));
  return;
}


