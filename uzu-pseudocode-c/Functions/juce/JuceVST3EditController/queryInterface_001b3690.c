// Function : queryInterface
// Namespace: juce:JuceVST3EditController
// Entry    : 001b3690
// Prototype: int queryInterface(JuceVST3EditController * this, char * param_1, long * param_2)
// Body     : 001b3690 - 001b3797


/* juce::JuceVST3EditController::queryInterface(char const*, void**) */

int __thiscall
juce::JuceVST3EditController::queryInterface
          (JuceVST3EditController *this,char *param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined1 auVar5 [16];
  long local_40;
  long local_38;
  code *local_30;
  
  if ((*(long *)(this + 0xe8) != 0) &&
     (plVar2 = *(long **)(*(long *)(this + 0xe8) + 0xd8), plVar2 != (long *)0x0)) {
    local_40 = 0;
    plVar2 = (long *)(**(code **)(*plVar2 + 0x170))();
    if (plVar2 != (long *)0x0) {
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1,&local_40);
      lVar4 = local_40;
      goto LAB_001b36fe;
    }
  }
  iVar1 = 1;
  lVar4 = 0;
LAB_001b36fe:
  testForMultiple<juce::JuceVST3EditController,juce::UniqueBase<Steinberg::FObject>,juce::UniqueBase<juce::JuceVST3EditController>,juce::UniqueBase<Steinberg::Vst::IEditController>,juce::UniqueBase<Steinberg::Vst::IEditController2>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IMidiMapping>,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IRemapParamID>,juce::UniqueBase<Steinberg::Vst::ChannelContext::IInfoListener>,juce::SharedBase<Steinberg::IPluginBase,Steinberg::Vst::IEditController>,juce::UniqueBase<Steinberg::IDependent>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IEditController>>
            ((undefined1 (*) [16])&local_40,(long)this,param_1);
  if ((int)local_40 == 0) {
    iVar3 = 0;
  }
  else {
    auVar5[0] = -(JuceAudioProcessor::iid[8] == *param_1);
    auVar5[1] = -(JuceAudioProcessor::iid[9] == param_1[1]);
    auVar5[2] = -(JuceAudioProcessor::iid[10] == param_1[2]);
    auVar5[3] = -(JuceAudioProcessor::iid[0xb] == param_1[3]);
    auVar5[4] = -(JuceAudioProcessor::iid[0xc] == param_1[4]);
    auVar5[5] = -(JuceAudioProcessor::iid[0xd] == param_1[5]);
    auVar5[6] = -(JuceAudioProcessor::iid[0xe] == param_1[6]);
    auVar5[7] = -(JuceAudioProcessor::iid[0xf] == param_1[7]);
    auVar5[8] = -(JuceAudioProcessor::iid[0x10] == param_1[8]);
    auVar5[9] = -(JuceAudioProcessor::iid[0x11] == param_1[9]);
    auVar5[10] = -(JuceAudioProcessor::iid[0x12] == param_1[10]);
    auVar5[0xb] = -(JuceAudioProcessor::iid[0x13] == param_1[0xb]);
    auVar5[0xc] = -(JuceAudioProcessor::iid[0x14] == param_1[0xc]);
    auVar5[0xd] = -(JuceAudioProcessor::iid[0x15] == param_1[0xd]);
    auVar5[0xe] = -(JuceAudioProcessor::iid[0x16] == param_1[0xe]);
    auVar5[0xf] = -(JuceAudioProcessor::iid[0x17] == param_1[0xf]);
    local_38 = 0;
    if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf)
        == 0xffff) {
      local_38 = *(long *)(this + 0xe8);
      local_30 = InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceAudioProcessor>;
      iVar3 = 0;
    }
    else {
      iVar3 = 1;
      local_30 = (code *)0x0;
    }
  }
  if (iVar1 == 0) {
    *param_2 = lVar4;
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    if (iVar3 == 0) {
      lVar4 = local_38;
    }
    *param_2 = lVar4;
    if (((iVar3 == 0) && (lVar4 != 0)) && (local_30 != (code *)0x0)) {
      (*local_30)();
    }
  }
  return iVar3;
}


