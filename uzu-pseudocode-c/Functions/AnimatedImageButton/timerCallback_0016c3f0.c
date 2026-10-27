// Function : timerCallback
// Namespace: AnimatedImageButton
// Entry    : 0016c3f0
// Prototype: undefined timerCallback(AnimatedImageButton * this)
// Body     : 0016c3f0 - 0016c424


/* AnimatedImageButton::timerCallback() */

void __thiscall AnimatedImageButton::timerCallback(AnimatedImageButton *this)

{
  juce::Component::repaint((Component *)this);
  if (*(int *)(this + 0x274) == *(int *)(this + 0x278)) {
    juce::Timer::stopTimer((Timer *)(this + 0x240));
    return;
  }
  *(int *)(this + 0x274) = *(int *)(this + 0x274) + *(int *)(this + 0x27c);
  return;
}


