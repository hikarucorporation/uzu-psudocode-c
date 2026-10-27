// Function : prepareToPlay
// Namespace: AudioPluginAudioProcessor
// Entry    : 0016ea20
// Prototype: undefined prepareToPlay(vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> * param_1, double param_2_00, double param_3, double param_4, double param_5, double param_6, double param_7, undefined8 param_8, AudioPluginAudioProcessor * this, uint param_10, undefined8 param_11, ulong param_12, uint * param_13, uint * param_14)
// Body     : 0016ea20 - 0016f08f


/* AudioPluginAudioProcessor::prepareToPlay(double, int) */

void __thiscall
AudioPluginAudioProcessor::prepareToPlay
          (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *param_1,
          double param_2_00,double param_3,double param_4,double param_5,double param_6,
          double param_7,undefined8 param_8,AudioPluginAudioProcessor *this,uint param_10,
          undefined8 param_11,ulong param_12,uint *param_13,uint *param_14)

{
  AudioPluginAudioProcessor AVar1;
  ulong *puVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  PdWorker *this_00;
  pthread_mutex_t *__mutex;
  Random *this_01;
  ulong uVar8;
  ulong *__dest;
  LibPdManager *this_02;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  ulong uVar13;
  String *this_03;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar14;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  File aFStack_d8 [8];
  File local_d0 [8];
  char *local_c8 [2];
  char local_b8 [16];
  File local_a8 [8];
  vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *local_a0;
  File local_98 [8];
  String local_90 [8];
  char *local_88;
  char *local_80;
  char local_78 [16];
  char *local_68 [2];
  char local_58 [16];
  byte *local_48;
  byte *local_40;
  byte *local_38;
  
  local_a0 = param_1;
  this_00 = (PdWorker *)PdWorker::getInstance();
  PdWorker::unregisterInstance(this_00,(long)this);
  uVar8 = (ulong)param_10;
  initializeBuffers(this,param_10);
  puVar9 = *(undefined8 **)(this + 0x280);
  if (puVar9 == (undefined8 *)0x0) {
    if (this[0x279] == (AudioPluginAudioProcessor)0x0) {
                    /* try { // try from 0016ec03 to 0016ec0f has its CatchHandler @ 0016f19b */
      this_02 = (LibPdManager *)LibPdManager::getInstance();
      puVar9 = LibPdManager::createInstance
                         (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2_00,param_3,param_4,
                          param_5,param_6,param_7,param_8,this_02,uVar8,extraout_RDX_00,param_12,
                          (char *)param_13,(char *)param_14);
      *(undefined8 **)(this + 0x280) = puVar9;
      this[0x279] = (AudioPluginAudioProcessor)(puVar9 != (undefined8 *)0x0);
      goto LAB_0016ea68;
    }
  }
  else {
LAB_0016ea68:
    if ((puVar9 != (undefined8 *)0x0) && (this[0x279] != (AudioPluginAudioProcessor)0x0)) {
      __mutex = (pthread_mutex_t *)LibPdManager::getGlobalMutex();
      iVar5 = pthread_mutex_lock(__mutex);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        std::__throw_system_error(iVar5);
      }
                    /* try { // try from 0016ea9d to 0016eaa1 has its CatchHandler @ 0016f1c6 */
      libpd_set_instance(*(undefined8 *)(this + 0x280));
                    /* try { // try from 0016eaae to 0016eabb has its CatchHandler @ 0016f1c8 */
      setupPdAudioIfNeeded
                ((double)local_a0,param_2_00,param_3,param_4,param_5,param_6,param_7,param_8,this,
                 *(int *)(this + 0xf0),*(int *)(this + 0xf4),param_12,param_13,param_14);
      if ((this[0x250] == (AudioPluginAudioProcessor)0x0) && (*(long *)(this + 0x270) == 0)) {
                    /* try { // try from 0016ead7 to 0016eae5 has its CatchHandler @ 0016f196 */
        juce::File::getSpecialLocation((File *)&local_88,9,extraout_RDX,param_12,param_13,param_14);
        this_01 = (Random *)juce::Random::getSystemRandom();
        uVar8 = juce::Random::nextInt(this_01);
                    /* try { // try from 0016eaf3 to 0016eafe has its CatchHandler @ 0016f16c */
        juce::String::createHex((String *)local_68,(uint)uVar8);
                    /* try { // try from 0016eaff to 0016eb14 has its CatchHandler @ 0016f15d */
        juce::operator+((juce *)local_c8,(byte *)"libpd_patches_",(String *)local_68);
        juce::StringRef::StringRef((StringRef *)&local_38,local_c8);
                    /* try { // try from 0016eb2f to 0016eb3b has its CatchHandler @ 0016f14e */
        juce::File::getChildFile(aFStack_d8,&local_88,local_38);
        juce::String::~String((String *)local_c8);
        juce::String::~String((String *)local_68);
        this_03 = (String *)&local_88;
        juce::String::~String(this_03);
                    /* try { // try from 0016eb5a to 0016eb61 has its CatchHandler @ 0016f146 */
        bVar4 = extractAllPdPatches(this_03,(undefined8 *)aFStack_d8);
        if (bVar4) {
                    /* try { // try from 0016eb6a to 0016eb76 has its CatchHandler @ 0016f112 */
          juce::String::toStdString_abi_cxx11_((long *)&local_88,(undefined8 *)aFStack_d8);
                    /* try { // try from 0016eb7c to 0016ebcc has its CatchHandler @ 0016f114 */
          libpd_add_to_search_path(local_88);
          pcVar3 = local_88;
          local_a0 = (vector<std::__cxx11::string,std::allocator<std::__cxx11::string>> *)
                     (this + 0x890);
          puVar2 = *(ulong **)(this + 0x898);
          if (puVar2 == *(ulong **)(this + 0x8a0)) {
                    /* try { // try from 0016ec36 to 0016ec42 has its CatchHandler @ 0016f114 */
            std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::
            _M_realloc_insert<std::__cxx11::string_const&>(local_a0,puVar2,&local_88);
          }
          else {
            __dest = puVar2 + 2;
            *puVar2 = (ulong)__dest;
            local_c8[0] = local_80;
            if ((char *)0xf < local_80) {
              __dest = (ulong *)std::__cxx11::string::_M_create(puVar2,(ulong)local_c8);
              *puVar2 = (ulong)__dest;
              puVar2[2] = (ulong)local_c8[0];
            }
            if (local_80 != (char *)0x0) {
              if (local_80 == (char *)0x1) {
                *(char *)__dest = *pcVar3;
              }
              else {
                memcpy(__dest,pcVar3,(size_t)local_80);
              }
            }
            puVar2[1] = (ulong)local_c8[0];
            param_12 = *puVar2;
            local_c8[0][param_12] = '\0';
            *(long *)(this + 0x898) = *(long *)(this + 0x898) + 0x20;
          }
          juce::StringRef::StringRef((StringRef *)&local_40,"Abstractions");
                    /* try { // try from 0016ec88 to 0016ec94 has its CatchHandler @ 0016f10d */
          juce::File::getChildFile(local_a8,(undefined8 *)aFStack_d8,local_40);
                    /* try { // try from 0016ec95 to 0016ec9e has its CatchHandler @ 0016f108 */
          uVar10 = juce::File::exists(local_a8);
          if ((char)uVar10 != '\0') {
                    /* try { // try from 0016eca3 to 0016ecb1 has its CatchHandler @ 0016f0e5 */
            juce::String::toStdString_abi_cxx11_((long *)local_c8,(undefined8 *)local_a8);
                    /* try { // try from 0016ecb7 to 0016ecca has its CatchHandler @ 0016f0ef */
            libpd_add_to_search_path(local_c8[0]);
            std::vector<std::__cxx11::string,std::allocator<std::__cxx11::string>>::push_back
                      (local_a0,local_c8);
            if (local_c8[0] != local_b8) {
              operator_delete(local_c8[0]);
            }
          }
          this[0x250] = (AudioPluginAudioProcessor)0x1;
          juce::StringRef::StringRef((StringRef *)&local_48,"EBPhaselock.pd");
                    /* try { // try from 0016ed02 to 0016ed0e has its CatchHandler @ 0016f0ea */
          juce::File::getChildFile(local_d0,(undefined8 *)aFStack_d8,local_48);
                    /* try { // try from 0016ed0f to 0016ed18 has its CatchHandler @ 0016f119 */
          uVar10 = juce::File::exists(local_d0);
          if ((char)uVar10 == '\0') {
LAB_0016edbf:
            *(undefined8 *)(this + 0x270) = 1;
          }
          else {
                    /* try { // try from 0016ed21 to 0016ed2f has its CatchHandler @ 0016f0e3 */
            juce::File::getFileName((undefined8 *)local_90,(undefined8 *)local_d0);
                    /* try { // try from 0016ed30 to 0016ed3e has its CatchHandler @ 0016f0d4 */
            juce::String::toStdString_abi_cxx11_((long *)local_c8,(undefined8 *)local_90);
            pcVar3 = local_c8[0];
                    /* try { // try from 0016ed44 to 0016ed52 has its CatchHandler @ 0016f0bb */
            juce::File::getParentDirectory(local_98,(undefined8 *)local_d0);
                    /* try { // try from 0016ed53 to 0016ed61 has its CatchHandler @ 0016f0ac */
            juce::String::toStdString_abi_cxx11_((long *)local_68,(undefined8 *)local_98);
                    /* try { // try from 0016ed67 to 0016ed6e has its CatchHandler @ 0016f090 */
            lVar11 = libpd_openfile(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2_00,
                                    param_3,param_4,param_5,param_6,param_7,param_8,pcVar3,
                                    local_68[0],extraout_RDX_01,param_12,(char *)param_13,
                                    (undefined8 *)param_14);
            *(long *)(this + 0x270) = lVar11;
            if (local_68[0] != local_58) {
              operator_delete(local_68[0]);
            }
            juce::String::~String((String *)local_98);
            if (local_c8[0] != local_b8) {
              operator_delete(local_c8[0]);
            }
            juce::String::~String(local_90);
            if (*(long *)(this + 0x270) == 0) goto LAB_0016edbf;
          }
                    /* try { // try from 0016edd1 to 0016edd8 has its CatchHandler @ 0016f119 */
          juce::File::operator=((File *)(this + 0x888),(long *)aFStack_d8);
          juce::String::~String((String *)local_d0);
          juce::String::~String((String *)local_a8);
          if (local_88 != local_78) {
            operator_delete(local_88);
          }
        }
        else {
          *(undefined8 *)(this + 0x270) = 1;
        }
        juce::String::~String((String *)aFStack_d8);
      }
      if ((((byte)this[0x278] & 1) != 0) && (((byte)this[0x268] & 1) == 0)) {
                    /* try { // try from 0016ee1d to 0016ee46 has its CatchHandler @ 0016f1c8 */
        libpd_start_message(1);
        libpd_add_float(DAT_005d9038);
        libpd_finish_message
                  (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2_00,param_3,param_4,
                   param_5,param_6,param_7,param_8,"pd","dsp",extraout_RDX_02,param_12,param_13,
                   param_14);
        LOCK();
        this[0x268] = (AudioPluginAudioProcessor)0x1;
        UNLOCK();
      }
      pthread_mutex_unlock(__mutex);
      goto LAB_0016ee57;
    }
  }
  LOCK();
  this[0x278] = (AudioPluginAudioProcessor)0x0;
  UNLOCK();
LAB_0016ee57:
  fVar14 = (float)(**(code **)(**(long **)(*(long *)(this + 0x238) + 0x48) + 0x10))();
  uVar6 = SUB84((double)(fVar14 * DAT_005d94d4) + DAT_005d9098,0);
  uVar7 = 4;
  if ((int)uVar6 < 4) {
    uVar7 = uVar6;
  }
  uVar8 = 0;
  if (-1 < (int)uVar7) {
    uVar8 = (ulong)uVar7;
  }
  iVar5 = 0x264;
  if (0x264 < (int)(&(anonymous_namespace)::blocksizeChoices)[uVar8]) {
    iVar5 = (&(anonymous_namespace)::blocksizeChoices)[uVar8];
  }
  *(int *)(this + 0x288) = iVar5 + -100;
  *(undefined4 *)(this + 0x524) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(this + 0x520) = 0xffffffff;
  iVar5 = *(int *)(this + 0x288);
  if (*(int *)(this + 0x3c) < iVar5) {
    juce::AudioProcessor::setLatencySamples((AudioProcessor *)this,iVar5);
    *(int *)(this + 0x524) = iVar5;
    iVar5 = *(int *)(this + 0x288);
  }
  iVar12 = 0x200;
  if (0x200 < (int)(param_10 * 3)) {
    iVar12 = param_10 * 3;
  }
  if (iVar12 <= (int)(iVar5 + param_10)) {
    iVar12 = iVar5 + param_10;
  }
  uVar7 = iVar12 - 1U >> 1 | iVar12 - 1U;
  uVar7 = (int)uVar7 >> 2 | uVar7;
  uVar7 = (int)uVar7 >> 4 | uVar7;
  uVar7 = (int)uVar7 >> 8 | uVar7;
  uVar7 = (int)uVar7 >> 0x10 | uVar7;
  iVar5 = uVar7 + 1;
  memset(this + 0x554,0,0x204);
  if ((*(int *)(this + 0x75c) == iVar5) && (*(int *)(this + 0x758) == 2)) {
    AVar1 = this[0x878];
  }
  else {
    uVar13 = (ulong)(uVar7 + 4 & 0xfffffffc);
    uVar8 = uVar13 * 8 + 0x40;
    if (*(ulong *)(this + 0x760) < uVar8) {
      *(ulong *)(this + 0x760) = uVar8;
      juce::HeapBlock<char,true>::allocate<unsigned_long>
                ((HeapBlock<char,true> *)(this + 0x770),uVar8,
                 (uint)(this[0x878] != (AudioPluginAudioProcessor)0x0));
      *(undefined8 *)(this + 0x768) = *(undefined8 *)(this + 0x770);
    }
    else if (this[0x878] != (AudioPluginAudioProcessor)0x0) {
      memset(*(void **)(this + 0x770),0,uVar8);
    }
    lVar11 = *(long *)(this + 0x770);
    **(long **)(this + 0x768) = lVar11 + 0x20;
    *(ulong *)(*(long *)(this + 0x768) + 8) = lVar11 + uVar13 * 4 + 0x20;
    *(undefined8 *)(*(long *)(this + 0x768) + 0x10) = 0;
    *(int *)(this + 0x75c) = iVar5;
    *(undefined4 *)(this + 0x758) = 2;
    AVar1 = this[0x878];
  }
  if (AVar1 == (AudioPluginAudioProcessor)0x0) {
    juce::FloatVectorOperationsBase<float,int>::clear((void *)**(undefined8 **)(this + 0x768),iVar5)
    ;
    if (1 < *(int *)(this + 0x758)) {
      lVar11 = 1;
      do {
        juce::FloatVectorOperationsBase<float,int>::clear
                  (*(void **)(*(long *)(this + 0x768) + lVar11 * 8),*(int *)(this + 0x75c));
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(this + 0x758));
    }
    this[0x878] = (AudioPluginAudioProcessor)0x1;
  }
  *(undefined4 *)(this + 0x880) = 0;
  return;
}


