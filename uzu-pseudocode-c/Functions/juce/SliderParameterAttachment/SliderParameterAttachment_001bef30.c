// Function : SliderParameterAttachment
// Namespace: juce:SliderParameterAttachment
// Entry    : 001bef30
// Prototype: undefined SliderParameterAttachment(SliderParameterAttachment * this, AudioProcessorParameter * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001bef30 - 001bfcc8


/* juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,
   juce::Slider&, juce::UndoManager*) */

void __thiscall
juce::SliderParameterAttachment::SliderParameterAttachment
          (SliderParameterAttachment *this,AudioProcessorParameter *param_1,undefined8 param_2,
          undefined8 param_3)

{
  int *piVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  Pimpl *this_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  int iVar9;
  code *pcVar10;
  long lVar11;
  uint uVar12;
  bool bVar13;
  undefined8 uVar14;
  undefined8 local_478;
  undefined8 uStack_470;
  code *local_468;
  undefined8 uStack_460;
  SliderParameterAttachment *local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  Pimpl local_428;
  undefined1 local_420 [16];
  code *local_410;
  undefined8 local_408;
  undefined1 local_400 [16];
  code *local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0 [16];
  code *local_3d0;
  undefined8 local_3c8;
  undefined8 *local_3b8;
  undefined8 uStack_3b0;
  code *local_3a8;
  code *pcStack_3a0;
  undefined8 *local_398;
  undefined8 uStack_390;
  code *local_388;
  code *pcStack_380;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  SliderParameterAttachment *local_360;
  undefined8 uStack_358;
  code *local_350;
  code *pcStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330;
  undefined8 local_328;
  undefined8 uStack_320;
  code *local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  code *local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  code *local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  code *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  code *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  code *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  code *local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  code *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  code *local_1e8;
  undefined8 uStack_1e0;
  AudioProcessorParameter *local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8;
  undefined8 *local_1b0;
  undefined8 uStack_1a8;
  code *local_1a0;
  code *local_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  code *local_180;
  code *local_178;
  undefined8 *local_170;
  undefined8 local_168;
  code *local_160;
  code *local_158;
  undefined1 local_148 [16];
  NormalisableRange<float> local_130 [16];
  undefined1 local_120;
  undefined1 local_118 [16];
  code *local_108;
  undefined1 local_f8 [16];
  code *local_e8;
  undefined1 local_d8 [16];
  code *local_c8;
  NormalisableRange<double> local_b8 [40];
  undefined1 local_90 [16];
  code *local_80;
  undefined1 local_70 [16];
  code *local_60;
  undefined1 local_50 [16];
  code *local_40;
  
  *(undefined ***)this = &PTR__SliderParameterAttachment_00706a80;
  *(undefined8 *)(this + 8) = param_2;
  local_450 = this + 0x10;
  uStack_358 = 0;
  pcStack_348 = std::
                _Function_handler<void(float),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_11>
                ::_M_invoke;
  local_350 = std::
              _Function_handler<void(float),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_11>
              ::_M_manager;
  *(undefined ***)(this + 0x10) = &PTR__Listener_00706d50;
  *(undefined ***)(this + 0x18) = &PTR__AsyncUpdater_00712b58;
  *(undefined8 *)(this + 0x20) = 0;
  local_360 = this;
  puVar5 = operator_new(0x20);
  *(undefined4 *)(puVar5 + 1) = 0;
  *puVar5 = &PTR__AsyncUpdaterMessage_00712cc0;
  puVar5[2] = this + 0x18;
  *(undefined4 *)(puVar5 + 3) = 0;
  LOCK();
  *(int *)(puVar5 + 1) = *(int *)(puVar5 + 1) + 1;
  UNLOCK();
  pvVar8 = *(void **)(this + 0x20);
  *(undefined8 **)(this + 0x20) = puVar5;
  if (pvVar8 != (void *)0x0) {
    LOCK();
    piVar1 = (int *)((long)pvVar8 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      operator_delete(pvVar8);
    }
  }
  *(undefined ***)(this + 0x10) = &PTR__ParameterAttachment_00706a20;
  *(undefined ***)(this + 0x18) = &PTR__ParameterAttachment_00706a58;
  *(AudioProcessorParameter **)(this + 0x28) = param_1;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = param_3;
  *(code **)(this + 0x58) =
       std::
       _Function_handler<void(float),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_11>
       ::_M_invoke;
  *(SliderParameterAttachment **)(this + 0x40) = local_360;
  *(undefined8 *)(this + 0x48) = uStack_358;
  *(code **)(this + 0x50) =
       std::
       _Function_handler<void(float),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_11>
       ::_M_manager;
  local_350 = (code *)0x0;
  pcStack_348 = (code *)0x0;
  AudioProcessorParameter::addListener(param_1,(long)local_450);
  lVar7 = *(long *)(this + 8);
  local_438 = *(code **)(lVar7 + 0x170);
  uStack_430 = *(undefined8 *)(lVar7 + 0x178);
  this[0x60] = (SliderParameterAttachment)0x0;
  uStack_1d0 = 0;
  local_448 = *(undefined8 *)(lVar7 + 0x160);
  uStack_440 = *(undefined8 *)(lVar7 + 0x168);
  *(AudioProcessorParameter **)(lVar7 + 0x160) = param_1;
  *(undefined4 *)(lVar7 + 0x168) = 0;
  *(undefined4 *)(lVar7 + 0x16c) = 0;
  *(code **)(lVar7 + 0x170) =
       std::
       _Function_handler<double(juce::String_const&),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_12>
       ::_M_manager;
  *(code **)(lVar7 + 0x178) =
       std::
       _Function_handler<double(juce::String_const&),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_12>
       ::_M_invoke;
  if (local_438 != (code *)0x0) {
                    /* try { // try from 001bf0bf to 001bf0cd has its CatchHandler @ 001bfe11 */
    local_1d8 = param_1;
    (*local_438)(&local_448,&local_448,3);
  }
  lVar7 = *(long *)(this + 8);
  uStack_1d0 = 0;
  local_448 = *(undefined8 *)(lVar7 + 0x180);
  uStack_440 = *(undefined8 *)(lVar7 + 0x188);
  *(AudioProcessorParameter **)(lVar7 + 0x180) = param_1;
  *(undefined4 *)(lVar7 + 0x188) = 0;
  *(undefined4 *)(lVar7 + 0x18c) = 0;
  local_438 = *(code **)(lVar7 + 400);
  *(code **)(lVar7 + 400) =
       std::
       _Function_handler<juce::String(double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_13>
       ::_M_manager;
  uStack_430 = *(undefined8 *)(lVar7 + 0x198);
  *(undefined8 *)(lVar7 + 0x198) = 0x1c0000;
  local_1d8 = param_1;
  if (local_438 != (code *)0x0) {
                    /* try { // try from 001bf139 to 001bf147 has its CatchHandler @ 001bfe09 */
    (*local_438)(&local_448,&local_448,3);
  }
  lVar7 = *(long *)(this + 8);
                    /* try { // try from 001bf14f to 001bf154 has its CatchHandler @ 001bfe92 */
  uVar14 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
  uVar6 = RangedAudioParameter::convertFrom0to1(uVar14,(RangedAudioParameter *)param_1);
  lVar7 = *(long *)(lVar7 + 0x1a0);
  *(undefined1 *)(lVar7 + 0x231) = 1;
  *(double *)(lVar7 + 0x180) = (double)(float)uVar6;
  *(undefined4 *)(lVar7 + 0x250) = 4;
                    /* try { // try from 001bf184 to 001bf19c has its CatchHandler @ 001bfe97 */
  puVar5 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x98))(param_1);
  NormalisableRange<float>::NormalisableRange(local_130,puVar5);
                    /* try { // try from 001bf19d to 001bf1b1 has its CatchHandler @ 001bfe8d */
  NormalisableRange<float>::NormalisableRange
            ((NormalisableRange<float> *)&local_250,(undefined8 *)local_130);
                    /* try { // try from 001bf1b2 to 001bf1c6 has its CatchHandler @ 001bfe88 */
  NormalisableRange<float>::NormalisableRange
            ((NormalisableRange<float> *)&local_2c8,(undefined8 *)local_130);
                    /* try { // try from 001bf1c7 to 001bf1db has its CatchHandler @ 001bfe83 */
  NormalisableRange<float>::NormalisableRange
            ((NormalisableRange<float> *)&local_340,(undefined8 *)local_130);
  local_148._8_4_ = SUB84((double)local_130._4_4_,0);
  local_148._0_8_ = (double)local_130._0_4_;
  local_148._12_4_ = (int)((ulong)(double)local_130._4_4_ >> 0x20);
  local_398 = (undefined8 *)0x0;
  uStack_390 = 0;
  local_388 = (code *)0x0;
  pcStack_380 = (code *)0x0;
                    /* try { // try from 001bf1ff to 001bf208 has its CatchHandler @ 001bfe7e */
  local_398 = operator_new(0x78);
  *(undefined1 *)(local_398 + 2) = local_240;
  *local_398 = local_250;
  local_398[1] = uStack_248;
  local_398[3] = 0;
  local_398[4] = 0;
  local_398[5] = 0;
  local_398[6] = uStack_220;
  if (local_228 != (code *)0x0) {
    local_398[3] = local_238;
    local_398[4] = uStack_230;
    local_398[5] = local_228;
    local_228 = (code *)0x0;
    uStack_220 = 0;
  }
  local_398[7] = 0;
  local_398[8] = 0;
  local_398[9] = 0;
  local_398[10] = uStack_200;
  if (local_208 != (code *)0x0) {
    local_398[7] = local_218;
    local_398[8] = uStack_210;
    local_398[9] = local_208;
    local_208 = (code *)0x0;
    uStack_200 = 0;
  }
  local_398[0xb] = 0;
  local_398[0xc] = 0;
  local_398[0xd] = 0;
  local_398[0xe] = uStack_1e0;
  if (local_1e8 != (code *)0x0) {
    local_398[0xb] = local_1f8;
    local_398[0xc] = uStack_1f0;
    local_398[0xd] = local_1e8;
    local_1e8 = (code *)0x0;
    uStack_1e0 = 0;
  }
  pcStack_380 = std::
                _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_14>
                ::_M_invoke;
  local_388 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_14>
              ::_M_manager;
  local_3b8 = (undefined8 *)0x0;
  uStack_3b0 = 0;
  local_3a8 = (code *)0x0;
  pcStack_3a0 = (code *)0x0;
                    /* try { // try from 001bf32f to 001bf338 has its CatchHandler @ 001bfe5c */
  local_3b8 = operator_new(0x78);
  *(undefined1 *)(local_3b8 + 2) = local_2b8;
  *local_3b8 = local_2c8;
  local_3b8[1] = uStack_2c0;
  local_3b8[3] = 0;
  local_3b8[4] = 0;
  local_3b8[5] = 0;
  local_3b8[6] = uStack_298;
  if (local_2a0 != (code *)0x0) {
    local_3b8[3] = local_2b0;
    local_3b8[4] = uStack_2a8;
    local_3b8[5] = local_2a0;
    local_2a0 = (code *)0x0;
    uStack_298 = 0;
  }
  local_3b8[7] = 0;
  local_3b8[8] = 0;
  local_3b8[9] = 0;
  local_3b8[10] = uStack_278;
  if (local_280 != (code *)0x0) {
    local_3b8[7] = local_290;
    local_3b8[8] = uStack_288;
    local_3b8[9] = local_280;
    local_280 = (code *)0x0;
    uStack_278 = 0;
  }
  local_3b8[0xb] = 0;
  local_3b8[0xc] = 0;
  local_3b8[0xd] = 0;
  local_3b8[0xe] = uStack_258;
  if (local_260 != (code *)0x0) {
    local_3b8[0xb] = local_270;
    local_3b8[0xc] = uStack_268;
    local_3b8[0xd] = local_260;
    local_260 = (code *)0x0;
    uStack_258 = 0;
  }
  pcStack_3a0 = std::
                _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_15>
                ::_M_invoke;
  local_3a8 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_15>
              ::_M_manager;
                    /* try { // try from 001bf44c to 001bf455 has its CatchHandler @ 001bfe3a */
  local_170 = operator_new(0x78);
  *(undefined1 *)(local_170 + 2) = local_330;
  *local_170 = local_340;
  local_170[1] = uStack_338;
  local_170[3] = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  local_170[6] = uStack_310;
  if (local_318 != (code *)0x0) {
    local_170[3] = local_328;
    local_170[4] = uStack_320;
    local_170[5] = local_318;
    local_318 = (code *)0x0;
    uStack_310 = 0;
  }
  local_170[7] = 0;
  local_170[8] = 0;
  local_170[9] = 0;
  local_170[10] = uStack_2f0;
  if (local_2f8 != (code *)0x0) {
    local_170[7] = local_308;
    local_170[8] = uStack_300;
    local_170[9] = local_2f8;
    local_2f8 = (code *)0x0;
    uStack_2f0 = 0;
  }
  local_170[0xb] = 0;
  local_170[0xc] = 0;
  local_170[0xd] = 0;
  local_170[0xe] = uStack_2d0;
  if (local_2d8 != (code *)0x0) {
    local_170[0xb] = local_2e8;
    local_170[0xc] = uStack_2e0;
    local_170[0xd] = local_2d8;
    local_2d8 = (code *)0x0;
    uStack_2d0 = 0;
  }
  local_1d8 = (AudioProcessorParameter *)local_148._0_8_;
  uStack_1d0 = local_148._8_8_;
  local_198 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_14>
              ::_M_invoke;
  local_1b0 = local_398;
  uStack_1a8 = uStack_390;
  local_1a0 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_14>
              ::_M_manager;
  local_388 = (code *)0x0;
  pcStack_380 = (code *)0x0;
  local_178 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_15>
              ::_M_invoke;
  local_190 = local_3b8;
  uStack_188 = uStack_3b0;
  local_180 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_15>
              ::_M_manager;
  local_3a8 = (code *)0x0;
  pcStack_3a0 = (code *)0x0;
  local_158 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_16>
              ::_M_invoke;
  local_168 = 0;
  local_160 = std::
              _Function_handler<double(double,double,double),juce::SliderParameterAttachment::SliderParameterAttachment(juce::RangedAudioParameter&,juce::Slider&,juce::UndoManager*)::$_16>
              ::_M_manager;
  lVar7 = *(long *)(this + 8);
  local_1c8._8_4_ = SUB84((double)local_130._12_4_,0);
  local_1c8._0_8_ = (double)local_130._8_4_;
  local_1c8._12_4_ = (int)((ulong)(double)local_130._12_4_ >> 0x20);
  local_1b8 = local_120;
                    /* try { // try from 001bf5fa to 001bf60e has its CatchHandler @ 001bfe9c */
  NormalisableRange<double>::NormalisableRange(local_b8,&local_1d8);
  this_00 = *(Pimpl **)(lVar7 + 0x1a0);
                    /* try { // try from 001bf616 to 001bf627 has its CatchHandler @ 001bfe28 */
  NormalisableRange<double>::NormalisableRange
            ((NormalisableRange<double> *)&local_448,(undefined8 *)local_b8);
  this_00[0x118] = local_428;
  *(undefined4 *)(this_00 + 0x108) = (undefined4)local_438;
  *(undefined4 *)(this_00 + 0x10c) = local_438._4_4_;
  *(undefined4 *)(this_00 + 0x110) = (undefined4)uStack_430;
  *(undefined4 *)(this_00 + 0x114) = uStack_430._4_4_;
  *(undefined8 *)(this_00 + 0xf8) = local_448;
  *(undefined8 *)(this_00 + 0x100) = uStack_440;
  local_468 = (code *)0x0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  if (local_410 == (code *)0x0) {
    local_408 = 0;
    pcVar10 = (code *)0x0;
  }
  else {
                    /* try { // try from 001bf665 to 001bf66e has its CatchHandler @ 001bfde5 */
    (*local_410)(&local_478,local_420,2);
    pcVar10 = local_410;
  }
  local_378 = (undefined4)local_478;
  uStack_374 = local_478._4_4_;
  uStack_370 = (undefined4)uStack_470;
  uStack_36c = uStack_470._4_4_;
  uVar14 = *(undefined8 *)(this_00 + 0x120);
  uVar4 = *(undefined8 *)(this_00 + 0x128);
  *(undefined4 *)(this_00 + 0x120) = (undefined4)local_478;
  *(undefined4 *)(this_00 + 0x124) = local_478._4_4_;
  *(undefined4 *)(this_00 + 0x128) = (undefined4)uStack_470;
  *(undefined4 *)(this_00 + 300) = uStack_470._4_4_;
  local_468 = *(code **)(this_00 + 0x130);
  *(code **)(this_00 + 0x130) = pcVar10;
  uStack_460 = *(undefined8 *)(this_00 + 0x138);
  *(undefined8 *)(this_00 + 0x138) = local_408;
  if (local_468 != (code *)0x0) {
    local_478 = uVar14;
    uStack_470 = uVar4;
                    /* try { // try from 001bf6c7 to 001bf6d3 has its CatchHandler @ 001bfddd */
    (*local_468)(&local_478,&local_478,3);
  }
  local_468 = (code *)0x0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  if (local_3f0 == (code *)0x0) {
    local_3e8 = 0;
    pcVar10 = (code *)0x0;
  }
  else {
                    /* try { // try from 001bf6f2 to 001bf6fb has its CatchHandler @ 001bfdb9 */
    (*local_3f0)(&local_478,local_400,2);
    pcVar10 = local_3f0;
  }
  local_378 = (undefined4)local_478;
  uStack_374 = local_478._4_4_;
  uStack_370 = (undefined4)uStack_470;
  uStack_36c = uStack_470._4_4_;
  uVar14 = *(undefined8 *)(this_00 + 0x140);
  uVar4 = *(undefined8 *)(this_00 + 0x148);
  *(undefined4 *)(this_00 + 0x140) = (undefined4)local_478;
  *(undefined4 *)(this_00 + 0x144) = local_478._4_4_;
  *(undefined4 *)(this_00 + 0x148) = (undefined4)uStack_470;
  *(undefined4 *)(this_00 + 0x14c) = uStack_470._4_4_;
  local_468 = *(code **)(this_00 + 0x150);
  *(code **)(this_00 + 0x150) = pcVar10;
  uStack_460 = *(undefined8 *)(this_00 + 0x158);
  *(undefined8 *)(this_00 + 0x158) = local_3e8;
  if (local_468 != (code *)0x0) {
    local_478 = uVar14;
    uStack_470 = uVar4;
                    /* try { // try from 001bf75a to 001bf766 has its CatchHandler @ 001bfdb1 */
    (*local_468)(&local_478,&local_478,3);
  }
  local_468 = (code *)0x0;
  uStack_460 = 0;
  local_478 = 0;
  uStack_470 = 0;
  if (local_3d0 == (code *)0x0) {
    local_3c8 = 0;
    pcVar10 = (code *)0x0;
  }
  else {
                    /* try { // try from 001bf788 to 001bf791 has its CatchHandler @ 001bfd89 */
    (*local_3d0)(&local_478,local_3e0,2);
    pcVar10 = local_3d0;
  }
  local_378 = (undefined4)local_478;
  uStack_374 = local_478._4_4_;
  uStack_370 = (undefined4)uStack_470;
  uStack_36c = uStack_470._4_4_;
  uVar14 = *(undefined8 *)(this_00 + 0x160);
  uVar4 = *(undefined8 *)(this_00 + 0x168);
  *(undefined4 *)(this_00 + 0x160) = (undefined4)local_478;
  *(undefined4 *)(this_00 + 0x164) = local_478._4_4_;
  *(undefined4 *)(this_00 + 0x168) = (undefined4)uStack_470;
  *(undefined4 *)(this_00 + 0x16c) = uStack_470._4_4_;
  local_468 = *(code **)(this_00 + 0x170);
  *(code **)(this_00 + 0x170) = pcVar10;
  uStack_460 = *(undefined8 *)(this_00 + 0x178);
  *(undefined8 *)(this_00 + 0x178) = local_3c8;
  local_478 = uVar14;
  uStack_470 = uVar4;
  if (local_468 != (code *)0x0) {
                    /* try { // try from 001bf7f0 to 001bf7fc has its CatchHandler @ 001bfd81 */
    (*local_468)(&local_478,&local_478,3);
  }
                    /* try { // try from 001bf7fd to 001bf804 has its CatchHandler @ 001bfe19 */
  Slider::Pimpl::updateRange(this_00);
  if (local_3d0 != (code *)0x0) {
                    /* try { // try from 001bf81a to 001bf823 has its CatchHandler @ 001bfd79 */
    (*local_3d0)(local_3e0,local_3e0,3);
  }
  if (local_3f0 != (code *)0x0) {
                    /* try { // try from 001bf836 to 001bf83f has its CatchHandler @ 001bfd71 */
    (*local_3f0)(local_400,local_400,3);
  }
  if (local_410 != (code *)0x0) {
                    /* try { // try from 001bf84f to 001bf858 has its CatchHandler @ 001bfd69 */
    (*local_410)(local_420,local_420,3);
  }
  if (local_40 != (code *)0x0) {
                    /* try { // try from 001bf86e to 001bf877 has its CatchHandler @ 001bfd61 */
    (*local_40)(local_50,local_50,3);
  }
  if (local_60 != (code *)0x0) {
                    /* try { // try from 001bf88d to 001bf896 has its CatchHandler @ 001bfd59 */
    (*local_60)(local_70,local_70,3);
  }
  if (local_80 != (code *)0x0) {
                    /* try { // try from 001bf8ac to 001bf8b5 has its CatchHandler @ 001bfd51 */
    (*local_80)(local_90,local_90,3);
  }
                    /* try { // try from 001bf8bd to 001bf8d9 has its CatchHandler @ 001bfe9c */
  (**(code **)(**(long **)(this + 0x28) + 0x10))();
  (**(code **)(*(long *)local_450 + 0x10))(local_450,0);
  (**(code **)(**(long **)(this + 8) + 0x1a8))();
  lVar7 = *(long *)(*(long *)(this + 8) + 0x1a0);
  if (*(int *)(lVar7 + 0x48) != 2) {
    LOCK();
    bVar13 = *(int *)(lVar7 + 0x48) == 0;
    if (bVar13) {
      *(int *)(lVar7 + 0x48) = 1;
    }
    UNLOCK();
    if (bVar13) {
                    /* try { // try from 001bf8ff to 001bf908 has its CatchHandler @ 001bfcd1 */
      puVar5 = operator_new(0x20);
      puVar5[1] = 0x100000001;
      *puVar5 = &PTR___Sp_counted_base_00711470;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined8 **)(lVar7 + 0x28) = puVar5 + 2;
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar7 + 0x30);
      *(undefined8 **)(lVar7 + 0x30) = puVar5;
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar6 = *(ulong *)(p_Var3 + 8);
        if (uVar6 == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = p_Var3 + 8;
            uVar6 = (ulong)*(uint *)p_Var2;
            *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var3 + 8) = (int)uVar6 + -1;
          }
          if ((int)uVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
          }
        }
      }
                    /* try { // try from 001bf9ac to 001bf9b5 has its CatchHandler @ 001bfcc9 */
      puVar5 = operator_new(0x28);
      puVar5[1] = 0x100000001;
      *puVar5 = &PTR___Sp_counted_base_007114c0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      *(undefined8 **)(lVar7 + 0x38) = puVar5 + 2;
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar7 + 0x40);
      *(undefined8 **)(lVar7 + 0x40) = puVar5;
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar6 = *(ulong *)(p_Var3 + 8);
        if (uVar6 == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = p_Var3 + 8;
            uVar6 = (ulong)*(uint *)p_Var2;
            *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var3 + 8) = (int)uVar6 + -1;
          }
          if ((int)uVar6 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
          }
        }
      }
      LOCK();
      *(undefined4 *)(lVar7 + 0x48) = 2;
      UNLOCK();
    }
    else {
      while (*(int *)(lVar7 + 0x48) != 2) {
        sched_yield();
      }
    }
  }
  puVar5 = *(undefined8 **)(lVar7 + 0x28);
  pvVar8 = (void *)*puVar5;
  iVar9 = *(int *)((long)puVar5 + 0xc);
  lVar7 = (long)iVar9;
  if (lVar7 != 0) {
    lVar11 = 0;
    do {
      if (*(SliderParameterAttachment **)((long)pvVar8 + lVar11) == this) goto LAB_001bfacc;
      lVar11 = lVar11 + 8;
    } while (lVar7 * 8 != lVar11);
  }
  if ((int)*(uint *)(puVar5 + 1) <= iVar9) {
    uVar12 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar5 + 1) != uVar12) {
      if ((int)uVar12 < 1) {
        free(pvVar8);
        *puVar5 = 0;
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = realloc(pvVar8,(ulong)uVar12 << 3);
        *puVar5 = pvVar8;
      }
    }
    *(uint *)(puVar5 + 1) = uVar12;
    iVar9 = *(int *)((long)puVar5 + 0xc);
    lVar7 = (long)iVar9;
  }
  *(int *)((long)puVar5 + 0xc) = iVar9 + 1;
  *(SliderParameterAttachment **)((long)pvVar8 + lVar7 * 8) = this;
LAB_001bfacc:
  if (local_160 != (code *)0x0) {
                    /* try { // try from 001bfae1 to 001bfaea has its CatchHandler @ 001bfd49 */
    (*local_160)(&local_170,&local_170,3);
  }
  if (local_180 != (code *)0x0) {
                    /* try { // try from 001bfb00 to 001bfb09 has its CatchHandler @ 001bfd41 */
    (*local_180)(&local_190,&local_190,3);
  }
  if (local_1a0 != (code *)0x0) {
                    /* try { // try from 001bfb1f to 001bfb28 has its CatchHandler @ 001bfd39 */
    (*local_1a0)(&local_1b0,&local_1b0,3);
  }
  if (local_2d8 != (code *)0x0) {
                    /* try { // try from 001bfb3e to 001bfb47 has its CatchHandler @ 001bfd31 */
    (*local_2d8)(&local_2e8,&local_2e8,3);
  }
  if (local_2f8 != (code *)0x0) {
                    /* try { // try from 001bfb5d to 001bfb66 has its CatchHandler @ 001bfd29 */
    (*local_2f8)(&local_308,&local_308,3);
  }
  if (local_318 != (code *)0x0) {
                    /* try { // try from 001bfb7c to 001bfb85 has its CatchHandler @ 001bfd21 */
    (*local_318)(&local_328,&local_328,3);
  }
  if (local_260 != (code *)0x0) {
                    /* try { // try from 001bfb9b to 001bfba4 has its CatchHandler @ 001bfd19 */
    (*local_260)(&local_270,&local_270,3);
  }
  if (local_280 != (code *)0x0) {
                    /* try { // try from 001bfbba to 001bfbc3 has its CatchHandler @ 001bfd11 */
    (*local_280)(&local_290,&local_290,3);
  }
  if (local_2a0 != (code *)0x0) {
                    /* try { // try from 001bfbd9 to 001bfbe2 has its CatchHandler @ 001bfd09 */
    (*local_2a0)(&local_2b0,&local_2b0,3);
  }
  if (local_1e8 != (code *)0x0) {
                    /* try { // try from 001bfbf8 to 001bfc01 has its CatchHandler @ 001bfd01 */
    (*local_1e8)(&local_1f8,&local_1f8,3);
  }
  if (local_208 != (code *)0x0) {
                    /* try { // try from 001bfc17 to 001bfc20 has its CatchHandler @ 001bfcf9 */
    (*local_208)(&local_218,&local_218,3);
  }
  if (local_228 != (code *)0x0) {
                    /* try { // try from 001bfc36 to 001bfc3f has its CatchHandler @ 001bfcf1 */
    (*local_228)(&local_238,&local_238,3);
  }
  if (local_c8 != (code *)0x0) {
                    /* try { // try from 001bfc55 to 001bfc5e has its CatchHandler @ 001bfce9 */
    (*local_c8)(local_d8,local_d8,3);
  }
  if (local_e8 != (code *)0x0) {
                    /* try { // try from 001bfc74 to 001bfc7d has its CatchHandler @ 001bfce1 */
    (*local_e8)(local_f8,local_f8,3);
  }
  if (local_108 != (code *)0x0) {
                    /* try { // try from 001bfc93 to 001bfc9c has its CatchHandler @ 001bfcd9 */
    (*local_108)(local_118,local_118,3);
  }
  return;
}


