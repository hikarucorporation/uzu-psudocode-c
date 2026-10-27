// Function : mouseUp
// Namespace: juce:TextEditor
// Entry    : 0026df10
// Prototype: undefined mouseUp(TextEditor * this, long param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 0026df10 - 0026e0e3


/* juce::TextEditor::mouseUp(juce::MouseEvent const&) */

void __thiscall
juce::TextEditor::mouseUp
          (TextEditor *this,long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined1 auVar9 [16];
  ulong uVar10;
  uint uVar11;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar12;
  long lVar13;
  int *piVar14;
  float fVar15;
  timespec local_28;
  
  uVar11 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_28);
    auVar9 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
             SEXT816(0x20c49ba5e353f7cf);
    uVar11 = (int)(auVar9._8_8_ >> 7) - (auVar9._12_4_ >> 0x1f);
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar11) ||
       (uVar11 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar11;
    }
  }
  *(uint *)(this + 0x280) = uVar11;
  this[0x260] = (TextEditor)0x1;
  LOCK();
  lVar13 = *(long *)(this + 0x248);
  *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar14 = (int *)(lVar13 + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar1 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar14);
    }
  }
  lVar8 = *(long *)(this + 400);
  lVar13 = lVar8 + 0xf0;
  iVar1 = *(int *)(lVar8 + 0x100);
  *(undefined4 *)(lVar8 + 0x100) = 0x15e;
  if (iVar1 == 0) {
                    /* try { // try from 0026e000 to 0026e004 has its CatchHandler @ 0026e0e4 */
    Timer::TimerThread::addTimer(*(TimerThread **)(lVar8 + 0x108),lVar13);
    uVar12 = extraout_RDX_00;
  }
  else {
    Timer::TimerThread::resetTimerCounter(*(TimerThread **)(lVar8 + 0x108),lVar13);
    uVar12 = extraout_RDX;
  }
  if (((this[0x1ce] == (TextEditor)0x0 || this[0x1d0] != (TextEditor)0x0) &&
      (*(char *)(param_1 + 0x59) == '\0')) &&
     ((this[0x1cd] == (TextEditor)0x0 || ((*(byte *)(param_1 + 0x10) & 0x20) == 0)))) {
    iVar1 = *(int *)(param_1 + 8);
    iVar2 = *(int *)(this + 0x27c);
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(this + 0x198);
    iVar5 = *(int *)(this + 0x278);
    iVar6 = *(int *)(this + 0x19c);
    iVar7 = *(int *)(*(long *)(this + 0x188) + 0x208);
    fVar15 = getYOffset(this,lVar13,uVar12,*(long *)(this + 0x188),param_4,param_5);
    uVar10 = indexAtPosition((float)((iVar1 - (iVar5 + iVar6)) + iVar7),
                             (float)((iVar3 + *(int *)(*(long *)(this + 0x188) + 0x20c)) -
                                    SUB84((double)(fVar15 + (float)iVar4 + (float)iVar2) +
                                          DAT_005d9098,0)),this);
    moveCaret(this,(uint)uVar10);
  }
  this[0x1d0] = (TextEditor)0x1;
  return;
}


