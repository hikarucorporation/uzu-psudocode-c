// Function : paint
// Namespace: juce:PopupMenu:HelperClasses:ItemComponent
// Entry    : 0027e8d0
// Prototype: undefined paint(ItemComponent * this, undefined8 param_1)
// Body     : 0027e8d0 - 0027e993


/* juce::PopupMenu::HelperClasses::ItemComponent::paint(juce::Graphics&) */

void __thiscall
juce::PopupMenu::HelperClasses::ItemComponent::paint(ItemComponent *this,undefined8 param_1)

{
  ItemComponent *pIVar1;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  if (*(long *)(this + 0x170) == 0) {
    pIVar1 = this;
    do {
      if ((*(long *)(pIVar1 + 0x68) != 0) &&
         (pLVar2 = *(LookAndFeel_V4 **)(*(long *)(pIVar1 + 0x68) + 0x10),
         pLVar2 != (LookAndFeel_V4 *)0x0)) goto LAB_0027e950;
      pIVar1 = *(ItemComponent **)(pIVar1 + 0x30);
    } while (pIVar1 != (ItemComponent *)0x0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027e929 to 0027e932 has its CatchHandler @ 0027e9a7 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 0027e936 to 0027e93d has its CatchHandler @ 0027e994 */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    pLVar2 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027e950:
    local_20 = *(undefined8 *)(this + 0x40);
    local_28 = 0;
    (**(code **)(*(long *)(pLVar2 + 0x40) + 0x28))
              (pLVar2 + 0x40,param_1,&local_28,this[0x178],this + 0xf0,*(undefined8 *)(this + 0x168)
              );
  }
  return;
}


