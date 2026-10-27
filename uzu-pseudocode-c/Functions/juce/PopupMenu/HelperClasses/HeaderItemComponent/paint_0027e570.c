// Function : paint
// Namespace: juce:PopupMenu:HelperClasses:HeaderItemComponent
// Entry    : 0027e570
// Prototype: undefined paint(HeaderItemComponent * this, undefined8 param_1)
// Body     : 0027e570 - 0027e656


/* juce::PopupMenu::HelperClasses::HeaderItemComponent::paint(juce::Graphics&) */

void __thiscall
juce::PopupMenu::HelperClasses::HeaderItemComponent::paint
          (HeaderItemComponent *this,undefined8 param_1)

{
  int iVar1;
  HeaderItemComponent *pHVar2;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar3;
  int *piVar4;
  long local_30 [3];
  
  pHVar2 = this;
  do {
    if ((*(long *)(pHVar2 + 0x68) != 0) &&
       (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pHVar2 + 0x68) + 0x10),
       pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_0027e5e0;
    pHVar2 = *(HeaderItemComponent **)(pHVar2 + 0x30);
  } while (pHVar2 != (HeaderItemComponent *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027e5b9 to 0027e5c2 has its CatchHandler @ 0027e66a */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0027e5c6 to 0027e5cd has its CatchHandler @ 0027e657 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027e5e0:
  local_30[2] = *(long *)(this + 0x40);
  local_30[1] = 0;
  local_30[0] = *(long *)(this + 8);
  piVar4 = (int *)(local_30[0] + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
                    /* try { // try from 0027e61d to 0027e62c has its CatchHandler @ 0027e672 */
  (**(code **)(*(long *)(pLVar3 + 0x40) + 0x38))
            (pLVar3 + 0x40,param_1,local_30 + 1,local_30,*(undefined8 *)(this + 0x108));
  piVar4 = (int *)(local_30[0] + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar4);
    }
  }
  return;
}


