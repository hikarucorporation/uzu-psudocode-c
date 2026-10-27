// Function : installAudioProcessor
// Namespace: juce:JuceVST3EditController
// Entry    : 001aeb70
// Prototype: undefined installAudioProcessor(JuceVST3EditController * this, long * param_1)
// Body     : 001aeb70 - 001af1b4


/* juce::JuceVST3EditController::installAudioProcessor(juce::VSTComSmartPtr<juce::JuceAudioProcessor>
   const&) */

void __thiscall
juce::JuceVST3EditController::installAudioProcessor(JuceVST3EditController *this,long *param_1)

{
  JuceAudioProcessor *pJVar1;
  uint uVar2;
  uint uVar3;
  JuceAudioProcessor *this_00;
  undefined8 *puVar4;
  AudioProcessorParameterGroup *this_01;
  byte bVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  long lVar10;
  AudioProcessor *pAVar11;
  Param *this_02;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  AudioProcessorParameter *pAVar18;
  undefined4 uVar19;
  undefined8 *local_60;
  int local_54;
  AudioProcessor *local_50;
  ParameterContainer *local_48;
  ulong local_40;
  long local_38;
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    LOCK();
    *(int *)(lVar10 + 0xd0) = *(int *)(lVar10 + 0xd0) + 1;
    UNLOCK();
  }
  this_00 = *(JuceAudioProcessor **)(this + 0xe8);
  *(long *)(this + 0xe8) = lVar10;
  if (this_00 != (JuceAudioProcessor *)0x0) {
    LOCK();
    pJVar1 = this_00 + 0xd0;
    *(int *)pJVar1 = *(int *)pJVar1 + -1;
    UNLOCK();
    if (*(int *)pJVar1 == 0) {
      JuceAudioProcessor::~JuceAudioProcessor(this_00);
      operator_delete(this_00);
    }
  }
  plVar8 = (long *)(**(code **)(**(long **)(*(long *)(this + 0xe8) + 0xd8) + 0x170))();
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,*(undefined8 *)(this + 0x40));
    (**(code **)(*plVar8 + 0x28))(plVar8,*(undefined8 *)(this + 0x20));
  }
  if (*(long *)(this + 0xe8) == 0) {
    return;
  }
  pAVar11 = *(AudioProcessor **)(*(long *)(this + 0xe8) + 0xd8);
  if (pAVar11 == (AudioProcessor *)0x0) {
    return;
  }
  *(undefined4 *)(this + 0x62b4) = *(undefined4 *)(pAVar11 + 0x3c);
  (**(code **)(*(long *)pAVar11 + 0x140))(pAVar11,this + 0xa8);
  lVar10 = *(long *)(this + 0xe8);
  local_50 = pAVar11;
  if (*(char *)(lVar10 + 0x68) != '\0') goto LAB_001aed59;
  uVar2 = *(uint *)(lVar10 + 0x60);
  lVar14 = *(long *)(lVar10 + 0x150);
  if (lVar14 == 0) {
LAB_001aecb2:
    pAVar18 = (AudioProcessorParameter *)0x0;
    iVar7 = *(int *)(lVar10 + 0x14);
  }
  else {
    lVar15 = lVar10 + 0x148;
    lVar13 = lVar15;
    do {
      plVar8 = (long *)(lVar14 + 0x18);
      if (uVar2 <= *(uint *)(lVar14 + 0x20)) {
        plVar8 = (long *)(lVar14 + 0x10);
        lVar13 = lVar14;
      }
      lVar14 = *plVar8;
    } while (lVar14 != 0);
    if (lVar13 == lVar15) goto LAB_001aecb2;
    if (uVar2 < *(uint *)(lVar13 + 0x20)) {
      lVar13 = lVar15;
    }
    if (lVar13 == lVar15) goto LAB_001aecb2;
    pAVar18 = *(AudioProcessorParameter **)(lVar13 + 0x28);
    iVar7 = *(int *)(lVar10 + 0x14);
  }
  uVar19 = 0xffffffff;
  if ((long)iVar7 != 0) {
    uVar19 = 0xffffffff;
    lVar14 = (long)iVar7 << 2;
    lVar15 = 0;
    do {
      if (*(uint *)(*(long *)(lVar10 + 8) + lVar15 * 4) == uVar2) {
        uVar19 = (undefined4)lVar15;
        break;
      }
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + -4;
    } while (lVar14 != 0);
  }
  puVar9 = operator_new(0x18);
  *puVar9 = &PTR__Listener_007059c0;
  puVar9[1] = this;
  *(uint *)(puVar9 + 2) = uVar2;
  *(undefined4 *)((long)puVar9 + 0x14) = uVar19;
                    /* try { // try from 001aed07 to 001aed11 has its CatchHandler @ 001af1d0 */
  AudioProcessorParameter::addListener(pAVar18,(long)puVar9);
  pAVar11 = local_50;
  puVar4 = *(undefined8 **)(this + 0x62a0);
  local_60 = puVar9;
  if (puVar4 == *(undefined8 **)(this + 0x62a8)) {
                    /* try { // try from 001aed40 to 001aed49 has its CatchHandler @ 001af1b9 */
    std::
    vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
    ::
    _M_realloc_insert<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>
              ((vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
                *)(this + 0x6298),puVar4,&local_60);
    if (local_60 != (undefined8 *)0x0) {
      operator_delete(local_60);
    }
  }
  else {
    *puVar4 = puVar9;
    *(long *)(this + 0x62a0) = *(long *)(this + 0x62a0) + 8;
  }
LAB_001aed59:
  plVar8 = *(long **)(this + 0x50);
  if ((plVar8 == (long *)0x0) || ((int)((ulong)(plVar8[1] - *plVar8) >> 3) < 1)) {
    local_48 = (ParameterContainer *)(this + 0x50);
    lVar10 = *(long *)(this + 0xe8);
    uVar16 = (ulong)*(uint *)(lVar10 + 0x14);
    if (0 < (int)*(uint *)(lVar10 + 0x14)) {
      uVar17 = 0;
      local_40 = uVar16;
      do {
        uVar2 = *(uint *)(*(long *)(lVar10 + 8) + uVar17 * 4);
        if (uVar2 != *(uint *)(lVar10 + 100)) {
          lVar14 = *(long *)(lVar10 + 0x150);
          if (lVar14 == 0) {
LAB_001aee60:
            lVar10 = 0;
          }
          else {
            lVar10 = lVar10 + 0x148;
            lVar15 = lVar10;
            do {
              plVar8 = (long *)(lVar14 + 0x18);
              if (uVar2 <= *(uint *)(lVar14 + 0x20)) {
                plVar8 = (long *)(lVar14 + 0x10);
                lVar15 = lVar14;
              }
              lVar14 = *plVar8;
            } while (lVar14 != 0);
            if (lVar15 == lVar10) goto LAB_001aee60;
            if (uVar2 < *(uint *)(lVar15 + 0x20)) {
              lVar15 = lVar10;
            }
            if (lVar15 == lVar10) goto LAB_001aee60;
            lVar10 = *(long *)(lVar15 + 0x28);
          }
          pAVar11 = AudioProcessor::getParameterTree(pAVar11);
          AudioProcessorParameterGroup::getGroupsForParameter
                    (&local_60,(AudioProcessorParameterGroup *)pAVar11,lVar10);
          local_38 = lVar10;
          if (local_54 < 1) {
            local_54 = 0;
            free(local_60);
LAB_001aeef6:
            uVar6 = 0;
          }
          else {
            this_01 = (AudioProcessorParameterGroup *)local_60[local_54 - 1];
            local_54 = 0;
            free(local_60);
            if (this_01 == (AudioProcessorParameterGroup *)0x0) goto LAB_001aeef6;
            lVar10 = AudioProcessorParameterGroup::getParent(this_01);
            uVar6 = 0;
            if (lVar10 != 0) {
              AudioProcessorParameterGroup::getID((long *)&local_60,(long *)this_01);
              uVar6 = juce::String::hashCode((String *)&local_60);
              uVar6 = uVar6 & 0x7fffffff;
              juce::String::~String((String *)&local_60);
            }
          }
          this_02 = operator_new(0x348);
          uVar3 = *(uint *)(*(long *)(this + 0xe8) + 0x60);
          *(undefined4 *)(this_02 + 8) = 1;
          memset(this_02 + 0x10,0,800);
          *(undefined4 *)(this_02 + 0x330) = 4;
          *(undefined ***)this_02 = &PTR_queryInterface_00705a08;
          *(JuceVST3EditController **)(this_02 + 0x338) = this;
          *(long *)(this_02 + 0x340) = local_38;
          *(uint *)(this_02 + 0x10) = uVar2;
          *(uint *)(this_02 + 800) = uVar6;
                    /* try { // try from 001aef5f to 001aef95 has its CatchHandler @ 001af1d2 */
          Param::updateParameterInfo(this_02);
          uVar6 = (**(code **)(**(long **)(this_02 + 0x340) + 0x78))();
          uVar12 = 2;
          if ((uVar6 & 0xffff0000) != 0x20000) {
            bVar5 = (**(code **)(**(long **)(this_02 + 0x340) + 0x68))();
            uVar12 = (uint)bVar5;
          }
          uVar6 = uVar12 + 0x10000;
          if (uVar2 != uVar3) {
            uVar6 = uVar12;
          }
          *(uint *)(this_02 + 0x324) = uVar6;
          *(undefined8 *)(this_02 + 0x328) = *(undefined8 *)(this_02 + 0x318);
          Steinberg::Vst::ParameterContainer::addParameter(local_48,(long *)this_02);
          uVar16 = local_40;
          pAVar11 = local_50;
        }
        uVar17 = uVar17 + 1;
        lVar10 = *(long *)(this + 0xe8);
      } while (uVar17 != uVar16);
    }
    lVar14 = *(long *)(lVar10 + 0x150);
    if (lVar14 != 0) {
      uVar2 = *(uint *)(lVar10 + 100);
      lVar15 = lVar10 + 0x148;
      lVar13 = lVar15;
      do {
        plVar8 = (long *)(lVar14 + 0x18);
        if (uVar2 <= *(uint *)(lVar14 + 0x20)) {
          plVar8 = (long *)(lVar14 + 0x10);
          lVar13 = lVar14;
        }
        lVar14 = *plVar8;
      } while (lVar14 != 0);
      if (lVar13 != lVar15) {
        if (uVar2 < *(uint *)(lVar13 + 0x20)) {
          lVar13 = lVar15;
        }
        if ((lVar13 != lVar15) &&
           (pAVar18 = *(AudioProcessorParameter **)(lVar13 + 0x28),
           pAVar18 != (AudioProcessorParameter *)0x0)) {
          uVar19 = 0xffffffff;
          if ((long)*(int *)(lVar10 + 0x14) != 0) {
            lVar14 = (long)*(int *)(lVar10 + 0x14) << 2;
            lVar15 = 0;
            do {
              if (*(uint *)(*(long *)(lVar10 + 8) + lVar15 * 4) == uVar2) {
                uVar19 = (undefined4)lVar15;
                break;
              }
              lVar15 = lVar15 + 1;
              lVar14 = lVar14 + -4;
            } while (lVar14 != 0);
          }
          puVar9 = operator_new(0x18);
          *puVar9 = &PTR__Listener_007059c0;
          puVar9[1] = this;
          *(uint *)(puVar9 + 2) = uVar2;
          *(undefined4 *)((long)puVar9 + 0x14) = uVar19;
                    /* try { // try from 001af057 to 001af061 has its CatchHandler @ 001af1b7 */
          AudioProcessorParameter::addListener(pAVar18,(long)puVar9);
          pAVar11 = local_50;
          puVar4 = *(undefined8 **)(this + 0x62a0);
          local_60 = puVar9;
          if (puVar4 == *(undefined8 **)(this + 0x62a8)) {
                    /* try { // try from 001af090 to 001af099 has its CatchHandler @ 001af1b5 */
            std::
            vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
            ::
            _M_realloc_insert<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>
                      ((vector<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>,std::allocator<std::unique_ptr<juce::JuceVST3EditController::OwnedParameterListener,std::default_delete<juce::JuceVST3EditController::OwnedParameterListener>>>>
                        *)(this + 0x6298),puVar4,&local_60);
            if (local_60 != (undefined8 *)0x0) {
              operator_delete(local_60);
            }
          }
          else {
            *puVar4 = puVar9;
            *(long *)(this + 0x62a0) = *(long *)(this + 0x62a0) + 8;
          }
          plVar8 = operator_new(0x340);
          uVar19 = *(undefined4 *)(*(long *)(this + 0xe8) + 100);
          *(undefined4 *)(plVar8 + 1) = 1;
          memset(plVar8 + 4,0,0x310);
          *(undefined4 *)(plVar8 + 0x66) = 4;
          *plVar8 = (long)&PTR_queryInterface_00705b00;
          plVar8[0x67] = (long)pAVar11;
          *(undefined4 *)(plVar8 + 2) = uVar19;
          *(undefined8 *)((long)plVar8 + 0x14) = 0x67006f00720050;
          *(undefined4 *)((long)plVar8 + 0x1c) = 0x610072;
          *(undefined2 *)(plVar8 + 4) = 0x6d;
          *(undefined8 *)((long)plVar8 + 0x114) = 0x67006f00720050;
          *(undefined4 *)((long)plVar8 + 0x11c) = 0x610072;
          *(undefined2 *)(plVar8 + 0x24) = 0x6d;
          *(undefined2 *)((long)plVar8 + 0x312) = 0;
                    /* try { // try from 001af136 to 001af157 has its CatchHandler @ 001af1c8 */
          iVar7 = (**(code **)(*(long *)pAVar11 + 0xe0))(pAVar11);
          *(int *)((long)plVar8 + 0x314) = iVar7 + -1;
          iVar7 = (**(code **)(*(long *)plVar8[0x67] + 0xe8))();
          plVar8[99] = (long)((double)iVar7 / (double)*(int *)((long)plVar8 + 0x314));
          plVar8[100] = 0x800100000000;
          Steinberg::Vst::ParameterContainer::addParameter(local_48,plVar8);
        }
      }
    }
  }
  local_60 = (undefined8 *)CONCAT44(local_60._4_4_,0x100);
  audioProcessorChanged(this,pAVar11,(char *)&local_60);
  return;
}


