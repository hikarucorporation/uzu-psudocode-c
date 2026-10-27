// Function : showPopupDisplay
// Namespace: juce:Slider:Pimpl
// Entry    : 002e6b10
// Prototype: undefined showPopupDisplay(Pimpl * this)
// Body     : 002e6b10 - 002e7056


/* juce::Slider::Pimpl::showPopupDisplay() */

void __thiscall juce::Slider::Pimpl::showPopupDisplay(Pimpl *this)

{
  int iVar1;
  undefined4 uVar2;
  Component *this_00;
  Component *pCVar3;
  long *plVar4;
  long lVar5;
  Desktop *pDVar6;
  LookAndFeel_V4 *pLVar7;
  undefined8 *puVar8;
  long *plVar9;
  int *piVar10;
  float local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 local_3c;
  Timer *local_38;
  
  if ((*(int *)(this + 0x20) == 8) || (*(long *)(this + 0x270) != 0)) {
    return;
  }
  this_00 = operator_new(0x150);
  plVar9 = *(long **)(this + 0x18);
  lVar5 = *(long *)(this + 0x278);
  *(undefined1 **)(this_00 + 8) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x10) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x18) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x20) = &DAT_0061ac58;
  *(undefined1 **)(this_00 + 0x28) = &DAT_0061ac58;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x50) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined8 *)(this_00 + 0x78) = 0;
  *(undefined8 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  *(undefined8 *)(this_00 + 0xa8) = 0;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  *(undefined8 *)(this_00 + 0xb8) = 0;
  *(undefined4 *)(this_00 + 0xc0) = 0;
  *(undefined8 *)(this_00 + 200) = 0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  *(undefined8 *)(this_00 + 0xd8) = 0;
  *(undefined8 *)(this_00 + 0xe0) = 0;
  *(undefined8 *)(this_00 + 0xe5) = 0;
  *(undefined ***)this_00 = &PTR__Component_0070bc68;
  *(undefined8 *)(this_00 + 0xf0) = 0;
  *(undefined8 *)(this_00 + 0xf8) = 0;
  *(undefined8 *)(this_00 + 0x100) = 0;
  *(undefined4 *)(this_00 + 0x108) = 0xf;
  this_00[0xea] = (Component)0x0;
  *(undefined2 *)(this_00 + 0xe8) = 8;
  pCVar3 = this_00;
  do {
    if ((*(long *)(pCVar3 + 0x68) != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(*(long *)(pCVar3 + 0x68) + 0x10),
       pLVar7 != (LookAndFeel_V4 *)0x0)) goto LAB_002e6c70;
    pCVar3 = *(Component **)(pCVar3 + 0x30);
  } while (pCVar3 != (Component *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e6c49 to 002e6c52 has its CatchHandler @ 002e708d */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002e6c56 to 002e6c5d has its CatchHandler @ 002e707a */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002e6c70:
                    /* try { // try from 002e6c78 to 002e6c7d has its CatchHandler @ 002e709c */
  (**(code **)(*(long *)(pLVar7 + 0x30) + 0x18))(pLVar7 + 0x30,this_00);
  local_38 = (Timer *)(this_00 + 0x110);
  Timer::Timer(local_38);
  *(undefined ***)this_00 = &PTR__PopupDisplayComponent_007102b8;
  *(undefined ***)(this_00 + 0x110) = &PTR__PopupDisplayComponent_00710478;
  *(long **)(this_00 + 0x138) = plVar9;
  plVar4 = plVar9;
  do {
    if ((plVar4[0xd] != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(plVar4[0xd] + 0x10), pLVar7 != (LookAndFeel_V4 *)0x0))
    goto LAB_002e6d20;
    plVar4 = (long *)plVar4[6];
  } while (plVar4 != (long *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e6cf9 to 002e6d02 has its CatchHandler @ 002e7078 */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002e6d06 to 002e6d0d has its CatchHandler @ 002e7076 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002e6d20:
                    /* try { // try from 002e6d28 to 002e6d31 has its CatchHandler @ 002e7097 */
  (**(code **)(*(long *)(pLVar7 + 0x58) + 0x58))(this_00 + 0x140,pLVar7 + 0x58,plVar9);
  *(undefined1 **)(this_00 + 0x148) = &DAT_0061ac58;
  if (lVar5 == 0) {
                    /* try { // try from 002e6d3e to 002e6d77 has its CatchHandler @ 002e7095 */
    local_50 = Component::getApproximateScaleFactorForComponent(plVar9);
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    local_3c = 0;
    local_40 = local_50;
    Component::setTransform(this_00,(float *)&local_50);
  }
                    /* try { // try from 002e6d78 to 002e6d84 has its CatchHandler @ 002e70a1 */
  Component::setAlwaysOnTop(this_00,1);
  lVar5 = *(long *)(this_00 + 0x138);
  do {
    if ((*(long *)(lVar5 + 0x68) != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(*(long *)(lVar5 + 0x68) + 0x10),
       pLVar7 != (LookAndFeel_V4 *)0x0)) goto LAB_002e6de0;
    lVar5 = *(long *)(lVar5 + 0x30);
  } while (lVar5 != 0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e6db9 to 002e6dc2 has its CatchHandler @ 002e7074 */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002e6dc6 to 002e6dcd has its CatchHandler @ 002e7072 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_002e6de0:
                    /* try { // try from 002e6de8 to 002e6ded has its CatchHandler @ 002e70a1 */
  uVar2 = (**(code **)(*(long *)(pLVar7 + 0x58) + 0x60))(pLVar7 + 0x58,plVar9);
  *(undefined4 *)(this_00 + 0x108) = uVar2;
  do {
    if ((plVar9[0xd] != 0) &&
       (pLVar7 = *(LookAndFeel_V4 **)(plVar9[0xd] + 0x10), pLVar7 != (LookAndFeel_V4 *)0x0)) {
      lVar5 = *(long *)(this_00 + 0x68);
      goto joined_r0x002e6e69;
    }
    plVar9 = (long *)plVar9[6];
  } while (plVar9 != (long *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e6e3b to 002e6e44 has its CatchHandler @ 002e706a */
    pDVar6 = operator_new(0x1d0);
                    /* try { // try from 002e6e48 to 002e6e4f has its CatchHandler @ 002e7057 */
    Desktop::Desktop(pDVar6);
    Desktop::instance = pDVar6;
  }
  pLVar7 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  lVar5 = *(long *)(this_00 + 0x68);
joined_r0x002e6e69:
  if (lVar5 == 0) {
    if (pLVar7 == (LookAndFeel_V4 *)0x0) goto LAB_002e6ea9;
  }
  else if (*(LookAndFeel_V4 **)(lVar5 + 0x10) == pLVar7) goto LAB_002e6ea9;
  puVar8 = *(undefined8 **)(pLVar7 + 0x120);
  if (puVar8 == (undefined8 *)0x0) {
                    /* try { // try from 002e6fe7 to 002e6ff0 has its CatchHandler @ 002e70a1 */
    puVar8 = operator_new(0x18);
    *(undefined4 *)(puVar8 + 1) = 0;
    *puVar8 = &PTR__ReferenceCountedObject_00710ff8;
    puVar8[2] = pLVar7;
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
    plVar9 = *(long **)(pLVar7 + 0x120);
    *(undefined8 **)(pLVar7 + 0x120) = puVar8;
    if (plVar9 == (long *)0x0) goto LAB_002e6e82;
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
    puVar8 = *(undefined8 **)(pLVar7 + 0x120);
    if (puVar8 != (undefined8 *)0x0) goto LAB_002e6e82;
    plVar9 = *(long **)(this_00 + 0x68);
    *(undefined8 *)(this_00 + 0x68) = 0;
  }
  else {
LAB_002e6e82:
    LOCK();
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) + 1;
    UNLOCK();
    plVar9 = *(long **)(this_00 + 0x68);
    *(undefined8 **)(this_00 + 0x68) = puVar8;
  }
  if (plVar9 != (long *)0x0) {
    LOCK();
    plVar4 = plVar9 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)(*plVar9 + 8))();
    }
  }
                    /* try { // try from 002e6ea1 to 002e6ea8 has its CatchHandler @ 002e70a1 */
  Component::sendLookAndFeelChange(this_00);
LAB_002e6ea9:
  pCVar3 = *(Component **)(this + 0x270);
  *(Component **)(this + 0x270) = this_00;
  if (pCVar3 != (Component *)0x0) {
    if (*(long *)(*(long *)(pCVar3 + 0x138) + 0x1a0) != 0) {
      clock_gettime(1,(timespec *)&local_50);
      *(double *)(*(long *)(*(long *)(pCVar3 + 0x138) + 0x1a0) + 0x248) =
           (double)(CONCAT44(uStack_44,uStack_48) / 1000 + CONCAT44(uStack_4c,local_50) * 1000000) *
           DAT_00651e50;
    }
    piVar10 = (int *)(*(long *)(pCVar3 + 0x148) + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      iVar1 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar10);
      }
    }
    plVar9 = *(long **)(pCVar3 + 0x140);
    if (plVar9 != (long *)0x0) {
      LOCK();
      plVar4 = plVar9 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)(*plVar9 + 8))();
      }
    }
    Timer::~Timer((Timer *)(pCVar3 + 0x110));
    Component::~Component(pCVar3);
    operator_delete(pCVar3);
    this_00 = *(Component **)(this + 0x270);
  }
  if (*(Component **)(this + 0x278) == (Component *)0x0) {
    Component::addToDesktop(this_00,0x406,0);
  }
  else if (this_00 != (Component *)0x0) {
    Component::addChildComponent(*(Component **)(this + 0x278),this_00,0xffffffff);
  }
  updatePopupDisplay(this);
  Component::setVisible(*(Component **)(this + 0x270),1);
  return;
}


