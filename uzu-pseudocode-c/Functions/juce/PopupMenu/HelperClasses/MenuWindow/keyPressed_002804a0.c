// Function : keyPressed
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 002804a0
// Prototype: ulong keyPressed(MenuWindow * this, int * param_1)
// Body     : 002804a0 - 0028071f


/* juce::PopupMenu::HelperClasses::MenuWindow::keyPressed(juce::KeyPress const&) */

ulong __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::keyPressed(MenuWindow *this,int *param_1)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  MenuWindow *pMVar7;
  ulong uVar8;
  int iVar9;
  
  iVar9 = *param_1;
  uVar8 = 0;
  if (iVar9 < 0x10000051) {
    if (iVar9 == 0xd) {
LAB_002805b0:
      triggerCurrentlyHighlightedItem(this);
    }
    else {
      if (iVar9 != 0x1b) {
        if (iVar9 != 0x20) goto switchD_002804d5_default;
        goto LAB_002805b0;
      }
      do {
        pMVar7 = this;
        this = *(MenuWindow **)(pMVar7 + 0xf0);
      } while (this != (MenuWindow *)0x0);
      hide(pMVar7,0,'\x01');
    }
    goto LAB_0028066c;
  }
  switch(iVar9) {
  case 0x10000051:
    lVar5 = *(long *)(this + 0xf0);
    if (lVar5 != 0) {
      plVar3 = *(long **)(lVar5 + 0xd8);
      if (plVar3 == (long *)0x0) {
        plVar3 = operator_new(0x18);
        *(undefined4 *)(plVar3 + 1) = 0;
        *plVar3 = (long)&PTR__ReferenceCountedObject_00714b80;
        plVar3[2] = lVar5;
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        plVar1 = *(long **)(lVar5 + 0xd8);
        *(long **)(lVar5 + 0xd8) = plVar3;
        if (plVar1 != (long *)0x0) {
          LOCK();
          plVar3 = plVar1 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar3 = *(long **)(lVar5 + 0xd8);
        }
      }
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      lVar4 = 0;
      lVar5 = __dynamic_cast(plVar3[2],&Component::typeinfo,&typeinfo,0);
      if (*(long *)(lVar5 + 0x188) != 0) {
        lVar5 = *(long *)(*(long *)(lVar5 + 0x188) + 0x10);
        if (lVar5 == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = __dynamic_cast(lVar5,&Component::typeinfo,&ItemComponent::typeinfo,0);
        }
      }
                    /* try { // try from 002806ac to 002806ba has its CatchHandler @ 00280722 */
      hide(this,0,'\x01');
      if (plVar3[2] != 0) {
        pMVar7 = (MenuWindow *)__dynamic_cast(plVar3[2],&Component::typeinfo,&typeinfo,0);
                    /* try { // try from 002806d9 to 002806e3 has its CatchHandler @ 00280720 */
        setCurrentlyHighlightedChild(pMVar7,lVar4);
      }
      do {
        this[0x17a] = (MenuWindow)0x1;
        this = *(MenuWindow **)(this + 0xf0);
      } while (this != (MenuWindow *)0x0);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulong)lVar4 >> 8),1);
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      goto switchD_002804d5_default;
    }
    break;
  case 0x10000052:
    iVar9 = 1;
    goto LAB_00280667;
  case 0x10000053:
    pMVar7 = this;
    do {
      pMVar7[0x17a] = (MenuWindow)0x1;
      pMVar7 = *(MenuWindow **)(pMVar7 + 0xf0);
    } while (pMVar7 != (MenuWindow *)0x0);
    if ((*(long *)(this + 0x188) == 0) ||
       (lVar5 = *(long *)(*(long *)(this + 0x188) + 0x10), lVar5 == 0)) {
      uVar6 = showSubMenuFor(this,0);
      cVar2 = (char)uVar6;
    }
    else {
      lVar5 = __dynamic_cast(lVar5,&Component::typeinfo,&ItemComponent::typeinfo,0);
      uVar6 = showSubMenuFor(this,lVar5);
      cVar2 = (char)uVar6;
    }
    if (cVar2 != '\0') {
      pMVar7 = *(MenuWindow **)(this + 400);
      uVar8 = 1;
      if ((pMVar7 != (MenuWindow *)0x0) && ((*(ushort *)(pMVar7 + 0xe8) & 2) != 0)) {
        selectNextItem(pMVar7,2);
      }
      goto switchD_002804d5_default;
    }
    break;
  case 0x10000054:
    iVar9 = 0;
LAB_00280667:
    selectNextItem(this,iVar9);
LAB_0028066c:
    uVar8 = 1;
  default:
    goto switchD_002804d5_default;
  }
  uVar8 = 1;
  if ((*(long *)(this + 0x160) != 0) &&
     (plVar3 = *(long **)(*(long *)(this + 0x160) + 0x10), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x108))(plVar3,param_1);
  }
switchD_002804d5_default:
  return uVar8 & 0xffffffff;
}


