// Function : valueChanged
// Namespace: juce:Button:CallbackHelper
// Entry    : 00232e70
// Prototype: undefined valueChanged(CallbackHelper * this, long * param_1)
// Body     : 00232e70 - 00232ec6


/* non-virtual thunk to juce::Button::CallbackHelper::valueChanged(juce::Value&) */

void __thiscall juce::Button::CallbackHelper::valueChanged(CallbackHelper *this,long *param_1)

{
  Button *this_00;
  Button BVar1;
  long local_20;
  undefined1 local_18 [8];
  
  this_00 = *(Button **)(this + 0x10);
  if ((long *)*param_1 == *(long **)(this_00 + 0x1c0)) {
    (**(code **)(*(long *)*param_1 + 0x10))(&local_20);
                    /* try { // try from 00232e9c to 00232ea1 has its CatchHandler @ 00232eed */
    BVar1 = (Button)(**(code **)(local_20 + 0x30))(local_18);
                    /* try { // try from 00232ea2 to 00232eb3 has its CatchHandler @ 00232ecf */
    setToggleState(this_00,BVar1,0,1);
                    /* try { // try from 00232eb9 to 00232ebe has its CatchHandler @ 00232ec7 */
    (**(code **)(local_20 + 0x58))(local_18);
  }
  return;
}


