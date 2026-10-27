// Function : setupParameters
// Namespace: juce:JuceAudioProcessor
// Entry    : 001aa5e0
// Prototype: undefined setupParameters(JuceAudioProcessor * this)
// Body     : 001aa5e0 - 001aad26


/* juce::JuceAudioProcessor::setupParameters() */

void __thiscall juce::JuceAudioProcessor::setupParameters(JuceAudioProcessor *this)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  int iVar5;
  AudioProcessor *pAVar6;
  AudioParameterBool *this_00;
  long lVar7;
  void *pvVar8;
  _Rb_tree_node_base *p_Var9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long local_d0;
  uint local_c8 [2];
  undefined4 local_c0;
  long *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *pvStack_a0;
  code *local_98;
  undefined8 uStack_90;
  void *local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  uint local_60;
  int local_5c;
  long local_58;
  long *local_50;
  long local_48;
  JuceAudioProcessor *local_40;
  JuceAudioProcessor *local_38;
  
  pAVar6 = AudioProcessor::getParameterTree(*(AudioProcessor **)(this + 0xd8));
  AudioProcessorParameterGroup::getSubgroups
            ((long *)&local_b8,(AudioProcessorParameterGroup *)pAVar6,'\x01');
  uVar1 = (ulong)uStack_b0;
  plVar10 = local_b8;
  if (this + 0x180 != (JuceAudioProcessor *)&local_b8) {
    local_b8 = (long *)0x0;
    uStack_b0 = (void *)0x0;
    pvVar8 = *(void **)(this + 0x180);
    *(long **)(this + 0x180) = plVar10;
    *(ulong *)(this + 0x188) = uVar1;
    free(pvVar8);
  }
  uStack_b0 = (void *)((ulong)uStack_b0 & 0xffffffff);
  free(local_b8);
  LegacyAudioParametersWrapper::update
            ((LegacyAudioParametersWrapper *)(this + 0xe0),*(AudioProcessor **)(this + 0xd8),
             (LegacyAudioParametersWrapper)0x0);
  local_60 = *(uint *)(this + 0x124);
  local_58 = (**(code **)(**(long **)(this + 0xd8) + 0xb8))();
  local_48 = local_58;
  if (local_58 == 0) {
    this_00 = operator_new(0x140);
                    /* try { // try from 001aa6a5 to 001aa6b5 has its CatchHandler @ 001aad5f */
    juce::String::String((String *)local_c8,&DAT_005dbd40);
    local_c0 = 0;
                    /* try { // try from 001aa6be to 001aa6ce has its CatchHandler @ 001aad50 */
    juce::String::String((String *)&local_d0,(byte *)"Bypass");
    local_78 = (code *)0x0;
    uStack_70 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_a8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_b8 = (long *)0x0;
    uStack_b0 = (void *)0x0;
    juce::String::String((String *)&local_b8);
    uStack_b0 = (void *)CONCAT17((char)((ulong)uStack_b0 >> 0x38),0x10000000000);
    local_a8 = (void *)0x0;
    pvStack_a0 = (void *)0x0;
    local_98 = (code *)0x0;
    uStack_90 = 0;
    local_88 = (void *)0x0;
    uStack_80 = 0;
    local_78 = (code *)0x0;
    uStack_70 = 0;
                    /* try { // try from 001aa723 to 001aa739 has its CatchHandler @ 001aad37 */
    AudioParameterBool::AudioParameterBool(this_00,(long *)local_c8,&local_d0,0,(long *)&local_b8);
    plVar10 = *(long **)(this + 0x170);
    *(AudioParameterBool **)(this + 0x170) = this_00;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    if (local_78 != (code *)0x0) {
                    /* try { // try from 001aa762 to 001aa76b has its CatchHandler @ 001aad2f */
      (*local_78)(&local_88,&local_88,3);
    }
    if (local_98 != (code *)0x0) {
                    /* try { // try from 001aa77b to 001aa784 has its CatchHandler @ 001aad27 */
      (*local_98)(&local_a8,&local_a8,3);
    }
    juce::String::~String((String *)&local_b8);
    juce::String::~String((String *)&local_d0);
    juce::String::~String((String *)local_c8);
    local_58 = *(long *)(this + 0x170);
  }
  lVar7 = (**(code **)(**(long **)(this + 0xd8) + 0xb8))();
  plVar10 = *(long **)(this + 0x118);
  iVar5 = *(int *)(this + 0x124);
  lVar11 = (long)iVar5;
  if (lVar11 != 0) {
    lVar15 = 0;
    do {
      if (*(long *)((long)plVar10 + lVar15) == lVar7) {
        this[0x68] = (JuceAudioProcessor)0x1;
        local_50 = plVar10 + lVar11;
        goto LAB_001aa8aa;
      }
      lVar15 = lVar15 + 8;
    } while (lVar11 * 8 != lVar15);
  }
  this[0x68] = (JuceAudioProcessor)0x0;
  if (iVar5 < (int)*(uint *)(this + 0x120)) {
    iVar5 = iVar5 + 1;
    *(int *)(this + 0x124) = iVar5;
    plVar10[lVar11] = local_58;
  }
  else {
    uVar14 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(this + 0x120) != uVar14) {
      if ((int)uVar14 < 1) {
        free(plVar10);
        *(undefined8 *)(this + 0x118) = 0;
        plVar10 = (long *)0x0;
      }
      else {
        plVar10 = realloc(plVar10,(ulong)uVar14 << 3);
        *(long **)(this + 0x118) = plVar10;
      }
    }
    *(uint *)(this + 0x120) = uVar14;
    iVar2 = *(int *)(this + 0x124);
    iVar5 = iVar2 + 1;
    *(int *)(this + 0x124) = iVar5;
    plVar10[iVar2] = local_58;
  }
  if (iVar5 != 0) {
    plVar10 = *(long **)(this + 0x118);
    local_50 = plVar10 + iVar5;
LAB_001aa8aa:
    local_38 = this + 0x140;
    local_40 = this + 0xa0;
    lVar7 = local_58;
    do {
      lVar11 = *plVar10;
      LegacyAudioParameter::getParamID((LegacyAudioParameter *)&local_b8,lVar11,'\0');
                    /* try { // try from 001aa8f0 to 001aa8fc has its CatchHandler @ 001aad89 */
      uVar14 = VST3ClientExtensions::convertJuceParameterId((undefined8 *)&local_b8,'\x01');
      juce::String::~String((String *)&local_b8);
      local_c8[0] = uVar14;
      if (lVar11 == lVar7) {
        if ((local_48 == 0) && (local_c8[0] = 0x62797073, this[0x139] == (JuceAudioProcessor)0x0)) {
          local_c8[0] = local_60;
        }
        *(uint *)(this + 0x60) = local_c8[0];
        uVar14 = *(uint *)(this + 0x10);
        iVar5 = *(int *)(this + 0x14);
        if ((int)uVar14 <= iVar5) goto LAB_001aa964;
      }
      else {
        uVar14 = *(uint *)(this + 0x10);
        iVar5 = *(int *)(this + 0x14);
        if ((int)uVar14 <= iVar5) {
LAB_001aa964:
          uVar13 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
          if (uVar14 != uVar13) {
            if ((int)uVar13 < 1) {
              free(*(void **)(this + 8));
              *(undefined8 *)(this + 8) = 0;
            }
            else {
              pvVar8 = realloc(*(void **)(this + 8),(ulong)uVar13 << 2);
              *(void **)(this + 8) = pvVar8;
            }
          }
          *(uint *)(this + 0x10) = uVar13;
          iVar5 = *(int *)(this + 0x14);
          lVar7 = local_58;
        }
      }
      *(int *)(this + 0x14) = iVar5 + 1;
      *(uint *)(*(long *)(this + 8) + (long)iVar5 * 4) = local_c8[0];
      p_Var9 = std::
               map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
               ::operator[]((map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
                             *)local_38,local_c8);
      *(long *)p_Var9 = lVar11;
      LegacyAudioParameter::getParamID((LegacyAudioParameter *)&local_b8,lVar11,'\0');
                    /* try { // try from 001aa9f8 to 001aaa07 has its CatchHandler @ 001aad8b */
      p_Var9 = std::
               map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
               ::operator[]((map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
                             *)local_40,(byte *)&local_b8);
      *(long *)p_Var9 = lVar11;
      juce::String::~String((String *)&local_b8);
      plVar10 = plVar10 + 1;
    } while (plVar10 != local_50);
  }
  iVar5 = (**(code **)(**(long **)(this + 0xd8) + 0xe0))();
  if (1 < iVar5) {
    local_c8[0] = 0;
    local_d0._0_4_ = iVar5 + -1;
    local_5c = (**(code **)(**(long **)(this + 0xd8) + 0xe8))();
    std::make_unique<juce::AudioParameterInt,char_const(&)[21],char_const(&)[8],int,int,int>
              (&local_b8,(byte *)"juceProgramParameter",(byte *)"Program",(int *)local_c8,
               (int *)&local_d0,&local_5c);
    plVar4 = local_b8;
    local_b8 = (long *)0x0;
    plVar10 = *(long **)(this + 0x178);
    *(long **)(this + 0x178) = plVar4;
    if ((plVar10 != (long *)0x0) && ((**(code **)(*plVar10 + 8))(), local_b8 != (long *)0x0)) {
      (**(code **)(*local_b8 + 8))();
    }
    uVar3 = *(undefined8 *)(this + 0x178);
    iVar5 = *(int *)(this + 0x124);
    if ((int)*(uint *)(this + 0x120) <= iVar5) {
      uVar14 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 0x120) != uVar14) {
        if ((int)uVar14 < 1) {
          free(*(void **)(this + 0x118));
          *(undefined8 *)(this + 0x118) = 0;
        }
        else {
          pvVar8 = realloc(*(void **)(this + 0x118),(ulong)uVar14 << 3);
          *(void **)(this + 0x118) = pvVar8;
        }
      }
      *(uint *)(this + 0x120) = uVar14;
      iVar5 = *(int *)(this + 0x124);
    }
    *(int *)(this + 0x124) = iVar5 + 1;
    *(undefined8 *)(*(long *)(this + 0x118) + (long)iVar5 * 8) = uVar3;
    iVar5 = *(int *)(this + 0x14);
    if ((int)*(uint *)(this + 0x10) <= iVar5) {
      uVar14 = iVar5 + ((iVar5 - (iVar5 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(this + 0x10) != uVar14) {
        if ((int)uVar14 < 1) {
          free(*(void **)(this + 8));
          *(undefined8 *)(this + 8) = 0;
        }
        else {
          pvVar8 = realloc(*(void **)(this + 8),(ulong)uVar14 << 2);
          *(void **)(this + 8) = pvVar8;
        }
      }
      *(uint *)(this + 0x10) = uVar14;
      iVar5 = *(int *)(this + 0x14);
    }
    *(int *)(this + 0x14) = iVar5 + 1;
    *(undefined4 *)(*(long *)(this + 8) + (long)iVar5 * 4) = *(undefined4 *)(this + 100);
    uVar3 = *(undefined8 *)(this + 0x178);
    p_Var9 = std::
             map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
             ::operator[]((map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
                           *)(this + 0x140),(uint *)(this + 100));
    *(undefined8 *)p_Var9 = uVar3;
  }
  uVar12 = (ulong)*(int *)(this + 0x14);
  uVar1 = uVar12 * 4;
  if (0x7ffffffffffffffc < uVar1) {
                    /* try { // try from 001aad1b to 001aad26 has its CatchHandler @ 001aad81 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("cannot create std::vector larger than max_size()");
  }
  if (*(int *)(this + 0x14) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    pvVar8 = *(void **)(this + 8);
                    /* try { // try from 001aac01 to 001aac08 has its CatchHandler @ 001aad81 */
    plVar10 = operator_new(uVar1);
    memcpy(plVar10,pvVar8,uVar1);
  }
  uStack_b0 = (void *)(uVar12 * 4 + (long)plVar10);
  local_b8 = plVar10;
  local_a8 = uStack_b0;
                    /* try { // try from 001aac3d to 001aac47 has its CatchHandler @ 001aad67 */
  FlaggedFloatCache<1ul>::FlaggedFloatCache((FlaggedFloatCache<1ul> *)&pvStack_a0,uVar12);
  pvVar8 = *(void **)(this + 0x18);
  *(long **)(this + 0x18) = local_b8;
  *(void **)(this + 0x20) = uStack_b0;
  *(void **)(this + 0x28) = local_a8;
  local_b8 = (long *)0x0;
  uStack_b0 = (void *)0x0;
  local_a8 = (void *)0x0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x30);
  *(void **)(this + 0x30) = pvStack_a0;
  *(code **)(this + 0x38) = local_98;
  *(undefined8 *)(this + 0x40) = uStack_90;
  pvStack_a0 = (void *)0x0;
  local_98 = (code *)0x0;
  uStack_90 = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  pvVar8 = *(void **)(this + 0x48);
  *(void **)(this + 0x48) = local_88;
  *(undefined8 *)(this + 0x50) = uStack_80;
  *(code **)(this + 0x58) = local_78;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_78 = (code *)0x0;
  if ((pvVar8 != (void *)0x0) && (operator_delete(pvVar8), local_88 != (void *)0x0)) {
    operator_delete(local_88);
  }
  if (pvStack_a0 != (void *)0x0) {
    operator_delete(pvStack_a0);
  }
  if (local_b8 != (long *)0x0) {
    operator_delete(local_b8);
  }
  return;
}


