// Function : setHighlighted
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent
// Entry    : 0027e480
// Prototype: undefined setHighlighted(ItemComponent * this, byte param_1)
// Body     : 0027e480 - 0027e50b


/* juce::PopupMenu::HelperClasses::ItemComponent::setHighlighted(bool) */

void __thiscall
juce::PopupMenu::HelperClasses::ItemComponent::setHighlighted(ItemComponent *this,byte param_1)

{
  long lVar1;
  ItemComponent IVar2;
  AccessibilityHandler *this_00;
  
  IVar2 = (ItemComponent)(this[0x154] != (ItemComponent)0x0 & param_1);
  if (this[0x178] == IVar2) {
    return;
  }
  this[0x178] = IVar2;
  lVar1 = *(long *)(this + 0x170);
  if (lVar1 != 0) {
    *(ItemComponent *)(lVar1 + 0xfc) = IVar2;
    Component::internalRepaintUnchecked(lVar1,0,*(ulong *)(lVar1 + 0x40),'\x01');
    IVar2 = this[0x178];
  }
  if (IVar2 != (ItemComponent)0x0) {
    this_00 = (AccessibilityHandler *)Component::getAccessibilityHandler((Component *)this);
    if ((this_00 != (AccessibilityHandler *)0x0) &&
       ((AccessibilityHandler::currentlyFocusedHandler == (AccessibilityHandler *)0x0 ||
        (AccessibilityHandler::currentlyFocusedHandler != this_00)))) {
      AccessibilityHandler::grabFocusInternal(this_00,'\x01');
    }
  }
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


