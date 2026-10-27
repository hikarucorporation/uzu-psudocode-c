// Function : resized
// Namespace: juce:ComboBox
// Entry    : 002dbce0
// Prototype: undefined resized(ComboBox * this)
// Body     : 002dbce0 - 002dbd76


/* juce::ComboBox::resized() */

void __thiscall juce::ComboBox::resized(ComboBox *this)

{
  ComboBox *pCVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  
  if ((*(int *)(this + 0x44) < 1) || (*(int *)(this + 0x40) < 1)) {
    return;
  }
  pCVar1 = this;
  do {
    if ((*(long *)(pCVar1 + 0x68) != 0) &&
       (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pCVar1 + 0x68) + 0x10),
       pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_002dbd58;
    pCVar1 = *(ComboBox **)(pCVar1 + 0x30);
  } while (pCVar1 != (ComboBox *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002dbd31 to 002dbd3a has its CatchHandler @ 002dbd8a */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002dbd3e to 002dbd45 has its CatchHandler @ 002dbd77 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002dbd58:
                    /* WARNING: Could not recover jumptable at 0x002dbd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(pLVar2 + 0x48) + 0x28))(pLVar2 + 0x48,this,*(undefined8 *)(this + 0x1b8));
  return;
}


