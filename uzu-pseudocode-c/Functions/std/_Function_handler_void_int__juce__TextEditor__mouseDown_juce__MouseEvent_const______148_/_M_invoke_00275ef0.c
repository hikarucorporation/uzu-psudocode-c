// Function : _M_invoke
// Namespace: std:_Function_handler_void_int__juce__TextEditor__mouseDown_juce__MouseEvent_const______148_
// Entry    : 00275ef0
// Prototype: undefined _M_invoke(undefined8 * param_1, int * param_2)
// Body     : 00275ef0 - 00275f3f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (int), juce::TextEditor::mouseDown(juce::MouseEvent
   const&)::$_148>::_M_invoke(std::_Any_data const&, int&&) */

void __cdecl
std::_Function_handler<void(int),juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148>::
_M_invoke(undefined8 *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  if ((*(long *)*param_1 != 0) && (lVar2 = *(long *)(*(long *)*param_1 + 0x10), lVar2 != 0)) {
    iVar1 = *param_2;
    auVar4 = __dynamic_cast(lVar2,&juce::Component::typeinfo,&juce::TextEditor::typeinfo,8);
    plVar3 = auVar4._0_8_;
    if ((plVar3 != (long *)0x0) && (*(undefined1 *)((long)plVar3 + 0x1d3) = 0, iVar1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00275f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x78))(plVar3,iVar1,auVar4._8_8_,*(code **)(*plVar3 + 0x78));
      return;
    }
  }
  return;
}


