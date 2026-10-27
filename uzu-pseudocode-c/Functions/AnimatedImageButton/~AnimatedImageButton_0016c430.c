// Function : ~AnimatedImageButton
// Namespace: AnimatedImageButton
// Entry    : 0016c430
// Prototype: undefined ~AnimatedImageButton(AnimatedImageButton * this)
// Body     : 0016c430 - 0016c48a


/* non-virtual thunk to AnimatedImageButton::~AnimatedImageButton() */

void __thiscall AnimatedImageButton::~AnimatedImageButton(AnimatedImageButton *this)

{
  *(undefined ***)(this + -0xf0) = &PTR__AnimatedImageButton_00701798;
  *(undefined ***)this = &PTR__AnimatedImageButton_00701980;
  *(undefined ***)(this + 0x150) = &PTR__AnimatedImageButton_007019b0;
  juce::Image::~Image((Image *)(this + 0x178));
  juce::Timer::~Timer((Timer *)(this + 0x150));
  juce::ImageButton::~ImageButton((ImageButton *)(this + -0xf0));
  return;
}


