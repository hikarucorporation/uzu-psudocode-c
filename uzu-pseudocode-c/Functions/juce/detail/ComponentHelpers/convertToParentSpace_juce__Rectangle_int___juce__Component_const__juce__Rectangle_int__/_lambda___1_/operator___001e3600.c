// Function : operator()
// Namespace: juce:detail:ComponentHelpers:convertToParentSpace_juce__Rectangle_int___juce__Component_const__juce__Rectangle_int__:_lambda___1_
// Entry    : 001e3600
// Prototype: undefined1[16] operator()({lambda()#1} * this)
// Body     : 001e3600 - 001e3b4b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::ComponentHelpers::convertToParentSpace<juce::Rectangle<int> >(juce::Component
   const&, juce::Rectangle<int>)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

undefined1  [16] __thiscall
juce::detail::ComponentHelpers::
convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)::
{lambda()#1}::operator()(_lambda___1_ *this)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [12];
  int iVar8;
  ulong uVar9;
  double dVar10;
  Desktop *pDVar11;
  long lVar12;
  int iVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  double dVar23;
  double dVar26;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulong local_38;
  ulong uStack_30;
  
  plVar2 = *(long **)this;
  if ((*(ushort *)(plVar2 + 0x1d) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e376c to 001e3775 has its CatchHandler @ 001e3b6f */
      pDVar11 = operator_new(0x1d0);
                    /* try { // try from 001e3779 to 001e3780 has its CatchHandler @ 001e3b5c */
      Desktop::Desktop(pDVar11);
      iVar8 = *(int *)(pDVar11 + 0xdc);
      Desktop::instance = pDVar11;
    }
    else {
      iVar8 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar8 != 0) {
      lVar12 = 0;
      do {
        plVar4 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar12);
        if ((long *)plVar4[1] == plVar2) {
          auVar7 = **(undefined1 (**) [12])(this + 8);
          iStack_4c = (int)((ulong)*(undefined8 *)(**(undefined1 (**) [12])(this + 8) + 8) >> 0x20);
                    /* try { // try from 001e37e1 to 001e37e6 has its CatchHandler @ 001e3b54 */
          fVar14 = (float)(**(code **)(**(long **)this + 0x88))();
          auVar17._12_4_ = iStack_4c;
          auVar17._0_12_ = auVar7;
          dVar10 = (double)(auVar7._0_8_ >> 0x20);
          fVar22 = (float)(_DAT_005d91c0 & (uint)fVar14);
          if (fVar22 == DAT_005d94c8) {
            if ((fVar14 == DAT_005d9038) && (!NAN(fVar14) && !NAN(DAT_005d9038))) goto LAB_001e39e0;
LAB_001e384f:
            auVar17._0_8_ = (double)((float)auVar7._0_4_ * fVar14) + _DAT_005d9a90;
            auVar17._8_8_ = (double)((float)auVar7._8_4_ * fVar14) + _UNK_005d9a98;
            dVar10 = (double)((float)auVar7._4_4_ * fVar14) + _DAT_005d9a90;
            dVar28 = (double)((float)iStack_4c * fVar14) + _UNK_005d9a98;
          }
          else {
            fVar27 = (float)((uint)(fVar14 + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar27) {
              fVar5 = DAT_005d9038;
              if (DAT_005d9038 <= fVar22) {
                fVar5 = fVar22;
              }
              if (fVar5 * DAT_005d94d0 < fVar27) goto LAB_001e384f;
            }
LAB_001e39e0:
            dVar28 = (double)(auVar17._8_8_ >> 0x20);
          }
          local_38 = auVar17._0_8_ & _DAT_005d9aa0 | (long)dVar10 << 0x20;
          uStack_30 = auVar17._8_8_ & _UNK_005d9aa8 | (long)dVar28 << 0x20;
          auVar19 = (**(code **)(*plVar4 + 0x60))(plVar4,&local_38);
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e3a33 to 001e3a3c has its CatchHandler @ 001e3b4e */
            pDVar11 = operator_new(0x1d0);
                    /* try { // try from 001e3a40 to 001e3a47 has its CatchHandler @ 001e3b4c */
            Desktop::Desktop(pDVar11);
            Desktop::instance = pDVar11;
          }
          fVar14 = *(float *)(Desktop::instance + 0x130);
          dVar10 = (double)(auVar19._0_8_ >> 0x20);
          fVar22 = (float)(_DAT_005d91c0 & (uint)fVar14);
          if (fVar22 == DAT_005d94c8) {
            if ((fVar14 != DAT_005d9038) || (NAN(fVar14) || NAN(DAT_005d9038))) {
LAB_001e3aae:
              auVar20._0_4_ = (float)auVar19._0_4_;
              auVar20._4_4_ = (float)auVar19._8_4_;
              auVar20._8_8_ = 0;
              auVar24._4_4_ = fVar14;
              auVar24._0_4_ = fVar14;
              auVar24._8_4_ = fVar14;
              auVar24._12_4_ = fVar14;
              auVar17 = divps(auVar20,auVar24);
              auVar18._0_8_ = (double)auVar17._0_4_ + _DAT_005d9a90;
              auVar18._8_8_ = (double)auVar17._4_4_ + _UNK_005d9a98;
              iVar8 = auVar19._4_4_;
              iVar13 = auVar19._12_4_;
              goto LAB_001e3ae2;
            }
          }
          else {
            fVar27 = (float)((uint)(DAT_005d9054 + fVar14) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar27) {
              fVar5 = DAT_005d9038;
              if (DAT_005d9038 <= fVar22) {
                fVar5 = fVar22;
              }
              if (fVar5 * DAT_005d94d0 < fVar27) goto LAB_001e3aae;
            }
          }
          dVar28 = (double)(auVar19._8_8_ >> 0x20);
          goto LAB_001e3b20;
        }
        lVar12 = lVar12 + 8;
      } while ((long)iVar8 * 8 != lVar12);
    }
    return **(undefined1 (**) [16])(this + 8);
  }
  uVar3 = **(ulong **)(this + 8);
  dVar23 = (double)(*(ulong **)(this + 8))[1];
  if (plVar2[6] != 0) {
    auVar15._8_8_ = dVar23;
    auVar15._0_8_ =
         (ulong)(uint)((int)uVar3 + (int)plVar2[7]) |
         (uVar3 & 0xffffffff00000000) + plVar2[7] & 0xffffffff00000000;
    return auVar15;
  }
  lVar12 = plVar2[7];
                    /* try { // try from 001e368d to 001e3695 has its CatchHandler @ 001e3b77 */
  fVar14 = (float)(**(code **)(*plVar2 + 0x88))(plVar2);
  uVar1 = lVar12 + uVar3;
  uVar9 = (uVar3 & 0xffffffff00000000) + lVar12;
  dVar10 = (double)(uVar9 >> 0x20);
  fVar22 = (float)(_DAT_005d91c0 & (uint)fVar14);
  uVar3 = (ulong)dVar23 >> 0x20;
  if (fVar22 == DAT_005d94c8) {
    if ((fVar14 == DAT_005d9038) && (!NAN(fVar14) && !NAN(DAT_005d9038))) goto LAB_001e38af;
LAB_001e3705:
    dVar23 = (double)(fVar14 * (float)SUB84(dVar23,0)) + _DAT_005d9a90;
    dVar26 = (double)(fVar14 * (float)(int)uVar1) + _UNK_005d9a98;
    dVar10 = (double)(fVar14 * (float)(int)(uVar9 >> 0x20)) + _DAT_005d9a90;
    dVar28 = (double)(fVar14 * (float)(int)uVar3) + _UNK_005d9a98;
  }
  else {
    fVar27 = (float)((uint)(fVar14 + DAT_005d9054) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar27) {
      fVar5 = DAT_005d9038;
      if (DAT_005d9038 <= fVar22) {
        fVar5 = fVar22;
      }
      if (fVar5 * DAT_005d94d0 < fVar27) goto LAB_001e3705;
    }
LAB_001e38af:
    dVar28 = (double)((ulong)dVar23 >> 0x20);
    dVar26 = (double)(uVar1 & 0xffffffff);
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e38e8 to 001e38f1 has its CatchHandler @ 001e3b52 */
    pDVar11 = operator_new(0x1d0);
                    /* try { // try from 001e38f5 to 001e38fc has its CatchHandler @ 001e3b50 */
    Desktop::Desktop(pDVar11);
    Desktop::instance = pDVar11;
  }
  iStack_4c = (int)((ulong)dVar26 >> 0x20);
  iStack_50 = SUB84(dVar26,0);
  iStack_54 = (int)((ulong)dVar23 >> 0x20);
  local_58 = SUB84(dVar23,0);
  iVar13 = SUB84(dVar28,0);
  fVar14 = *(float *)(Desktop::instance + 0x130);
  fVar22 = (float)(_DAT_005d91c0 & (uint)fVar14);
  iVar8 = SUB84(dVar10,0);
  if (fVar22 == DAT_005d94c8) {
    if ((fVar14 != DAT_005d9038) || (NAN(fVar14) || NAN(DAT_005d9038))) {
LAB_001e396d:
      auVar16._0_4_ = (float)iStack_50;
      auVar16._4_4_ = (float)local_58;
      auVar16._8_4_ = (float)iStack_4c;
      auVar16._12_4_ = (float)iStack_54;
      auVar24._4_4_ = fVar14;
      auVar24._0_4_ = fVar14;
      auVar24._8_4_ = fVar14;
      auVar24._12_4_ = fVar14;
      auVar17 = divps(auVar16,auVar24);
      auVar18._0_8_ = (double)auVar17._0_4_ + _DAT_005d9a90;
      auVar18._8_8_ = (double)auVar17._4_4_ + _UNK_005d9a98;
LAB_001e3ae2:
      auVar29._0_4_ = (float)iVar8;
      auVar29._4_4_ = (float)iVar13;
      auVar29._8_8_ = 0;
      auVar17 = divps(auVar29,auVar24);
      dVar10 = (double)auVar17._0_4_ + _DAT_005d9a90;
      dVar28 = (double)auVar17._4_4_ + _UNK_005d9a98;
      auVar19 = auVar18;
      goto LAB_001e3b20;
    }
  }
  else {
    fVar27 = (float)((uint)(DAT_005d9054 + fVar14) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar27) {
      fVar5 = DAT_005d9038;
      if (DAT_005d9038 <= fVar22) {
        fVar5 = fVar22;
      }
      if (fVar5 * DAT_005d94d0 < fVar27) goto LAB_001e396d;
    }
  }
  auVar19._8_4_ = local_58;
  auVar19._0_8_ = dVar26;
  auVar19._12_4_ = iStack_54;
  auVar6._8_8_ = _UNK_005d9aa8;
  auVar6._0_8_ = _DAT_005d9aa0;
  auVar19 = auVar19 & auVar6;
  dVar10 = (double)((ulong)dVar10 & 0xffffffff);
  dVar28 = (double)((ulong)dVar28 & 0xffffffff);
LAB_001e3b20:
  auVar25._0_8_ = (long)dVar10 << 0x20;
  auVar25._8_8_ = (long)dVar28 << 0x20;
  auVar21._0_8_ = auVar19._0_8_ & _DAT_005d9aa0;
  auVar21._8_8_ = auVar19._8_8_ & _UNK_005d9aa8;
  return auVar21 | auVar25;
}


