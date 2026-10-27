// Function : ~AudioPluginAudioProcessor
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016d630
// Prototype: undefined ~AudioPluginAudioProcessor(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, AudioPluginAudioProcessor * this, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0016d630 - 0016d7d1


/* AudioPluginAudioProcessor::~AudioPluginAudioProcessor() */

void __thiscall
AudioPluginAudioProcessor::~AudioPluginAudioProcessor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          AudioPluginAudioProcessor *this,undefined8 param_10,undefined8 param_11,
          undefined8 param_12,char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  PdWorker *this_00;
  undefined8 uVar2;
  LibPdManager *this_01;
  undefined8 extraout_RDX;
  undefined8 *puVar3;
  undefined8 extraout_XMM0_Qa;
  
  juce::AsyncUpdater::cancelPendingUpdate((AsyncUpdater *)(this + 0x148));
                    /* try { // try from 0016d64a to 0016d659 has its CatchHandler @ 0016d7e6 */
  this_00 = (PdWorker *)PdWorker::getInstance();
  PdWorker::unregisterInstance(this_00,(long)this);
  if (*(long *)(this + 0x280) != 0) {
                    /* try { // try from 0016d66d to 0016d682 has its CatchHandler @ 0016d7d2 */
    uVar2 = juce::File::exists((File *)(this + 0x888));
    if ((char)uVar2 != '\0') {
      juce::File::deleteRecursively((File *)(this + 0x888),0);
    }
                    /* try { // try from 0016d683 to 0016d697 has its CatchHandler @ 0016d7d4 */
    this_01 = (LibPdManager *)LibPdManager::getInstance();
    LibPdManager::destroyInstance
              (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,this_01,
               *(undefined1 **)(this + 0x280),extraout_RDX,param_12,param_13,param_14);
    *(undefined8 *)(this + 0x280) = 0;
  }
  puVar3 = *(undefined8 **)(this + 0x890);
  puVar1 = *(undefined8 **)(this + 0x898);
  if (puVar3 != puVar1) {
    do {
      if ((undefined8 *)*puVar3 != puVar3 + 2) {
        operator_delete((undefined8 *)*puVar3);
      }
      puVar3 = puVar3 + 4;
    } while (puVar3 != puVar1);
    puVar3 = *(undefined8 **)(this + 0x890);
  }
  if (puVar3 != (undefined8 *)0x0) {
    operator_delete(puVar3);
  }
  juce::String::~String((String *)(this + 0x888));
  free(*(void **)(this + 0x770));
  if (*(void **)(this + 0x508) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x508));
  }
  if (*(void **)(this + 0x4f0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x4f0));
  }
  if (*(void **)(this + 0x4e8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x4e8));
  }
  *(undefined8 *)(this + 0x4e8) = 0;
  if (*(void **)(this + 0x4e0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x4e0));
  }
  *(undefined8 *)(this + 0x4e0) = 0;
  free(*(void **)(this + 0x3d0));
  free(*(void **)(this + 0x2a8));
  if (*(void **)(this + 0x238) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x238));
  }
  juce::AudioProcessorValueTreeState::~AudioProcessorValueTreeState
            ((AudioProcessorValueTreeState *)(this + 0x158));
  juce::AsyncUpdater::~AsyncUpdater((AsyncUpdater *)(this + 0x148));
  juce::AudioProcessor::~AudioProcessor((AudioProcessor *)this);
  return;
}


