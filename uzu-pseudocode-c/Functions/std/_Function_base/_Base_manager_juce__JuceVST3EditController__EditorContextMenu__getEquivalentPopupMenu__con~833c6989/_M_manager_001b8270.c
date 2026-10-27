// Function : _M_manager
// Namespace: std:_Function_base:_Base_manager_juce__JuceVST3EditController__EditorContextMenu__getEquivalentPopupMenu__con~833c6989
// Entry    : 001b8270
// Prototype: undefined8 _M_manager(long * param_1, long * param_2, undefined4 param_3)
// Body     : 001b8270 - 001b82f6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_base::_Base_manager<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::{lambda()#1}>::_M_manager(std::_Any_data&, std::_Any_data const&, std::_Manager_operation)
    */

undefined8 __cdecl
std::_Function_base::
_Base_manager<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::{lambda()#1}>
::_M_manager(long *param_1,long *param_2,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  switch(param_3) {
  case 0:
    *param_1 = (long)&const::{lambda()#1}::typeinfo;
    break;
  case 1:
    *param_1 = *param_2;
    break;
  case 2:
    plVar2 = (long *)*param_2;
    plVar3 = operator_new(0x10);
    plVar1 = (long *)*plVar2;
    *plVar3 = (long)plVar1;
    if (plVar1 != (long *)0x0) {
                    /* try { // try from 001b82c1 to 001b82c3 has its CatchHandler @ 001b82ff */
      (**(code **)(*plVar1 + 8))();
    }
    *(int *)(plVar3 + 1) = (int)plVar2[1];
    *param_1 = (long)plVar3;
    break;
  case 3:
    plVar2 = (long *)*param_1;
    if (plVar2 != (long *)0x0) {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 001b82e4 to 001b82e6 has its CatchHandler @ 001b82f7 */
        (**(code **)(*(long *)*plVar2 + 0x10))();
      }
      operator_delete(plVar2);
    }
  }
  return 0;
}


