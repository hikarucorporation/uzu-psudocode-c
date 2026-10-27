// Function : queryInterface
// Namespace: juce:JuceVST3EditController:JuceVST3Editor
// Entry    : 001b5a60
// Prototype: undefined8 queryInterface(JuceVST3Editor * this, undefined1[16] * param_1, long * param_2)
// Body     : 001b5a60 - 001b5b59


/* juce::JuceVST3EditController::JuceVST3Editor::queryInterface(char const*, void**) */

undefined8 __thiscall
juce::JuceVST3EditController::JuceVST3Editor::queryInterface
          (JuceVST3Editor *this,undefined1 (*param_1) [16],long *param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  code *pcVar3;
  JuceVST3Editor *pJVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  auVar1 = *param_1;
  auVar5[0] = -(Steinberg::Vst::IParameterFinder::iid[8] == auVar1[0]);
  auVar5[1] = -(Steinberg::Vst::IParameterFinder::iid[9] == auVar1[1]);
  auVar5[2] = -(Steinberg::Vst::IParameterFinder::iid[10] == auVar1[2]);
  auVar5[3] = -(Steinberg::Vst::IParameterFinder::iid[0xb] == auVar1[3]);
  auVar5[4] = -(Steinberg::Vst::IParameterFinder::iid[0xc] == auVar1[4]);
  auVar5[5] = -(Steinberg::Vst::IParameterFinder::iid[0xd] == auVar1[5]);
  auVar5[6] = -(Steinberg::Vst::IParameterFinder::iid[0xe] == auVar1[6]);
  auVar5[7] = -(Steinberg::Vst::IParameterFinder::iid[0xf] == auVar1[7]);
  auVar5[8] = -(Steinberg::Vst::IParameterFinder::iid[0x10] == auVar1[8]);
  auVar5[9] = -(Steinberg::Vst::IParameterFinder::iid[0x11] == auVar1[9]);
  auVar5[10] = -(Steinberg::Vst::IParameterFinder::iid[0x12] == auVar1[10]);
  auVar5[0xb] = -(Steinberg::Vst::IParameterFinder::iid[0x13] == auVar1[0xb]);
  auVar5[0xc] = -(Steinberg::Vst::IParameterFinder::iid[0x14] == auVar1[0xc]);
  auVar5[0xd] = -(Steinberg::Vst::IParameterFinder::iid[0x15] == auVar1[0xd]);
  auVar5[0xe] = -(Steinberg::Vst::IParameterFinder::iid[0x16] == auVar1[0xe]);
  auVar5[0xf] = -(Steinberg::Vst::IParameterFinder::iid[0x17] == auVar1[0xf]);
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
               (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf) ==
      0xffff) {
    pJVar4 = this + 0x40;
    pcVar3 = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::Vst::IParameterFinder>;
  }
  else {
    auVar1 = *param_1;
    auVar6[0] = -(Steinberg::IPlugViewContentScaleSupport::iid[8] == auVar1[0]);
    auVar6[1] = -(Steinberg::IPlugViewContentScaleSupport::iid[9] == auVar1[1]);
    auVar6[2] = -(Steinberg::IPlugViewContentScaleSupport::iid[10] == auVar1[2]);
    auVar6[3] = -(Steinberg::IPlugViewContentScaleSupport::iid[0xb] == auVar1[3]);
    auVar6[4] = -(Steinberg::IPlugViewContentScaleSupport::iid[0xc] == auVar1[4]);
    auVar6[5] = -(Steinberg::IPlugViewContentScaleSupport::iid[0xd] == auVar1[5]);
    auVar6[6] = -(Steinberg::IPlugViewContentScaleSupport::iid[0xe] == auVar1[6]);
    auVar6[7] = -(Steinberg::IPlugViewContentScaleSupport::iid[0xf] == auVar1[7]);
    auVar6[8] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x10] == auVar1[8]);
    auVar6[9] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x11] == auVar1[9]);
    auVar6[10] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x12] == auVar1[10]);
    auVar6[0xb] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x13] == auVar1[0xb]);
    auVar6[0xc] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x14] == auVar1[0xc]);
    auVar6[0xd] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x15] == auVar1[0xd]);
    auVar6[0xe] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x16] == auVar1[0xe]);
    auVar6[0xf] = -(Steinberg::IPlugViewContentScaleSupport::iid[0x17] == auVar1[0xf]);
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
        != 0xffff) {
      lVar2 = *(long *)*param_1;
      if ((lVar2 == Steinberg::IPlugView::iid._8_8_) &&
         (*(long *)(*param_1 + 8) == Steinberg::IPlugView::iid._16_8_)) {
        (**(code **)(*(long *)this + 8))(this);
        this = this + 0x10;
      }
      else {
        if ((((lVar2 != Steinberg::FUnknown::iid._8_8_) ||
             (*(long *)(*param_1 + 8) != Steinberg::FUnknown::iid._16_8_)) &&
            ((lVar2 != Steinberg::IDependent::iid._8_8_ ||
             (*(long *)(*param_1 + 8) != Steinberg::IDependent::iid._16_8_)))) &&
           ((lVar2 != Steinberg::FObject::iid._8_8_ ||
            (*(long *)(*param_1 + 8) != Steinberg::FObject::iid._16_8_)))) {
          *param_2 = 0;
          return 0xffffffff;
        }
        (**(code **)(*(long *)this + 8))(this);
      }
      *param_2 = (long)this;
      return 0;
    }
    pJVar4 = this + 0x48;
    pcVar3 = InterfaceResultWithDeferredAddRef::doAddRef<Steinberg::IPlugViewContentScaleSupport>;
  }
  *param_2 = (long)pJVar4;
  (*pcVar3)(pJVar4);
  return 0;
}


