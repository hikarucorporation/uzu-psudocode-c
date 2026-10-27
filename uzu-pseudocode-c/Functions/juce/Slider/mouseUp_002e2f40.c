// Function : mouseUp
// Namespace: juce:Slider
// Entry    : 002e2f40
// Prototype: undefined mouseUp(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, long param_4)
// Body     : 002e2f40 - 002e347e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::Slider::mouseUp(juce::MouseEvent const&) */

void __cdecl
juce::Slider::mouseUp(undefined8 param_1_00,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  Pimpl *this;
  long *plVar3;
  Component *this_00;
  Button *pBVar4;
  undefined1 auVar5 [16];
  long lVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar12;
  double dVar13;
  ulong uVar14;
  timespec local_58;
  double local_48;
  ulong uStack_40;
  double local_38;
  undefined8 uStack_30;
  double local_28;
  ulong uStack_20;
  
  this = *(Pimpl **)(param_4 + 0x1a0);
  lVar6 = *(long *)(this + 0x18);
  do {
    if ((*(ushort *)(lVar6 + 0xe8) & 0x8000) != 0) goto LAB_002e2fab;
    lVar6 = *(long *)(lVar6 + 0x30);
  } while (lVar6 != 0);
  if (((this[0x239] == (Pimpl)0x0) ||
      (dVar12 = *(double *)(this + 0x100),
      dVar12 < *(double *)(this + 0xf8) || dVar12 == *(double *)(this + 0xf8))) ||
     ((*(int *)(this + 0x20) == 8 && (this[0x23a] == (Pimpl)0x0)))) {
LAB_002e2fab:
    lVar6 = *(long *)(this + 0x270);
    if (lVar6 != 0) {
      iVar2 = *(int *)(lVar6 + 0x120);
      *(undefined4 *)(lVar6 + 0x120) = 200;
      if (iVar2 == 0) {
                    /* try { // try from 002e2fdf to 002e2fe3 has its CatchHandler @ 002e34a7 */
        Timer::TimerThread::addTimer(*(TimerThread **)(lVar6 + 0x128),lVar6 + 0x110);
      }
      else {
        Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar6 + 0x128),lVar6 + 0x110);
      }
    }
    goto LAB_002e2fe4;
  }
  Pimpl::restoreMouseIfHidden(dVar12,param_2,param_3,this);
  if (this[0x235] == (Pimpl)0x0) goto LAB_002e3186;
  local_48 = *(double *)(this + 400);
  uStack_40 = 0;
  (**(code **)(**(long **)(this + 0x50) + 0x10))(&local_58);
  plVar3 = &local_58.tv_nsec;
                    /* try { // try from 002e305c to 002e3061 has its CatchHandler @ 002e349f */
  local_38 = (double)(**(code **)(local_58.tv_sec + 0x20))(plVar3);
  dVar12 = (double)((ulong)local_48 & _DAT_005d91b0);
  uStack_30 = uStack_40 & _UNK_005d91b8;
  if (dVar12 == DAT_005d94e0) {
LAB_002e30f0:
    uStack_30 = CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
                    /* try { // try from 002e30fa to 002e30ff has its CatchHandler @ 002e348f */
    (**(code **)(local_58.tv_sec + 0x58))(plVar3);
    if ((local_48 == local_38) && (!NAN(local_48) && !NAN(local_38))) goto LAB_002e3186;
LAB_002e3110:
    (**(code **)(**(long **)(this + 0x18) + 0x1a8))();
    LOCK();
    bVar9 = *(int *)(*(long *)(this + 8) + 0x18) == 0;
    if (bVar9) {
      *(int *)(*(long *)(this + 8) + 0x18) = 1;
    }
    UNLOCK();
    if (!bVar9) goto LAB_002e3186;
    plVar3 = *(long **)(this + 8);
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      LOCK();
      *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
      UNLOCK();
      plVar3 = *(long **)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar3);
      plVar3 = *(long **)(this + 0x200);
      *(undefined8 *)(this + 0x200) = 0;
    }
  }
  else {
    dVar13 = (double)(_DAT_005d91b0 & (ulong)local_38);
    uVar14 = _UNK_005d91b8 & CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
    if (dVar13 == DAT_005d94e0) goto LAB_002e30f0;
    local_48 = (double)((ulong)(local_48 - local_38) & _DAT_005d91b0);
    uStack_40 = uStack_40 & _UNK_005d91b8;
    local_38 = dVar12;
    local_28 = dVar13;
    uStack_20 = uVar14;
    if (DAT_005db368 < local_48) {
                    /* try { // try from 002e30ca to 002e30ce has its CatchHandler @ 002e3487 */
      (**(code **)(local_58.tv_sec + 0x58))(plVar3);
      uVar10 = SUB84(local_28,0);
      uVar11 = (undefined4)((ulong)local_28 >> 0x20);
      if (local_28 <= local_38) {
        uVar10 = SUB84(local_38,0);
        uVar11 = (undefined4)((ulong)local_38 >> 0x20);
      }
      if (local_48 <= (double)CONCAT44(uVar11,uVar10) * DAT_005db370) goto LAB_002e3186;
      goto LAB_002e3110;
    }
                    /* try { // try from 002e3181 to 002e3185 has its CatchHandler @ 002e347f */
    (**(code **)(local_58.tv_sec + 0x58))(plVar3);
LAB_002e3186:
    plVar3 = *(long **)(this + 0x200);
    *(undefined8 *)(this + 0x200) = 0;
  }
  if (plVar3 != (long *)0x0) {
    if (*(Pimpl **)(*plVar3 + 0x1a0) != (Pimpl *)0x0) {
                    /* try { // try from 002e31ac to 002e31b0 has its CatchHandler @ 002e3497 */
      Pimpl::sendDragEnd(*(Pimpl **)(*plVar3 + 0x1a0));
    }
    operator_delete(plVar3);
  }
  this_00 = *(Component **)(this + 0x270);
  *(undefined8 *)(this + 0x270) = 0;
  if (this_00 != (Component *)0x0) {
    if (*(long *)(*(long *)(this_00 + 0x138) + 0x1a0) != 0) {
      clock_gettime(1,&local_58);
      *(double *)(*(long *)(*(long *)(this_00 + 0x138) + 0x1a0) + 0x248) =
           (double)(local_58.tv_nsec / 1000 + local_58.tv_sec * 1000000) * DAT_00651e50;
    }
    piVar8 = (int *)(*(long *)(this_00 + 0x148) + -0x10);
    if (piVar8 != &emptyString) {
      LOCK();
      iVar2 = *piVar8;
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        operator_delete__(piVar8);
      }
    }
    plVar3 = *(long **)(this_00 + 0x140);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    Timer::~Timer((Timer *)(this_00 + 0x110));
    Component::~Component(this_00);
    operator_delete(this_00);
  }
  if (*(int *)(this + 0x20) == 8) {
    pBVar4 = *(Button **)(this + 0x260);
    if (*(int *)(pBVar4 + 0x1b8) != 0) {
      *(undefined4 *)(pBVar4 + 0x1b8) = 0;
      Component::internalRepaintUnchecked((long)pBVar4,0,*(ulong *)(pBVar4 + 0x40),'\x01');
      if (*(int *)(pBVar4 + 0x1b8) == 2) {
        uVar7 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
          clock_gettime(1,&local_58);
          auVar5 = SEXT816(local_58.tv_nsec / 1000 + local_58.tv_sec * 1000000) *
                   SEXT816(0x20c49ba5e353f7cf);
          uVar7 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
          if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar7) ||
             (uVar7 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
            LOCK();
            UNLOCK();
            _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar7;
          }
        }
        *(uint *)(pBVar4 + 400) = uVar7;
        *(undefined4 *)(pBVar4 + 0x194) = 0;
      }
      Button::sendStateMessage(pBVar4);
    }
    pBVar4 = *(Button **)(this + 0x268);
    if (*(int *)(pBVar4 + 0x1b8) != 0) {
      *(undefined4 *)(pBVar4 + 0x1b8) = 0;
      Component::internalRepaintUnchecked((long)pBVar4,0,*(ulong *)(pBVar4 + 0x40),'\x01');
      if (*(int *)(pBVar4 + 0x1b8) == 2) {
        uVar7 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
          clock_gettime(1,&local_58);
          auVar5 = SEXT816(local_58.tv_nsec / 1000 + local_58.tv_sec * 1000000) *
                   SEXT816(0x20c49ba5e353f7cf);
          uVar7 = (int)(auVar5._8_8_ >> 7) - (auVar5._12_4_ >> 0x1f);
          if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar7) ||
             (uVar7 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
            LOCK();
            UNLOCK();
            _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar7;
          }
        }
        *(uint *)(pBVar4 + 400) = uVar7;
        *(undefined4 *)(pBVar4 + 0x194) = 0;
      }
      Button::sendStateMessage(pBVar4);
    }
  }
LAB_002e2fe4:
  plVar3 = *(long **)(this + 0x200);
  *(undefined8 *)(this + 0x200) = 0;
  if (plVar3 != (long *)0x0) {
    if (*(Pimpl **)(*plVar3 + 0x1a0) != (Pimpl *)0x0) {
                    /* try { // try from 002e300a to 002e300e has its CatchHandler @ 002e34af */
      Pimpl::sendDragEnd(*(Pimpl **)(*plVar3 + 0x1a0));
    }
    operator_delete(plVar3);
  }
  return;
}


