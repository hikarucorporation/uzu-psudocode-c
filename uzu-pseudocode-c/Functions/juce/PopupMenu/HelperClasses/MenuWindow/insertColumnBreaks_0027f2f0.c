// Function : insertColumnBreaks
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027f2f0
// Prototype: undefined insertColumnBreaks(MenuWindow * this, int param_1, int param_2)
// Body     : 0027f2f0 - 0027f3ff


/* juce::PopupMenu::HelperClasses::MenuWindow::insertColumnBreaks(int, int) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::insertColumnBreaks
          (MenuWindow *this,int param_1,int param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(this + 0x130);
  iVar6 = 7;
  if (0 < *(int *)(this + 0x134)) {
    iVar6 = *(int *)(this + 0x134);
  }
  *(undefined4 *)(this + 0x180) = 0;
  while (iVar2 = workOutBestSize(this,param_1), iVar2 <= param_1) {
    if (((param_1 / 2 < iVar2) || (*(int *)(this + 0x180) < param_2)) ||
       (iVar6 <= *(int *)(this + 0x17c))) goto LAB_0027f396;
    *(int *)(this + 0x17c) = *(int *)(this + 0x17c) + 1;
  }
  iVar6 = 2;
  if (2 < *(int *)(this + 0x17c)) {
    iVar6 = *(int *)(this + 0x17c);
  }
  *(int *)(this + 0x17c) = iVar6 + -1;
  workOutBestSize(this,param_1);
LAB_0027f396:
  iVar6 = *(int *)(this + 0x154);
  iVar2 = (iVar6 + *(int *)(this + 0x17c) + -1) / *(int *)(this + 0x17c);
  if (iVar6 < iVar2) {
    if (iVar6 == 0) {
      return;
    }
    lVar4 = *(long *)(this + 0x148);
  }
  else {
    lVar4 = *(long *)(this + 0x148);
    lVar3 = (long)iVar2;
    lVar5 = lVar3 + -1;
    do {
      *(undefined1 *)(*(long *)(lVar4 + lVar5 * 8) + 0x158) = 1;
      lVar1 = lVar5 + lVar3;
      lVar5 = lVar5 + lVar3;
    } while (lVar1 + 1 <= (long)iVar6);
  }
  *(undefined1 *)(*(long *)(lVar4 + -8 + (long)iVar6 * 8) + 0x158) = 0;
  return;
}


