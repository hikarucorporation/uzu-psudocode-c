// Function : resized
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent
// Entry    : 0027e9b0
// Prototype: undefined resized(ItemComponent * this)
// Body     : 0027e9b0 - 0027ea63


/* juce::PopupMenu::HelperClasses::ItemComponent::resized() */

void __thiscall juce::PopupMenu::HelperClasses::ItemComponent::resized(ItemComponent *this)

{
  Component *this_00;
  int iVar1;
  ItemComponent *pIVar2;
  Desktop *this_01;
  LookAndFeel_V4 *pLVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(this + 100) == 0) ||
     (this_00 = (Component *)**(undefined8 **)(this + 0x58), this_00 == (Component *)0x0)) {
    return;
  }
  pIVar2 = this;
  do {
    if ((*(long *)(pIVar2 + 0x68) != 0) &&
       (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pIVar2 + 0x68) + 0x10),
       pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_0027ea26;
    pIVar2 = *(ItemComponent **)(pIVar2 + 0x30);
  } while (pIVar2 != (ItemComponent *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027e9ff to 0027ea08 has its CatchHandler @ 0027ea77 */
    this_01 = operator_new(0x1d0);
                    /* try { // try from 0027ea0c to 0027ea13 has its CatchHandler @ 0027ea64 */
    Desktop::Desktop(this_01);
    Desktop::instance = this_01;
  }
  pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027ea26:
  iVar1 = (**(code **)(*(long *)(pLVar3 + 0x40) + 0xc0))(pLVar3 + 0x40);
  iVar5 = *(int *)(this + 0x44);
  iVar4 = *(int *)(this + 0x40) + iVar1 * -2;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  Component::setBounds(this_00,iVar1,0,iVar4,iVar5);
  return;
}


