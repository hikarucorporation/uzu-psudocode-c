// Function : visibilityChanged
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027ffa0
// Prototype: undefined visibilityChanged(MenuWindow * this)
// Body     : 0027ffa0 - 00280011


/* juce::PopupMenu::HelperClasses::MenuWindow::visibilityChanged() */

void __thiscall juce::PopupMenu::HelperClasses::MenuWindow::visibilityChanged(MenuWindow *this)

{
  long lVar1;
  uint uVar2;
  Component *this_00;
  AccessibilityHandler *this_01;
  
  uVar2 = Component::isShowing((Component *)this);
  if ((char)uVar2 == '\0') {
    return;
  }
  if ((*(long *)(this + 0x188) != 0) &&
     (lVar1 = *(long *)(*(long *)(this + 0x188) + 0x10), lVar1 != 0)) {
    this_00 = (Component *)__dynamic_cast(lVar1,&Component::typeinfo,&ItemComponent::typeinfo,0);
    this_01 = (AccessibilityHandler *)Component::getAccessibilityHandler(this_00);
    if (this_01 != (AccessibilityHandler *)0x0) goto LAB_0027fff1;
  }
  this_01 = (AccessibilityHandler *)Component::getAccessibilityHandler((Component *)this);
  if (this_01 == (AccessibilityHandler *)0x0) {
    return;
  }
LAB_0027fff1:
  if ((AccessibilityHandler::currentlyFocusedHandler == (AccessibilityHandler *)0x0) ||
     (AccessibilityHandler::currentlyFocusedHandler != this_01)) {
    AccessibilityHandler::grabFocusInternal(this_01,'\x01');
    return;
  }
  return;
}


