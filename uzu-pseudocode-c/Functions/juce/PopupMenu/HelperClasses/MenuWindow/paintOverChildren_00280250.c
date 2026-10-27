// Function : paintOverChildren
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280250
// Prototype: undefined paintOverChildren(MenuWindow * this, long param_1)
// Body     : 00280250 - 00280462


/* juce::PopupMenu::HelperClasses::MenuWindow::paintOverChildren(juce::Graphics&) */

void __thiscall
juce::PopupMenu::HelperClasses::MenuWindow::paintOverChildren(MenuWindow *this,long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  LookAndFeel_V4 *pLVar4;
  long lVar5;
  MenuWindow *pMVar6;
  Desktop *pDVar7;
  LookAndFeel_V4 *pLVar8;
  MenuWindow MVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  pMVar6 = this;
  do {
    if ((*(long *)(pMVar6 + 0x68) != 0) &&
       (pLVar4 = *(LookAndFeel_V4 **)(*(long *)(pMVar6 + 0x68) + 0x10),
       pLVar4 != (LookAndFeel_V4 *)0x0)) {
      lVar5 = *(long *)(this + 0x110);
      if (lVar5 == 0) goto LAB_002803a0;
      goto LAB_002802ed;
    }
    pMVar6 = *(MenuWindow **)(pMVar6 + 0x30);
  } while (pMVar6 != (MenuWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002802af to 002802b8 has its CatchHandler @ 00280491 */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 002802bc to 002802c3 has its CatchHandler @ 0028047e */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  pLVar4 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  lVar5 = *(long *)(this + 0x110);
  if (lVar5 != 0) {
LAB_002802ed:
    if (*(long *)(lVar5 + 0x10) != 0) {
      uVar1 = *(undefined4 *)(this + 0x40);
      uVar2 = *(undefined4 *)(this + 0x44);
      pMVar6 = this;
      do {
        if ((*(long *)(pMVar6 + 0x68) != 0) &&
           (pLVar8 = *(LookAndFeel_V4 **)(*(long *)(pMVar6 + 0x68) + 0x10),
           pLVar8 != (LookAndFeel_V4 *)0x0)) goto LAB_00280368;
        pMVar6 = *(MenuWindow **)(pMVar6 + 0x30);
      } while (pMVar6 != (MenuWindow *)0x0);
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028033d to 00280346 has its CatchHandler @ 00280476 */
        pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0028034a to 00280351 has its CatchHandler @ 00280463 */
        Desktop::Desktop(pDVar7);
        Desktop::instance = pDVar7;
      }
      pLVar8 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00280368:
      local_48 = (**(code **)(*(long *)(pLVar8 + 0x40) + 0xc0))(pLVar8 + 0x40,this + 0xf8);
      uStack_44 = local_48;
      uStack_40 = local_48;
      uStack_3c = local_48;
      (**(code **)(*(long *)(pLVar4 + 0x60) + 0x18))(pLVar4 + 0x60,param_1,uVar1,uVar2,&local_48);
    }
  }
LAB_002803a0:
  iVar3 = *(int *)(this + 0x184);
  MVar9 = this[0x178];
  if ((iVar3 != 0) || (MVar9 != (MenuWindow)0x0)) {
    if (0 < iVar3) {
      (**(code **)(*(long *)(pLVar4 + 0x40) + 0x50))
                (pLVar4 + 0x40,param_1,*(undefined4 *)(this + 0x40),0x18,1,this + 0xf8);
      iVar3 = *(int *)(this + 0x184);
      MVar9 = this[0x178];
    }
    if (((iVar3 != 0) || (MVar9 != (MenuWindow)0x0)) &&
       (iVar3 < *(int *)(this + 0x180) - *(int *)(this + 0x174))) {
      iVar3 = *(int *)(this + 0x44);
      if (*(char *)(param_1 + 0x10) != '\0') {
        *(undefined1 *)(param_1 + 0x10) = 0;
        (**(code **)(**(long **)(param_1 + 8) + 0x70))();
      }
      (**(code **)(**(long **)(param_1 + 8) + 0x18))
                (*(long **)(param_1 + 8),(ulong)(iVar3 - 0x18) << 0x20);
      (**(code **)(*(long *)(pLVar4 + 0x40) + 0x50))
                (pLVar4 + 0x40,param_1,*(undefined4 *)(this + 0x40),0x18,0,this + 0xf8);
    }
  }
  return;
}


