// Function : releaseResources
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170400
// Prototype: undefined releaseResources(AudioPluginAudioProcessor * this)
// Body     : 00170400 - 001705e9


/* AudioPluginAudioProcessor::releaseResources() */

void __thiscall AudioPluginAudioProcessor::releaseResources(AudioPluginAudioProcessor *this)

{
  void *pvVar1;
  PdWorker *this_00;
  
  this_00 = (PdWorker *)PdWorker::getInstance();
  PdWorker::unregisterInstance(this_00,(long)this);
  if (*(int *)(this + 0x294) == 0 && *(int *)(this + 0x290) == 0) {
    if (*(int *)(this + 0x3bc) != 0 || *(int *)(this + 0x3b8) != 0) {
LAB_00170582:
      *(undefined8 *)(this + 0x3c0) = 0x30;
      juce::HeapBlock<char,true>::allocate<unsigned_long>
                ((HeapBlock<char,true> *)(this + 0x3d0),0x30,
                 (uint)(this[0x4d8] != (AudioPluginAudioProcessor)0x0));
      *(undefined8 **)(this + 0x3c8) = *(undefined8 **)(this + 0x3d0);
      **(undefined8 **)(this + 0x3d0) = 0;
      *(undefined8 *)(this + 0x3b8) = 0;
      pvVar1 = *(void **)(this + 0x4e0);
      *(undefined8 *)(this + 0x4e0) = 0;
      goto joined_r0x0017044d;
    }
  }
  else {
    *(undefined8 *)(this + 0x298) = 0x30;
    juce::HeapBlock<char,true>::allocate<unsigned_long>
              ((HeapBlock<char,true> *)(this + 0x2a8),0x30,
               (uint)(this[0x3b0] != (AudioPluginAudioProcessor)0x0));
    *(undefined8 **)(this + 0x2a0) = *(undefined8 **)(this + 0x2a8);
    **(undefined8 **)(this + 0x2a8) = 0;
    *(undefined8 *)(this + 0x290) = 0;
    if (*(int *)(this + 0x3bc) != 0 || *(int *)(this + 0x3b8) != 0) goto LAB_00170582;
  }
  pvVar1 = *(void **)(this + 0x4e0);
  *(undefined8 *)(this + 0x4e0) = 0;
joined_r0x0017044d:
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x4e8);
  *(undefined8 *)(this + 0x4e8) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x4f0);
  *(undefined8 *)(this + 0x4f0) = 0;
  *(undefined8 *)(this + 0x4f8) = 0;
  *(undefined8 *)(this + 0x500) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 0x508);
  *(undefined8 *)(this + 0x508) = 0;
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x518) = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  if (*(int *)(this + 0x75c) != 0 || *(int *)(this + 0x758) != 0) {
    *(undefined8 *)(this + 0x760) = 0x30;
    juce::HeapBlock<char,true>::allocate<unsigned_long>
              ((HeapBlock<char,true> *)(this + 0x770),0x30,
               (uint)(this[0x878] != (AudioPluginAudioProcessor)0x0));
    *(undefined8 **)(this + 0x768) = *(undefined8 **)(this + 0x770);
    **(undefined8 **)(this + 0x770) = 0;
    *(undefined8 *)(this + 0x758) = 0;
  }
  *(undefined4 *)(this + 0x880) = 0;
  *(undefined4 *)(this + 0x754) = 0;
  return;
}


