// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__AlertWindow__addButton_juce__String_const__int_juce__KeyPre~cd0c1ff0
// Entry    : 00288690
// Prototype: undefined _M_invoke(long param_1)
// Body     : 00288690 - 002886a8


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (), juce::AlertWindow::addButton(juce::String const&, int,
   juce::KeyPress const&, juce::KeyPress const&)::$_156>::_M_invoke(std::_Any_data const&) */

void __cdecl
std::
_Function_handler<void(),juce::AlertWindow::addButton(juce::String_const&,int,juce::KeyPress_const&,juce::KeyPress_const&)::$_156>
::_M_invoke(long param_1)

{
  Component *this;
  
  this = *(Component **)(*(long *)(param_1 + 8) + 0x30);
  if (this == (Component *)0x0) {
    return;
  }
  juce::Component::exitModalState(this,*(undefined4 *)(*(long *)(param_1 + 8) + 0x1b4));
  return;
}


