// Function : lookAndFeelChanged
// Namespace: juce:AlertWindow
// Entry    : 0028a880
// Prototype: undefined lookAndFeelChanged(undefined8 param_1, undefined8 param_2, AlertWindow * this)
// Body     : 0028a880 - 0028aa06


/* juce::AlertWindow::lookAndFeelChanged() */

void __thiscall
juce::AlertWindow::lookAndFeelChanged(undefined8 param_1,undefined8 param_2,AlertWindow *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 *in_RAX;
  AlertWindow *pAVar6;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar7;
  undefined **ppuVar8;
  undefined8 extraout_RDX;
  AlertWindow AVar9;
  uint *in_R8;
  ulong in_R9;
  undefined8 uVar10;
  undefined8 *local_28;
  
  pAVar6 = this;
  do {
    ppuVar8 = *(undefined ***)(pAVar6 + 0x68);
    local_28 = in_RAX;
    if ((ppuVar8 != (undefined **)0x0) &&
       (pLVar7 = (LookAndFeel_V4 *)ppuVar8[2], pLVar7 != (LookAndFeel_V4 *)0x0)) goto LAB_0028a8e0;
    pAVar6 = *(AlertWindow **)(pAVar6 + 0x30);
  } while (pAVar6 != (AlertWindow *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0028a8b9 to 0028a8c2 has its CatchHandler @ 0028aa1a */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 0028a8c6 to 0028a8cd has its CatchHandler @ 0028aa07 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_0028a8e0:
  uVar4 = (**(code **)(*(long *)(pLVar7 + 0x38) + 0x20))(pLVar7 + 0x38);
  lVar3 = Component::currentlyFocusedComponent;
  AVar9 = (AlertWindow)((byte)uVar4 >> 3 & 1);
  if (this[0xee] == AVar9) goto LAB_0028a975;
  if (Component::currentlyFocusedComponent == 0) {
    local_28 = (undefined8 *)0x0;
  }
  else {
    local_28 = *(undefined8 **)(Component::currentlyFocusedComponent + 0xd8);
    if (local_28 == (undefined8 *)0x0) {
      local_28 = operator_new(0x18);
      *(undefined4 *)(local_28 + 1) = 0;
      ppuVar8 = &PTR__ReferenceCountedObject_00714b80;
      *local_28 = &PTR__ReferenceCountedObject_00714b80;
      local_28[2] = lVar3;
      LOCK();
      *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
      UNLOCK();
      plVar2 = *(long **)(lVar3 + 0xd8);
      *(undefined8 **)(lVar3 + 0xd8) = local_28;
      if (plVar2 != (long *)0x0) {
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar2 + 8))();
        }
        local_28 = *(undefined8 **)(lVar3 + 0xd8);
        if (local_28 == (undefined8 *)0x0) goto LAB_0028a92d;
      }
    }
    LOCK();
    *(int *)(local_28 + 1) = *(int *)(local_28 + 1) + 1;
    UNLOCK();
  }
LAB_0028a92d:
  this[0xee] = AVar9;
  if ((*(ushort *)(this + 0xe8) & 1) != 0) {
                    /* try { // try from 0028a943 to 0028a96c has its CatchHandler @ 0028aa22 */
    uVar5 = (**(code **)(*(long *)this + 0x1a0))(this);
    Component::addToDesktop((Component *)this,uVar5,0);
    Component::toFront((Component *)this,'\x01');
  }
  Component::sendLookAndFeelChange((Component *)this);
  detail::FocusRestorer::~FocusRestorer((FocusRestorer *)&local_28);
LAB_0028a975:
  uVar10 = TopLevelWindow::setDropShadowEnabled
                     ((TopLevelWindow *)this,
                      (TopLevelWindow)
                      ((byte)((ushort)uVar4 >> 8) & (byte)((*(ushort *)(this + 0xe8) & 4) >> 2)));
  updateLayout(uVar10,param_2,(Component *)this,0,extraout_RDX,ppuVar8,in_R8,in_R9);
  return;
}


