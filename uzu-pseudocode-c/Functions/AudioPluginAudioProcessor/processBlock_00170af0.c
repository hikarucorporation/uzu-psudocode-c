// Function : processBlock
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170af0
// Prototype: undefined processBlock(AudioPluginAudioProcessor * param_1, int * param_2)
// Body     : 00170af0 - 00170c9b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* AudioPluginAudioProcessor::processBlock(juce::AudioBuffer<float>&, juce::MidiBuffer&) */

void __cdecl
AudioPluginAudioProcessor::processBlock(AudioPluginAudioProcessor *param_1,int *param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  bool bVar6;
  float fVar7;
  ScopedNoDenormals local_38 [8];
  
  juce::ScopedNoDenormals::ScopedNoDenormals(local_38);
  uVar3 = *(uint *)(param_1 + 0xf4);
  if (uVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0xf0);
    lVar5 = (long)(int)uVar1;
    if (((int)uVar1 < (int)uVar3) && ((char)param_2[0x48] == '\0')) {
      iVar4 = ~uVar1 + uVar3;
      do {
        juce::FloatVectorOperationsBase<float,int>::clear
                  (*(void **)(*(long *)(param_2 + 4) + lVar5 * 8),param_2[1]);
        do {
          bVar6 = iVar4 == 0;
          iVar4 = iVar4 + -1;
          if (bVar6) goto LAB_00170b38;
          lVar5 = lVar5 + 1;
        } while ((char)param_2[0x48] != '\0');
      } while( true );
    }
LAB_00170b38:
    if ((((byte)param_1[0x278] & 1) == 0) || (*(long *)(param_1 + 0x280) == 0)) {
      if ((char)param_2[0x48] == '\0') {
        if (0 < *param_2) {
          lVar5 = 0;
          do {
            juce::FloatVectorOperationsBase<float,int>::clear
                      (*(void **)(*(long *)(param_2 + 4) + lVar5 * 8),param_2[1]);
            lVar5 = lVar5 + 1;
          } while (lVar5 < *param_2);
        }
        *(undefined1 *)(param_2 + 0x48) = 1;
      }
    }
    else {
                    /* try { // try from 00170b55 to 00170b65 has its CatchHandler @ 00170c9c */
      processBlockOffline(param_1,param_2,uVar1,uVar3);
                    /* try { // try from 00170b74 to 00170bf8 has its CatchHandler @ 00170c9e */
      fVar7 = (float)(**(code **)(**(long **)(*(long *)(param_1 + 0x238) + 0x48) + 0x10))();
      if ((fVar7 != processBlock(juce::AudioBuffer<float>&,juce::MidiBuffer&)::lastLatencyParam) ||
         (NAN(fVar7) ||
          NAN(processBlock(juce::AudioBuffer<float>&,juce::MidiBuffer&)::lastLatencyParam))) {
        uVar1 = SUB84((double)(fVar7 * DAT_005d94d4) + DAT_005d9098,0);
        uVar3 = 4;
        if ((int)uVar1 < 4) {
          uVar3 = uVar1;
        }
        uVar2 = 0;
        if (-1 < (int)uVar3) {
          uVar2 = (ulong)uVar3;
        }
        iVar4 = (&(anonymous_namespace)::blocksizeChoices)[uVar2] + -100;
        if (iVar4 != *(int *)(param_1 + 0x524)) {
          applyPipelineLatencyChange(param_1,iVar4);
          *(int *)(param_1 + 0x520) = iVar4;
          juce::AsyncUpdater::triggerAsyncUpdate((AsyncUpdater *)(param_1 + 0x148));
        }
        processBlock(juce::AudioBuffer<float>&,juce::MidiBuffer&)::lastLatencyParam = fVar7;
      }
    }
  }
  juce::ScopedNoDenormals::~ScopedNoDenormals(local_38);
  return;
}


