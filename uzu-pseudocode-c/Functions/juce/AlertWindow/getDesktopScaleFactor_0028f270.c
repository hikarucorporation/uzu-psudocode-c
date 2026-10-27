// Function : getDesktopScaleFactor
// Namespace: juce:AlertWindow
// Entry    : 0028f270
// Prototype: float getDesktopScaleFactor(AlertWindow * this)
// Body     : 0028f270 - 0028f2bf


/* juce::AlertWindow::getDesktopScaleFactor() const */

float __thiscall juce::AlertWindow::getDesktopScaleFactor(AlertWindow *this)

{
  float fVar1;
  Desktop *this_00;
  
  fVar1 = *(float *)(this + 0x42c);
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028f29b to 0028f2a2 has its CatchHandler @ 0028f2c0 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  return fVar1 * *(float *)(Desktop::instance + 0x130);
}


