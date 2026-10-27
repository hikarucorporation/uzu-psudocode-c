// Function : positionComboBoxText
// Namespace: juce:LookAndFeel_V2
// Entry    : 002124e0
// Prototype: undefined positionComboBoxText(LookAndFeel_V2 * this, long param_1, Component * param_2)
// Body     : 002124e0 - 002125b0


/* juce::LookAndFeel_V2::positionComboBoxText(juce::ComboBox&, juce::Label&) */

void __thiscall
juce::LookAndFeel_V2::positionComboBoxText(LookAndFeel_V2 *this,long param_1,Component *param_2)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  long *local_20;
  
  Component::setBounds
            (param_2,1,1,(*(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x44)) + 3,
             *(int *)(param_1 + 0x44) + -2);
  (**(code **)(*(long *)this + 0x278))(&local_20,this,param_1);
                    /* try { // try from 00212542 to 00212546 has its CatchHandler @ 002125d3 */
  if ((*(long **)(param_2 + 0x1b0) != local_20) &&
     (uVar3 = FontOptions::operator==((FontOptions *)(*(long **)(param_2 + 0x1b0) + 3),local_20 + 3)
     , (char)uVar3 == '\0')) {
    if (local_20 != (long *)0x0) {
      LOCK();
      *(int *)(local_20 + 1) = (int)local_20[1] + 1;
      UNLOCK();
    }
    plVar2 = *(long **)(param_2 + 0x1b0);
    *(long **)(param_2 + 0x1b0) = local_20;
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar2 + 8))();
      }
    }
                    /* try { // try from 0021257e to 0021258c has its CatchHandler @ 002125b1 */
    Component::internalRepaintUnchecked((long)param_2,0,*(ulong *)(param_2 + 0x40),'\x01');
  }
  if (local_20 != (long *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)(*local_20 + 8))(local_20);
    }
  }
  return;
}


