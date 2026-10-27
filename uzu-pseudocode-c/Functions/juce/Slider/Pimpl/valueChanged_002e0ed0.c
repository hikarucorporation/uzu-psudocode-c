// Function : valueChanged
// Namespace: juce:Slider:Pimpl
// Entry    : 002e0ed0
// Prototype: undefined valueChanged(Pimpl * this, long * param_1)
// Body     : 002e0ed0 - 002e0fad


/* juce::Slider::Pimpl::valueChanged(juce::Value&) */

void __thiscall juce::Slider::Pimpl::valueChanged(Pimpl *this,long *param_1)

{
  long *plVar1;
  double dVar2;
  long local_20;
  undefined1 local_18 [8];
  
  plVar1 = (long *)*param_1;
  if (plVar1 == *(long **)(this + 0x50)) {
    if (1 < *(int *)(this + 0x20) - 9U) {
      (**(code **)(*plVar1 + 0x10))(&local_20);
                    /* try { // try from 002e0f54 to 002e0f59 has its CatchHandler @ 002e0ff6 */
      dVar2 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 002e0f5a to 002e0f63 has its CatchHandler @ 002e0fde */
      setValue(dVar2,this,0);
                    /* try { // try from 002e0f69 to 002e0f6e has its CatchHandler @ 002e0fd6 */
      (**(code **)(local_20 + 0x58))(local_18);
    }
  }
  else if (plVar1 == *(long **)(this + 0x80)) {
    (**(code **)(*plVar1 + 0x10))(&local_20);
                    /* try { // try from 002e0f86 to 002e0f8b has its CatchHandler @ 002e1024 */
    dVar2 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 002e0f8c to 002e0f9a has its CatchHandler @ 002e1006 */
    setMinValue(dVar2,this,0,'\x01');
                    /* try { // try from 002e0fa0 to 002e0fa5 has its CatchHandler @ 002e0ffe */
    (**(code **)(local_20 + 0x58))(local_18);
  }
  else if (plVar1 == *(long **)(this + 0xb0)) {
    (**(code **)(*plVar1 + 0x10))(&local_20);
                    /* try { // try from 002e0f12 to 002e0f17 has its CatchHandler @ 002e0fce */
    dVar2 = (double)(**(code **)(local_20 + 0x20))(local_18);
                    /* try { // try from 002e0f18 to 002e0f26 has its CatchHandler @ 002e0fb6 */
    setMaxValue(dVar2,this,0,'\x01');
                    /* try { // try from 002e0f2c to 002e0f31 has its CatchHandler @ 002e0fae */
    (**(code **)(local_20 + 0x58))(local_18);
  }
  return;
}


