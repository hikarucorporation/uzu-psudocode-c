// Function : ~AnimatedImageButton
// Namespace: AnimatedImageButton
// Entry    : 0016c1a0
// Prototype: undefined ~AnimatedImageButton(AnimatedImageButton * this)
// Body     : 0016c1a0 - 0016c1f6


/* AnimatedImageButton::~AnimatedImageButton() */

void __thiscall AnimatedImageButton::~AnimatedImageButton(AnimatedImageButton *this)

{
  *(undefined ***)this = &PTR__AnimatedImageButton_00701798;
  *(undefined ***)(this + 0xf0) = &PTR__AnimatedImageButton_00701980;
  *(undefined ***)(this + 0x240) = &PTR__AnimatedImageButton_007019b0;
  juce::Image::~Image((Image *)(this + 0x268));
  juce::Timer::~Timer((Timer *)(this + 0x240));
  juce::ImageButton::~ImageButton((ImageButton *)this);
  return;
}


