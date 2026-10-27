// Function : applyPipelineLatencyChange
// Namespace: AudioPluginAudioProcessor
// Entry    : 001708c0
// Prototype: undefined applyPipelineLatencyChange(AudioPluginAudioProcessor * this, int param_1)
// Body     : 001708c0 - 00170a71


/* AudioPluginAudioProcessor::applyPipelineLatencyChange(int) */

void __thiscall
AudioPluginAudioProcessor::applyPipelineLatencyChange(AudioPluginAudioProcessor *this,int param_1)

{
  ulong __n;
  AudioPluginAudioProcessor AVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_1 < 0x201) {
    param_1 = 0x200;
  }
  *(int *)(this + 0x288) = param_1;
  uVar2 = *(uint *)(this + 0x75c);
  if ((int)uVar2 < param_1) {
    uVar4 = 0x200;
    if (0 < (int)uVar2) {
      uVar4 = uVar2;
    }
    if (uVar4 <= param_1 + 0x100U) {
      uVar4 = param_1 + 0x100U;
    }
    uVar3 = uVar4 - 1 >> 1 | uVar4 - 1;
    uVar3 = (int)uVar3 >> 2 | uVar3;
    uVar3 = (int)uVar3 >> 4 | uVar3;
    uVar3 = (int)uVar3 >> 8 | uVar3;
    uVar3 = (int)uVar3 >> 0x10 | uVar3;
    uVar4 = uVar3 + 1;
    if ((uVar2 != uVar4) || (*(int *)(this + 0x758) != 2)) {
      uVar5 = (ulong)(uVar3 + 4 & 0xfffffffc);
      __n = uVar5 * 8 + 0x40;
      if (*(ulong *)(this + 0x760) < __n) {
        *(ulong *)(this + 0x760) = __n;
        juce::HeapBlock<char,true>::allocate<unsigned_long>
                  ((HeapBlock<char,true> *)(this + 0x770),__n,
                   (uint)(this[0x878] != (AudioPluginAudioProcessor)0x0));
        *(undefined8 *)(this + 0x768) = *(undefined8 *)(this + 0x770);
      }
      else if (this[0x878] != (AudioPluginAudioProcessor)0x0) {
        memset(*(void **)(this + 0x770),0,__n);
      }
      lVar6 = *(long *)(this + 0x770);
      **(long **)(this + 0x768) = lVar6 + 0x20;
      *(ulong *)(*(long *)(this + 0x768) + 8) = lVar6 + uVar5 * 4 + 0x20;
      *(undefined8 *)(*(long *)(this + 0x768) + 0x10) = 0;
      *(uint *)(this + 0x75c) = uVar4;
      *(undefined4 *)(this + 0x758) = 2;
      AVar1 = this[0x878];
      goto joined_r0x00170934;
    }
  }
  AVar1 = this[0x878];
  uVar4 = uVar2;
joined_r0x00170934:
  if (AVar1 == (AudioPluginAudioProcessor)0x0) {
    if ((0 < *(int *)(this + 0x758)) &&
       (juce::FloatVectorOperationsBase<float,int>::clear
                  ((void *)**(undefined8 **)(this + 0x768),uVar4), 1 < *(int *)(this + 0x758))) {
      lVar6 = 1;
      do {
        juce::FloatVectorOperationsBase<float,int>::clear
                  (*(void **)(*(long *)(this + 0x768) + lVar6 * 8),*(int *)(this + 0x75c));
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)(this + 0x758));
    }
    this[0x878] = (AudioPluginAudioProcessor)0x1;
  }
  *(undefined4 *)(this + 0x880) = 0;
  memset(this + 0x554,0,0x204);
  return;
}


