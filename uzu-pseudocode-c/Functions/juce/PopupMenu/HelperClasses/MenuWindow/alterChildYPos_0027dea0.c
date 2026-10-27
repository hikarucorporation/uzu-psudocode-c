// Function : alterChildYPos
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027dea0
// Prototype: undefined alterChildYPos(MenuWindow * this, int param_1)
// Body     : 0027dea0 - 0027e022


/* juce::PopupMenu::HelperClasses::MenuWindow::alterChildYPos(int) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::alterChildYPos(MenuWindow *this,int param_1)

{
  int iVar1;
  MenuWindow *pMVar2;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((*(int *)(this + 0x184) == 0) && (this[0x178] == (MenuWindow)0x0)) {
    *(undefined4 *)(this + 0x184) = 0;
    uVar6 = *(ulong *)(this + 0x168);
    uVar4 = *(ulong *)(this + 0x170);
    iVar5 = (int)(uVar6 >> 0x20);
  }
  else {
    iVar1 = *(int *)(this + 0x184) + param_1;
    *(int *)(this + 0x184) = iVar1;
    if (param_1 < 0) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
    }
    else if (param_1 != 0) {
      iVar5 = *(int *)(this + 0x180);
      iVar7 = *(int *)(this + 0x174);
      pMVar2 = this;
      do {
        if ((*(long *)(pMVar2 + 0x68) != 0) &&
           (pLVar3 = *(LookAndFeel_V4 **)(*(long *)(pMVar2 + 0x68) + 0x10),
           pLVar3 != (LookAndFeel_V4 *)0x0)) goto LAB_0027df69;
        pMVar2 = *(MenuWindow **)(pMVar2 + 0x30);
      } while (pMVar2 != (MenuWindow *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0027df42 to 0027df4b has its CatchHandler @ 0027e036 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0027df4f to 0027df56 has its CatchHandler @ 0027e023 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      pLVar3 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0027df69:
      iVar1 = (**(code **)(*(long *)(pLVar3 + 0x40) + 0xc0))(pLVar3 + 0x40,this + 0xf8);
      iVar1 = iVar1 + (iVar5 - iVar7);
      if (*(int *)(this + 0x184) <= iVar1) {
        iVar1 = *(int *)(this + 0x184);
      }
    }
    *(int *)(this + 0x184) = iVar1;
    updateYPositions(this);
    iVar1 = *(int *)(this + 0x184);
    uVar6 = *(ulong *)(this + 0x168);
    uVar4 = *(ulong *)(this + 0x170);
    iVar5 = (int)(uVar6 >> 0x20);
    iVar7 = (int)(uVar4 >> 0x20);
    if (iVar1 < 0) {
      iVar5 = iVar5 - iVar1;
      uVar8 = iVar7 + iVar1;
      uVar9 = (ulong)uVar8;
      if ((int)uVar8 < 0) {
        uVar9 = 0;
      }
      uVar6 = uVar6 & 0xffffffff;
      uVar4 = uVar4 & 0xffffffff | uVar9 << 0x20;
    }
    else if ((iVar1 != 0) && (0 < iVar7 + (iVar1 - *(int *)(this + 0x180)))) {
      uVar4 = uVar4 & 0xffffffff | (ulong)(uint)-(iVar1 - *(int *)(this + 0x180)) << 0x20;
    }
  }
  Component::setBounds((Component *)this,(int)uVar6,iVar5,(int)uVar4,(int)(uVar4 >> 0x20));
  updateYPositions(this);
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  return;
}


