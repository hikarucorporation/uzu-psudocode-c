// Function : paint
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280090
// Prototype: undefined paint(MenuWindow * this, Graphics * param_1)
// Body     : 00280090 - 0028022b


/* juce::PopupMenu::HelperClasses::MenuWindow::paint(juce::Graphics&) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::paint(MenuWindow *this,Graphics *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  MenuWindow *pMVar4;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar5;
  LookAndFeel_V4 *pLVar6;
  int iVar7;
  long lVar8;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  long local_40;
  Graphics *local_38;
  
  if ((*(ushort *)(this + 0xe8) & 4) != 0) {
    Graphics::fillAll(param_1,_ZN4juce7ColoursL5whiteE_144);
  }
  pMVar4 = this;
  do {
    if ((*(long *)(pMVar4 + 0x68) != 0) &&
       (pLVar5 = *(LookAndFeel_V4 **)(*(long *)(pMVar4 + 0x68) + 0x10),
       pLVar5 != (LookAndFeel_V4 *)0x0)) goto LAB_00280120;
    pMVar4 = *(MenuWindow **)(pMVar4 + 0x30);
  } while (pMVar4 != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002800f9 to 00280102 has its CatchHandler @ 0028023f */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00280106 to 0028010d has its CatchHandler @ 0028022c */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00280120:
  pMVar4 = this + 0xf8;
  pLVar6 = pLVar5 + 0x40;
  (**(code **)(*(long *)(pLVar5 + 0x40) + 0x18))
            (pLVar6,param_1,*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44));
  if (*(int *)(this + 0x1a4) != 0) {
    local_38 = param_1;
    iVar2 = (**(code **)(*(long *)pLVar6 + 0xd0))(pLVar6,pMVar4);
    iVar3 = (**(code **)(*(long *)pLVar6 + 0xc0))(pLVar6,pMVar4);
    lVar1 = *(long *)(this + 0x198);
    if (lVar1 != lVar1 + (long)*(int *)(this + 0x1a4) * 4 + -4) {
      local_40 = (long)*(int *)(this + 0x1a4) * 4 + -4;
      lVar8 = 0;
      iVar7 = 0;
      do {
        iVar7 = iVar7 + *(int *)(lVar1 + lVar8);
        local_44 = *(int *)(this + 0x44) + iVar3 * -2;
        local_50 = iVar7;
        local_4c = iVar3;
        local_48 = iVar2;
        (**(code **)(*(long *)pLVar6 + 200))(pLVar6,local_38,&local_50,pMVar4);
        iVar7 = iVar7 + iVar2;
        lVar8 = lVar8 + 4;
      } while (local_40 != lVar8);
    }
  }
  return;
}


