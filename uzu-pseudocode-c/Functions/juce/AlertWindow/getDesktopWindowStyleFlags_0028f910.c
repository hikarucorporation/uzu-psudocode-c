// Function : getDesktopWindowStyleFlags
// Namespace: juce:AlertWindow
// Entry    : 0028f910
// Prototype: undefined getDesktopWindowStyleFlags(AlertWindow * this)
// Body     : 0028f910 - 0028f981


/* juce::AlertWindow::getDesktopWindowStyleFlags() const */

void __thiscall juce::AlertWindow::getDesktopWindowStyleFlags(AlertWindow *this)

{
  Desktop *this_00;
  LookAndFeel_V4 *pLVar1;
  
  do {
    if ((*(long *)(this + 0x68) != 0) &&
       (pLVar1 = *(LookAndFeel_V4 **)(*(long *)(this + 0x68) + 0x10),
       pLVar1 != (LookAndFeel_V4 *)0x0)) goto LAB_0028f96d;
    this = *(AlertWindow **)(this + 0x30);
  } while (this != (AlertWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028f949 to 0028f952 has its CatchHandler @ 0028f995 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028f956 to 0028f95d has its CatchHandler @ 0028f982 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar1 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0028f96d:
                    /* WARNING: Could not recover jumptable at 0x0028f97f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar1 + 0x38) + 0x20))(pLVar1 + 0x38);
  return;
}


