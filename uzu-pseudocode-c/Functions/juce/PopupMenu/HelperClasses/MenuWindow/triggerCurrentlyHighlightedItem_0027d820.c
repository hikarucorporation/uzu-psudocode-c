// Function : triggerCurrentlyHighlightedItem
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027d820
// Prototype: undefined triggerCurrentlyHighlightedItem(MenuWindow * this)
// Body     : 0027d820 - 0027d8f1


/* juce::PopupMenu::HelperClasses::MenuWindow::triggerCurrentlyHighlightedItem() */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::triggerCurrentlyHighlightedItem(MenuWindow *this)

{
  long lVar1;
  long lVar2;
  MenuWindow *this_00;
  Item aIStack_88 [112];
  
  if ((*(long *)(this + 0x188) != 0) &&
     (lVar2 = *(long *)(*(long *)(this + 0x188) + 0x10), lVar2 != 0)) {
    lVar1 = __dynamic_cast(lVar2,&Component::typeinfo,&ItemComponent::typeinfo,0);
    if (((*(char *)(lVar1 + 0x154) != '\0') &&
        ((*(int *)(lVar1 + 0xf8) != 0 && (*(char *)(lVar1 + 0x157) == '\0')))) &&
       ((*(long *)(lVar1 + 0x130) == 0 || (*(char *)(*(long *)(lVar1 + 0x130) + 0xfd) != '\0')))) {
      lVar2 = __dynamic_cast(lVar2,&Component::typeinfo,&ItemComponent::typeinfo,0);
      do {
        this_00 = this;
        this = *(MenuWindow **)(this_00 + 0xf0);
      } while (this != (MenuWindow *)0x0);
      Item::Item(aIStack_88,(long *)(lVar2 + 0xf0));
                    /* try { // try from 0027d8d3 to 0027d8df has its CatchHandler @ 0027d8f2 */
      hide(this_00,(long)aIStack_88,'\0');
      Item::~Item(aIStack_88);
    }
  }
  return;
}


