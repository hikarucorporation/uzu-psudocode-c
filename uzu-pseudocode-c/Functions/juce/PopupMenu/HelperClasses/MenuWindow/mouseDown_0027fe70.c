// Function : mouseDown
// Namespace: juce:PopupMenu:HelperClasses:MenuWindow
// Entry    : 0027fe70
// Prototype: undefined mouseDown(MenuWindow * this, long param_1)
// Body     : 0027fe70 - 0027fe74


/* juce::PopupMenu::HelperClasses::MenuWindow::mouseDown(juce::MouseEvent const&) */

void __thiscall juce::PopupMenu::HelperClasses::MenuWindow::mouseDown(MenuWindow *this,long param_1)

{
  int iVar1;
  float *pfVar2;
  MenuWindow *pMVar3;
  bool bVar4;
  ulong uVar5;
  Timer *this_00;
  ulong uVar6;
  MenuWindow *pMVar7;
  long lVar8;
  float fVar9;
  long lStack_48;
  ulong *puStack_40;
  ulong uStack_38;
  long lStack_30;
  
  uVar5 = *(ulong *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x30);
  do {
    if (lVar8 == 0) break;
    lStack_48 = lVar8;
    puStack_40 = &uStack_38;
    uStack_38 = uVar5;
    uVar5 = detail::ComponentHelpers::
            convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
            {lambda()#1}::operator()((_lambda___1_ *)&lStack_48);
    pfVar2 = *(float **)(lVar8 + 0x50);
    if (pfVar2 != (float *)0x0) {
      fVar9 = (float)(int)(uVar5 >> 0x20);
      uVar5 = CONCAT44((int)((float)(int)uVar5 * pfVar2[3] + fVar9 * pfVar2[4] + pfVar2[5]),
                       (int)(*pfVar2 * (float)(int)uVar5 + pfVar2[1] * fVar9 + pfVar2[2]));
    }
    lVar8 = *(long *)(lVar8 + 0x30);
  } while (lVar8 != 0);
  pMVar3 = this;
  do {
    pMVar7 = pMVar3;
    pMVar3 = *(MenuWindow **)(pMVar7 + 0x30);
  } while (*(MenuWindow **)(pMVar7 + 0x30) != (MenuWindow *)0x0);
  uVar5 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>((long *)pMVar7,uVar5);
  if (pMVar7 != this) {
    uVar5 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                      ((long)pMVar7,(long *)this,uVar5);
  }
  bVar4 = Component::reallyContains
                    (CONCAT44((float)(int)(uVar5 >> 0x20),(float)(int)uVar5),(Component *)this);
  this[0x1cd] = (MenuWindow)((byte)this[0x1cd] | bVar4);
  lStack_30 = *(long *)(param_1 + 0x50);
  this_00 = getMouseState(this,&lStack_30);
  uVar5 = *(ulong *)(param_1 + 8);
  lVar8 = *(long *)(param_1 + 0x30);
  do {
    if (lVar8 == 0) break;
    lStack_48 = lVar8;
    puStack_40 = &uStack_38;
    uStack_38 = uVar5;
    uVar5 = detail::ComponentHelpers::
            convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::
            {lambda()#1}::operator()((_lambda___1_ *)&lStack_48);
    pfVar2 = *(float **)(lVar8 + 0x50);
    if (pfVar2 != (float *)0x0) {
      fVar9 = (float)(int)(uVar5 >> 0x20);
      uVar5 = CONCAT44((int)((float)(int)uVar5 * pfVar2[3] + fVar9 * pfVar2[4] + pfVar2[5]),
                       (int)(*pfVar2 * (float)(int)uVar5 + pfVar2[1] * fVar9 + pfVar2[2]));
    }
    lVar8 = *(long *)(lVar8 + 0x30);
  } while (lVar8 != 0);
  uVar6 = windowIsStillValid(*(MenuWindow **)(this_00 + 0x28));
  if ((char)uVar6 != '\0') {
    iVar1 = *(int *)(this_00 + 0x10);
    *(undefined4 *)(this_00 + 0x10) = 0x32;
    if (iVar1 == 0) {
      Timer::TimerThread::addTimer(*(TimerThread **)(this_00 + 0x18),(long)this_00);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(this_00 + 0x18),(long)this_00);
    }
    MouseSourceState::handleMousePosition((MouseSourceState *)this_00,uVar5);
  }
  return;
}


