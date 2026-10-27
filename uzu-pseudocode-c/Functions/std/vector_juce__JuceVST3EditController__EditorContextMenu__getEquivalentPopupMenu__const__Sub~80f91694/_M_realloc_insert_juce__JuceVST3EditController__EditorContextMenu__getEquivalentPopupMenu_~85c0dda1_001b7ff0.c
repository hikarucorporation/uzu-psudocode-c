// Function : _M_realloc_insert<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>
// Namespace: std:vector_juce__JuceVST3EditController__EditorContextMenu__getEquivalentPopupMenu__const__Sub~80f91694
// Entry    : 001b7ff0
// Prototype: void _M_realloc_insert<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>(vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>> * this, PopupMenu * param_1, undefined8 * param_2)
// Body     : 001b7ff0 - 001b81c3


/* void std::vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu,
   std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu>
   >::_M_realloc_insert<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu>(__gnu_cxx::__normal_iterator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu*,
   std::vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu,
   std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu> > >, juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu&&) */

void __thiscall
std::
vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>
::
_M_realloc_insert<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>
          (vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>
           *this,PopupMenu *param_1,undefined8 *param_2)

{
  PopupMenu *pPVar1;
  PopupMenu *pPVar2;
  long lVar3;
  ulong uVar4;
  PopupMenu *pPVar5;
  ulong uVar6;
  ulong uVar7;
  PopupMenu *this_00;
  PopupMenu *this_01;
  
  pPVar1 = *(PopupMenu **)this;
  pPVar2 = *(PopupMenu **)(this + 8);
  lVar3 = (long)pPVar2 - (long)pPVar1;
  if (lVar3 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar6 = (lVar3 >> 3) * -0x3333333333333333;
  uVar4 = 1;
  if (lVar3 != 0) {
    uVar4 = uVar6;
  }
  uVar7 = uVar4 + uVar6;
  if (0x333333333333333 < uVar7) {
    uVar7 = 0x333333333333333;
  }
  if (CARRY8(uVar4,uVar6)) {
    uVar7 = 0x333333333333333;
  }
  lVar3 = (long)param_1 - (long)pPVar1 >> 3;
  if (uVar7 == 0) {
    pPVar5 = (PopupMenu *)0x0;
  }
  else {
    pPVar5 = operator_new(uVar7 * 0x28);
  }
  juce::PopupMenu::PopupMenu(pPVar5 + lVar3 * 8,param_2);
  juce::String::String((String *)(pPVar5 + lVar3 * 8 + 0x18),param_2 + 3);
  pPVar5[lVar3 * 8 + 0x20] = *(PopupMenu *)(param_2 + 4);
  this_00 = pPVar5;
  if (pPVar1 != param_1) {
    this_01 = pPVar1;
    do {
      juce::PopupMenu::PopupMenu(this_00,(undefined8 *)this_01);
      juce::String::String((String *)(this_00 + 0x18),(undefined8 *)(this_01 + 0x18));
      this_00[0x20] = this_01[0x20];
      juce::String::~String((String *)(this_01 + 0x18));
      juce::PopupMenu::~PopupMenu(this_01);
      this_00 = this_00 + 0x28;
      this_01 = this_01 + 0x28;
    } while (this_01 != param_1);
  }
  for (; this_00 = this_00 + 0x28, pPVar2 != param_1; param_1 = param_1 + 0x28) {
    juce::PopupMenu::PopupMenu(this_00,(undefined8 *)param_1);
    juce::String::String((String *)(this_00 + 0x18),(undefined8 *)(param_1 + 0x18));
    this_00[0x20] = param_1[0x20];
    juce::String::~String((String *)(param_1 + 0x18));
    juce::PopupMenu::~PopupMenu(param_1);
  }
  if (pPVar1 != (PopupMenu *)0x0) {
    operator_delete(pPVar1);
  }
  *(PopupMenu **)this = pPVar5;
  *(PopupMenu **)(this + 8) = this_00;
  *(PopupMenu **)(this + 0x10) = pPVar5 + uVar7 * 0x28;
  return;
}


