// Function : AttachedInfiniteDial
// Namespace: AttachedInfiniteDial
// Entry    : 0016a700
// Prototype: undefined AttachedInfiniteDial(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, AttachedInfiniteDial * this, long param_5, int param_6)
// Body     : 0016a700 - 0016a7ec


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AttachedInfiniteDial::AttachedInfiniteDial(AudioPluginAudioProcessor&, param::PID) */

void __thiscall
AttachedInfiniteDial::AttachedInfiniteDial
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,AttachedInfiniteDial *this,
          long param_5,int param_6)

{
  int iVar1;
  
  juce::CustomDial::CustomDial(param_1_00,param_2,param_3,(CustomDial *)this);
                    /* try { // try from 0016a72d to 0016a739 has its CatchHandler @ 0016a809 */
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
                    /* try { // try from 0016a74b to 0016a759 has its CatchHandler @ 0016a7fc */
  juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x240),
             (SpinLock *)juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
                    /* try { // try from 0016a75a to 0016a766 has its CatchHandler @ 0016a7ef */
  juce::Slider::setSliderStyle((Slider *)this,7);
  juce::Slider::getRotaryParameters((Slider *)this);
  juce::Slider::setRotaryParameters(_DAT_005d90e0,(long)this,0);
                    /* try { // try from 0016a787 to 0016a78e has its CatchHandler @ 0016a7ed */
  juce::Component::setLookAndFeel((Component *)this,*(long *)(this + 0x240));
  return;
}


