// Function : getDesktopScaleFactor
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280020
// Prototype: float getDesktopScaleFactor(MenuWindow * this)
// Body     : 00280020 - 0028006f


/* juce::PopupMenu::HelperClasses::MenuWindow::getDesktopScaleFactor() const */

float __thiscall juce::PopupMenu::HelperClasses::MenuWindow::getDesktopScaleFactor(MenuWindow *this)

{
  float fVar1;
  Desktop *this_00;
  
  fVar1 = *(float *)(this + 0x1c8);
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028004b to 00280052 has its CatchHandler @ 00280070 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  return fVar1 * *(float *)(Desktop::instance + 0x130);
}


