// Function : ~vector
// Namespace: std:vector_juce__JuceVST3EditController__EditorContextMenu__getEquivalentPopupMenu__const__Sub~80f91694
// Entry    : 001b7f90
// Prototype: undefined ~vector(vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>> * this)
// Body     : 001b7f90 - 001b7fe4


/* std::vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu,
   std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()
   const::Submenu> >::~vector() */

void __thiscall
std::
vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>
::~vector(vector<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu,std::allocator<juce::JuceVST3EditController::EditorContextMenu::getEquivalentPopupMenu()const::Submenu>>
          *this)

{
  PopupMenu *pPVar1;
  PopupMenu *this_00;
  
  this_00 = *(PopupMenu **)this;
  pPVar1 = *(PopupMenu **)(this + 8);
  if (this_00 != pPVar1) {
    do {
      juce::String::~String((String *)(this_00 + 0x18));
      juce::PopupMenu::~PopupMenu(this_00);
      this_00 = this_00 + 0x28;
    } while (this_00 != pPVar1);
    this_00 = *(PopupMenu **)this;
  }
  if (this_00 == (PopupMenu *)0x0) {
    return;
  }
  operator_delete(this_00);
  return;
}


