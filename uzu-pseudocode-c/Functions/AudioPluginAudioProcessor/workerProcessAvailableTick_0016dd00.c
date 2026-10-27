// Function : workerProcessAvailableTick
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016dd00
// Prototype: undefined8 workerProcessAvailableTick(AudioPluginAudioProcessor * this)
// Body     : 0016dd00 - 0016e028


/* AudioPluginAudioProcessor::workerProcessAvailableTick() */

undefined8 __thiscall
AudioPluginAudioProcessor::workerProcessAvailableTick(AudioPluginAudioProcessor *this)

{
  int iVar1;
  undefined4 *__s;
  int iVar2;
  undefined4 extraout_var;
  pthread_mutex_t *__mutex;
  undefined4 extraout_var_00;
  undefined8 uVar3;
  uint local_4c;
  int local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  uint local_34 [5];
  
  if ((((((byte)this[0x278] & 1) == 0) || (*(long *)(this + 0x280) == 0)) ||
      (*(AbstractFifo **)(this + 0x4e0) == (AbstractFifo *)0x0)) || (*(long *)(this + 0x4e8) == 0))
  {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if ((0 < *(int *)(this + 0x294)) && (0 < *(int *)(this + 0x3bc))) {
      local_34[4] = 0;
      local_34[3] = 0;
      local_34[2] = 0;
      local_44 = 0;
      juce::AbstractFifo::prepareToRead
                (*(AbstractFifo **)(this + 0x4e0),0x40,(int *)(local_34 + 4),(int *)(local_34 + 3),
                 local_34 + 2,(int *)&local_44);
      iVar1 = local_44 + local_34[3];
      if (iVar1 < 0x40) {
        iVar2 = juce::AbstractFifo::finishedRead(*(AbstractFifo **)(this + 0x4e0),0);
        uVar3 = CONCAT44(extraout_var,iVar2);
      }
      else {
        local_4c = *(uint *)(this + 0x264);
        if ((int)local_4c < 1) {
          local_4c = 2;
        }
        if (1 < local_4c) {
          local_4c = 2;
        }
        local_34[1] = 0;
        if (0 < (int)local_34[3]) {
          workerProcessAvailableTick()::$_0::operator()
                    ((long)this,(int *)&local_4c,local_34[4],local_34[3],(int *)(local_34 + 1));
        }
        if (0 < (int)local_44) {
          workerProcessAvailableTick()::$_0::operator()
                    ((long)this,(int *)&local_4c,local_34[2],local_44,(int *)(local_34 + 1));
        }
        juce::AbstractFifo::finishedRead(*(AbstractFifo **)(this + 0x4e0),0x40);
        __mutex = (pthread_mutex_t *)LibPdManager::getGlobalMutex();
        iVar2 = pthread_mutex_lock(__mutex);
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar2);
        }
        if ((*(long *)(this + 0x280) != 0) && (((byte)this[0x278] & 1) != 0)) {
                    /* try { // try from 0016de69 to 0016de6d has its CatchHandler @ 0016e029 */
          libpd_set_instance(*(undefined8 *)(this + 0x280));
                    /* try { // try from 0016de6e to 0016df32 has its CatchHandler @ 0016e02b */
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,0,"Param_1");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,1,"Param_2");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,2,"Param_3");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,3,"Param_4");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,4,"Param_5");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,5,"Param_6");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,9,"Param_7");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,8,"Param_8");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,7,"Param_9");
          workerProcessAvailableTick()::$_1::operator()((__1 *)this,6,"Param_10");
          this[0x550] = (AudioPluginAudioProcessor)0x1;
          __s = *(undefined4 **)(this + 0x508);
          if (__s != *(undefined4 **)(this + 0x510)) {
            memset(__s,0,(long)*(undefined4 **)(this + 0x510) - (long)__s & 0xfffffffffffffffc);
          }
                    /* try { // try from 0016df65 to 0016df71 has its CatchHandler @ 0016e02b */
          libpd_process_float(1,*(undefined4 **)(this + 0x4f0),__s);
        }
        pthread_mutex_unlock(__mutex);
        local_34[0] = 0;
        local_38 = 0;
        local_3c = 0;
        local_40 = 0;
        juce::AbstractFifo::prepareToWrite
                  (*(AbstractFifo **)(this + 0x4e8),0x40,local_34,(int *)&local_38,&local_3c,
                   (int *)&local_40);
        local_48 = 0;
        if (0 < (int)local_38) {
          workerProcessAvailableTick()::$_2::operator()
                    (&local_48,(long)this,(int *)&local_4c,local_34[0],local_38);
        }
        if (0 < (int)local_40) {
          workerProcessAvailableTick()::$_2::operator()
                    (&local_48,(long)this,(int *)&local_4c,local_3c,local_40);
        }
        iVar2 = juce::AbstractFifo::finishedWrite(*(AbstractFifo **)(this + 0x4e8),local_48);
        uVar3 = CONCAT44(extraout_var_00,iVar2);
      }
      uVar3 = CONCAT71((int7)((ulong)uVar3 >> 8),0x3f < iVar1);
    }
  }
  return uVar3;
}


