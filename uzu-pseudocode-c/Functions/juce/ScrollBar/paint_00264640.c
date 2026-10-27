// Function : paint
// Namespace: juce:ScrollBar
// Entry    : 00264640
// Prototype: undefined paint(ScrollBar * this, undefined8 param_1)
// Body     : 00264640 - 00264910


/* juce::ScrollBar::paint(juce::Graphics&) */

void __thiscall juce::ScrollBar::paint(ScrollBar *this,undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  undefined1 uVar6;
  int iVar7;
  ScrollBar *pSVar8;
  LookAndFeel_V4 *pLVar9;
  long lVar10;
  Desktop *pDVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  
  iVar16 = *(int *)(this + 0x15c);
  if (iVar16 < 1) {
    return;
  }
  pSVar8 = this;
  do {
    if ((*(long *)(pSVar8 + 0x68) != 0) &&
       (pLVar9 = *(LookAndFeel_V4 **)(*(long *)(pSVar8 + 0x68) + 0x10),
       pLVar9 != (LookAndFeel_V4 *)0x0)) goto LAB_002646c7;
    pSVar8 = *(ScrollBar **)(pSVar8 + 0x30);
  } while (pSVar8 != (ScrollBar *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00264699 to 002646a2 has its CatchHandler @ 00264939 */
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 002646a6 to 002646ad has its CatchHandler @ 00264926 */
    Desktop::Desktop(pDVar11);
    Desktop::instance = pDVar11;
  }
  pLVar9 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  iVar16 = *(int *)(this + 0x15c);
LAB_002646c7:
  iVar7 = (**(code **)(*(long *)pLVar9 + 0x30))(pLVar9);
  uVar12 = 0;
  if (iVar7 < iVar16) {
    uVar12 = *(undefined4 *)(this + 0x164);
  }
  uVar13 = *(undefined4 *)(this + 0x158);
  if (this[0x17c] == (ScrollBar)0x0) {
    uVar1 = *(undefined4 *)(this + 0x44);
    uVar18 = *(undefined4 *)(this + 0x15c);
    uVar2 = *(undefined4 *)(this + 0x160);
    bVar5 = Component::isMouseOver((Component *)this,'\0');
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar11 = operator_new(0x1d0);
                    /* try { // try from 002648aa to 002648b1 has its CatchHandler @ 00264911 */
      Desktop::Desktop(pDVar11);
      lVar14 = *(long *)(pDVar11 + 0x40);
      lVar10 = (long)*(int *)(lVar14 + 0x44);
      Desktop::instance = pDVar11;
      if (lVar10 == 0) goto LAB_002648ce;
LAB_002647e2:
      lVar15 = 0;
      do {
        lVar3 = *(long *)(*(long *)(lVar14 + 0x38) + lVar15);
        lVar4 = *(long *)(lVar3 + 0x48);
        if (((lVar4 != 0) && (*(ScrollBar **)(lVar4 + 0x10) == this)) &&
           ((*(ushort *)(lVar3 + 0x3c) & 0x1f0) != 0)) {
          uVar6 = 1;
          goto LAB_002648e0;
        }
        lVar15 = lVar15 + 8;
      } while (lVar10 * 8 != lVar15);
      uVar6 = 0;
    }
    else {
      lVar14 = *(long *)(Desktop::instance + 0x40);
      lVar10 = (long)*(int *)(lVar14 + 0x44);
      if (lVar10 != 0) goto LAB_002647e2;
LAB_002648ce:
      uVar6 = 0;
    }
LAB_002648e0:
    lVar14 = *(long *)pLVar9;
    uVar17 = 0;
    uVar19 = 0;
    goto LAB_002648fe;
  }
  uVar18 = *(undefined4 *)(this + 0x40);
  uVar1 = *(undefined4 *)(this + 0x15c);
  uVar2 = *(undefined4 *)(this + 0x160);
  bVar5 = Component::isMouseOver((Component *)this,'\0');
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 00264844 to 0026484b has its CatchHandler @ 00264913 */
    Desktop::Desktop(pDVar11);
    lVar14 = *(long *)(pDVar11 + 0x40);
    lVar10 = (long)*(int *)(lVar14 + 0x44);
    Desktop::instance = pDVar11;
    if (lVar10 == 0) goto LAB_00264864;
LAB_0026474b:
    lVar15 = 0;
    do {
      lVar3 = *(long *)(*(long *)(lVar14 + 0x38) + lVar15);
      lVar4 = *(long *)(lVar3 + 0x48);
      if (((lVar4 != 0) && (*(ScrollBar **)(lVar4 + 0x10) == this)) &&
         ((*(ushort *)(lVar3 + 0x3c) & 0x1f0) != 0)) {
        uVar6 = 1;
        goto LAB_00264869;
      }
      lVar15 = lVar15 + 8;
    } while (lVar10 * 8 != lVar15);
    uVar6 = 0;
  }
  else {
    lVar14 = *(long *)(Desktop::instance + 0x40);
    lVar10 = (long)*(int *)(lVar14 + 0x44);
    if (lVar10 != 0) goto LAB_0026474b;
LAB_00264864:
    uVar6 = 0;
  }
LAB_00264869:
  lVar14 = *(long *)pLVar9;
  uVar19 = 1;
  uVar17 = uVar13;
  uVar13 = 0;
LAB_002648fe:
  (**(code **)(lVar14 + 0x20))
            (pLVar9,param_1,this,uVar13,uVar17,uVar18,uVar1,uVar19,uVar2,uVar12,bVar5,uVar6);
  return;
}


