// Function : AnimatedImageButton
// Namespace: AnimatedImageButton
// Entry    : 0016c0a0
// Prototype: undefined AnimatedImageButton(AnimatedImageButton * this, long * param_1, undefined4 param_2, undefined8 param_3, undefined8 param_4, undefined4 param_5)
// Body     : 0016c0a0 - 0016c17d


/* AnimatedImageButton::AnimatedImageButton(juce::Image const&, int, juce::Range<int>,
   juce::Range<int>, int) */

void __thiscall
AnimatedImageButton::AnimatedImageButton
          (AnimatedImageButton *this,long *param_1,undefined4 param_2,undefined8 param_3,
          undefined8 param_4,undefined4 param_5)

{
  String local_40 [8];
  undefined8 local_38;
  
  local_38 = param_4;
  juce::String::String(local_40,(byte *)"AnimatedImageButton");
                    /* try { // try from 0016c0d6 to 0016c0e0 has its CatchHandler @ 0016c17e */
  juce::ImageButton::ImageButton((ImageButton *)this,(long *)local_40);
  juce::String::~String(local_40);
  juce::Timer::Timer((Timer *)(this + 0x240));
  *(undefined ***)this = &PTR__AnimatedImageButton_00701798;
  *(undefined ***)(this + 0xf0) = &PTR__AnimatedImageButton_00701980;
  *(undefined ***)(this + 0x240) = &PTR__AnimatedImageButton_007019b0;
  juce::Image::Image((Image *)(this + 0x268),param_1);
  *(undefined4 *)(this + 0x270) = param_2;
  *(undefined8 *)(this + 0x274) = 0;
  *(undefined4 *)(this + 0x27c) = 1;
  *(undefined4 *)(this + 0x280) = param_5;
  *(undefined8 *)(this + 0x284) = param_3;
  *(undefined8 *)(this + 0x28c) = local_38;
  juce::Button::setClickingTogglesState((Button *)this,(Button)0x1);
  return;
}


