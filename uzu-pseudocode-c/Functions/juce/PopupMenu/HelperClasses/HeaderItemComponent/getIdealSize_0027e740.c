// Function : getIdealSize
// Namespace: juce:PopupMenu:HelperClasses:HeaderItemComponent
// Entry    : 0027e740
// Prototype: undefined getIdealSize(HeaderItemComponent * this, undefined8 param_1, undefined8 param_2)
// Body     : 0027e740 - 0027e817


/* juce::PopupMenu::HelperClasses::HeaderItemComponent::getIdealSize(int&, int&) */

void __thiscall
juce::PopupMenu::HelperClasses::HeaderItemComponent::getIdealSize
          (HeaderItemComponent *this,undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  HeaderItemComponent *pHVar2;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar3;
  int *piVar4;
  long local_28;
  
  pHVar2 = this;
  do {
    if ((*(long *)(pHVar2 + 0x68) != 0) &&
       (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pHVar2 + 0x68) + 0x10),
       pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_0027e7b0;
    pHVar2 = *(HeaderItemComponent **)(pHVar2 + 0x30);
  } while (pHVar2 != (HeaderItemComponent *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027e789 to 0027e792 has its CatchHandler @ 0027e82b */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0027e796 to 0027e79d has its CatchHandler @ 0027e818 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027e7b0:
  local_28 = *(long *)(this + 8);
  piVar4 = (int *)(local_28 + -0x10);
  if (piVar4 != &emptyString) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
                    /* try { // try from 0027e7dc to 0027e7ec has its CatchHandler @ 0027e833 */
  (**(code **)(*(long *)(pLVar3 + 0x40) + 0x68))
            (pLVar3 + 0x40,&local_28,0xffffffff,param_1,param_2,*(undefined8 *)(this + 0x108));
  piVar4 = (int *)(local_28 + -0x10);
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


