// Function : setCurrentlyHighlightedChild
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027aec0
// Prototype: undefined setCurrentlyHighlightedChild(MenuWindow * this, long param_1)
// Body     : 0027aec0 - 0027b068


/* juce::PopupMenu::HelperClasses::MenuWindow::setCurrentlyHighlightedChild(juce::PopupMenu::HelperClasses::ItemComponent*)
    */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::setCurrentlyHighlightedChild
          (MenuWindow *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  ItemComponent *pIVar5;
  undefined8 *puVar6;
  uint uVar7;
  timespec local_20;
  
  if ((*(long *)(this + 0x188) != 0) &&
     (lVar2 = *(long *)(*(long *)(this + 0x188) + 0x10), lVar2 != 0)) {
    pIVar5 = (ItemComponent *)__dynamic_cast(lVar2,&Component::typeinfo,&ItemComponent::typeinfo,0);
    ItemComponent::setHighlighted(pIVar5,0);
  }
  if (param_1 == 0) {
LAB_0027af7c:
    puVar6 = (undefined8 *)0x0;
    plVar3 = *(long **)(this + 0x188);
    *(undefined8 *)(this + 0x188) = 0;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0xd8);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = operator_new(0x18);
      *(undefined4 *)(puVar6 + 1) = 0;
      *puVar6 = &PTR__ReferenceCountedObject_00714b80;
      puVar6[2] = param_1;
      LOCK();
      *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
      UNLOCK();
      plVar3 = *(long **)(param_1 + 0xd8);
      *(undefined8 **)(param_1 + 0xd8) = puVar6;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
        puVar6 = *(undefined8 **)(param_1 + 0xd8);
        if (puVar6 == (undefined8 *)0x0) goto LAB_0027af7c;
      }
    }
    LOCK();
    *(int *)(puVar6 + 1) = *(int *)(puVar6 + 1) + 1;
    UNLOCK();
    plVar3 = *(long **)(this + 0x188);
    *(undefined8 **)(this + 0x188) = puVar6;
  }
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar3 + 8))();
    }
    puVar6 = *(undefined8 **)(this + 0x188);
  }
  if ((puVar6 != (undefined8 *)0x0) && (puVar6[2] != 0)) {
    pIVar5 = (ItemComponent *)
             __dynamic_cast(puVar6[2],&Component::typeinfo,&ItemComponent::typeinfo,0);
    ItemComponent::setHighlighted(pIVar5,1);
    uVar7 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
    if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
      clock_gettime(1,&local_20);
      auVar4 = SEXT816(local_20.tv_nsec / 1000 + local_20.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar7 = (int)(auVar4._8_8_ >> 7) - (auVar4._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar7) ||
         (uVar7 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar7;
      }
    }
    *(uint *)(this + 0x1b0) = uVar7;
  }
  Component::getAccessibilityHandler((Component *)this);
  return;
}


