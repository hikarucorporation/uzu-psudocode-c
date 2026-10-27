// Function : getCurrentValue
// Namespace: juce:SliderAccessibilityHandler:ValueInterface
// Entry    : 002e5210
// Prototype: undefined8 getCurrentValue(ValueInterface * this)
// Body     : 002e5210 - 002e526f


/* juce::SliderAccessibilityHandler::ValueInterface::getCurrentValue() const */

undefined8 __thiscall
juce::SliderAccessibilityHandler::ValueInterface::getCurrentValue(ValueInterface *this)

{
  undefined8 uVar1;
  long local_18;
  undefined1 local_10 [8];
  
  if (this[0x10] == (ValueInterface)0x0) {
    (**(code **)(**(long **)(*(long *)(*(long *)(this + 8) + 0x1a0) + 0x50) + 0x10))(&local_18);
                    /* try { // try from 002e524d to 002e5258 has its CatchHandler @ 002e5278 */
    uVar1 = (**(code **)(local_18 + 0x20))(local_10);
                    /* try { // try from 002e525e to 002e5263 has its CatchHandler @ 002e5270 */
    (**(code **)(local_18 + 0x58))(local_10);
    return uVar1;
  }
  return *(undefined8 *)(*(long *)(*(long *)(this + 8) + 0x1a0) + 0x100);
}


