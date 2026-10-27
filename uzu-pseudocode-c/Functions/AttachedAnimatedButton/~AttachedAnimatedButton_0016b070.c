// Function : ~AttachedAnimatedButton
// Namespace: AttachedAnimatedButton
// Entry    : 0016b070
// Prototype: undefined ~AttachedAnimatedButton(AttachedAnimatedButton * this)
// Body     : 0016b070 - 0016b146


/* AttachedAnimatedButton::~AttachedAnimatedButton() */

void __thiscall AttachedAnimatedButton::~AttachedAnimatedButton(AttachedAnimatedButton *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  
                    /* try { // try from 0016b077 to 0016b07d has its CatchHandler @ 0016b147 */
  juce::Component::setLookAndFeel((Component *)this,0);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x308);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this_00 + 8) == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this_00 + 8;
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = (int)*(long *)(this_00 + 8);
        *(int *)(this_00 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  juce::ButtonParameterAttachment::~ButtonParameterAttachment
            ((ButtonParameterAttachment *)(this + 0x298));
  *(undefined ***)this = &PTR__AnimatedImageButton_00701798;
  *(undefined ***)(this + 0xf0) = &PTR__AnimatedImageButton_00701980;
  *(undefined ***)(this + 0x240) = &PTR__AnimatedImageButton_007019b0;
  juce::Image::~Image((Image *)(this + 0x268));
  juce::Timer::~Timer((Timer *)(this + 0x240));
  juce::ImageButton::~ImageButton((ImageButton *)this);
  return;
}


