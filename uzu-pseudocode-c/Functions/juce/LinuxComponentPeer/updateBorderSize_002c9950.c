// Function : updateBorderSize
// Namespace: juce:LinuxComponentPeer
// Entry    : 002c9950
// Prototype: undefined updateBorderSize(LinuxComponentPeer * this)
// Body     : 002c9950 - 002c9ba1


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::updateBorderSize() */

void __thiscall juce::LinuxComponentPeer::updateBorderSize(LinuxComponentPeer *this)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  XWindowSystem *pXVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  int iVar9;
  undefined1 auStack_74 [16];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined1 local_40 [8];
  int local_38 [2];
  
  if (((byte)this[0x10] & 8) == 0) {
    this[0x140] = (LinuxComponentPeer)0x1;
    uVar7 = 0;
    iVar3 = 0;
    iVar9 = 0;
    goto LAB_002c9b8b;
  }
  if (this[0x140] != (LinuxComponentPeer)0x0) {
    if (*(int *)(this + 0x14c) + *(int *)(this + 0x144) != 0) {
      return;
    }
    if (*(int *)(this + 0x150) + *(int *)(this + 0x148) != 0) {
      return;
    }
  }
  pXVar4 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  uVar7 = *(undefined8 *)(this + 0x120);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x210))(lVar6);
  }
  uVar1 = *(undefined8 *)(pXVar4 + 0x148);
                    /* try { // try from 002c99e7 to 002c9a00 has its CatchHandler @ 002c9bbc */
  lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  lVar6 = (**(code **)(lVar6 + 0x1f0))(uVar1,"_NET_FRAME_EXTENTS",1);
  if (lVar6 == 0) {
LAB_002c9af6:
    bVar2 = false;
    auStack_74 = (undefined1  [16])0x0;
  }
  else {
    uVar1 = *(undefined8 *)(pXVar4 + 0x148);
    local_58 = (undefined1  [16])0x0;
    local_48 = 0;
    local_38[0] = -1;
                    /* try { // try from 002c9a34 to 002c9a7c has its CatchHandler @ 002c9bba */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar3 = (**(code **)(lVar5 + 0x1b8))
                      (uVar1,uVar7,lVar6,0,4,0,6,local_40,local_38,local_58 + 8,&local_48,local_58);
    if (((long *)local_58._0_8_ == (long *)0x0 || iVar3 != 0) || (local_38[0] != 0x20)) {
      if ((long *)local_58._0_8_ != (long *)0x0) {
                    /* try { // try from 002c9ae6 to 002c9af5 has its CatchHandler @ 002c9ba2 */
        lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar6 + 0x128))(local_58._0_8_);
      }
      goto LAB_002c9af6;
    }
    bVar2 = true;
    auStack_74._8_8_ =
         *(ulong *)(local_58._0_8_ + 0x18) & _UNK_005d9aa8 | *(long *)(local_58._0_8_ + 8) << 0x20;
    auStack_74._0_8_ =
         *(ulong *)(local_58._0_8_ + 0x10) & _DAT_005d9aa0 | *(long *)local_58._0_8_ << 0x20;
                    /* try { // try from 002c9ac3 to 002c9ad2 has its CatchHandler @ 002c9baa */
    lVar6 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar6 + 0x128))(local_58._0_8_);
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar6 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar6 != 0)) {
                    /* try { // try from 002c9b1c to 002c9b29 has its CatchHandler @ 002c9bb2 */
    lVar5 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar5 + 0x360))(lVar6);
  }
  if (!bVar2) {
    uVar7 = 0;
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    dVar8 = _DAT_005d9000 / *(double *)(this + 0x158);
    iVar3 = (int)((double)(int)auStack_74._8_4_ * dVar8);
    iVar9 = (int)((double)(int)auStack_74._12_4_ * dVar8);
    uVar7 = CONCAT44((int)((double)(int)auStack_74._4_4_ * dVar8),
                     (int)((double)(int)auStack_74._0_4_ * dVar8));
  }
  this[0x140] = (LinuxComponentPeer)bVar2;
LAB_002c9b8b:
  *(undefined8 *)(this + 0x144) = uVar7;
  *(int *)(this + 0x14c) = iVar3;
  *(int *)(this + 0x150) = iVar9;
  return;
}


