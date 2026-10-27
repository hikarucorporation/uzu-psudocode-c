// Function : setupPdAudioIfNeeded
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016f1e0
// Prototype: ulong setupPdAudioIfNeeded(double param_1, double param_2_00, undefined8 param_3_00, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, AudioPluginAudioProcessor * this, int param_10, int param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0016f1e0 - 0016f301


/* AudioPluginAudioProcessor::setupPdAudioIfNeeded(double, int, int) */

ulong __thiscall
AudioPluginAudioProcessor::setupPdAudioIfNeeded
          (double param_1,double param_2_00,undefined8 param_3_00,undefined8 param_4,double param_5,
          double param_6,double param_7,undefined8 param_8,AudioPluginAudioProcessor *this,
          int param_10,int param_11,undefined8 param_12,uint *param_13,uint *param_14)

{
  AudioPluginAudioProcessor AVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  ulong uVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar3 = (undefined7)((ulong)in_RAX >> 8);
  if (((byte)this[0x278] & 1) != 0) {
    param_2_00 = *(double *)(this + 600);
    if ((((param_2_00 == param_1) && (!NAN(param_2_00) && !NAN(param_1))) &&
        (*(int *)(this + 0x260) == param_10)) && (*(int *)(this + 0x264) == param_11)) {
      return CONCAT71(uVar3,this[0x278]);
    }
  }
  uVar2 = CONCAT71(uVar3,this[0x268]);
  if ((((byte)this[0x268] & 1) != 0) && (*(long *)(this + 0x280) != 0)) {
    libpd_set_instance(*(long *)(this + 0x280));
    libpd_start_message(1);
    libpd_add_float(0);
    libpd_finish_message
              (extraout_XMM0_Qa,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,"pd",
               "dsp",extraout_RDX,param_12,param_13,param_14);
    LOCK();
    AVar1 = this[0x268];
    this[0x268] = (AudioPluginAudioProcessor)0x0;
    uVar2 = (ulong)(byte)AVar1;
    UNLOCK();
  }
  if (*(long *)(this + 0x280) != 0) {
    uVar4 = libpd_set_instance(*(long *)(this + 0x280));
    uVar4 = libpd_init_audio(uVar4,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                             param_10,param_11,(int)param_1,param_12,param_13,param_14);
    if ((int)uVar4 == 0) {
      LOCK();
      this[0x278] = (AudioPluginAudioProcessor)0x1;
      UNLOCK();
      this[0x550] = (AudioPluginAudioProcessor)0x0;
      *(double *)(this + 600) = param_1;
      *(int *)(this + 0x260) = param_10;
      *(int *)(this + 0x264) = param_11;
      libpd_start_message(1);
      libpd_add_float(DAT_005d9038);
      uVar2 = libpd_finish_message
                        (extraout_XMM0_Qa_00,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                         param_8,"pd","dsp",extraout_RDX_00,param_12,param_13,param_14);
      LOCK();
      this[0x268] = (AudioPluginAudioProcessor)0x1;
      UNLOCK();
    }
    else {
      LOCK();
      AVar1 = this[0x278];
      this[0x278] = (AudioPluginAudioProcessor)0x0;
      uVar2 = (ulong)(byte)AVar1;
      UNLOCK();
    }
  }
  return uVar2;
}


