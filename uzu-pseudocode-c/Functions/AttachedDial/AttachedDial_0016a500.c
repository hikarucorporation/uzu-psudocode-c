// Function : AttachedDial
// Namespace: AttachedDial
// Entry    : 0016a500
// Prototype: undefined AttachedDial(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, AttachedDial * this, long param_5, int param_6)
// Body     : 0016a500 - 0016a5ed


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedDial::AttachedDial(AudioPluginAudioProcessor&, param::PID) */

void __thiscall
AttachedDial::AttachedDial
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,AttachedDial *this,
          long param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  juce::CustomDial::CustomDial(param_1_00,param_2,param_3,(CustomDial *)this);
                    /* try { // try from 0016a52d to 0016a539 has its CatchHandler @ 0016a60a */
  juce::SliderParameterAttachment::SliderParameterAttachment
            ((SliderParameterAttachment *)(this + 0x1d8),
             *(AudioProcessorParameter **)(*(long *)(param_5 + 0x238) + (long)param_6 * 8),this,0);
  if (juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak == '\0') {
    iVar1 = __cxa_guard_acquire(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    if (iVar1 != 0) {
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._0_4_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._8_8_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._16_8_ = 0;
      __cxa_atexit(juce::SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak,
                   juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    }
  }
                    /* try { // try from 0016a54b to 0016a559 has its CatchHandler @ 0016a5fd */
  juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x240),
             (SpinLock *)juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
                    /* try { // try from 0016a55a to 0016a566 has its CatchHandler @ 0016a5f0 */
  juce::Slider::setSliderStyle((Slider *)this,7);
  uVar2 = juce::Slider::getRotaryParameters((Slider *)this);
  juce::Slider::setRotaryParameters(_DAT_005d90d0,(long)this,(char)uVar2);
                    /* try { // try from 0016a588 to 0016a58f has its CatchHandler @ 0016a5ee */
  juce::Component::setLookAndFeel((Component *)this,*(long *)(this + 0x240));
  return;
}


