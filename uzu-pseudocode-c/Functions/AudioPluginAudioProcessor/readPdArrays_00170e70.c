// Function : readPdArrays
// Namespace: AudioPluginAudioProcessor
// Entry    : 00170e70
// Prototype: undefined8 readPdArrays(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4_00, undefined8 param_5_00, undefined8 param_6_00, undefined8 param_7, undefined8 param_8, AudioPluginAudioProcessor * this, char * param_10, char * param_11, vector<float,std::allocator<float>> * param_12, vector<float,std::allocator<float>> * param_13, char * param_14, vector<float,std::allocator<float>> * param_15)
// Body     : 00170e70 - 00170ff7


/* AudioPluginAudioProcessor::readPdArrays(char const*, char const*, std::vector<float,
   std::allocator<float> >&, std::vector<float, std::allocator<float> >&, char const*,
   std::vector<float, std::allocator<float> >*) */

undefined8 __thiscall
AudioPluginAudioProcessor::readPdArrays
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4_00,
          undefined8 param_5_00,undefined8 param_6_00,undefined8 param_7,undefined8 param_8,
          AudioPluginAudioProcessor *this,char *param_10,char *param_11,
          vector<float,std::allocator<float>> *param_12,
          vector<float,std::allocator<float>> *param_13,char *param_14,
          vector<float,std::allocator<float>> *param_15)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  pthread_mutex_t *__mutex;
  ulong uVar4;
  vector<float,std::allocator<float>> *pvVar5;
  char *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  
  if (param_10 == (char *)0x0) {
    return 0;
  }
  if (param_11 == (char *)0x0) {
    return 0;
  }
  if (((byte)this[0x278] & 1) == 0) {
    return 0;
  }
  if (*(long *)(this + 0x280) == 0) {
    return 0;
  }
  if (this[0x279] == (AudioPluginAudioProcessor)0x0) {
    return 0;
  }
  pvVar5 = param_13;
  pcVar6 = param_14;
  __mutex = (pthread_mutex_t *)LibPdManager::getGlobalMutex();
  iVar1 = pthread_mutex_trylock(__mutex);
  if (iVar1 != 0) {
    return 0;
  }
                    /* try { // try from 00170ef7 to 00170f00 has its CatchHandler @ 00170ffc */
  uVar9 = libpd_set_instance(*(undefined8 *)(this + 0x280));
                    /* try { // try from 00170f01 to 00170f08 has its CatchHandler @ 00170ffa */
  uVar2 = libpd_arraysize(uVar9,param_2_00,param_3_00,param_4_00,param_5_00,param_6_00,param_7,
                          param_8,param_10);
                    /* try { // try from 00170f0c to 00170f13 has its CatchHandler @ 00170ff8 */
  uVar3 = libpd_arraysize(extraout_XMM0_Qa,param_2_00,param_3_00,param_4_00,param_5_00,param_6_00,
                          param_7,param_8,param_11);
  uVar9 = 0;
  if (((int)uVar2 < 1) || ((int)uVar3 < 1)) goto LAB_00170fb7;
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  bVar7 = param_14 == (char *)0x0;
  bVar8 = param_15 == (vector<float,std::allocator<float>> *)0x0;
  if (bVar8 || bVar7) {
LAB_00170f5f:
    uVar4 = (ulong)uVar2;
    std::vector<float,std::allocator<float>>::resize(param_12,uVar4);
    uVar9 = std::vector<float,std::allocator<float>>::resize(param_13,uVar4);
    if (!bVar8 && !bVar7) {
      uVar9 = std::vector<float,std::allocator<float>>::resize(param_15,uVar4);
    }
    uVar9 = libpd_read_array(uVar9,param_2_00,param_3_00,param_4_00,param_5_00,param_6_00,param_7,
                             param_8,*(undefined4 **)param_12,param_10,0,uVar2,(char *)pvVar5,pcVar6
                            );
    if ((((int)uVar9 == 0) &&
        (uVar9 = libpd_read_array(extraout_XMM0_Qa_01,param_2_00,param_3_00,param_4_00,param_5_00,
                                  param_6_00,param_7,param_8,*(undefined4 **)param_13,param_11,0,
                                  uVar2,(char *)pvVar5,pcVar6), (int)uVar9 == 0)) &&
       ((bVar8 || bVar7 ||
        (uVar9 = libpd_read_array(extraout_XMM0_Qa_02,param_2_00,param_3_00,param_4_00,param_5_00,
                                  param_6_00,param_7,param_8,*(undefined4 **)param_15,param_14,0,
                                  uVar2,(char *)pvVar5,pcVar6), (int)uVar9 == 0)))) {
      uVar9 = 1;
      goto LAB_00170fb7;
    }
  }
  else {
                    /* try { // try from 00170f4f to 00170fee has its CatchHandler @ 00170ffe */
    uVar3 = libpd_arraysize(extraout_XMM0_Qa_00,param_2_00,param_3_00,param_4_00,param_5_00,
                            param_6_00,param_7,param_8,param_14);
    if (0 < (int)uVar3) {
      if (uVar3 < uVar2) {
        uVar2 = uVar3;
      }
      goto LAB_00170f5f;
    }
  }
  uVar9 = 0;
LAB_00170fb7:
  pthread_mutex_unlock(__mutex);
  return uVar9;
}


