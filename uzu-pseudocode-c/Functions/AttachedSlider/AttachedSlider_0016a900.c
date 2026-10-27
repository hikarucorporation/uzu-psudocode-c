// Function : AttachedSlider
// Namespace: AttachedSlider
// Entry    : 0016a900
// Prototype: undefined AttachedSlider(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, AttachedSlider * this, long param_5, int param_6)
// Body     : 0016a900 - 0016a9c3


/* AttachedSlider::AttachedSlider(AudioPluginAudioProcessor&, param::PID) */

void __thiscall
AttachedSlider::AttachedSlider
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,AttachedSlider *this,
          long param_5,int param_6)

{
  int iVar1;
  
  juce::CustomSlider::CustomSlider(param_1_00,param_2,param_3,(CustomSlider *)this);
                    /* try { // try from 0016a92d to 0016a939 has its CatchHandler @ 0016a9de */
  juce::SliderParameterAttachment::SliderParameterAttachment
            ((SliderParameterAttachment *)(this + 0x1b8),
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
                    /* try { // try from 0016a94b to 0016a959 has its CatchHandler @ 0016a9d1 */
  juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x220),
             (SpinLock *)juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
                    /* try { // try from 0016a961 to 0016a968 has its CatchHandler @ 0016a9c4 */
  juce::Component::setLookAndFeel((Component *)this,*(long *)(this + 0x220));
  return;
}


