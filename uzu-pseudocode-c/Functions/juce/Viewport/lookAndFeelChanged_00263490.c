// Function : lookAndFeelChanged
// Namespace: juce:Viewport
// Entry    : 00263490
// Prototype: undefined lookAndFeelChanged(Viewport * this)
// Body     : 00263490 - 0026351e


/* juce::Viewport::lookAndFeelChanged() */

void __thiscall juce::Viewport::lookAndFeelChanged(Viewport *this)

{
  undefined4 uVar1;
  Viewport *pVVar2;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar3;
  
  if (this[0x22b] != (Viewport)0x0) {
    return;
  }
  pVVar2 = this;
  do {
    if ((*(long *)(pVVar2 + 0x68) != 0) &&
       (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pVVar2 + 0x68) + 0x10),
       pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_00263500;
    pVVar2 = *(Viewport **)(pVVar2 + 0x30);
  } while (pVVar2 != (Viewport *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002634d9 to 002634e2 has its CatchHandler @ 00263532 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002634e6 to 002634ed has its CatchHandler @ 0026351f */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00263500:
  uVar1 = (**(code **)(*(long *)pLVar3 + 0x38))();
  *(undefined4 *)(this + 0x218) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00263519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x140))(this);
  return;
}


