// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__JuceVST3EditController__EditorContextMenu__getEquivalentPop~aa35c9b1
// Entry    : 001b81d0
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 001b81d0 - 001b8233


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void __cdecl
std::
_Function_handler<void(),juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::{lambda()#1}>
::_M_invoke(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long *local_120;
  undefined1 local_118 [256];
  undefined4 local_18;
  
  puVar1 = (undefined8 *)*param_1;
  memset(local_118,0,0x108);
  local_120 = (long *)0x0;
  plVar2 = (long *)*puVar1;
  iVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,*(undefined4 *)(puVar1 + 1),local_118,&local_120);
  if ((iVar3 == 0) && (local_120 != (long *)0x0)) {
    (**(code **)(*local_120 + 0x18))(local_120,local_18);
  }
  return;
}


