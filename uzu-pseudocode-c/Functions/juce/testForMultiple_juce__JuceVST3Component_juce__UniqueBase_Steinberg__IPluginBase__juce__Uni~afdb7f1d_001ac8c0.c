// Function : testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::IPluginBase>,juce::UniqueBase<juce::JuceVST3Component>,juce::UniqueBase<Steinberg::Vst::IComponent>,juce::UniqueBase<Steinberg::Vst::IAudioProcessor>,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>
// Namespace: juce
// Entry    : 001ac8c0
// Prototype: undefined1[16] * testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::IPluginBase>,juce::UniqueBase<juce::JuceVST3Component>,juce::UniqueBase<Steinberg::Vst::IComponent>,juce::UniqueBase<Steinberg::Vst::IAudioProcessor>,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>(undefined1[16] * param_1, long param_2, char * param_3)
// Body     : 001ac8c0 - 001ac9ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::InterfaceResultWithDeferredAddRef juce::testForMultiple<juce::JuceVST3Component,
   juce::UniqueBase<Steinberg::IPluginBase>, juce::UniqueBase<juce::JuceVST3Component>,
   juce::UniqueBase<Steinberg::Vst::IComponent>, juce::UniqueBase<Steinberg::Vst::IAudioProcessor>,
   juce::UniqueBase<Steinberg::Vst::IUnitInfo>, juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,
   juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,
   juce::SharedBase<Steinberg::FUnknown, Steinberg::Vst::IComponent> >(juce::JuceVST3Component&,
   char const*, juce::UniqueBase<Steinberg::IPluginBase>, juce::UniqueBase<juce::JuceVST3Component>,
   juce::UniqueBase<Steinberg::Vst::IComponent>, juce::UniqueBase<Steinberg::Vst::IAudioProcessor>,
   juce::UniqueBase<Steinberg::Vst::IUnitInfo>, juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,
   juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,
   juce::SharedBase<Steinberg::FUnknown, Steinberg::Vst::IComponent>) */

undefined1 (*) [16] __cdecl
juce::
testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::IPluginBase>,juce::UniqueBase<juce::JuceVST3Component>,juce::UniqueBase<Steinberg::Vst::IComponent>,juce::UniqueBase<Steinberg::Vst::IAudioProcessor>,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>
          (undefined1 (*param_1) [16],long param_2,char *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1[0] = -(Steinberg::IPluginBase::iid[8] == *param_3);
  auVar1[1] = -(Steinberg::IPluginBase::iid[9] == param_3[1]);
  auVar1[2] = -(Steinberg::IPluginBase::iid[10] == param_3[2]);
  auVar1[3] = -(Steinberg::IPluginBase::iid[0xb] == param_3[3]);
  auVar1[4] = -(Steinberg::IPluginBase::iid[0xc] == param_3[4]);
  auVar1[5] = -(Steinberg::IPluginBase::iid[0xd] == param_3[5]);
  auVar1[6] = -(Steinberg::IPluginBase::iid[0xe] == param_3[6]);
  auVar1[7] = -(Steinberg::IPluginBase::iid[0xf] == param_3[7]);
  auVar1[8] = -(Steinberg::IPluginBase::iid[0x10] == param_3[8]);
  auVar1[9] = -(Steinberg::IPluginBase::iid[0x11] == param_3[9]);
  auVar1[10] = -(Steinberg::IPluginBase::iid[0x12] == param_3[10]);
  auVar1[0xb] = -(Steinberg::IPluginBase::iid[0x13] == param_3[0xb]);
  auVar1[0xc] = -(Steinberg::IPluginBase::iid[0x14] == param_3[0xc]);
  auVar1[0xd] = -(Steinberg::IPluginBase::iid[0x15] == param_3[0xd]);
  auVar1[0xe] = -(Steinberg::IPluginBase::iid[0x16] == param_3[0xe]);
  auVar1[0xf] = -(Steinberg::IPluginBase::iid[0x17] == param_3[0xf]);
  if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf) ==
      0xffff) {
    *(undefined8 *)*param_1 = 0;
    *(long *)(*param_1 + 8) = param_2;
    *(code **)param_1[1] = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginBase>;
    return param_1;
  }
  auVar2[0] = -(JuceVST3Component::iid[8] == *param_3);
  auVar2[1] = -(JuceVST3Component::iid[9] == param_3[1]);
  auVar2[2] = -(JuceVST3Component::iid[10] == param_3[2]);
  auVar2[3] = -(JuceVST3Component::iid[0xb] == param_3[3]);
  auVar2[4] = -(JuceVST3Component::iid[0xc] == param_3[4]);
  auVar2[5] = -(JuceVST3Component::iid[0xd] == param_3[5]);
  auVar2[6] = -(JuceVST3Component::iid[0xe] == param_3[6]);
  auVar2[7] = -(JuceVST3Component::iid[0xf] == param_3[7]);
  auVar2[8] = -(JuceVST3Component::iid[0x10] == param_3[8]);
  auVar2[9] = -(JuceVST3Component::iid[0x11] == param_3[9]);
  auVar2[10] = -(JuceVST3Component::iid[0x12] == param_3[10]);
  auVar2[0xb] = -(JuceVST3Component::iid[0x13] == param_3[0xb]);
  auVar2[0xc] = -(JuceVST3Component::iid[0x14] == param_3[0xc]);
  auVar2[0xd] = -(JuceVST3Component::iid[0x15] == param_3[0xd]);
  auVar2[0xe] = -(JuceVST3Component::iid[0x16] == param_3[0xe]);
  auVar2[0xf] = -(JuceVST3Component::iid[0x17] == param_3[0xf]);
  if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf) ==
      0xffff) {
    *(undefined8 *)*param_1 = 0;
    *(long *)(*param_1 + 8) = param_2;
    *(code **)param_1[1] = InterfaceResultWithDeferredAddRef::doAddRef<juce::JuceVST3Component>;
    return param_1;
  }
  auVar3[0] = -(Steinberg::Vst::IComponent::iid[8] == *param_3);
  auVar3[1] = -(Steinberg::Vst::IComponent::iid[9] == param_3[1]);
  auVar3[2] = -(Steinberg::Vst::IComponent::iid[10] == param_3[2]);
  auVar3[3] = -(Steinberg::Vst::IComponent::iid[0xb] == param_3[3]);
  auVar3[4] = -(Steinberg::Vst::IComponent::iid[0xc] == param_3[4]);
  auVar3[5] = -(Steinberg::Vst::IComponent::iid[0xd] == param_3[5]);
  auVar3[6] = -(Steinberg::Vst::IComponent::iid[0xe] == param_3[6]);
  auVar3[7] = -(Steinberg::Vst::IComponent::iid[0xf] == param_3[7]);
  auVar3[8] = -(Steinberg::Vst::IComponent::iid[0x10] == param_3[8]);
  auVar3[9] = -(Steinberg::Vst::IComponent::iid[0x11] == param_3[9]);
  auVar3[10] = -(Steinberg::Vst::IComponent::iid[0x12] == param_3[10]);
  auVar3[0xb] = -(Steinberg::Vst::IComponent::iid[0x13] == param_3[0xb]);
  auVar3[0xc] = -(Steinberg::Vst::IComponent::iid[0x14] == param_3[0xc]);
  auVar3[0xd] = -(Steinberg::Vst::IComponent::iid[0x15] == param_3[0xd]);
  auVar3[0xe] = -(Steinberg::Vst::IComponent::iid[0x16] == param_3[0xe]);
  auVar3[0xf] = -(Steinberg::Vst::IComponent::iid[0x17] == param_3[0xf]);
  if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf) ==
      0xffff) {
    *(undefined8 *)*param_1 = 0;
    *(long *)(*param_1 + 8) = param_2;
    *(code **)param_1[1] = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IComponent>;
    return param_1;
  }
  auVar4[0] = -(Steinberg::Vst::IAudioProcessor::iid[8] == *param_3);
  auVar4[1] = -(Steinberg::Vst::IAudioProcessor::iid[9] == param_3[1]);
  auVar4[2] = -(Steinberg::Vst::IAudioProcessor::iid[10] == param_3[2]);
  auVar4[3] = -(Steinberg::Vst::IAudioProcessor::iid[0xb] == param_3[3]);
  auVar4[4] = -(Steinberg::Vst::IAudioProcessor::iid[0xc] == param_3[4]);
  auVar4[5] = -(Steinberg::Vst::IAudioProcessor::iid[0xd] == param_3[5]);
  auVar4[6] = -(Steinberg::Vst::IAudioProcessor::iid[0xe] == param_3[6]);
  auVar4[7] = -(Steinberg::Vst::IAudioProcessor::iid[0xf] == param_3[7]);
  auVar4[8] = -(Steinberg::Vst::IAudioProcessor::iid[0x10] == param_3[8]);
  auVar4[9] = -(Steinberg::Vst::IAudioProcessor::iid[0x11] == param_3[9]);
  auVar4[10] = -(Steinberg::Vst::IAudioProcessor::iid[0x12] == param_3[10]);
  auVar4[0xb] = -(Steinberg::Vst::IAudioProcessor::iid[0x13] == param_3[0xb]);
  auVar4[0xc] = -(Steinberg::Vst::IAudioProcessor::iid[0x14] == param_3[0xc]);
  auVar4[0xd] = -(Steinberg::Vst::IAudioProcessor::iid[0x15] == param_3[0xd]);
  auVar4[0xe] = -(Steinberg::Vst::IAudioProcessor::iid[0x16] == param_3[0xe]);
  auVar4[0xf] = -(Steinberg::Vst::IAudioProcessor::iid[0x17] == param_3[0xf]);
  if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf) ==
      0xffff) {
    *(undefined8 *)*param_1 = 0;
    *(long *)(*param_1 + 8) = param_2 + 8;
    *(code **)param_1[1] =
         InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IAudioProcessor>;
    return param_1;
  }
  testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>
            (param_1,param_2,param_3);
  return param_1;
}


