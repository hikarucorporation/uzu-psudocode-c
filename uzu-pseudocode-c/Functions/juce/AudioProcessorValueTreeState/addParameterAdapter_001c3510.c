// Function : addParameterAdapter
// Namespace: juce:AudioProcessorValueTreeState
// Entry    : 001c3510
// Prototype: undefined addParameterAdapter(AudioProcessorValueTreeState * this, long param_1)
// Body     : 001c3510 - 001c377f


/* juce::AudioProcessorValueTreeState::addParameterAdapter(juce::RangedAudioParameter&) */

void __thiscall
juce::AudioProcessorValueTreeState::addParameterAdapter
          (AudioProcessorValueTreeState *this,long param_1)

{
  byte *pbVar1;
  ulong uVar2;
  undefined8 uVar3;
  pthread_mutexattr_t pVar4;
  bool bVar5;
  uint uVar6;
  default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> *this_00;
  NormalisableRange<float> *this_01;
  long lVar7;
  _Rb_tree_node_base *p_Var8;
  _Rb_tree_node_base *p_Var9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  float fVar12;
  undefined8 local_78;
  undefined8 uStack_70;
  code *local_68;
  undefined8 local_60;
  default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> *local_50;
  char local_48 [4];
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  this_00 = operator_new(0x98);
  *(undefined ***)this_00 = &PTR__ParameterAdapter_00706dd8;
  local_50 = this_00 + 8;
  *(undefined8 *)(this_00 + 8) = 0;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x24) = 0;
  *(undefined8 *)(this_00 + 0x2c) = 0;
  *(long *)(this_00 + 0x38) = param_1;
  pthread_mutexattr_init((pthread_mutexattr_t *)&local_78);
  pthread_mutexattr_settype((pthread_mutexattr_t *)&local_78,1);
  pthread_mutexattr_setprotocol((pthread_mutexattr_t *)&local_78,1);
  pthread_mutex_init((pthread_mutex_t *)(this_00 + 0x40),(pthread_mutexattr_t *)&local_78);
  pthread_mutexattr_destroy((pthread_mutexattr_t *)&local_78);
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined4 *)(this_00 + 0x88) = 0;
                    /* try { // try from 001c35ba to 001c35cc has its CatchHandler @ 001c379b */
  this_01 = (NormalisableRange<float> *)(**(code **)(**(long **)(this_00 + 0x38) + 0x98))();
  fVar12 = (float)(**(code **)(**(long **)(this_00 + 0x38) + 0x20))();
  uVar2 = NormalisableRange<float>::convertFrom0to1(fVar12,this_01);
  *(int *)(this_00 + 0x90) = (int)uVar2;
  *(undefined2 *)(this_00 + 0x94) = 0x101;
  this_00[0x96] = (default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>)0x0;
  AudioProcessorParameter::addListener(*(AudioProcessorParameter **)(this_00 + 0x38),(long)this_00);
  if (*(long *)(this_00 + 0x38) != 0) {
    lVar7 = __dynamic_cast(*(long *)(this_00 + 0x38),&RangedAudioParameter::typeinfo,
                           &Parameter::typeinfo,0);
    if (lVar7 != 0) {
      local_78._0_4_ = (int)this_00;
      pVar4.__align = local_78._0_4_;
      local_78._4_4_ = (undefined4)((ulong)this_00 >> 0x20);
      local_78._0_1_ = (char)this_00;
      local_78._1_1_ = (char)((ulong)this_00 >> 8);
      local_78._2_1_ = (char)((ulong)this_00 >> 0x10);
      local_78._3_1_ = (char)((ulong)this_00 >> 0x18);
      local_48[0] = (char)local_78;
      local_48[1] = local_78._1_1_;
      local_48[2] = local_78._2_1_;
      local_48[3] = local_78._3_1_;
      uStack_44 = local_78._4_4_;
      uStack_40 = 0;
      uStack_3c = 0;
      uVar3 = *(undefined8 *)(lVar7 + 0x140);
      uStack_70 = *(undefined8 *)(lVar7 + 0x148);
      *(char (*) [4])(lVar7 + 0x140) = pVar4.__size;
      *(undefined4 *)(lVar7 + 0x144) = local_78._4_4_;
      *(undefined4 *)(lVar7 + 0x148) = 0;
      *(undefined4 *)(lVar7 + 0x14c) = 0;
      local_68 = *(code **)(lVar7 + 0x150);
      *(code **)(lVar7 + 0x150) =
           std::
           _Function_handler<void(),juce::AudioProcessorValueTreeState::ParameterAdapter::ParameterAdapter(juce::RangedAudioParameter&)::{lambda()#1}>
           ::_M_manager;
      local_60 = *(undefined8 *)(lVar7 + 0x158);
      *(code **)(lVar7 + 0x158) =
           std::
           _Function_handler<void(),juce::AudioProcessorValueTreeState::ParameterAdapter::ParameterAdapter(juce::RangedAudioParameter&)::{lambda()#1}>
           ::_M_invoke;
      local_78 = uVar3;
      if (local_68 != (code *)0x0) {
                    /* try { // try from 001c3684 to 001c3690 has its CatchHandler @ 001c3780 */
        (*local_68)(&local_78,&local_78,3);
      }
    }
  }
                    /* try { // try from 001c3691 to 001c369a has its CatchHandler @ 001c3788 */
  p_Var8 = operator_new(0x30);
  pbVar1 = *(byte **)(param_1 + 0x60);
  *(byte **)(p_Var8 + 0x20) = pbVar1;
  *(default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> **)(p_Var8 + 0x28) =
       this_00;
  p_Var11 = (_Rb_tree_node_base *)(this + 0x90);
  p_Var10 = *(_Rb_tree_node_base **)(this + 0x98);
  if (*(_Rb_tree_node_base **)(this + 0x98) == (_Rb_tree_node_base *)0x0) {
    p_Var10 = p_Var11;
    p_Var9 = p_Var11;
    if (p_Var11 != *(_Rb_tree_node_base **)(this + 0xa0)) {
LAB_001c3708:
      p_Var9 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var10);
      goto LAB_001c3713;
    }
  }
  else {
    do {
      p_Var9 = p_Var10;
      uVar6 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar1,*(byte **)(p_Var9 + 0x20));
      p_Var10 = *(_Rb_tree_node_base **)(p_Var9 + (ulong)(-1 < (int)uVar6) * 8 + 0x10);
    } while (*(_Rb_tree_node_base **)(p_Var9 + (ulong)(-1 < (int)uVar6) * 8 + 0x10) !=
             (_Rb_tree_node_base *)0x0);
    p_Var10 = p_Var9;
    if ((int)uVar6 < 0) {
      if (p_Var9 != *(_Rb_tree_node_base **)(this + 0xa0)) goto LAB_001c3708;
    }
    else {
LAB_001c3713:
      uVar6 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(p_Var9 + 0x20),pbVar1);
      p_Var9 = p_Var10;
      if (-1 < (int)uVar6) goto LAB_001c373e;
    }
  }
  if (p_Var9 != (_Rb_tree_node_base *)0x0) {
    if (p_Var9 == p_Var11) {
      bVar5 = true;
    }
    else {
      uVar6 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar1,*(byte **)(p_Var9 + 0x20));
      bVar5 = SUB41(uVar6 >> 0x1f,0);
    }
    std::_Rb_tree_insert_and_rebalance(bVar5,p_Var8,p_Var9,p_Var11);
    *(long *)(this + 0xb0) = *(long *)(this + 0xb0) + 1;
    return;
  }
LAB_001c373e:
  std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>::operator()(this_00);
  *(undefined8 *)(p_Var8 + 0x28) = 0;
  operator_delete(p_Var8);
  return;
}


