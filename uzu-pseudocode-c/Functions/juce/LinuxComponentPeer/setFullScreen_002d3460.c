// Function : setFullScreen
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d3460
// Prototype: undefined setFullScreen(LinuxComponentPeer * this, LinuxComponentPeer param_2)
// Body     : 002d3460 - 002d3942


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::setFullScreen(bool) */

void __thiscall
juce::LinuxComponentPeer::setFullScreen(LinuxComponentPeer *this,LinuxComponentPeer param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  uint uVar7;
  XWindowSystem *pXVar8;
  long lVar9;
  long lVar10;
  Desktop *this_00;
  undefined8 uVar11;
  int iVar12;
  double dVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  ulong local_100;
  ulong local_f0;
  long local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  auVar26 = *(undefined1 (*) [16])(this + 0x14);
  auVar5 = *(undefined1 (*) [16])(this + 0x14);
  pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
    lVar9 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar9 + 0x210))(lVar10);
  }
                    /* try { // try from 002d34c0 to 002d34d4 has its CatchHandler @ 002d3970 */
  lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar10 + 0x228))(*(undefined8 *)(pXVar8 + 0x148));
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
                    /* try { // try from 002d34ed to 002d34fa has its CatchHandler @ 002d3968 */
    lVar9 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar9 + 0x360))(lVar10);
  }
  if (this[0x154] == param_2) {
    return;
  }
  if (((byte)this[0x10] & 8) == 0) {
    auVar26 = auVar5;
    if (param_2 == (LinuxComponentPeer)0x0) goto LAB_002d3785;
    if (Desktop::instance == (Desktop *)0x0) {
      this_00 = operator_new(0x1d0);
                    /* try { // try from 002d3535 to 002d353c has its CatchHandler @ 002d3943 */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    uVar1 = *(undefined8 *)(this + 0x130);
    lVar10 = **(long **)(Desktop::instance + 0xe0);
    iVar20 = (int)*(undefined8 *)(this + 0x138) + (int)uVar1;
    iVar18 = (int)((ulong)uVar1 >> 0x20);
    iVar19 = (int)((ulong)*(undefined8 *)(this + 0x138) >> 0x20) + iVar18;
    lVar15 = (long)*(int *)((long)*(long **)(Desktop::instance + 0xe0) + 0xc) * 0x70;
    iVar17 = -1;
    lVar9 = 0;
    do {
      uVar2 = *(undefined8 *)(lVar10 + 4);
      uVar11 = uVar2;
      if ((int)uVar2 < (int)uVar1) {
        uVar11 = uVar1;
      }
      iVar16 = (int)*(undefined8 *)(lVar10 + 0xc) + (int)uVar2;
      if (iVar20 < iVar16) {
        iVar16 = iVar20;
      }
      iVar16 = iVar16 - (int)uVar11;
      if (iVar16 < 0) {
LAB_002d3590:
        iVar16 = 0;
        iVar12 = 0;
      }
      else {
        iVar12 = (int)((ulong)uVar2 >> 0x20);
        iVar4 = iVar12;
        if (iVar12 < iVar18) {
          iVar4 = iVar18;
        }
        iVar12 = (int)((ulong)*(undefined8 *)(lVar10 + 0xc) >> 0x20) + iVar12;
        if (iVar19 < iVar12) {
          iVar12 = iVar19;
        }
        iVar12 = iVar12 - iVar4;
        if (iVar12 < 0) goto LAB_002d3590;
      }
      if (iVar17 <= iVar12 * iVar16) {
        iVar17 = iVar12 * iVar16;
        lVar9 = lVar10;
      }
      lVar10 = lVar10 + 0x70;
      lVar15 = lVar15 + -0x70;
    } while (lVar15 != 0);
    auVar26 = *(undefined1 (*) [16])(lVar9 + 0x14);
    iVar17 = (int)*(undefined8 *)(lVar9 + 0x1c);
  }
  else {
    pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar1 = *(undefined8 *)(this + 0x120);
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    pcVar3 = *(code **)(lVar10 + 0x2a8);
    uVar2 = *(undefined8 *)(pXVar8 + 0x148);
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar6 = (**(code **)(lVar10 + 0xb0))(*(undefined8 *)(pXVar8 + 0x148));
    uVar11 = (*pcVar3)(uVar2,uVar6);
    local_f0 = CONCAT44(local_f0._4_4_,0x21);
    local_c0 = 0x20;
    uVar2 = *(undefined8 *)(pXVar8 + 0x148);
    local_d0 = uVar1;
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_c8 = (**(code **)(lVar10 + 0x1f0))(uVar2,"_NET_WM_STATE",0);
    local_b8 = (ulong)(byte)param_2;
    uVar1 = *(undefined8 *)(pXVar8 + 0x148);
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_b0 = (**(code **)(lVar10 + 0x1f0))(uVar1,"_NET_WM_STATE_MAXIMIZED_HORZ",0);
    uVar1 = *(undefined8 *)(pXVar8 + 0x148);
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    local_a8 = (**(code **)(lVar10 + 0x1f0))(uVar1,"_NET_WM_STATE_MAXIMIZED_VERT",0);
    local_a0 = _DAT_005d99e0;
    uStack_98 = _UNK_005d99e8;
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
      lVar9 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar9 + 0x210))(lVar10);
    }
                    /* try { // try from 002d370a to 002d372a has its CatchHandler @ 002d3966 */
    lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar10 + 0x2d0))(*(undefined8 *)(pXVar8 + 0x148),uVar11,0,0x180000,&local_f0);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
                    /* try { // try from 002d3748 to 002d3755 has its CatchHandler @ 002d3956 */
      lVar9 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar9 + 0x360))(lVar10);
    }
    if (param_2 != (LinuxComponentPeer)0x0) {
      pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                         ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                          XWindowSystem::singletonHolder);
      auVar26 = XWindowSystem::getWindowBounds
                          (pXVar8,*(undefined8 *)(this + 0x120),*(long *)(this + 0x128));
    }
LAB_002d3785:
    iVar17 = auVar26._8_4_;
  }
  if (iVar17 < 1) goto LAB_002d3905;
  local_100 = auVar26._0_8_;
  uVar14 = auVar26._12_4_;
  if ((int)uVar14 < 1) goto LAB_002d3905;
                    /* try { // try from 002d37be to 002d37c3 has its CatchHandler @ 002d395e */
  fVar22 = (float)(**(code **)(**(long **)(this + 8) + 0x88))();
  dVar13 = (double)(local_100 >> 0x20);
  fVar23 = (float)(_DAT_005d91c0 & (uint)fVar22);
  if (fVar23 == DAT_005d94c8) {
    if ((fVar22 != DAT_005d9038) || (NAN(fVar22) || NAN(DAT_005d9038))) {
LAB_002d3824:
      iVar17 = auVar26._0_4_;
      dVar13 = (double)((float)auVar26._4_4_ * fVar22) + DAT_005d9098;
      auVar26._8_8_ = (ulong)((double)((float)auVar26._8_4_ * fVar22) + DAT_005d9098) & 0xffffffff;
      auVar26._0_8_ = (ulong)((double)((float)iVar17 * fVar22) + DAT_005d9098) & 0xffffffff;
      uVar14 = SUB84((double)((float)(int)uVar14 * fVar22) + DAT_005d9098,0);
    }
  }
  else {
    fVar24 = (float)((uint)(DAT_005d9054 + fVar22) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar24) {
      fVar25 = DAT_005d9038;
      if (DAT_005d9038 <= fVar23) {
        fVar25 = fVar23;
      }
      if (fVar25 * DAT_005d94d0 < fVar24) goto LAB_002d3824;
    }
  }
  uVar21 = auVar26._8_8_ & 0xffffffff;
  if (auVar26._8_4_ < 1) {
    uVar21 = 1;
  }
  uVar7 = 1;
  if (0 < (int)uVar14) {
    uVar7 = uVar14;
  }
  local_f0 = auVar26._0_8_ & 0xffffffff | (long)dVar13 << 0x20;
  local_e8 = ((ulong)uVar7 << 0x20) + uVar21;
  if ((((*(int *)(this + 0x130) != auVar26._0_4_) || (*(int *)(this + 0x134) != SUB84(dVar13,0))) ||
      (*(int *)(this + 0x138) != (int)uVar21)) ||
     ((*(uint *)(this + 0x13c) != uVar7 || (this[0x154] != param_2)))) {
    forceSetBounds(this,&local_f0,param_2);
  }
LAB_002d3905:
  Component::internalRepaintUnchecked
            (*(long *)(this + 8),0,*(ulong *)(*(long *)(this + 8) + 0x40),'\x01');
  return;
}


