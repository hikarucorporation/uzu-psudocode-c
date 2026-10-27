// Function : updateThumbPosition
// Namespace: juce:ScrollBar
// Entry    : 00242fa0
// Prototype: undefined updateThumbPosition(ScrollBar * this)
// Body     : 00242fa0 - 002431c9


/* juce::ScrollBar::updateThumbPosition() */

void __thiscall juce::ScrollBar::updateThumbPosition(ScrollBar *this)

{
  double dVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ScrollBar *pSVar5;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  pSVar5 = this;
  do {
    if ((*(long *)(pSVar5 + 0x68) != 0) &&
       (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(pSVar5 + 0x68) + 0x10),
       pLVar6 != (LookAndFeel_V4 *)0x0)) goto LAB_00243000;
    pSVar5 = *(ScrollBar **)(pSVar5 + 0x30);
  } while (pSVar5 != (ScrollBar *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00242fd9 to 00242fe2 has its CatchHandler @ 002431dd */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00242fe6 to 00242fed has its CatchHandler @ 002431ca */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00243000:
  iVar3 = (**(code **)(*(long *)pLVar6 + 0x30))(pLVar6,this);
  dVar14 = *(double *)(this + 0x130) - *(double *)(this + 0x128);
  if (dVar14 <= 0.0) {
    iVar10 = *(int *)(this + 0x15c);
    dVar1 = (double)iVar10;
    dVar16 = *(double *)(this + 0x138);
    dVar15 = *(double *)(this + 0x140) - dVar16;
  }
  else {
    dVar16 = *(double *)(this + 0x138);
    dVar15 = *(double *)(this + 0x140) - dVar16;
    iVar10 = *(int *)(this + 0x15c);
    dVar1 = ((double)iVar10 * dVar15) / dVar14;
  }
  iVar12 = iVar10 + -1;
  if (iVar3 <= iVar10 + -1) {
    iVar12 = iVar3;
  }
  iVar9 = SUB84(dVar1 + DAT_005d9098,0);
  if (iVar3 <= iVar9) {
    iVar12 = iVar9;
  }
  if (iVar10 < iVar12) {
    iVar12 = iVar10;
  }
  iVar3 = *(int *)(this + 0x158);
  if (dVar15 < dVar14) {
    iVar3 = iVar3 + SUB84(((double)(iVar10 - iVar12) * (dVar16 - *(double *)(this + 0x128))) /
                          (dVar14 - dVar15) + DAT_005d9098,0);
  }
  if (this[0x17f] == (ScrollBar)0x0) {
    bVar2 = 0;
  }
  else {
    bVar7 = 0.0 < dVar15;
    if (dVar14 <= dVar15) {
      bVar7 = this[0x17e] == (ScrollBar)0x0;
    }
    bVar2 = this[0x17e] == (ScrollBar)0x0 | bVar7;
  }
  Component::setVisible((Component *)this,bVar2);
  iVar10 = *(int *)(this + 0x160);
  if ((iVar10 == iVar3) && (*(int *)(this + 0x164) == iVar12)) {
    return;
  }
  iVar9 = iVar10;
  if (iVar3 < iVar10) {
    iVar9 = iVar3;
  }
  uVar8 = iVar9 - 4;
  iVar10 = *(int *)(this + 0x164) + iVar10;
  if (iVar10 < iVar3 + iVar12) {
    iVar10 = iVar3 + iVar12;
  }
  iVar10 = iVar10 + 8;
  if (this[0x17c] == (ScrollBar)0x0) {
    uVar4 = 0;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    if (*(int *)(this + 0x40) < iVar10) {
      iVar10 = *(int *)(this + 0x40);
    }
    iVar10 = iVar10 - uVar4;
    if ((((iVar10 < 0) || (iVar9 = *(int *)(this + 0x44), iVar9 < 0)) || (iVar10 == 0)) ||
       (iVar9 == 0)) goto LAB_002431b6;
    uVar11 = CONCAT44(iVar9,iVar10);
    uVar13 = (ulong)uVar4;
  }
  else {
    iVar9 = *(int *)(this + 0x40);
    uVar4 = 0;
    if (-1 < (int)uVar8) {
      uVar4 = uVar8;
    }
    if (iVar9 < 0) goto LAB_002431b6;
    if (*(int *)(this + 0x44) < iVar10) {
      iVar10 = *(int *)(this + 0x44);
    }
    iVar10 = iVar10 - uVar4;
    if (((iVar10 < 0) || (iVar9 == 0)) || (iVar10 == 0)) goto LAB_002431b6;
    uVar11 = CONCAT44(iVar10,iVar9);
    uVar13 = (ulong)uVar4 << 0x20;
  }
  Component::internalRepaintUnchecked((long)this,uVar13,uVar11,'\0');
LAB_002431b6:
  *(int *)(this + 0x160) = iVar3;
  *(int *)(this + 0x164) = iVar12;
  return;
}


