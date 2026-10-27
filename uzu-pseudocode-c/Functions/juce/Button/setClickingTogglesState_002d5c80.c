// Function : setClickingTogglesState
// Namespace: juce:Button
// Entry    : 002d5c80
// Prototype: undefined setClickingTogglesState(Button * this, Button param_2)
// Body     : 002d5c80 - 002d5cc2


/* juce::Button::setClickingTogglesState(bool) */

void __thiscall juce::Button::setClickingTogglesState(Button *this,Button param_2)

{
  Button BVar1;
  long *plVar2;
  
  BVar1 = this[0x1f2];
  this[0x1f2] = param_2;
  if ((bool)(this[0x1f0] != (Button)0x0 | (byte)param_2) !=
      (this[0x1f0] != (Button)0x0 || BVar1 != (Button)0x0)) {
    plVar2 = *(long **)(this + 0xe0);
    *(undefined8 *)(this + 0xe0) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002d5cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


