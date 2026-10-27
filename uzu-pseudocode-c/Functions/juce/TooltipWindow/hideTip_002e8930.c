// Function : hideTip
// Namespace: juce:TooltipWindow
// Entry    : 002e8930
// Prototype: ulong hideTip(TooltipWindow * this)
// Body     : 002e8930 - 002e8a54


/* juce::TooltipWindow::hideTip() */

ulong __thiscall juce::TooltipWindow::hideTip(TooltipWindow *this)

{
  int iVar1;
  long lVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  uint uVar5;
  int *piVar6;
  timespec local_28;
  
  uVar4 = (ulong)*(ushort *)(this + 0xe8);
  if (((*(ushort *)(this + 0xe8) & 2) != 0) && (this[0x14c] == (TooltipWindow)0x0)) {
    lVar2 = *(long *)(this + 0x128);
    *(undefined1 **)(this + 0x128) = &DAT_0061ac58;
    piVar6 = (int *)(lVar2 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
    }
    lVar2 = *(long *)(this + 0x138);
    *(undefined1 **)(this + 0x138) = &DAT_0061ac58;
    piVar6 = (int *)(lVar2 + -0x10);
    if (piVar6 != &emptyString) {
      LOCK();
      iVar1 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar6);
      }
    }
    this[0x14d] = (TooltipWindow)0x0;
    Component::removeFromDesktop((Component *)this);
    uVar4 = (**(code **)(*(long *)this + 0x60))(this,0);
    uVar5 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
    if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
      clock_gettime(1,&local_28);
      auVar3 = SEXT816(local_28.tv_nsec / 1000 + local_28.tv_sec * 1000000) *
               SEXT816(0x20c49ba5e353f7cf);
      uVar5 = (int)(auVar3._8_8_ >> 7) - (auVar3._12_4_ >> 0x1f);
      if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar5) ||
         (uVar4 = (ulong)(_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000),
         uVar5 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
        LOCK();
        uVar4 = (ulong)_ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        UNLOCK();
        _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar5;
      }
    }
    *(uint *)(this + 0x148) = uVar5;
  }
  return uVar4;
}


