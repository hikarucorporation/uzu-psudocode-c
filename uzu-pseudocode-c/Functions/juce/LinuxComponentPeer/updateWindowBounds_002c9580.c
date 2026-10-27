// Function : updateWindowBounds
// Namespace: juce:LinuxComponentPeer
// Entry    : 002c9580
// Prototype: undefined updateWindowBounds(LinuxComponentPeer * this)
// Body     : 002c9580 - 002c9930


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::updateWindowBounds() */

void __thiscall juce::LinuxComponentPeer::updateWindowBounds(LinuxComponentPeer *this)

{
  float fVar1;
  Desktop *pDVar2;
  XWindowSystem *pXVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  ulong uVar15;
  ulong uVar17;
  undefined1 auVar16 [16];
  float fVar18;
  double dVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 local_40 [16];
  
  if (*(long *)(this + 0x120) != 0) {
    if ((*(long *)(this + 0x28) != 0) && ((~*(uint *)(this + 0x10) & 0x18) == 0)) {
      if (Desktop::instance == (Desktop *)0x0) {
        pDVar2 = operator_new(0x1d0);
                    /* try { // try from 002c95c9 to 002c95d0 has its CatchHandler @ 002c9931 */
        Desktop::Desktop(pDVar2);
        Desktop::instance = pDVar2;
      }
      if (*(long *)(Desktop::instance + 0x110) != *(long *)(this + 8)) {
        pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                           ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                            XWindowSystem::singletonHolder);
        lVar5 = *(long *)(this + 0x120);
        plVar4 = (long *)getPeerFor(lVar5);
        if (plVar4 != (long *)0x0) {
          XWindowSystem::updateConstraints(pXVar3,lVar5,plVar4);
        }
      }
    }
    pXVar3 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    auVar24 = XWindowSystem::getWindowBounds
                        (pXVar3,*(undefined8 *)(this + 0x120),*(long *)(this + 0x128));
    local_40 = auVar24;
    updateScaleFactorFromNewBounds(this,(int *)local_40,'\x01');
    iVar10 = auVar24._0_4_;
    iVar6 = auVar24._8_4_;
    iVar9 = auVar24._4_4_;
    iVar8 = auVar24._12_4_;
    if (*(long *)(this + 0x128) == 0) {
      if (Desktop::instance == (Desktop *)0x0) {
        pDVar2 = operator_new(0x1d0);
                    /* try { // try from 002c97c9 to 002c97d0 has its CatchHandler @ 002c9933 */
        Desktop::Desktop(pDVar2);
        Desktop::instance = pDVar2;
      }
      pDVar2 = Desktop::instance;
      fVar21 = (float)iVar10;
      fVar11 = (float)iVar9;
      fVar23 = (float)iVar6;
      fVar18 = (float)iVar8;
      lVar5 = Displays::getDisplayForRect
                        (**(long **)(Desktop::instance + 0xe0),
                         *(int *)((long)*(long **)(Desktop::instance + 0xe0) + 0xc),
                         (ulong)((double)iVar10 + DAT_005d9098) & 0xffffffff |
                         (long)((double)iVar9 + DAT_005d9098) << 0x20,
                         (ulong)((double)iVar6 + DAT_005d9098) & 0xffffffff |
                         (long)((double)iVar8 + DAT_005d9098) << 0x20,'\x01');
      if (lVar5 != 0) {
        fVar1 = *(float *)(pDVar2 + 0x130);
        auVar24._0_8_ = *(double *)(lVar5 + 0x50) / (double)fVar1;
        auVar20._0_8_ = (double)(fVar21 - (float)(int)*(undefined8 *)(lVar5 + 0x44));
        auVar20._8_8_ =
             (double)(fVar11 - (float)(int)((ulong)*(undefined8 *)(lVar5 + 0x44) >> 0x20));
        auVar24._8_8_ = auVar24._0_8_;
        auVar20 = divpd(auVar20,auVar24);
        auVar22._0_8_ = (double)iVar6;
        auVar22._8_8_ = (double)iVar8;
        auVar24 = divpd(auVar22,auVar24);
        fVar23 = (float)auVar24._0_8_;
        fVar18 = (float)auVar24._8_8_;
        fVar21 = fVar1 * (float)(int)*(undefined8 *)(lVar5 + 4) + (float)auVar20._0_8_;
        fVar11 = fVar1 * (float)(int)((ulong)*(undefined8 *)(lVar5 + 4) >> 0x20) +
                 (float)auVar20._8_8_;
      }
      uVar15 = (ulong)((double)fVar21 + _DAT_005d9a90) & _DAT_005d9aa0 |
               (long)((double)fVar11 + _DAT_005d9a90) << 0x20;
      uVar17 = (ulong)((double)fVar23 + _UNK_005d9a98) & _UNK_005d9aa8 |
               (long)((double)fVar18 + _UNK_005d9a98) << 0x20;
    }
    else {
      dVar14 = *(double *)(this + 0x158);
      dVar19 = (double)iVar10 / dVar14;
      dVar12 = (double)iVar9 / dVar14;
      iVar9 = -0x80000000;
      iVar10 = -0x80000000;
      if (DAT_005de630 < dVar19) {
        dVar13 = floor(dVar19);
        iVar10 = (int)dVar13;
      }
      if (DAT_005de630 < dVar12) {
        dVar13 = floor(dVar12);
        iVar9 = (int)dVar13;
      }
      dVar19 = dVar19 + (double)iVar6 / dVar14;
      iVar7 = 0x7fffffff;
      iVar6 = 0x7fffffff;
      if (dVar19 < DAT_0065a018) {
        dVar19 = ceil(dVar19);
        iVar6 = (int)dVar19;
      }
      dVar12 = dVar12 + (double)iVar8 / dVar14;
      if (dVar12 < DAT_0065a018) {
        dVar14 = ceil(dVar12);
        iVar7 = (int)dVar14;
      }
      auVar16._4_4_ = iVar6 - iVar10;
      auVar16._0_4_ = iVar10;
      auVar16._8_4_ = iVar6 - iVar10;
      auVar16._12_4_ = iVar7 - iVar9;
      uVar17 = auVar16._8_8_;
      uVar15 = CONCAT44(iVar9,iVar10);
    }
    *(ulong *)(this + 0x130) = uVar15;
    *(ulong *)(this + 0x138) = uVar17;
    updateVBlankTimer(this);
  }
  return;
}


