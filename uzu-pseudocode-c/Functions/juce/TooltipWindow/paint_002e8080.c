// Function : paint
// Namespace: juce:TooltipWindow
// Entry    : 002e8080
// Prototype: undefined paint(TooltipWindow * this, undefined8 param_1)
// Body     : 002e8080 - 002e8103


/* juce::TooltipWindow::paint(juce::Graphics&) */

void __thiscall juce::TooltipWindow::paint(TooltipWindow *this,undefined8 param_1)

{
  TooltipWindow *pTVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  
  pTVar1 = this;
  do {
    if ((*(long *)(pTVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pTVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_002e80e0;
    pTVar1 = *(TooltipWindow **)(pTVar1 + 0x30);
  } while (pTVar1 != (TooltipWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e80b9 to 002e80c2 has its CatchHandler @ 002e8117 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002e80c6 to 002e80cd has its CatchHandler @ 002e8104 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002e80e0:
                    /* WARNING: Could not recover jumptable at 0x002e8102. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar2 + 0x70) + 0x18))
            (pLVar2 + 0x70,param_1,this + 0x128,*(undefined4 *)(this + 0x40),
             *(undefined4 *)(this + 0x44));
  return;
}


