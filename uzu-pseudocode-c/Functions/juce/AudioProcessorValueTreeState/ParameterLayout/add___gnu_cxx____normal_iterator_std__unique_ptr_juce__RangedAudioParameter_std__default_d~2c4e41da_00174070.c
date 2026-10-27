// Function : add<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>,__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>>
// Namespace: juce:AudioProcessorValueTreeState:ParameterLayout
// Entry    : 00174070
// Prototype: void add<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>,__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>>(ParameterLayout * this, long * param_1, long * param_2)
// Body     : 00174070 - 001742c4


/* WARNING: Removing unreachable block (ram,0x001742b4) */
/* void 
   juce::AudioProcessorValueTreeState::ParameterLayout::add<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >*,
   std::vector<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >,
   std::allocator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >*,
   std::vector<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >,
   std::allocator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> > > > >
   >(__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >*,
   std::vector<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >,
   std::allocator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> > > > >,
   __gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >*,
   std::vector<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> >,
   std::allocator<std::unique_ptr<juce::RangedAudioParameter,
   std::default_delete<juce::RangedAudioParameter> > > > >) */

void __thiscall
juce::AudioProcessorValueTreeState::ParameterLayout::
add<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>,__gnu_cxx::__normal_iterator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>*,std::vector<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>,std::allocator<std::unique_ptr<juce::RangedAudioParameter,std::default_delete<juce::RangedAudioParameter>>>>>>
          (ParameterLayout *this,long *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *local_50;
  long local_48;
  ulong local_40;
  long local_38;
  
  puVar9 = *(undefined8 **)this;
  puVar12 = *(undefined8 **)(this + 8);
  lVar5 = (long)puVar12 - (long)puVar9 >> 3;
  uVar8 = ((long)param_2 - (long)param_1 >> 3) + lVar5;
  if (uVar8 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (uVar8 <= (ulong)(*(long *)(this + 0x10) - (long)puVar9 >> 3)) goto LAB_00174225;
  local_48 = (long)puVar12 - (long)puVar9;
  local_40 = uVar8;
  local_38 = lVar5;
  puVar4 = operator_new(uVar8 * 8);
  if (puVar9 != puVar12) {
    if (local_48 - 8U < 0x18) {
      puVar7 = puVar4;
LAB_001741d0:
      do {
        *puVar7 = *puVar9;
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
        puVar7 = puVar7 + 1;
      } while (puVar9 != puVar12);
    }
    else {
      uVar11 = (local_48 - 8U >> 3) + 1;
      uVar8 = uVar11 & 0xfffffffffffffffc;
      uVar6 = (uVar8 - 4 >> 2) + 1;
      if (uVar8 - 4 == 0) {
        lVar5 = 0;
LAB_0017418d:
        uVar1 = (puVar9 + lVar5)[1];
        uVar2 = puVar9[lVar5 + 2];
        uVar3 = (puVar9 + lVar5 + 2)[1];
        puVar4[lVar5] = puVar9[lVar5];
        (puVar4 + lVar5)[1] = uVar1;
        puVar4[lVar5 + 2] = uVar2;
        (puVar4 + lVar5 + 2)[1] = uVar3;
        puVar9[lVar5] = 0;
        (puVar9 + lVar5)[1] = 0;
        puVar9[lVar5 + 2] = 0;
        (puVar9 + lVar5 + 2)[1] = 0;
      }
      else {
        uVar10 = uVar6 & 0xfffffffffffffffe;
        lVar5 = 0;
        do {
          uVar1 = (puVar9 + lVar5)[1];
          uVar2 = puVar9[lVar5 + 2];
          uVar3 = (puVar9 + lVar5 + 2)[1];
          puVar4[lVar5] = puVar9[lVar5];
          (puVar4 + lVar5)[1] = uVar1;
          puVar4[lVar5 + 2] = uVar2;
          (puVar4 + lVar5 + 2)[1] = uVar3;
          puVar9[lVar5] = 0;
          (puVar9 + lVar5)[1] = 0;
          puVar9[lVar5 + 2] = 0;
          (puVar9 + lVar5 + 2)[1] = 0;
          uVar1 = (puVar9 + lVar5 + 4)[1];
          uVar2 = puVar9[lVar5 + 6];
          uVar3 = (puVar9 + lVar5 + 6)[1];
          puVar4[lVar5 + 4] = puVar9[lVar5 + 4];
          (puVar4 + lVar5 + 4)[1] = uVar1;
          puVar4[lVar5 + 6] = uVar2;
          (puVar4 + lVar5 + 6)[1] = uVar3;
          puVar9[lVar5 + 4] = 0;
          (puVar9 + lVar5 + 4)[1] = 0;
          puVar9[lVar5 + 6] = 0;
          (puVar9 + lVar5 + 6)[1] = 0;
          lVar5 = lVar5 + 8;
          uVar10 = uVar10 - 2;
        } while (uVar10 != 0);
        if ((uVar6 & 1) != 0) goto LAB_0017418d;
      }
      if (uVar11 != uVar8) {
        puVar7 = puVar4 + uVar8;
        puVar9 = puVar9 + uVar8;
        goto LAB_001741d0;
      }
    }
    puVar12 = *(undefined8 **)this;
  }
  if (puVar12 != (undefined8 *)0x0) {
    operator_delete(puVar12);
  }
  *(undefined8 **)this = puVar4;
  *(undefined8 **)(this + 8) = puVar4 + local_38;
  *(undefined8 **)(this + 0x10) = puVar4 + local_40;
LAB_00174225:
  if (param_1 != param_2) {
    do {
      lVar5 = *param_1;
      *param_1 = 0;
                    /* try { // try from 0017425d to 00174266 has its CatchHandler @ 001742d7 */
      local_50 = operator_new(0x10);
      *local_50 = (long)&PTR__ParameterStorage_00701f28;
      local_50[1] = lVar5;
      puVar9 = *(undefined8 **)(this + 8);
      if (puVar9 == *(undefined8 **)(this + 0x10)) {
                    /* try { // try from 0017427d to 00174287 has its CatchHandler @ 001742c5 */
        std::
        vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>>
        ::
        _M_realloc_insert<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>
                  ((vector<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>,std::allocator<std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase,std::default_delete<juce::AudioProcessorValueTreeState::ParameterLayout::ParameterStorageBase>>>>
                    *)this,puVar9,&local_50);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 8))();
        }
      }
      else {
        *puVar9 = local_50;
        *(long *)(this + 8) = *(long *)(this + 8) + 8;
      }
      param_1 = param_1 + 1;
    } while (param_1 != param_2);
  }
  return;
}


