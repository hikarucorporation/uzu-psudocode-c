// Function : lookAndFeelChanged
// Namespace: juce:ScrollBar
// Entry    : 00264510
// Prototype: undefined lookAndFeelChanged(ScrollBar * this)
// Body     : 00264510 - 00264619


/* juce::ScrollBar::lookAndFeelChanged() */

void __thiscall juce::ScrollBar::lookAndFeelChanged(ScrollBar *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ScrollBar *pSVar5;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar6;
  long lVar7;
  undefined8 *puVar8;
  
  pSVar5 = this;
  do {
    if ((*(long *)(pSVar5 + 0x68) != 0) &&
       (pLVar6 = *(LookAndFeel_V4 **)(*(long *)(pSVar5 + 0x68) + 0x10),
       pLVar6 != (LookAndFeel_V4 *)0x0)) goto LAB_00264570;
    pSVar5 = *(ScrollBar **)(pSVar5 + 0x30);
  } while (pSVar5 != (ScrollBar *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00264549 to 00264552 has its CatchHandler @ 0026462d */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00264556 to 0026455d has its CatchHandler @ 0026461a */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  pLVar6 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_00264570:
  lVar7 = (**(code **)(*(long *)pLVar6 + 0x28))();
  plVar2 = *(long **)(this + 0x80);
  if (lVar7 == 0) {
    if (plVar2 == (long *)0x0) goto LAB_002645f7;
    *(undefined8 *)(this + 0x80) = 0;
    plVar4 = (long *)*plVar2;
    if (plVar4 != (long *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar4 + 8))();
      }
    }
    operator_delete(plVar2);
  }
  else if (plVar2 == (long *)0x0) {
    puVar8 = operator_new(0x10);
    *puVar8 = 0;
    puVar8[1] = lVar7;
    *(undefined8 **)(this + 0x80) = puVar8;
  }
  else {
    lVar3 = plVar2[1];
    plVar2[1] = lVar7;
    if (lVar3 == lVar7) goto LAB_002645f7;
  }
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
LAB_002645f7:
  if ((*(ushort *)(this + 0xe8) & 2) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00264614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x140))(this);
  return;
}


