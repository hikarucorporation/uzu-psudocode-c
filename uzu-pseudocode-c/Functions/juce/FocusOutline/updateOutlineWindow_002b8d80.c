// Function : updateOutlineWindow
// Namespace: juce:FocusOutline
// Entry    : 002b8d80
// Prototype: undefined updateOutlineWindow(FocusOutline * this)
// Body     : 002b8d80 - 002b8f8e


/* juce::FocusOutline::updateOutlineWindow() */

void __thiscall juce::FocusOutline::updateOutlineWindow(FocusOutline *this)

{
  Component *this_00;
  ComponentHelpers *pCVar1;
  undefined8 uVar2;
  long *plVar3;
  ComponentHelpers *pCVar4;
  uint uVar5;
  long lVar6;
  OutlineWindowComponent *this_01;
  long *plVar7;
  ComponentHelpers *this_02;
  undefined1 auVar8 [16];
  
  if (this[0x28] != (FocusOutline)0x0) {
    return;
  }
  this[0x28] = (FocusOutline)0x1;
                    /* try { // try from 002b8db3 to 002b8db7 has its CatchHandler @ 002b8fbf */
  if (((((*(long *)(this + 0x10) == 0) ||
        (this_00 = *(Component **)(*(long *)(this + 0x10) + 0x10), this_00 == (Component *)0x0)) ||
       (uVar5 = Component::isShowing(this_00), (char)uVar5 == '\0')) ||
      ((lVar6 = *(long *)(this + 0x10), lVar6 == 0 || (*(int *)(*(long *)(lVar6 + 0x10) + 0x40) < 1)
       ))) || (*(int *)(*(long *)(lVar6 + 0x10) + 0x44) < 1)) {
    plVar7 = *(long **)(this + 0x18);
    *(undefined8 *)(this + 0x18) = 0;
    if (plVar7 == (long *)0x0) goto LAB_002b8ed4;
    lVar6 = *plVar7;
  }
  else {
    this_01 = *(OutlineWindowComponent **)(this + 0x18);
    if (this_01 == (OutlineWindowComponent *)0x0) {
      uVar2 = *(undefined8 *)(this + 8);
                    /* try { // try from 002b8ee8 to 002b8ef1 has its CatchHandler @ 002b8f9e */
      this_01 = operator_new(0x100);
                    /* try { // try from 002b8efa to 002b8f04 has its CatchHandler @ 002b8f91 */
      OutlineWindowComponent::OutlineWindowComponent(this_01,*(long *)(lVar6 + 0x10),uVar2);
      plVar7 = *(long **)(this + 0x18);
      *(OutlineWindowComponent **)(this + 0x18) = this_01;
      if (plVar7 == (long *)0x0) goto LAB_002b8df3;
      (**(code **)(*plVar7 + 8))();
      this_01 = *(OutlineWindowComponent **)(this + 0x18);
      if (this_01 != (OutlineWindowComponent *)0x0) goto LAB_002b8df3;
LAB_002b8f87:
      plVar7 = (long *)0x0;
    }
    else {
LAB_002b8df3:
      plVar7 = *(long **)(this_01 + 0xd8);
      if (plVar7 == (long *)0x0) {
                    /* try { // try from 002b8f2b to 002b8f34 has its CatchHandler @ 002b8f8f */
        plVar7 = operator_new(0x18);
        *(undefined4 *)(plVar7 + 1) = 0;
        *plVar7 = (long)&PTR__ReferenceCountedObject_00714b80;
        plVar7[2] = (long)this_01;
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
        plVar3 = *(long **)(this_01 + 0xd8);
        *(long **)(this_01 + 0xd8) = plVar7;
        if (plVar3 != (long *)0x0) {
          LOCK();
          plVar7 = plVar3 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)(*plVar3 + 8))();
          }
          plVar7 = *(long **)(this_01 + 0xd8);
          if (plVar7 == (long *)0x0) goto LAB_002b8f87;
        }
      }
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 002b8e22 to 002b8e26 has its CatchHandler @ 002b8fa4 */
    Component::setAlwaysOnTop
              (*(Component **)(this + 0x18),
               *(ushort *)(*(long *)(*(long *)(this + 0x10) + 0x10) + 0xe8) >> 0xb & 1);
    if (plVar7 == (long *)0x0) goto LAB_002b8ed4;
    if (plVar7[2] != 0) {
                    /* try { // try from 002b8e46 to 002b8e90 has its CatchHandler @ 002b8fa2 */
      auVar8 = (**(code **)(**(long **)(this + 8) + 0x10))
                         (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x10) + 0x10));
      if ((*(long *)(this + 0x20) != 0) &&
         (pCVar1 = *(ComponentHelpers **)(*(long *)(this + 0x20) + 0x10),
         pCVar1 != (ComponentHelpers *)0x0)) {
        pCVar4 = pCVar1;
        do {
          this_02 = pCVar4;
          pCVar4 = *(ComponentHelpers **)(this_02 + 0x30);
        } while (*(ComponentHelpers **)(this_02 + 0x30) != (ComponentHelpers *)0x0);
        auVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>>
                           (this_02,auVar8._0_8_,auVar8._8_8_);
        if (this_02 != pCVar1) {
          auVar8 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>>
                             (this_02,pCVar1,auVar8._0_8_,auVar8._8_8_);
        }
      }
                    /* try { // try from 002b8ea6 to 002b8eac has its CatchHandler @ 002b8fa0 */
      Component::setBounds
                (*(Component **)(this + 0x18),auVar8._0_4_,auVar8._4_4_,auVar8._8_4_,auVar8._12_4_);
    }
    LOCK();
    plVar3 = plVar7 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_002b8ed4;
    lVar6 = *plVar7;
  }
  (**(code **)(lVar6 + 8))(plVar7);
LAB_002b8ed4:
  this[0x28] = (FocusOutline)0x0;
  return;
}


