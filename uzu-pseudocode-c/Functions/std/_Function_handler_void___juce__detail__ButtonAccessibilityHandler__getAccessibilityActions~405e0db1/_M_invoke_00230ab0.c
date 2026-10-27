// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__detail__ButtonAccessibilityHandler__getAccessibilityActions~405e0db1
// Entry    : 00230ab0
// Prototype: undefined _M_invoke(undefined8 * param_1)
// Body     : 00230ab0 - 00230b08


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::detail::ButtonAccessibilityHandler::getAccessibilityActions(juce::Button&)::{lambda()#2}>::_M_invoke(std::_Any_data
   const&) */

void __cdecl
std::
_Function_handler<void(),juce::detail::ButtonAccessibilityHandler::getAccessibilityActions(juce::Button&)::{lambda()#2}>
::_M_invoke(undefined8 *param_1)

{
  Button *this;
  byte bVar1;
  long local_28;
  undefined1 local_20 [8];
  
  this = (Button *)*param_1;
                    /* try { // try from 00230ac6 to 00230acb has its CatchHandler @ 00230b19 */
  (**(code **)(**(long **)(this + 0x1c0) + 0x10))(&local_28);
                    /* try { // try from 00230ad5 to 00230ada has its CatchHandler @ 00230b11 */
  bVar1 = (**(code **)(local_28 + 0x30))(local_20);
                    /* try { // try from 00230ae1 to 00230ae6 has its CatchHandler @ 00230b09 */
  (**(code **)(local_28 + 0x58))(local_20);
  juce::Button::setToggleState(this,(Button)(bVar1 ^ 1),1,1);
  return;
}


