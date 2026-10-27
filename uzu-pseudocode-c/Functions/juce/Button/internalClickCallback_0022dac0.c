// Function : internalClickCallback
// Namespace: juce:Button
// Entry    : 0022dac0
// Prototype: undefined internalClickCallback(Button * this, undefined8 param_1)
// Body     : 0022dac0 - 0022db5b


/* juce::Button::internalClickCallback(juce::ModifierKeys const&) */

void __thiscall juce::Button::internalClickCallback(Button *this,undefined8 param_1)

{
  int iVar1;
  Button BVar2;
  Button BVar3;
  long local_40;
  undefined1 local_38 [8];
  
  if (this[0x1f2] != (Button)0x0) {
    iVar1 = *(int *)(this + 0x1ac);
    BVar3 = this[0x1f1];
                    /* try { // try from 0022dafd to 0022db04 has its CatchHandler @ 0022db6c */
    (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_40);
                    /* try { // try from 0022db0f to 0022db14 has its CatchHandler @ 0022db64 */
    BVar2 = (Button)(**(code **)(local_40 + 0x30))(local_38);
                    /* try { // try from 0022db1c to 0022db21 has its CatchHandler @ 0022db5c */
    (**(code **)(local_40 + 0x58))(local_38);
    BVar3 = (Button)(iVar1 != 0 || BVar3 == (Button)0x0);
    if (BVar3 != BVar2) {
      setToggleState(this,BVar3,1,1);
      return;
    }
  }
  sendClickMessage(this,param_1);
  return;
}


