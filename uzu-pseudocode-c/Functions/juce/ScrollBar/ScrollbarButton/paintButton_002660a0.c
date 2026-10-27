// Function : paintButton
// Namespace: juce:ScrollBar:ScrollbarButton
// Entry    : 002660a0
// Prototype: undefined paintButton(ScrollbarButton * this, undefined8 param_1, undefined1 param_2, undefined1 param_3)
// Body     : 002660a0 - 00266151


/* juce::ScrollBar::ScrollbarButton::paintButton(juce::Graphics&, bool, bool) */

void __thiscall
juce::ScrollBar::ScrollbarButton::paintButton
          (ScrollbarButton *this,undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  ScrollbarButton *pSVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  
  pSVar1 = this;
  do {
    if ((*(long *)(pSVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pSVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_00266110;
    pSVar1 = *(ScrollbarButton **)(pSVar1 + 0x30);
  } while (pSVar1 != (ScrollbarButton *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002660e9 to 002660f2 has its CatchHandler @ 00266165 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002660f6 to 002660fd has its CatchHandler @ 00266152 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00266110:
  (**(code **)(*(long *)pLVar2 + 0x18))
            (pLVar2,param_1,*(long *)(this + 0x200),*(undefined4 *)(this + 0x40),
             *(undefined4 *)(this + 0x44),*(undefined4 *)(this + 0x1f8),
             *(undefined1 *)(*(long *)(this + 0x200) + 0x17c),param_2,param_3);
  return;
}


