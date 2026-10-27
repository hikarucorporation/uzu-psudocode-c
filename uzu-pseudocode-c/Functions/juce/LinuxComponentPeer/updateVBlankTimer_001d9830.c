// Function : updateVBlankTimer
// Namespace: juce:LinuxComponentPeer
// Entry    : 001d9830
// Prototype: undefined updateVBlankTimer(LinuxComponentPeer * this)
// Body     : 001d9830 - 001d9982


/* juce::LinuxComponentPeer::updateVBlankTimer() */

void __thiscall juce::LinuxComponentPeer::updateVBlankTimer(LinuxComponentPeer *this)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  Desktop *this_00;
  int iVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 001d9868 to 001d986f has its CatchHandler @ 001d9983 */
    Desktop::Desktop(this_00);
    plVar1 = *(long **)(this_00 + 0xe0);
    iVar14 = *(int *)((long)plVar1 + 0xc);
    Desktop::instance = this_00;
  }
  else {
    plVar1 = *(long **)(Desktop::instance + 0xe0);
    iVar14 = *(int *)((long)plVar1 + 0xc);
  }
  if ((long)iVar14 != 0) {
    lVar6 = *plVar1;
    iVar2 = (int)*(undefined8 *)(this + 0x130);
    iVar13 = (int)*(undefined8 *)(this + 0x138) + iVar2;
    iVar11 = (int)((ulong)*(undefined8 *)(this + 0x130) >> 0x20);
    iVar12 = (int)((ulong)*(undefined8 *)(this + 0x138) >> 0x20) + iVar11;
    lVar10 = (long)iVar14 * 0x70;
    iVar14 = -1;
    lVar7 = 0;
    do {
      iVar8 = (int)*(undefined8 *)(lVar6 + 4);
      iVar4 = iVar8;
      if (iVar8 < iVar2) {
        iVar4 = iVar2;
      }
      iVar8 = (int)*(undefined8 *)(lVar6 + 0xc) + iVar8;
      if (iVar13 < iVar8) {
        iVar8 = iVar13;
      }
      iVar8 = iVar8 - iVar4;
      if (iVar8 < 0) {
LAB_001d98c0:
        iVar8 = 0;
        iVar3 = 0;
      }
      else {
        iVar3 = (int)((ulong)*(undefined8 *)(lVar6 + 4) >> 0x20);
        iVar4 = iVar3;
        if (iVar3 < iVar11) {
          iVar4 = iVar11;
        }
        iVar3 = (int)((ulong)*(undefined8 *)(lVar6 + 0xc) >> 0x20) + iVar3;
        if (iVar12 < iVar3) {
          iVar3 = iVar12;
        }
        iVar3 = iVar3 - iVar4;
        if (iVar3 < 0) goto LAB_001d98c0;
      }
      if (iVar14 <= iVar3 * iVar8) {
        iVar14 = iVar3 * iVar8;
        lVar7 = lVar6;
      }
      lVar6 = lVar6 + 0x70;
      lVar10 = lVar10 + -0x70;
    } while (lVar10 != 0);
    if (lVar7 != 0) {
      uVar5 = SUB84(*(double *)(lVar7 + 0x60) + DAT_005d9098,0);
      if (*(char *)(lVar7 + 0x68) == '\0') {
        uVar5 = 0;
      }
      uVar9 = 100;
      if (uVar5 != 0) {
        uVar9 = uVar5;
      }
      if (*(uint *)(this + 0xe8) != uVar9) {
        Timer::startTimerHz((Timer *)(this + 0xd8),uVar9);
        return;
      }
    }
  }
  return;
}


