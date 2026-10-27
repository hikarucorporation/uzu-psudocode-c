// Function : selectNextItem
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280f40
// Prototype: undefined selectNextItem(MenuWindow * this, int param_1)
// Body     : 00280f40 - 002810e2


/* juce::PopupMenu::HelperClasses::MenuWindow::selectNextItem(juce::PopupMenu::HelperClasses::MenuWindow::MenuSelectionDirection)
    */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::selectNextItem(MenuWindow *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  MenuWindow *pMVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  int iVar9;
  uint uVar8;
  ulong uVar10;
  bool bVar11;
  
  pMVar4 = this;
  do {
    pMVar4[0x17a] = (MenuWindow)0x1;
    pMVar4 = *(MenuWindow **)(pMVar4 + 0xf0);
  } while (pMVar4 != (MenuWindow *)0x0);
  lVar2 = *(long *)(this + 0x188);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x10) == 0)) {
    lVar5 = 0;
    lVar3 = *(long *)(this + 0x148);
    iVar1 = *(int *)(this + 0x154);
  }
  else {
    lVar5 = __dynamic_cast(*(long *)(lVar2 + 0x10),&Component::typeinfo,&ItemComponent::typeinfo,0);
    lVar3 = *(long *)(this + 0x148);
    iVar1 = *(int *)(this + 0x154);
  }
  if ((long)iVar1 != 0) {
    lVar7 = (long)iVar1 * 8;
    uVar10 = 0;
    do {
      if (*(long *)(lVar3 + uVar10 * 8) == lVar5) {
        if (-1 < (int)uVar10) goto LAB_00281002;
        break;
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  uVar10 = 0;
  if (param_1 == 1) {
    uVar10 = (ulong)(iVar1 - 1);
  }
LAB_00281002:
  bVar11 = false;
  if ((param_1 != 2) && (lVar2 != 0)) {
    bVar11 = *(long *)(lVar2 + 0x10) != 0;
  }
  if (0 < iVar1) {
    uVar6 = iVar1 + 1;
    do {
      iVar9 = (uint)(param_1 != 1) * 2 + -1;
      if (!bVar11) {
        iVar9 = 0;
      }
      uVar8 = iVar9 + (int)uVar10;
      uVar10 = (ulong)uVar8;
      lVar2 = *(long *)(lVar3 + (long)((int)(uVar8 + iVar1) % iVar1) * 8);
      if (lVar2 != 0) {
        if (((*(char *)(lVar2 + 0x154) == '\0') || (*(int *)(lVar2 + 0xf8) == 0)) ||
           (*(char *)(lVar2 + 0x157) != '\0')) {
          if (*(char *)(lVar2 + 0x154) == '\0') goto LAB_00281040;
        }
        else if ((*(long *)(lVar2 + 0x130) == 0) ||
                (*(char *)(*(long *)(lVar2 + 0x130) + 0xfd) != '\0')) goto LAB_002810ca;
        if ((*(long *)(lVar2 + 0x120) != 0) && (0 < *(int *)(*(long *)(lVar2 + 0x120) + 0xc))) {
LAB_002810ca:
          setCurrentlyHighlightedChild(this,lVar2);
          return;
        }
      }
LAB_00281040:
      if (!bVar11) {
        bVar11 = true;
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}


