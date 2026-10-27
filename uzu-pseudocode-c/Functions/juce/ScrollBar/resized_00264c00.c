// Function : resized
// Namespace: juce:ScrollBar
// Entry    : 00264c00
// Prototype: undefined resized(ScrollBar * this)
// Body     : 00264c00 - 00264fc5


/* juce::ScrollBar::resized() */

void __thiscall juce::ScrollBar::resized(ScrollBar *this)

{
  ScrollBar SVar1;
  undefined4 uVar2;
  Button *pBVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined1 *in_RAX;
  ScrollBar *pSVar8;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar9;
  Button *pBVar10;
  int iVar11;
  int iVar12;
  Component *pCVar13;
  int iVar14;
  int iVar15;
  undefined1 *local_38;
  
  iVar7 = *(int *)(this + (ulong)(byte)this[0x17c] * 4 + 0x40);
  pSVar8 = this;
  do {
    local_38 = in_RAX;
    if ((*(long *)(pSVar8 + 0x68) != 0) &&
       (pLVar9 = *(LookAndFeel_V4 **)(*(long *)(pSVar8 + 0x68) + 0x10),
       pLVar9 != (LookAndFeel_V4 *)0x0)) goto LAB_00264c70;
    pSVar8 = *(ScrollBar **)(pSVar8 + 0x30);
  } while (pSVar8 != (ScrollBar *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00264c49 to 00264c52 has its CatchHandler @ 00264fee */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00264c56 to 00264c5d has its CatchHandler @ 00264fdb */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar9 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00264c70:
  cVar5 = (**(code **)(*(long *)pLVar9 + 0x10))(pLVar9);
  pBVar3 = *(Button **)(this + 0x180);
  if (cVar5 == '\0') {
    *(undefined8 *)(this + 0x180) = 0;
    if (pBVar3 != (Button *)0x0) {
      Button::~Button(pBVar3);
      operator_delete(pBVar3);
    }
    pBVar3 = *(Button **)(this + 0x188);
    *(undefined8 *)(this + 0x188) = 0;
    iVar14 = 0;
    if (pBVar3 != (Button *)0x0) {
      Button::~Button(pBVar3);
      operator_delete(pBVar3);
    }
  }
  else {
    if (pBVar3 == (Button *)0x0) {
      pBVar10 = operator_new(0x208);
      SVar1 = this[0x17c];
      local_38 = &DAT_0061ac58;
                    /* try { // try from 00264cb0 to 00264cba has its CatchHandler @ 00264fc8 */
      Button::Button(pBVar10,(long *)&local_38);
      pBVar3 = *(Button **)(this + 0x180);
      *(undefined ***)pBVar10 = &PTR__Button_0070e3a8;
      *(undefined ***)(pBVar10 + 0xf0) = &PTR__ScrollbarButton_0070e588;
      *(uint *)(pBVar10 + 0x1f8) = (uint)(SVar1 == (ScrollBar)0x0) * 3;
      *(ScrollBar **)(pBVar10 + 0x200) = this;
      pBVar10[0xea] = pBVar10[0xea];
      *(ushort *)(pBVar10 + 0xe8) = *(ushort *)(pBVar10 + 0xe8) & 0xffdf;
      *(Button **)(this + 0x180) = pBVar10;
      if (pBVar3 != (Button *)0x0) {
        Button::~Button(pBVar3);
        operator_delete(pBVar3);
      }
      pBVar10 = operator_new(0x208);
      SVar1 = this[0x17c];
      local_38 = &DAT_0061ac58;
                    /* try { // try from 00264d55 to 00264d5f has its CatchHandler @ 00264fc6 */
      Button::Button(pBVar10,(long *)&local_38);
      pBVar3 = *(Button **)(this + 0x188);
      *(undefined ***)pBVar10 = &PTR__Button_0070e3a8;
      *(undefined ***)(pBVar10 + 0xf0) = &PTR__ScrollbarButton_0070e588;
      *(uint *)(pBVar10 + 0x1f8) = 2 - (uint)(SVar1 == (ScrollBar)0x0);
      *(ScrollBar **)(pBVar10 + 0x200) = this;
      pBVar10[0xea] = pBVar10[0xea];
      *(ushort *)(pBVar10 + 0xe8) = (ushort)*(undefined3 *)(pBVar10 + 0xe8) & 0xffdf;
      *(Button **)(this + 0x188) = pBVar10;
      if (pBVar3 != (Button *)0x0) {
        Button::~Button(pBVar3);
        operator_delete(pBVar3);
      }
      pCVar13 = *(Component **)(this + 0x180);
      if (pCVar13 != (Component *)0x0) {
        (**(code **)(*(long *)pCVar13 + 0x60))(pCVar13,1);
        Component::addChildComponent((Component *)this,pCVar13,0xffffffff);
      }
      pCVar13 = *(Component **)(this + 0x188);
      if (pCVar13 != (Component *)0x0) {
        (**(code **)(*(long *)pCVar13 + 0x60))(pCVar13,1);
        Component::addChildComponent((Component *)this,pCVar13,0xffffffff);
      }
      lVar4 = *(long *)(this + 0x180);
      if (lVar4 != 0) {
        uVar2 = *(undefined4 *)(this + 0x170);
        iVar14 = *(int *)(this + 0x174);
        iVar6 = *(int *)(this + 0x178);
        *(undefined4 *)(lVar4 + 0x1a0) = uVar2;
        *(int *)(lVar4 + 0x1a4) = iVar14;
        if (iVar14 <= iVar6) {
          iVar6 = iVar14;
        }
        *(int *)(lVar4 + 0x1a8) = iVar6;
        lVar4 = *(long *)(this + 0x188);
        *(undefined4 *)(lVar4 + 0x1a0) = uVar2;
        *(int *)(lVar4 + 0x1a4) = iVar14;
        *(int *)(lVar4 + 0x1a8) = iVar6;
      }
    }
    iVar6 = (**(code **)(*(long *)pLVar9 + 0x40))(pLVar9,this);
    iVar14 = iVar7 / 2;
    if (iVar6 <= iVar7 / 2) {
      iVar14 = iVar6;
    }
  }
  iVar6 = (**(code **)(*(long *)pLVar9 + 0x30))(pLVar9);
  if (iVar7 < iVar6 + 0x20) {
    iVar6 = 0;
    iVar7 = iVar7 / 2;
  }
  else {
    iVar6 = iVar7 + iVar14 * -2;
    iVar7 = iVar14;
  }
  *(int *)(this + 0x158) = iVar7;
  *(int *)(this + 0x15c) = iVar6;
  pCVar13 = *(Component **)(this + 0x180);
  if (pCVar13 != (Component *)0x0) {
    iVar7 = *(int *)(this + 0x40);
    iVar6 = *(int *)(this + 0x44);
    if (this[0x17c] == (ScrollBar)0x0) {
      iVar15 = iVar14;
      if (iVar7 < iVar14) {
        iVar15 = iVar7;
      }
      Component::setBounds(pCVar13,0,0,iVar15,iVar6);
      pCVar13 = *(Component **)(this + 0x188);
      iVar11 = iVar7 - iVar15;
      if (iVar14 <= iVar7 - iVar15) {
        iVar11 = iVar14;
      }
      iVar15 = iVar7 - iVar11;
      iVar14 = 0;
    }
    else {
      iVar15 = iVar14;
      if (iVar6 < iVar14) {
        iVar15 = iVar6;
      }
      Component::setBounds(pCVar13,0,0,iVar7,iVar15);
      pCVar13 = *(Component **)(this + 0x188);
      iVar12 = iVar6 - iVar15;
      if (iVar14 <= iVar6 - iVar15) {
        iVar12 = iVar14;
      }
      iVar14 = iVar6 - iVar12;
      iVar15 = 0;
      iVar11 = iVar7;
      iVar6 = iVar12;
    }
    Component::setBounds(pCVar13,iVar15,iVar14,iVar11,iVar6);
  }
  updateThumbPosition(this);
  return;
}


