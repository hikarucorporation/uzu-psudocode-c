// Function : lookAndFeelChanged
// Namespace: juce:BubbleComponent
// Entry    : 002d8b30
// Prototype: undefined lookAndFeelChanged(BubbleComponent * this)
// Body     : 002d8b30 - 002d8ba7


/* juce::BubbleComponent::lookAndFeelChanged() */

void __thiscall juce::BubbleComponent::lookAndFeelChanged(BubbleComponent *this)

{
  BubbleComponent *pBVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  
  pBVar1 = this;
  do {
    if ((*(long *)(pBVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pBVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_002d8b90;
    pBVar1 = *(BubbleComponent **)(pBVar1 + 0x30);
  } while (pBVar1 != (BubbleComponent *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d8b69 to 002d8b72 has its CatchHandler @ 002d8bbb */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002d8b76 to 002d8b7d has its CatchHandler @ 002d8ba8 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002d8b90:
                    /* WARNING: Could not recover jumptable at 0x002d8ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar2 + 0x30) + 0x18))(pLVar2 + 0x30,this);
  return;
}


