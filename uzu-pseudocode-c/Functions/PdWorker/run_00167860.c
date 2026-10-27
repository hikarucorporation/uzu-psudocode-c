// Function : run
// Namespace: PdWorker
// Entry    : 00167860
// Prototype: undefined run(PdWorker * this)
// Body     : 00167860 - 00167a36


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PdWorker::run() */

void __thiscall PdWorker::run(PdWorker *this)

{
  pthread_mutex_t *__mutex;
  void *__src;
  AudioPluginAudioProcessor *this_00;
  byte bVar1;
  int iVar2;
  void *__dest;
  undefined8 uVar3;
  ulong __n;
  long lVar4;
  bool bVar5;
  
  bVar1 = juce::Thread::threadShouldExit((Thread *)this);
  if (bVar1 == 0) {
    __mutex = (pthread_mutex_t *)(this + 0x200);
    do {
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar2);
      }
      __src = *(void **)(this + 0x228);
      __n = *(long *)(this + 0x230) - (long)__src;
      if (__n == 0) {
        pthread_mutex_unlock(__mutex);
        __dest = (void *)0x0;
LAB_00167a0b:
                    /* try { // try from 00167a0b to 00167a1c has its CatchHandler @ 00167a39 */
        juce::WaitableEvent::wait(_DAT_005d9000,(WaitableEvent *)(this + 0x198));
        if (__dest != (void *)0x0) goto LAB_001678b0;
      }
      else {
        if (0x7ffffffffffffff8 < __n) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00167a2b to 00167a2f has its CatchHandler @ 00167a56 */
          std::__throw_bad_array_new_length();
        }
                    /* try { // try from 00167900 to 00167907 has its CatchHandler @ 00167a37 */
        __dest = operator_new(__n);
        memcpy(__dest,__src,__n);
        pthread_mutex_unlock(__mutex);
        lVar4 = 0;
        bVar5 = false;
        do {
          this_00 = *(AudioPluginAudioProcessor **)((long)__dest + lVar4);
          if ((this_00 != (AudioPluginAudioProcessor *)0x0) && (((byte)this_00[0x551] & 1) != 0)) {
            this_00[0x552] = (AudioPluginAudioProcessor)0x1;
                    /* try { // try from 00167970 to 001679d2 has its CatchHandler @ 00167a43 */
            uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00);
            if ((char)uVar3 != '\0') {
              uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00);
              bVar5 = true;
              if (((((char)uVar3 != '\0') &&
                   (uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00),
                   (char)uVar3 != '\0')) &&
                  (uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00),
                  (char)uVar3 != '\0')) &&
                 (((uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00),
                   (char)uVar3 != '\0' &&
                   (uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00),
                   (char)uVar3 != '\0')) &&
                  (uVar3 = AudioPluginAudioProcessor::workerProcessAvailableTick(this_00),
                  (char)uVar3 != '\0')))) {
                AudioPluginAudioProcessor::workerProcessAvailableTick(this_00);
              }
            }
            this_00[0x552] = (AudioPluginAudioProcessor)0x0;
          }
          lVar4 = lVar4 + 8;
        } while (((long)__n >> 3) * 8 != lVar4);
        if (!bVar5) goto LAB_00167a0b;
LAB_001678b0:
        operator_delete(__dest);
      }
      bVar1 = juce::Thread::threadShouldExit((Thread *)this);
    } while (bVar1 == 0);
  }
  return;
}


