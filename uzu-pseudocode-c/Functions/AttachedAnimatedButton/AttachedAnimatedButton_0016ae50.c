// Function : AttachedAnimatedButton
// Namespace: AttachedAnimatedButton
// Entry    : 0016ae50
// Prototype: undefined AttachedAnimatedButton(AttachedAnimatedButton * this, long param_1, int param_2, long * param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined4 param_7)
// Body     : 0016ae50 - 0016b02e


/* AttachedAnimatedButton::AttachedAnimatedButton(AudioPluginAudioProcessor&, param::PID,
   juce::Image const&, int, juce::Range<int>, juce::Range<int>, int) */

void __thiscall
AttachedAnimatedButton::AttachedAnimatedButton
          (AttachedAnimatedButton *this,long param_1,int param_2,long *param_3,undefined4 param_4,
          undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  undefined8 local_58;
  undefined8 uStack_50;
  code *local_48;
  undefined8 local_40;
  AttachedAnimatedButton *local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  AnimatedImageButton::AnimatedImageButton
            ((AnimatedImageButton *)this,param_3,param_4,param_5,param_6,param_7);
                    /* try { // try from 0016ae98 to 0016aea4 has its CatchHandler @ 0016b03e */
  juce::ButtonParameterAttachment::ButtonParameterAttachment
            ((ButtonParameterAttachment *)(this + 0x298),
             *(AudioProcessorParameter **)(*(long *)(param_1 + 0x238) + (long)param_2 * 8),this,0);
  if (juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak == '\0') {
    iVar2 = __cxa_guard_acquire(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    if (iVar2 != 0) {
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._0_4_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._8_8_ = 0;
      juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak._16_8_ = 0;
      __cxa_atexit(juce::SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak,
                   juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    }
  }
                    /* try { // try from 0016aeba to 0016aec8 has its CatchHandler @ 0016b039 */
  juce::SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x300),
             (SpinLock *)juce::SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
  this[0x310] = (AttachedAnimatedButton)0x0;
                    /* try { // try from 0016aed7 to 0016aede has its CatchHandler @ 0016b037 */
  juce::Component::setLookAndFeel((Component *)this,*(long *)(this + 0x300));
                    /* try { // try from 0016aeee to 0016af47 has its CatchHandler @ 0016b043 */
  fVar3 = (float)(**(code **)(**(long **)(*(long *)(param_1 + 0x238) + (long)param_2 * 8) + 0x10))()
  ;
  juce::Button::setToggleState((Button *)this,(Button)(DAT_005d9044 < fVar3),0);
  bVar1 = fVar3 <= DAT_005d9044;
  juce::Timer::stopTimer((Timer *)(this + 0x240));
  *(undefined4 *)(this + 0x274) = *(undefined4 *)(this + (ulong)bVar1 * 8 + 0x288);
  juce::Component::repaint((Component *)this);
  this[0x310] = (AttachedAnimatedButton)(DAT_005d9044 < fVar3);
  uStack_30 = 0;
  uStack_2c = 0;
  local_58 = *(undefined8 *)(this + 0x120);
  uStack_50 = *(undefined8 *)(this + 0x128);
  *(AttachedAnimatedButton **)(this + 0x120) = this;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  local_48 = *(code **)(this + 0x130);
  *(code **)(this + 0x130) =
       std::
       _Function_handler<void(),AttachedAnimatedButton::AttachedAnimatedButton(AudioPluginAudioProcessor&,param::PID,juce::Image_const&,int,juce::Range<int>,juce::Range<int>,int)::{lambda()#1}>
       ::_M_manager;
  local_40 = *(undefined8 *)(this + 0x138);
  *(code **)(this + 0x138) =
       std::
       _Function_handler<void(),AttachedAnimatedButton::AttachedAnimatedButton(AudioPluginAudioProcessor&,param::PID,juce::Image_const&,int,juce::Range<int>,juce::Range<int>,int)::{lambda()#1}>
       ::_M_invoke;
  if (local_48 != (code *)0x0) {
                    /* try { // try from 0016afc0 to 0016afce has its CatchHandler @ 0016b02f */
    local_38 = this;
    (*local_48)(&local_58,&local_58,3);
  }
  return;
}


