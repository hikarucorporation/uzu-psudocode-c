// Function : queryInterface
// Namespace: juce:JucePluginFactoryBase
// Entry    : 001a4550
// Prototype: undefined8 queryInterface(JucePluginFactoryBase * this, undefined1[16] * param_1, undefined8 * param_2)
// Body     : 001a4550 - 001a45f5


/* juce::JucePluginFactoryBase::queryInterface(char const*, void**) */

undefined8 __thiscall
juce::JucePluginFactoryBase::queryInterface
          (JucePluginFactoryBase *this,undefined1 (*param_1) [16],undefined8 *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar1 = *param_1;
  auVar3[0] = -(Steinberg::IPluginFactory3::iid[8] == auVar1[0]);
  auVar3[1] = -(Steinberg::IPluginFactory3::iid[9] == auVar1[1]);
  auVar3[2] = -(Steinberg::IPluginFactory3::iid[10] == auVar1[2]);
  auVar3[3] = -(Steinberg::IPluginFactory3::iid[0xb] == auVar1[3]);
  auVar3[4] = -(Steinberg::IPluginFactory3::iid[0xc] == auVar1[4]);
  auVar3[5] = -(Steinberg::IPluginFactory3::iid[0xd] == auVar1[5]);
  auVar3[6] = -(Steinberg::IPluginFactory3::iid[0xe] == auVar1[6]);
  auVar3[7] = -(Steinberg::IPluginFactory3::iid[0xf] == auVar1[7]);
  auVar3[8] = -(Steinberg::IPluginFactory3::iid[0x10] == auVar1[8]);
  auVar3[9] = -(Steinberg::IPluginFactory3::iid[0x11] == auVar1[9]);
  auVar3[10] = -(Steinberg::IPluginFactory3::iid[0x12] == auVar1[10]);
  auVar3[0xb] = -(Steinberg::IPluginFactory3::iid[0x13] == auVar1[0xb]);
  auVar3[0xc] = -(Steinberg::IPluginFactory3::iid[0x14] == auVar1[0xc]);
  auVar3[0xd] = -(Steinberg::IPluginFactory3::iid[0x15] == auVar1[0xd]);
  auVar3[0xe] = -(Steinberg::IPluginFactory3::iid[0x16] == auVar1[0xe]);
  auVar3[0xf] = -(Steinberg::IPluginFactory3::iid[0x17] == auVar1[0xf]);
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
    pcVar2 = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory3>;
  }
  else {
    auVar1 = *param_1;
    auVar4[0] = -(Steinberg::IPluginFactory2::iid[8] == auVar1[0]);
    auVar4[1] = -(Steinberg::IPluginFactory2::iid[9] == auVar1[1]);
    auVar4[2] = -(Steinberg::IPluginFactory2::iid[10] == auVar1[2]);
    auVar4[3] = -(Steinberg::IPluginFactory2::iid[0xb] == auVar1[3]);
    auVar4[4] = -(Steinberg::IPluginFactory2::iid[0xc] == auVar1[4]);
    auVar4[5] = -(Steinberg::IPluginFactory2::iid[0xd] == auVar1[5]);
    auVar4[6] = -(Steinberg::IPluginFactory2::iid[0xe] == auVar1[6]);
    auVar4[7] = -(Steinberg::IPluginFactory2::iid[0xf] == auVar1[7]);
    auVar4[8] = -(Steinberg::IPluginFactory2::iid[0x10] == auVar1[8]);
    auVar4[9] = -(Steinberg::IPluginFactory2::iid[0x11] == auVar1[9]);
    auVar4[10] = -(Steinberg::IPluginFactory2::iid[0x12] == auVar1[10]);
    auVar4[0xb] = -(Steinberg::IPluginFactory2::iid[0x13] == auVar1[0xb]);
    auVar4[0xc] = -(Steinberg::IPluginFactory2::iid[0x14] == auVar1[0xc]);
    auVar4[0xd] = -(Steinberg::IPluginFactory2::iid[0x15] == auVar1[0xd]);
    auVar4[0xe] = -(Steinberg::IPluginFactory2::iid[0x16] == auVar1[0xe]);
    auVar4[0xf] = -(Steinberg::IPluginFactory2::iid[0x17] == auVar1[0xf]);
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
                 (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf)
        == 0xffff) {
      pcVar2 = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory2>;
    }
    else {
      auVar1 = *param_1;
      auVar5[0] = -(Steinberg::IPluginFactory::iid[8] == auVar1[0]);
      auVar5[1] = -(Steinberg::IPluginFactory::iid[9] == auVar1[1]);
      auVar5[2] = -(Steinberg::IPluginFactory::iid[10] == auVar1[2]);
      auVar5[3] = -(Steinberg::IPluginFactory::iid[0xb] == auVar1[3]);
      auVar5[4] = -(Steinberg::IPluginFactory::iid[0xc] == auVar1[4]);
      auVar5[5] = -(Steinberg::IPluginFactory::iid[0xd] == auVar1[5]);
      auVar5[6] = -(Steinberg::IPluginFactory::iid[0xe] == auVar1[6]);
      auVar5[7] = -(Steinberg::IPluginFactory::iid[0xf] == auVar1[7]);
      auVar5[8] = -(Steinberg::IPluginFactory::iid[0x10] == auVar1[8]);
      auVar5[9] = -(Steinberg::IPluginFactory::iid[0x11] == auVar1[9]);
      auVar5[10] = -(Steinberg::IPluginFactory::iid[0x12] == auVar1[10]);
      auVar5[0xb] = -(Steinberg::IPluginFactory::iid[0x13] == auVar1[0xb]);
      auVar5[0xc] = -(Steinberg::IPluginFactory::iid[0x14] == auVar1[0xc]);
      auVar5[0xd] = -(Steinberg::IPluginFactory::iid[0x15] == auVar1[0xd]);
      auVar5[0xe] = -(Steinberg::IPluginFactory::iid[0x16] == auVar1[0xe]);
      auVar5[0xf] = -(Steinberg::IPluginFactory::iid[0x17] == auVar1[0xf]);
      if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        pcVar2 = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPluginFactory>;
      }
      else {
        auVar1 = *param_1;
        auVar6[0] = -(Steinberg::FUnknown::iid[8] == auVar1[0]);
        auVar6[1] = -(Steinberg::FUnknown::iid[9] == auVar1[1]);
        auVar6[2] = -(Steinberg::FUnknown::iid[10] == auVar1[2]);
        auVar6[3] = -(Steinberg::FUnknown::iid[0xb] == auVar1[3]);
        auVar6[4] = -(Steinberg::FUnknown::iid[0xc] == auVar1[4]);
        auVar6[5] = -(Steinberg::FUnknown::iid[0xd] == auVar1[5]);
        auVar6[6] = -(Steinberg::FUnknown::iid[0xe] == auVar1[6]);
        auVar6[7] = -(Steinberg::FUnknown::iid[0xf] == auVar1[7]);
        auVar6[8] = -(Steinberg::FUnknown::iid[0x10] == auVar1[8]);
        auVar6[9] = -(Steinberg::FUnknown::iid[0x11] == auVar1[9]);
        auVar6[10] = -(Steinberg::FUnknown::iid[0x12] == auVar1[10]);
        auVar6[0xb] = -(Steinberg::FUnknown::iid[0x13] == auVar1[0xb]);
        auVar6[0xc] = -(Steinberg::FUnknown::iid[0x14] == auVar1[0xc]);
        auVar6[0xd] = -(Steinberg::FUnknown::iid[0x15] == auVar1[0xd]);
        auVar6[0xe] = -(Steinberg::FUnknown::iid[0x16] == auVar1[0xe]);
        auVar6[0xf] = -(Steinberg::FUnknown::iid[0x17] == auVar1[0xf]);
        if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar6[0xf] >> 7) << 0xf) != 0xffff) {
          *param_2 = 0;
          return 3;
        }
        pcVar2 = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::FUnknown>;
      }
    }
  }
  *param_2 = this;
  (*pcVar2)();
  return 0;
}


