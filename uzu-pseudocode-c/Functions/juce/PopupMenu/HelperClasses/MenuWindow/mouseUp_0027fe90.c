// Function : mouseUp
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027fe90
// Prototype: undefined mouseUp(MenuWindow * this, long param_1)
// Body     : 0027fe90 - 0027ff43


/* juce::PopupMenu::HelperClasses::MenuWindow::mouseUp(juce::MouseEvent const&) */

void __thiscall juce::PopupMenu::HelperClasses::MenuWindow::mouseUp(MenuWindow *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0xd8);
  if (plVar2 == (long *)0x0) {
    plVar2 = operator_new(0x18);
    *(undefined4 *)(plVar2 + 1) = 0;
    *plVar2 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar2[2] = (long)this;
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    plVar1 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar2;
    if (plVar1 != (long *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar2 = *(long **)(this + 0xd8);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)0x0;
        goto LAB_0027feac;
      }
    }
  }
  LOCK();
  *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
  UNLOCK();
LAB_0027feac:
                    /* try { // try from 0027feac to 0027feb6 has its CatchHandler @ 0027ff44 */
  handleMouseEvent(this,param_1);
  if (plVar2 != (long *)0x0) {
    if (plVar2[2] != 0) {
      this[0x1ce] = (MenuWindow)0x1;
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0027fedd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


