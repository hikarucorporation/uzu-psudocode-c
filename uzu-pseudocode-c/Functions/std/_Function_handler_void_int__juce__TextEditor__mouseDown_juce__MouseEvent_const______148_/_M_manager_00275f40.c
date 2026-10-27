// Function : _M_manager
// Namespace: std:_Function_handler_void_int__juce__TextEditor__mouseDown_juce__MouseEvent_const______148_
// Entry    : 00275f40
// Prototype: undefined8 _M_manager(undefined8 * param_1, undefined8 * param_2, undefined4 param_3)
// Body     : 00275f40 - 00275fc3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (int), juce::TextEditor::mouseDown(juce::MouseEvent
   const&)::$_148>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation) */

undefined8 __cdecl
std::_Function_handler<void(int),juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148>::
_M_manager(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  switch(param_3) {
  case 0:
    *param_1 = &juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148::typeinfo;
    break;
  case 1:
    *param_1 = *param_2;
    break;
  case 2:
    lVar2 = *(long *)*param_2;
    plVar4 = operator_new(8);
    *plVar4 = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *param_1 = plVar4;
    break;
  case 3:
    plVar4 = (long *)*param_1;
    if (plVar4 != (long *)0x0) {
      plVar3 = (long *)*plVar4;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      operator_delete(plVar4);
    }
  }
  return 0;
}


