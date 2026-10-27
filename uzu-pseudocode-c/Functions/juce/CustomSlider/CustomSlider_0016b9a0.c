// Function : CustomSlider
// Namespace: juce:CustomSlider
// Entry    : 0016b9a0
// Prototype: undefined CustomSlider(undefined8 param_1, undefined8 param_2, undefined8 param_3, CustomSlider * this)
// Body     : 0016b9a0 - 0016baf8


/* juce::CustomSlider::CustomSlider() */

void __thiscall
juce::CustomSlider::CustomSlider
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,CustomSlider *this)

{
  int iVar1;
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  
  Slider::Slider(param_1,param_2,param_3,(Slider *)this);
  *(undefined ***)this = &PTR__CustomSlider_00701300;
  *(undefined ***)(this + 0xf0) = &PTR__CustomSlider_007014e8;
  if (SharedResourcePointer<juce::CRQLLNF>::weak()::weak == '\0') {
    iVar1 = __cxa_guard_acquire(&SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    if (iVar1 != 0) {
      SharedResourcePointer<juce::CRQLLNF>::weak()::weak._0_4_ = 0;
      SharedResourcePointer<juce::CRQLLNF>::weak()::weak._8_8_ = 0;
      SharedResourcePointer<juce::CRQLLNF>::weak()::weak._16_8_ = 0;
      __cxa_atexit(SharedResourcePointer<juce::CRQLLNF>::Weak::~Weak,
                   SharedResourcePointer<juce::CRQLLNF>::weak()::weak,&__dso_handle);
      __cxa_guard_release(&SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
    }
  }
                    /* try { // try from 0016b9de to 0016b9ec has its CatchHandler @ 0016baf9 */
  SharedResourcePointer<juce::CRQLLNF>::Weak::lockOrCreate
            ((long *)(this + 0x1a8),(SpinLock *)SharedResourcePointer<juce::CRQLLNF>::weak()::weak);
                    /* try { // try from 0016b9ed to 0016ba9b has its CatchHandler @ 0016bafe */
  Slider::setSliderStyle((Slider *)this,0);
  Slider::setRange(0,DAT_005d90a0,0,(Slider *)this);
  Slider::setValue(DAT_005d90c0,(long)this,3);
  Slider::setTextBoxStyle((Slider *)this,0,1,100,0x19);
  Colour::Colour((Colour *)local_20,(Colour)0x64,(Colour)0xc8,(Colour)0xff);
  Component::setColour((Component *)this,0x30100301,local_20[0]);
  Colour::Colour((Colour *)local_28,(Colour)0xf,(Colour)0xf,(Colour)0xf);
  Component::setColour((Component *)this,0x30100303,local_28[0]);
  Component::setLookAndFeel((Component *)this,*(long *)(this + 0x1a8));
  return;
}


