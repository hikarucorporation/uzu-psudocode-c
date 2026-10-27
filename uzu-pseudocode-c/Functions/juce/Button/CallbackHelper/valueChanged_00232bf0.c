// Function : valueChanged
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232bf0
// Prototype: undefined valueChanged(CallbackHelper * this, long * param_1)
// Body     : 00232bf0 - 00232c46


/* juce::Button::CallbackHelper::valueChanged(juce::Value&) */

void __thiscall juce::Button::CallbackHelper::valueChanged(CallbackHelper *this,long *param_1)

{
  Button *this_00;
  Button BVar1;
  long local_20;
  undefined1 local_18 [8];
  
  this_00 = *(Button **)(this + 0x40);
  if ((long *)*param_1 == *(long **)(this_00 + 0x1c0)) {
    (**(code **)(*(long *)*param_1 + 0x10))(&local_20);
                    /* try { // try from 00232c1c to 00232c21 has its CatchHandler @ 00232c6d */
    BVar1 = (Button)(**(code **)(local_20 + 0x30))(local_18);
                    /* try { // try from 00232c22 to 00232c33 has its CatchHandler @ 00232c4f */
    setToggleState(this_00,BVar1,0,1);
                    /* try { // try from 00232c39 to 00232c3e has its CatchHandler @ 00232c47 */
    (**(code **)(local_20 + 0x58))(local_18);
  }
  return;
}


