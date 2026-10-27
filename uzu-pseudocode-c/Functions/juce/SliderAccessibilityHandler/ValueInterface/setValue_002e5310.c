// Function : setValue
// Namespace: juce:SliderAccessibilityHandler:ValueInterface
// Entry    : 002e5310
// Prototype: undefined setValue(double param_1, ValueInterface * this)
// Body     : 002e5310 - 002e5377


/* juce::SliderAccessibilityHandler::ValueInterface::setValue(double) */

void __thiscall
juce::SliderAccessibilityHandler::ValueInterface::setValue(double param_1,ValueInterface *this)

{
  long lVar1;
  Pimpl *this_00;
  
  lVar1 = *(long *)(this + 8);
  Slider::Pimpl::sendDragStart(*(Pimpl **)(lVar1 + 0x1a0));
  if (this[0x10] == (ValueInterface)0x0) {
    Slider::Pimpl::setValue(param_1,*(Pimpl **)(*(long *)(this + 8) + 0x1a0),2);
  }
  else {
                    /* try { // try from 002e533d to 002e535e has its CatchHandler @ 002e5380 */
    Slider::Pimpl::setMaxValue(param_1,*(Pimpl **)(*(long *)(this + 8) + 0x1a0),2,'\0');
  }
  this_00 = *(Pimpl **)(lVar1 + 0x1a0);
  if (this_00 != (Pimpl *)0x0) {
                    /* try { // try from 002e536b to 002e536f has its CatchHandler @ 002e5378 */
    Slider::Pimpl::sendDragEnd(this_00);
  }
  return;
}


