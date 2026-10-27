// Function : safeTeardownPd
// Namespace: AudioPluginAudioProcessor
// Entry    : 00171020
// Prototype: AudioPluginAudioProcessor safeTeardownPd(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, AudioPluginAudioProcessor * this, undefined8 param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 00171020 - 00171199


/* AudioPluginAudioProcessor::safeTeardownPd() */

AudioPluginAudioProcessor __thiscall
AudioPluginAudioProcessor::safeTeardownPd
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          double param_5,double param_6,double param_7,undefined8 param_8,
          AudioPluginAudioProcessor *this,undefined8 param_10,undefined8 param_11,
          undefined8 param_12,uint *param_13,uint *param_14)

{
  AudioPluginAudioProcessor AVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  pthread_mutex_t *__mutex;
  undefined8 uVar5;
  LibPdManager *this_00;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 *puVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  if (*(long *)(this + 0x280) != 0) {
    __mutex = (pthread_mutex_t *)LibPdManager::getGlobalMutex();
    iVar4 = pthread_mutex_lock(__mutex);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
    }
                    /* try { // try from 0017105a to 0017112a has its CatchHandler @ 0017119c */
    libpd_set_instance(*(undefined8 *)(this + 0x280));
    if (((byte)this[0x268] & 1) != 0) {
      libpd_start_message(1);
      libpd_add_float(0);
      libpd_finish_message
                (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,"pd","dsp",extraout_RDX,param_12,param_13,param_14);
      LOCK();
      this[0x268] = (AudioPluginAudioProcessor)0x0;
      UNLOCK();
    }
    if ((long *)0x1 < *(long **)(this + 0x270)) {
      libpd_closefile(*(long **)(this + 0x270));
      *(undefined8 *)(this + 0x270) = 0;
    }
    puVar2 = *(undefined8 **)(this + 0x890);
    puVar3 = *(undefined8 **)(this + 0x898);
    if (puVar3 != puVar2) {
      puVar6 = puVar2;
      do {
        if ((undefined8 *)*puVar6 != puVar6 + 2) {
          operator_delete((undefined8 *)*puVar6);
        }
        puVar6 = puVar6 + 4;
      } while (puVar6 != puVar3);
      *(undefined8 **)(this + 0x898) = puVar2;
    }
    this[0x250] = (AudioPluginAudioProcessor)0x0;
    uVar5 = juce::File::exists((File *)(this + 0x888));
    if ((char)uVar5 != '\0') {
      juce::File::deleteRecursively((File *)(this + 0x888),0);
    }
                    /* try { // try from 0017112b to 0017113f has its CatchHandler @ 0017119a */
    this_00 = (LibPdManager *)LibPdManager::getInstance();
    LibPdManager::destroyInstance
              (CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,this_00,*(undefined1 **)(this + 0x280),extraout_RDX_00,
               param_12,(char *)param_13,param_14);
    *(undefined8 *)(this + 0x280) = 0;
    this[0x279] = (AudioPluginAudioProcessor)0x0;
    LOCK();
    this[0x278] = (AudioPluginAudioProcessor)0x0;
    UNLOCK();
    pthread_mutex_unlock(__mutex);
  }
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x260) = 0xffffffffffffffff;
  LOCK();
  AVar1 = this[0x268];
  this[0x268] = (AudioPluginAudioProcessor)0x0;
  UNLOCK();
  return AVar1;
}


