// Function : inputAttemptWhenModal
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 00280770
// Prototype: undefined inputAttemptWhenModal(MenuWindow * this)
// Body     : 00280770 - 00280bd5


/* juce::PopupMenu::HelperClasses::MenuWindow::inputAttemptWhenModal() */

void __thiscall juce::PopupMenu::HelperClasses::MenuWindow::inputAttemptWhenModal(MenuWindow *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  MouseSourceState *pMVar4;
  Component *pCVar5;
  Component *pCVar6;
  bool bVar7;
  ulong uVar8;
  Component *pCVar9;
  long *plVar10;
  Desktop *this_00;
  long *plVar11;
  long lVar12;
  MenuWindow *pMVar13;
  MenuWindow *pMVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 local_48;
  
  plVar10 = *(long **)(this + 0xd8);
  if (plVar10 == (long *)0x0) {
    plVar10 = operator_new(0x18);
    *(undefined4 *)(plVar10 + 1) = 0;
    *plVar10 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar10[2] = (long)this;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    plVar15 = *(long **)(this + 0xd8);
    *(long **)(this + 0xd8) = plVar10;
    if (plVar15 == (long *)0x0) goto LAB_00280791;
    LOCK();
    plVar10 = plVar15 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)(*plVar15 + 8))();
    }
    plVar10 = *(long **)(this + 0xd8);
    if (plVar10 != (long *)0x0) goto LAB_00280791;
    if (*(int *)(this + 0x1c4) != 0) {
      pMVar4 = (MouseSourceState *)**(undefined8 **)(this + 0x1b8);
      uVar16 = detail::MouseInputSourceImpl::getScreenPosition
                         (*(MouseInputSourceImpl **)(pMVar4 + 0x30));
      uVar8 = windowIsStillValid(*(MenuWindow **)(pMVar4 + 0x28));
      if ((char)uVar8 == '\0') {
        return;
      }
      iVar1 = *(int *)(pMVar4 + 0x10);
      *(undefined4 *)(pMVar4 + 0x10) = 0x32;
      if (iVar1 == 0) {
                    /* try { // try from 00280b7f to 00280b86 has its CatchHandler @ 00280bd6 */
        Timer::TimerThread::addTimer(*(TimerThread **)(pMVar4 + 0x18),(long)pMVar4);
      }
      else {
        Timer::TimerThread::resetTimerCounter(*(TimerThread **)(pMVar4 + 0x18),(long)pMVar4);
      }
      local_48._0_4_ = (float)uVar16;
      local_48._4_4_ = (float)((ulong)uVar16 >> 0x20);
      MouseSourceState::handleMousePosition
                (pMVar4,(ulong)((double)(float)local_48 + DAT_005d9098) & 0xffffffff |
                        (long)((double)local_48._4_4_ + DAT_005d9098) << 0x20);
      return;
    }
    local_48 = (long *)0x0;
  }
  else {
LAB_00280791:
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    iVar1 = *(int *)(this + 0x1c4);
    local_48 = plVar10;
    if ((long)iVar1 != 0) {
      lVar3 = *(long *)(this + 0x1b8);
      lVar12 = 0;
      do {
        pMVar4 = *(MouseSourceState **)(lVar3 + lVar12);
        uVar16 = detail::MouseInputSourceImpl::getScreenPosition
                           (*(MouseInputSourceImpl **)(pMVar4 + 0x30));
                    /* try { // try from 002807d6 to 002807da has its CatchHandler @ 00280bf7 */
        uVar8 = windowIsStillValid(*(MenuWindow **)(pMVar4 + 0x28));
        if ((char)uVar8 != '\0') {
          iVar2 = *(int *)(pMVar4 + 0x10);
          *(undefined4 *)(pMVar4 + 0x10) = 0x32;
          if (iVar2 == 0) {
                    /* try { // try from 002807fa to 00280801 has its CatchHandler @ 00280bef */
            Timer::TimerThread::addTimer(*(TimerThread **)(pMVar4 + 0x18),(long)pMVar4);
          }
          else {
            Timer::TimerThread::resetTimerCounter(*(TimerThread **)(pMVar4 + 0x18),(long)pMVar4);
          }
          local_48._0_4_ = (float)uVar16;
          local_48._4_4_ = (float)((ulong)uVar16 >> 0x20);
                    /* try { // try from 0028083b to 00280842 has its CatchHandler @ 00280bf7 */
          MouseSourceState::handleMousePosition
                    (pMVar4,(ulong)((double)(float)local_48 + DAT_005d9098) & 0xffffffff |
                            (long)((double)local_48._4_4_ + DAT_005d9098) << 0x20);
        }
        if (plVar10[2] == 0) goto LAB_00280b45;
        lVar12 = lVar12 + 8;
      } while ((long)iVar1 * 8 != lVar12);
    }
  }
  pMVar13 = this;
  do {
    pMVar14 = pMVar13;
    pMVar13 = *(MenuWindow **)(pMVar14 + 0xf0);
  } while (*(MenuWindow **)(pMVar14 + 0xf0) != (MenuWindow *)0x0);
  do {
    if ((*(ushort *)(pMVar14 + 0xe8) & 2) == 0) break;
    if ((long)*(int *)(pMVar14 + 0x1c4) != 0) {
      plVar10 = *(long **)(pMVar14 + 0x1b8);
      plVar15 = plVar10 + *(int *)(pMVar14 + 0x1c4);
      do {
        pCVar5 = *(Component **)(*plVar10 + 0x28);
        uVar16 = detail::MouseInputSourceImpl::getScreenPosition
                           (*(MouseInputSourceImpl **)(*plVar10 + 0x30));
        pCVar6 = pCVar5;
        do {
          pCVar9 = pCVar6;
          pCVar6 = *(Component **)(pCVar9 + 0x30);
        } while (*(Component **)(pCVar9 + 0x30) != (Component *)0x0);
                    /* try { // try from 002808fc to 00280955 has its CatchHandler @ 00280c00 */
        uVar16 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
                           (uVar16,(long *)pCVar9);
        if (pCVar9 != pCVar5) {
          uVar16 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                             (uVar16,(long)pCVar9,(long *)pCVar5);
        }
        bVar7 = Component::reallyContains
                          (CONCAT44((float)SUB84((double)(float)((ulong)uVar16 >> 0x20) +
                                                 DAT_005d9098,0),
                                    (float)SUB84((double)(float)uVar16 + DAT_005d9098,0)),pCVar5);
        if (bVar7) goto LAB_00280b3c;
        plVar10 = plVar10 + 1;
      } while (plVar10 != plVar15);
    }
    pMVar14 = *(MenuWindow **)(pMVar14 + 400);
  } while (pMVar14 != (MenuWindow *)0x0);
  if (*(long *)(this + 0x160) != 0) {
    plVar10 = *(long **)(*(long *)(this + 0x160) + 0x10);
    if (plVar10 != (long *)0x0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00280a54 to 00280a5d has its CatchHandler @ 00280bed */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 00280a61 to 00280a68 has its CatchHandler @ 00280bde */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      uVar16 = detail::MouseInputSourceImpl::getScreenPosition
                         ((MouseInputSourceImpl *)
                          **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28));
      plVar15 = plVar10;
      do {
        plVar11 = plVar15;
        plVar15 = (long *)plVar11[6];
      } while ((long *)plVar11[6] != (long *)0x0);
                    /* try { // try from 00280a9c to 00280b0f has its CatchHandler @ 00280bed */
      uVar16 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>(uVar16,plVar11);
      if (plVar11 != plVar10) {
        uVar16 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                           (uVar16,(long)plVar11,plVar10);
      }
      bVar7 = Component::reallyContains
                        (CONCAT44((float)SUB84((double)(float)((ulong)uVar16 >> 0x20) + DAT_005d9098
                                               ,0),
                                  (float)SUB84((double)(float)uVar16 + DAT_005d9098,0)),
                         *(Component **)(*(long *)(this + 0x160) + 0x10));
      if (bVar7) {
        Component::postCommandMessage((Component *)this,0x6287345f);
        goto LAB_00280b3c;
      }
    }
  }
  do {
    pMVar13 = this;
    this = *(MenuWindow **)(pMVar13 + 0xf0);
  } while (this != (MenuWindow *)0x0);
                    /* try { // try from 00280b30 to 00280b3b has its CatchHandler @ 00280beb */
  hide(pMVar13,0,'\x01');
LAB_00280b3c:
  if (local_48 != (long *)0x0) {
LAB_00280b45:
    LOCK();
    plVar10 = local_48 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00280b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*local_48 + 8))(local_48);
      return;
    }
  }
  return;
}


