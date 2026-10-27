// Function : initializeBuffers
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016d990
// Prototype: undefined initializeBuffers(AudioPluginAudioProcessor * this, int param_1)
// Body     : 0016d990 - 0016dcf3


/* AudioPluginAudioProcessor::initializeBuffers(int) */

void __thiscall
AudioPluginAudioProcessor::initializeBuffers(AudioPluginAudioProcessor *this,int param_1)

{
  size_t sVar1;
  AudioPluginAudioProcessor AVar2;
  long *plVar3;
  void *pvVar4;
  AbstractFifo *pAVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  
  iVar9 = 0x100;
  if (0x100 < param_1 * 2) {
    iVar9 = param_1 * 2;
  }
  uVar6 = iVar9 - 1U >> 1 | iVar9 - 1U;
  uVar6 = (int)uVar6 >> 2 | uVar6;
  uVar6 = (int)uVar6 >> 4 | uVar6;
  uVar6 = (int)uVar6 >> 8 | uVar6;
  uVar6 = (int)uVar6 >> 0x10 | uVar6;
  iVar9 = uVar6 + 1;
  if ((*(int *)(this + 0x294) != iVar9) || (*(int *)(this + 0x290) != 2)) {
    uVar7 = (ulong)(uVar6 + 4 & 0xfffffffc);
    sVar1 = uVar7 * 8 + 0x40;
    *(size_t *)(this + 0x298) = sVar1;
    juce::HeapBlock<char,true>::allocate<unsigned_long>
              ((HeapBlock<char,true> *)(this + 0x2a8),sVar1,
               (uint)(this[0x3b0] != (AudioPluginAudioProcessor)0x0));
    plVar3 = *(long **)(this + 0x2a8);
    *(long **)(this + 0x2a0) = plVar3;
    *plVar3 = (long)(plVar3 + 4);
    *(ulong *)(*(long *)(this + 0x2a0) + 8) = (long)plVar3 + uVar7 * 4 + 0x20;
    *(undefined8 *)(*(long *)(this + 0x2a0) + 0x10) = 0;
    *(int *)(this + 0x294) = iVar9;
    *(undefined4 *)(this + 0x290) = 2;
  }
  if ((*(int *)(this + 0x3bc) == iVar9) && (*(int *)(this + 0x3b8) == 2)) {
    AVar2 = this[0x3b0];
  }
  else {
    uVar7 = (ulong)(uVar6 + 4 & 0xfffffffc);
    sVar1 = uVar7 * 8 + 0x40;
    *(size_t *)(this + 0x3c0) = sVar1;
    juce::HeapBlock<char,true>::allocate<unsigned_long>
              ((HeapBlock<char,true> *)(this + 0x3d0),sVar1,
               (uint)(this[0x4d8] != (AudioPluginAudioProcessor)0x0));
    plVar3 = *(long **)(this + 0x3d0);
    *(long **)(this + 0x3c8) = plVar3;
    *plVar3 = (long)(plVar3 + 4);
    *(ulong *)(*(long *)(this + 0x3c8) + 8) = (long)plVar3 + uVar7 * 4 + 0x20;
    *(undefined8 *)(*(long *)(this + 0x3c8) + 0x10) = 0;
    *(int *)(this + 0x3bc) = iVar9;
    *(undefined4 *)(this + 0x3b8) = 2;
    AVar2 = this[0x3b0];
  }
  if (AVar2 == (AudioPluginAudioProcessor)0x0) {
    if (0 < *(int *)(this + 0x290)) {
      lVar8 = 0;
      do {
        juce::FloatVectorOperationsBase<float,int>::clear
                  (*(void **)(*(long *)(this + 0x2a0) + lVar8 * 8),*(int *)(this + 0x294));
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(this + 0x290));
    }
    this[0x3b0] = (AudioPluginAudioProcessor)0x1;
    AVar2 = this[0x4d8];
  }
  else {
    AVar2 = this[0x4d8];
  }
  if (AVar2 == (AudioPluginAudioProcessor)0x0) {
    if (0 < *(int *)(this + 0x3b8)) {
      lVar8 = 0;
      do {
        juce::FloatVectorOperationsBase<float,int>::clear
                  (*(void **)(*(long *)(this + 0x3c8) + lVar8 * 8),*(int *)(this + 0x3bc));
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(this + 0x3b8));
    }
    this[0x4d8] = (AudioPluginAudioProcessor)0x1;
  }
  uVar7 = *(long *)(this + 0x4f8) - *(long *)(this + 0x4f0);
  if (uVar7 < 0x200) {
    std::vector<float,std::allocator<float>>::_M_default_append
              ((vector<float,std::allocator<float>> *)(this + 0x4f0),0x80 - (uVar7 >> 2));
  }
  else if ((uVar7 != 0x200) &&
          (lVar8 = *(long *)(this + 0x4f0) + 0x200, *(long *)(this + 0x4f8) != lVar8)) {
    *(long *)(this + 0x4f8) = lVar8;
  }
  uVar7 = *(long *)(this + 0x510) - *(long *)(this + 0x508);
  if (uVar7 < 0x200) {
    std::vector<float,std::allocator<float>>::_M_default_append
              ((vector<float,std::allocator<float>> *)(this + 0x508),0x80 - (uVar7 >> 2));
  }
  else if ((uVar7 != 0x200) &&
          (lVar8 = *(long *)(this + 0x508) + 0x200, *(long *)(this + 0x510) != lVar8)) {
    *(long *)(this + 0x510) = lVar8;
  }
  pvVar4 = *(void **)(this + 0x4f0);
  if (pvVar4 != *(void **)(this + 0x4f8)) {
    memset(pvVar4,0,(long)*(void **)(this + 0x4f8) - (long)pvVar4 & 0xfffffffffffffffc);
  }
  pvVar4 = *(void **)(this + 0x508);
  if (pvVar4 != *(void **)(this + 0x510)) {
    memset(pvVar4,0,(long)*(void **)(this + 0x510) - (long)pvVar4 & 0xfffffffffffffffc);
  }
  pAVar5 = operator_new(0xc);
  juce::AbstractFifo::AbstractFifo(pAVar5,iVar9);
  pvVar4 = *(void **)(this + 0x4e0);
  *(AbstractFifo **)(this + 0x4e0) = pAVar5;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  pAVar5 = operator_new(0xc);
  juce::AbstractFifo::AbstractFifo(pAVar5,iVar9);
  pvVar4 = *(void **)(this + 0x4e8);
  *(AbstractFifo **)(this + 0x4e8) = pAVar5;
  if (pvVar4 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar4);
  return;
}


