// Function : comboBoxPopupMenuFinishedCallback
// Namespace: juce
// Entry    : 002dd300
// Prototype: undefined comboBoxPopupMenuFinishedCallback(int param_1, ComboBox * param_2)
// Body     : 002dd300 - 002dd37f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::comboBoxPopupMenuFinishedCallback(int, juce::ComboBox*) */

void __cdecl juce::comboBoxPopupMenuFinishedCallback(int param_1,ComboBox *param_2)

{
  AccessibilityHandler *this;
  
  if (param_2 != (ComboBox *)0x0) {
    if (param_2[0x185] != (ComboBox)0x0) {
      param_2[0x185] = (ComboBox)0x0;
      PopupMenu::dismissAllActiveMenus();
      Component::internalRepaintUnchecked((long)param_2,0,*(ulong *)(param_2 + 0x40),'\x01');
    }
    if (param_1 != 0) {
      ComboBox::setSelectedId(param_2,param_1,3);
    }
    this = (AccessibilityHandler *)Component::getAccessibilityHandler((Component *)param_2);
    if ((this != (AccessibilityHandler *)0x0) &&
       ((AccessibilityHandler::currentlyFocusedHandler == (AccessibilityHandler *)0x0 ||
        (AccessibilityHandler::currentlyFocusedHandler != this)))) {
      AccessibilityHandler::grabFocusInternal(this,'\x01');
      return;
    }
  }
  return;
}


