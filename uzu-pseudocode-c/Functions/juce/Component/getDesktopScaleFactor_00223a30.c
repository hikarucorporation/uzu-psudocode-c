// Function : getDesktopScaleFactor
// Namespace: juce:Component
// Entry    : 00223a30
// Prototype: undefined4 getDesktopScaleFactor(void)
// Body     : 00223a30 - 00223a6b


/* juce::Component::getDesktopScaleFactor() const */

undefined4 juce::Component::getDesktopScaleFactor(void)

{
  Desktop *this;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this = operator_new(0x1d0);
                    /* try { // try from 00223a4d to 00223a54 has its CatchHandler @ 00223a6c */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  return *(undefined4 *)(Desktop::instance + 0x130);
}


