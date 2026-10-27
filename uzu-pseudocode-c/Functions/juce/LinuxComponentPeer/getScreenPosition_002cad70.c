// Function : getScreenPosition
// Namespace: juce:LinuxComponentPeer
// Entry    : 002cad70
// Prototype: undefined8 getScreenPosition(LinuxComponentPeer * this, char param_1)
// Body     : 002cad70 - 002caeb4


/* juce::LinuxComponentPeer::getScreenPosition(bool) const */

undefined8 __thiscall
juce::LinuxComponentPeer::getScreenPosition(LinuxComponentPeer *this,char param_1)

{
  int iVar1;
  XWindowSystem *pXVar2;
  Desktop *pDVar3;
  int iVar4;
  undefined8 uVar5;
  
  pXVar2 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar5 = *(undefined8 *)(pXVar2 + 0x1a8);
  if (*(long *)(this + 0x128) == 0) {
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar3 = operator_new(0x1d0);
                    /* try { // try from 002cade7 to 002cadee has its CatchHandler @ 002caeb7 */
      Desktop::Desktop(pDVar3);
      Desktop::instance = pDVar3;
    }
    uVar5 = Displays::physicalToLogical<int>(*(undefined8 **)(Desktop::instance + 0xe0),uVar5);
    if (*(long *)(this + 0x128) == 0) {
      uVar5 = *(undefined8 *)(this + 0x130);
      if (param_1 == '\0') {
        return uVar5;
      }
      if (Desktop::instance == (Desktop *)0x0) {
        pDVar3 = operator_new(0x1d0);
                    /* try { // try from 002cae8d to 002cae94 has its CatchHandler @ 002caeb5 */
        Desktop::Desktop(pDVar3);
        Desktop::instance = pDVar3;
      }
      uVar5 = Displays::logicalToPhysical<int>(*(long **)(Desktop::instance + 0xe0),uVar5);
      return uVar5;
    }
  }
  else {
    uVar5 = CONCAT44((int)((double)(int)((ulong)uVar5 >> 0x20) / *(double *)(this + 0x158)),
                     (int)((double)(int)uVar5 / *(double *)(this + 0x158)));
  }
  iVar4 = (int)uVar5 + *(int *)(this + 0x130);
  iVar1 = (int)((ulong)uVar5 >> 0x20) + *(int *)(this + 0x134);
  if (param_1 != '\0') {
    iVar4 = (int)((double)iVar4 * *(double *)(this + 0x158));
    iVar1 = (int)((double)iVar1 * *(double *)(this + 0x158));
  }
  return CONCAT44(iVar1,iVar4);
}


