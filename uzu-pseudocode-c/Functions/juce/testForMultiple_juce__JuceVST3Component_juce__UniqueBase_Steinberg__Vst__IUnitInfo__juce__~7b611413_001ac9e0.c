// Function : testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>
// Namespace: juce
// Entry    : 001ac9e0
// Prototype: InterfaceResultWithDeferredAddRef testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>(undefined1[16] * param_1, long param_2, char * param_3)
// Body     : 001ac9e0 - 001acad6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::InterfaceResultWithDeferredAddRef juce::testForMultiple<juce::JuceVST3Component,
   juce::UniqueBase<Steinberg::Vst::IUnitInfo>, juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,
   juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,
   juce::SharedBase<Steinberg::FUnknown, Steinberg::Vst::IComponent> >(juce::JuceVST3Component&,
   char const*, juce::UniqueBase<Steinberg::Vst::IUnitInfo>,
   juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,
   juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,
   juce::SharedBase<Steinberg::FUnknown, Steinberg::Vst::IComponent>) */

void __cdecl
juce::
testForMultiple<juce::JuceVST3Component,juce::UniqueBase<Steinberg::Vst::IUnitInfo>,juce::UniqueBase<Steinberg::Vst::IConnectionPoint>,juce::UniqueBase<Steinberg::Vst::IProcessContextRequirements>,juce::SharedBase<Steinberg::FUnknown,Steinberg::Vst::IComponent>>
          (undefined1 (*param_1) [16],long param_2,char *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  auVar1[0] = -(Steinberg::Vst::IUnitInfo::iid[8] == *param_3);
  auVar1[1] = -(Steinberg::Vst::IUnitInfo::iid[9] == param_3[1]);
  auVar1[2] = -(Steinberg::Vst::IUnitInfo::iid[10] == param_3[2]);
  auVar1[3] = -(Steinberg::Vst::IUnitInfo::iid[0xb] == param_3[3]);
  auVar1[4] = -(Steinberg::Vst::IUnitInfo::iid[0xc] == param_3[4]);
  auVar1[5] = -(Steinberg::Vst::IUnitInfo::iid[0xd] == param_3[5]);
  auVar1[6] = -(Steinberg::Vst::IUnitInfo::iid[0xe] == param_3[6]);
  auVar1[7] = -(Steinberg::Vst::IUnitInfo::iid[0xf] == param_3[7]);
  auVar1[8] = -(Steinberg::Vst::IUnitInfo::iid[0x10] == param_3[8]);
  auVar1[9] = -(Steinberg::Vst::IUnitInfo::iid[0x11] == param_3[9]);
  auVar1[10] = -(Steinberg::Vst::IUnitInfo::iid[0x12] == param_3[10]);
  auVar1[0xb] = -(Steinberg::Vst::IUnitInfo::iid[0x13] == param_3[0xb]);
  auVar1[0xc] = -(Steinberg::Vst::IUnitInfo::iid[0x14] == param_3[0xc]);
  auVar1[0xd] = -(Steinberg::Vst::IUnitInfo::iid[0x15] == param_3[0xd]);
  auVar1[0xe] = -(Steinberg::Vst::IUnitInfo::iid[0x16] == param_3[0xe]);
  auVar1[0xf] = -(Steinberg::Vst::IUnitInfo::iid[0x17] == param_3[0xf]);
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
    *(long *)(*param_1 + 8) = param_2 + 0x10;
    *(code **)param_1[1] = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IUnitInfo>;
    return;
  }
  auVar2[0] = -(Steinberg::Vst::IConnectionPoint::iid[8] == *param_3);
  auVar2[1] = -(Steinberg::Vst::IConnectionPoint::iid[9] == param_3[1]);
  auVar2[2] = -(Steinberg::Vst::IConnectionPoint::iid[10] == param_3[2]);
  auVar2[3] = -(Steinberg::Vst::IConnectionPoint::iid[0xb] == param_3[3]);
  auVar2[4] = -(Steinberg::Vst::IConnectionPoint::iid[0xc] == param_3[4]);
  auVar2[5] = -(Steinberg::Vst::IConnectionPoint::iid[0xd] == param_3[5]);
  auVar2[6] = -(Steinberg::Vst::IConnectionPoint::iid[0xe] == param_3[6]);
  auVar2[7] = -(Steinberg::Vst::IConnectionPoint::iid[0xf] == param_3[7]);
  auVar2[8] = -(Steinberg::Vst::IConnectionPoint::iid[0x10] == param_3[8]);
  auVar2[9] = -(Steinberg::Vst::IConnectionPoint::iid[0x11] == param_3[9]);
  auVar2[10] = -(Steinberg::Vst::IConnectionPoint::iid[0x12] == param_3[10]);
  auVar2[0xb] = -(Steinberg::Vst::IConnectionPoint::iid[0x13] == param_3[0xb]);
  auVar2[0xc] = -(Steinberg::Vst::IConnectionPoint::iid[0x14] == param_3[0xc]);
  auVar2[0xd] = -(Steinberg::Vst::IConnectionPoint::iid[0x15] == param_3[0xd]);
  auVar2[0xe] = -(Steinberg::Vst::IConnectionPoint::iid[0x16] == param_3[0xe]);
  auVar2[0xf] = -(Steinberg::Vst::IConnectionPoint::iid[0x17] == param_3[0xf]);
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
    *(long *)(*param_1 + 8) = param_2 + 0x18;
    *(code **)param_1[1] =
         InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IConnectionPoint>;
    return;
  }
  auVar3[0] = -(Steinberg::Vst::IProcessContextRequirements::iid[8] == *param_3);
  auVar3[1] = -(Steinberg::Vst::IProcessContextRequirements::iid[9] == param_3[1]);
  auVar3[2] = -(Steinberg::Vst::IProcessContextRequirements::iid[10] == param_3[2]);
  auVar3[3] = -(Steinberg::Vst::IProcessContextRequirements::iid[0xb] == param_3[3]);
  auVar3[4] = -(Steinberg::Vst::IProcessContextRequirements::iid[0xc] == param_3[4]);
  auVar3[5] = -(Steinberg::Vst::IProcessContextRequirements::iid[0xd] == param_3[5]);
  auVar3[6] = -(Steinberg::Vst::IProcessContextRequirements::iid[0xe] == param_3[6]);
  auVar3[7] = -(Steinberg::Vst::IProcessContextRequirements::iid[0xf] == param_3[7]);
  auVar3[8] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x10] == param_3[8]);
  auVar3[9] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x11] == param_3[9]);
  auVar3[10] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x12] == param_3[10]);
  auVar3[0xb] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x13] == param_3[0xb]);
  auVar3[0xc] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x14] == param_3[0xc]);
  auVar3[0xd] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x15] == param_3[0xd]);
  auVar3[0xe] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x16] == param_3[0xe]);
  auVar3[0xf] = -(Steinberg::Vst::IProcessContextRequirements::iid[0x17] == param_3[0xf]);
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
    *(long *)(*param_1 + 8) = param_2 + 0x20;
    *(code **)param_1[1] =
         InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IProcessContextRequirements>;
    return;
  }
  auVar4[0] = -(Steinberg::FUnknown::iid[8] == *param_3);
  auVar4[1] = -(Steinberg::FUnknown::iid[9] == param_3[1]);
  auVar4[2] = -(Steinberg::FUnknown::iid[10] == param_3[2]);
  auVar4[3] = -(Steinberg::FUnknown::iid[0xb] == param_3[3]);
  auVar4[4] = -(Steinberg::FUnknown::iid[0xc] == param_3[4]);
  auVar4[5] = -(Steinberg::FUnknown::iid[0xd] == param_3[5]);
  auVar4[6] = -(Steinberg::FUnknown::iid[0xe] == param_3[6]);
  auVar4[7] = -(Steinberg::FUnknown::iid[0xf] == param_3[7]);
  auVar4[8] = -(Steinberg::FUnknown::iid[0x10] == param_3[8]);
  auVar4[9] = -(Steinberg::FUnknown::iid[0x11] == param_3[9]);
  auVar4[10] = -(Steinberg::FUnknown::iid[0x12] == param_3[10]);
  auVar4[0xb] = -(Steinberg::FUnknown::iid[0x13] == param_3[0xb]);
  auVar4[0xc] = -(Steinberg::FUnknown::iid[0x14] == param_3[0xc]);
  auVar4[0xd] = -(Steinberg::FUnknown::iid[0x15] == param_3[0xd]);
  auVar4[0xe] = -(Steinberg::FUnknown::iid[0x16] == param_3[0xe]);
  auVar4[0xf] = -(Steinberg::FUnknown::iid[0x17] == param_3[0xf]);
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
    *(undefined4 *)(*param_1 + 4) = 0;
    *(long *)(*param_1 + 8) = param_2;
    *(code **)param_1[1] = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::FUnknown>;
    *(undefined4 *)*param_1 = 0;
    return;
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined4 *)*param_1 = 1;
  return;
}


