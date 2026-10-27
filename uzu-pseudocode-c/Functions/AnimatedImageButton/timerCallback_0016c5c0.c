// Function : timerCallback
// Namespace: AnimatedImageButton
// Entry    : 0016c5c0
// Prototype: undefined timerCallback(AnimatedImageButton * this)
// Body     : 0016c5c0 - 0016c609


/* non-virtual thunk to AnimatedImageButton::timerCallback() */

void __thiscall AnimatedImageButton::timerCallback(AnimatedImageButton *this)

{
  juce::Component::repaint((Component *)(this + -0x240));
  if (*(int *)(this + 0x34) == *(int *)(this + 0x38)) {
    juce::Timer::stopTimer((Timer *)this);
    return;
  }
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + *(int *)(this + 0x3c);
  return;
}


