// Function : paint
// Namespace: juce:Label
// Entry    : 002355f0
// Prototype: undefined paint(Label * this, undefined8 param_1)
// Body     : 002355f0 - 00235668


/* juce::Label::paint(juce::Graphics&) */

void __thiscall juce::Label::paint(Label *this,undefined8 param_1)

{
  Label *pLVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  
  pLVar1 = this;
  do {
    if ((*(long *)(pLVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pLVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_00235650;
    pLVar1 = *(Label **)(pLVar1 + 0x30);
  } while (pLVar1 != (Label *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00235629 to 00235632 has its CatchHandler @ 0023567c */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00235636 to 0023563d has its CatchHandler @ 00235669 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00235650:
                    /* WARNING: Could not recover jumptable at 0x00235667. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar2 + 0x50) + 0x10))(pLVar2 + 0x50,param_1,this);
  return;
}


