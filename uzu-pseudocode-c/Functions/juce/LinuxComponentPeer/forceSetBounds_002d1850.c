// Function : forceSetBounds
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d1850
// Prototype: undefined forceSetBounds(LinuxComponentPeer * this, undefined8 * param_2, LinuxComponentPeer param_3)
// Body     : 002d1850 - 002d1fe3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::forceSetBounds(juce::Rectangle<int> const&, bool) */

void __thiscall
juce::LinuxComponentPeer::forceSetBounds
          (LinuxComponentPeer *this,undefined8 *param_2,LinuxComponentPeer param_3)

{
  float fVar1;
  LinuxComponentPeer LVar2;
  code *pcVar3;
  ulong uVar4;
  char cVar5;
  undefined4 uVar6;
  Desktop *pDVar7;
  long *plVar8;
  XWindowSystem *this_00;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  float fVar30;
  double dVar31;
  ulong uVar32;
  float fVar33;
  undefined4 uVar34;
  int local_b8;
  int iStack_b4;
  undefined8 uStack_b0;
  undefined8 local_90;
  int local_88;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar12 = param_2[1];
  *(undefined8 *)(this + 0x130) = *param_2;
  *(undefined8 *)(this + 0x138) = uVar12;
  updateScaleFactorFromNewBounds(this,(int *)(this + 0x130),'\0');
  if (*(long *)(this + 0x128) == 0) {
    if (Desktop::instance == (Desktop *)0x0) {
      pDVar7 = operator_new(0x1d0);
                    /* try { // try from 002d1a12 to 002d1a19 has its CatchHandler @ 002d2007 */
      Desktop::Desktop(pDVar7);
      Desktop::instance = pDVar7;
    }
    iVar23 = (int)*(undefined8 *)(this + 0x130);
    fVar28 = (float)iVar23;
    iVar15 = (int)*(undefined8 *)(this + 0x138);
    fVar33 = (float)iVar15;
    iVar24 = (int)((ulong)*(undefined8 *)(this + 0x130) >> 0x20);
    fVar25 = (float)iVar24;
    iVar16 = (int)((ulong)*(undefined8 *)(this + 0x138) >> 0x20);
    fVar30 = (float)iVar16;
    lVar14 = (long)*(int *)((long)*(long **)(Desktop::instance + 0xe0) + 0xc);
    if (lVar14 != 0) {
      lVar10 = **(long **)(Desktop::instance + 0xe0);
      dVar27 = (double)iVar23 + DAT_005d9098;
      iVar22 = SUB84(dVar27,0);
      iVar21 = SUB84((double)iVar15 + DAT_005d9098,0) + iVar22;
      iVar20 = SUB84((double)iVar24 + DAT_005d9098,0);
      iVar24 = SUB84((double)iVar16 + DAT_005d9098,0) + iVar20;
      lVar14 = lVar14 * 0x70;
      iVar23 = -1;
      lVar11 = 0;
      do {
        dVar29 = *(double *)(lVar10 + 4);
        dVar31 = dVar29;
        if (SUB84(dVar29,0) < iVar22) {
          dVar31 = dVar27;
        }
        iVar18 = (int)*(undefined8 *)(lVar10 + 0xc) + SUB84(dVar29,0);
        if (iVar21 < iVar18) {
          iVar18 = iVar21;
        }
        iVar18 = iVar18 - SUB84(dVar31,0);
        if (iVar18 < 0) {
LAB_002d1ad0:
          iVar18 = 0;
          iVar19 = 0;
        }
        else {
          iVar19 = (int)((ulong)dVar29 >> 0x20);
          iVar17 = iVar19;
          if (iVar19 < iVar20) {
            iVar17 = iVar20;
          }
          iVar19 = (int)((ulong)*(undefined8 *)(lVar10 + 0xc) >> 0x20) + iVar19;
          if (iVar24 < iVar19) {
            iVar19 = iVar24;
          }
          iVar19 = iVar19 - iVar17;
          if (iVar19 < 0) goto LAB_002d1ad0;
        }
        if (iVar23 <= iVar19 * iVar18) {
          iVar23 = iVar19 * iVar18;
          lVar11 = lVar10;
        }
        lVar10 = lVar10 + 0x70;
        lVar14 = lVar14 + -0x70;
      } while (lVar14 != 0);
      if (lVar11 != 0) {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002d1b47 to 002d1b50 has its CatchHandler @ 002d1fff */
          pDVar7 = operator_new(0x1d0);
                    /* try { // try from 002d1b54 to 002d1b5b has its CatchHandler @ 002d1fec */
          Desktop::Desktop(pDVar7);
          Desktop::instance = pDVar7;
        }
        fVar1 = *(float *)(Desktop::instance + 0x130);
        dVar27 = *(double *)(lVar11 + 0x50) / (double)fVar1;
        fVar33 = (float)((double)iVar15 * dVar27);
        fVar30 = (float)((double)iVar16 * dVar27);
        fVar28 = (float)(int)*(undefined8 *)(lVar11 + 0x44) +
                 (float)((double)(fVar28 - fVar1 * (float)(int)*(undefined8 *)(lVar11 + 4)) * dVar27
                        );
        fVar25 = (float)(int)((ulong)*(undefined8 *)(lVar11 + 0x44) >> 0x20) +
                 (float)((double)(fVar25 - fVar1 * (float)(int)((ulong)*(undefined8 *)(lVar11 + 4)
                                                               >> 0x20)) * dVar27);
      }
    }
    uVar32 = (ulong)((double)fVar28 + _DAT_005d9a90) & _DAT_005d9aa0 |
             (long)((double)fVar25 + _DAT_005d9a90) << 0x20;
    lVar14 = *(long *)(this + 8);
    uVar4 = (ulong)((double)fVar33 + _UNK_005d9a98) & _UNK_005d9aa8 |
            (long)((double)fVar30 + _UNK_005d9a98) << 0x20;
  }
  else {
    dVar27 = *(double *)(this + 0x158);
    uVar12 = *(undefined8 *)(this + 0x138);
    dVar31 = (double)(int)*(undefined8 *)(this + 0x130) * dVar27;
    dVar29 = (double)(int)((ulong)*(undefined8 *)(this + 0x130) >> 0x20) * dVar27;
    iVar23 = -0x80000000;
    iVar24 = -0x80000000;
    if (DAT_005de630 < dVar31) {
      dVar26 = floor(dVar31);
      iVar24 = (int)dVar26;
    }
    if (DAT_005de630 < dVar29) {
      dVar26 = floor(dVar29);
      iVar23 = (int)dVar26;
    }
    dVar31 = dVar31 + (double)(int)uVar12 * dVar27;
    iVar16 = 0x7fffffff;
    uVar6 = SUB84(DAT_0065a018,0);
    uVar34 = (undefined4)((ulong)DAT_0065a018 >> 0x20);
    iVar15 = 0x7fffffff;
    if (dVar31 < DAT_0065a018) {
      dVar31 = ceil(dVar31);
      uVar6 = SUB84(DAT_0065a018,0);
      uVar34 = (undefined4)((ulong)DAT_0065a018 >> 0x20);
      iVar15 = (int)dVar31;
    }
    dVar29 = dVar29 + dVar27 * (double)(int)((ulong)uVar12 >> 0x20);
    if (dVar29 <= (double)CONCAT44(uVar34,uVar6) && (double)CONCAT44(uVar34,uVar6) != dVar29) {
      dVar27 = ceil(dVar29);
      iVar16 = (int)dVar27;
    }
    uVar32 = CONCAT44(iVar23,iVar24);
    uStack_b0 = CONCAT44(iVar16 - iVar23,iVar15 - iVar24);
    lVar14 = *(long *)(this + 8);
    uVar4 = uStack_b0;
  }
  if (lVar14 == 0) {
LAB_002d1c88:
    plVar8 = (long *)0x0;
    LVar2 = this[0xc9];
  }
  else {
    plVar8 = *(long **)(lVar14 + 0xd8);
    if (plVar8 == (long *)0x0) {
      plVar8 = operator_new(0x18);
      *(undefined4 *)(plVar8 + 1) = 0;
      *plVar8 = (long)&PTR__ReferenceCountedObject_00714b80;
      plVar8[2] = lVar14;
      LOCK();
      *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
      UNLOCK();
      plVar9 = *(long **)(lVar14 + 0xd8);
      *(long **)(lVar14 + 0xd8) = plVar8;
      if (plVar9 != (long *)0x0) {
        LOCK();
        plVar8 = plVar9 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)(*plVar9 + 8))();
        }
        plVar8 = *(long **)(lVar14 + 0xd8);
        if (plVar8 == (long *)0x0) goto LAB_002d1c88;
      }
    }
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LVar2 = this[0xc9];
  }
  if (LVar2 == (LinuxComponentPeer)0x0) {
                    /* try { // try from 002d1c98 to 002d1dca has its CatchHandler @ 002d2055 */
    this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
    lVar14 = *(long *)(this + 0x120);
    plVar9 = (long *)getPeerFor(lVar14);
    if (plVar9 != (long *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0x90))(plVar9);
      if ((cVar5 != '\0') && (param_3 == (LinuxComponentPeer)0x0)) {
        uVar12 = *(undefined8 *)(this_00 + 0x148);
        lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        lVar10 = (**(code **)(lVar10 + 0x1f0))(uVar12,"_NET_WM_STATE_FULLSCREEN",1);
        if (lVar10 != 0) {
          lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          pcVar3 = *(code **)(lVar11 + 0x2a8);
          uVar12 = *(undefined8 *)(this_00 + 0x148);
          lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          uVar6 = (**(code **)(lVar11 + 0xb0))(*(undefined8 *)(this_00 + 0x148));
          uVar12 = (*pcVar3)(uVar12,uVar6);
          local_78 = *(undefined8 *)(this_00 + 0x148);
          local_90 = (undefined8 *)CONCAT44(local_90._4_4_,0x21);
          local_60 = 0x20;
          local_68 = *(undefined8 *)(this_00 + 0x60);
          local_58 = 0;
          local_48 = _DAT_005d99f0;
          uStack_40 = _UNK_005d99f8;
          local_70 = lVar14;
          local_50 = lVar10;
          if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
             (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
            lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            (**(code **)(lVar11 + 0x210))(lVar10);
          }
                    /* try { // try from 002d1dcb to 002d1def has its CatchHandler @ 002d2014 */
          lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar10 + 0x2d0))
                    (*(undefined8 *)(this_00 + 0x148),uVar12,0,0x180000,&local_90);
          if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
             (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
                    /* try { // try from 002d1e08 to 002d1e15 has its CatchHandler @ 002d1fe4 */
            lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
            (**(code **)(lVar11 + 0x360))(lVar10);
          }
        }
      }
                    /* try { // try from 002d1e16 to 002d1e4c has its CatchHandler @ 002d2055 */
      XWindowSystem::updateConstraints(this_00,lVar14,plVar9);
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar10 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar10 != 0)) {
        lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar11 + 0x210))(lVar10);
      }
                    /* try { // try from 002d1e4d to 002d1e54 has its CatchHandler @ 002d2046 */
      lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      puVar13 = (undefined8 *)(**(code **)(lVar10 + 8))();
      local_b8 = (int)uVar32;
      iStack_b4 = (int)(uVar32 >> 0x20);
      uStack_b0._4_4_ = (undefined4)(uVar4 >> 0x20);
      local_90 = puVar13;
      if (puVar13 != (undefined8 *)0x0) {
        *puVar13 = 3;
        *(int *)(puVar13 + 1) = local_b8;
        *(int *)((long)puVar13 + 0xc) = iStack_b4;
        *(int *)(puVar13 + 2) = (int)uVar4;
        *(undefined4 *)((long)puVar13 + 0x14) = uStack_b0._4_4_;
                    /* try { // try from 002d1eb1 to 002d1ece has its CatchHandler @ 002d2030 */
        lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar10 + 0x318))(*(undefined8 *)(this_00 + 0x148),lVar14,puVar13);
                    /* try { // try from 002d1ecf to 002d1edc has its CatchHandler @ 002d2028 */
        lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar10 + 0x128))(puVar13);
      }
                    /* try { // try from 002d1ee3 to 002d1eed has its CatchHandler @ 002d2026 */
      (**(code **)(*plVar9 + 0xb8))(&local_90,plVar9);
      if ((char)local_90 == '\0') {
        iVar24 = 0;
        iVar23 = 0;
      }
      else {
        dVar27 = (double)(**(code **)(*plVar9 + 0x130))(plVar9);
        iVar24 = (int)((double)local_90._4_4_ * dVar27);
        iVar23 = (int)((double)local_88 * dVar27);
      }
                    /* try { // try from 002d1f2b to 002d1f62 has its CatchHandler @ 002d2044 */
      lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar10 + 0x230))
                (*(undefined8 *)(this_00 + 0x148),lVar14,local_b8 - iVar23,iStack_b4 - iVar24,uVar4,
                 uStack_b0._4_4_);
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
                    /* try { // try from 002d1f7b to 002d1f88 has its CatchHandler @ 002d201e */
        lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar10 + 0x360))(lVar14);
      }
    }
  }
  this[0x154] = param_3;
  if (plVar8 != (long *)0x0) {
    if (plVar8[2] != 0) {
                    /* try { // try from 002d1fa0 to 002d1faf has its CatchHandler @ 002d2050 */
      updateBorderSize(this);
      ComponentPeer::handleMovedOrResized((ComponentPeer *)this);
    }
    LOCK();
    plVar9 = plVar8 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
                    /* WARNING: Could not recover jumptable at 0x002d1fcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar8 + 8))(plVar8);
      return;
    }
  }
  return;
}


