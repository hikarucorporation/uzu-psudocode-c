// Function : isVisibleWithinParent
// Namespace: juce:AccessibilityHandler
// Entry    : 00220840
// Prototype: ulong isVisibleWithinParent(AccessibilityHandler * this)
// Body     : 00220840 - 00220af3


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AccessibilityHandler::isVisibleWithinParent() const */

ulong __thiscall juce::AccessibilityHandler::isVisibleWithinParent(AccessibilityHandler *this)

{
  ComponentHelpers *pCVar1;
  ComponentHelpers *pCVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  ulong uVar6;
  Desktop *this_00;
  double dVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  ComponentHelpers *pCVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  undefined8 in_R8;
  ulong uVar16;
  float fVar17;
  double dVar19;
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  undefined1 auVar23 [16];
  
  uVar6 = (**(code **)(*(long *)this + 0x28))();
  uVar16 = CONCAT71((int7)((ulong)in_R8 >> 8),1);
  if ((uVar6 & 0x800) == 0) {
    pCVar1 = *(ComponentHelpers **)(this + 8);
    pCVar12 = pCVar1;
    while( true ) {
      pCVar2 = *(ComponentHelpers **)(pCVar12 + 0x30);
      if (pCVar2 == (ComponentHelpers *)0x0) {
        pCVar12 = pCVar1;
        goto LAB_00220900;
      }
      if (*(float **)(pCVar12 + 0x50) == (float *)0x0) {
        auVar23 = *(undefined1 (*) [16])(pCVar12 + 0x38);
      }
      else {
        auVar23 = Rectangle<int>::transformedBy
                            ((Rectangle<int> *)(pCVar12 + 0x38),*(float **)(pCVar12 + 0x50));
      }
      uVar16 = 0;
      iVar13 = auVar23._0_4_;
      iVar8 = 0;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      iVar13 = auVar23._8_4_ + iVar13;
      if (*(int *)(pCVar2 + 0x40) < iVar13) {
        iVar13 = *(int *)(pCVar2 + 0x40);
      }
      if (iVar13 - iVar8 < 0) break;
      iVar9 = 0;
      if (-1 < auVar23._0_8_) {
        iVar9 = auVar23._4_4_;
      }
      iVar11 = auVar23._12_4_ + auVar23._4_4_;
      if (*(int *)(pCVar2 + 0x44) < iVar11) {
        iVar11 = *(int *)(pCVar2 + 0x44);
      }
      if (((iVar11 - iVar9 < 0) || (uVar16 = 0, iVar13 == iVar8)) ||
         (pCVar12 = pCVar2, iVar11 == iVar9)) break;
    }
  }
  goto LAB_00220979;
  while (pCVar12 = *(ComponentHelpers **)(pCVar12 + 0x30), pCVar12 != (ComponentHelpers *)0x0) {
LAB_00220900:
    if ((*(ushort *)(pCVar12 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00220922 to 0022092b has its CatchHandler @ 00220b0f */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0022092f to 00220936 has its CatchHandler @ 00220afc */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      if ((long)*(int *)(Desktop::instance + 0xdc) != 0) {
        lVar15 = 0;
        uVar16 = 0;
        goto LAB_00220960;
      }
      break;
    }
  }
  uVar16 = 0;
  goto LAB_00220979;
  while (lVar15 = lVar15 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar15) {
LAB_00220960:
    lVar3 = *(long *)(*(long *)(Desktop::instance + 0xd0) + lVar15);
    if (*(ComponentHelpers **)(lVar3 + 8) == pCVar12) {
      auVar23 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                          (pCVar12,pCVar1,0,*(undefined8 *)(pCVar1 + 0x40));
                    /* try { // try from 002209a2 to 002209aa has its CatchHandler @ 00220af4 */
      fVar17 = (float)(**(code **)(*(long *)pCVar12 + 0x88))(pCVar12);
      dVar7 = (double)(auVar23._0_8_ >> 0x20);
      fVar20 = (float)(_DAT_005d91c0 & (uint)fVar17);
      if (fVar20 == DAT_005d94c8) {
        if ((fVar17 == DAT_005d9038) && (!NAN(fVar17) && !NAN(DAT_005d9038))) goto LAB_00220a4f;
LAB_002209fd:
        auVar5._8_8_ = (double)((float)auVar23._8_4_ * fVar17) + _UNK_005d9a98;
        auVar5._0_8_ = (double)((float)auVar23._0_4_ * fVar17) + _DAT_005d9a90;
        dVar7 = (double)((float)auVar23._4_4_ * fVar17) + _DAT_005d9a90;
        dVar19 = (double)((float)auVar23._12_4_ * fVar17) + _UNK_005d9a98;
        auVar23 = auVar5;
      }
      else {
        fVar22 = (float)((uint)(fVar17 + DAT_005d9054) & _DAT_005d91c0);
        if (DAT_005d94cc < fVar22) {
          fVar4 = DAT_005d9038;
          if (DAT_005d9038 <= fVar20) {
            fVar4 = fVar20;
          }
          if (fVar4 * DAT_005d94d0 < fVar22) goto LAB_002209fd;
        }
LAB_00220a4f:
        dVar19 = (double)(auVar23._8_8_ >> 0x20);
      }
      auVar18._0_8_ = (long)dVar7 << 0x20;
      auVar18._8_8_ = (long)dVar19 << 0x20;
      auVar21._0_8_ = auVar23._0_8_ & _DAT_005d9aa0;
      auVar21._8_8_ = auVar23._8_8_ & _UNK_005d9aa8;
      auVar21 = auVar21 | auVar18;
      iVar13 = auVar21._0_4_;
      lVar15 = *(long *)(lVar3 + 8);
      iVar8 = 0;
      if (-1 < iVar13) {
        iVar8 = iVar13;
      }
      iVar13 = auVar21._8_4_ + iVar13;
      if (*(int *)(lVar15 + 0x40) < iVar13) {
        iVar13 = *(int *)(lVar15 + 0x40);
      }
      iVar9 = 0;
      iVar11 = 0;
      if (-1 < iVar13 - iVar8) {
        iVar14 = 0;
        if (-1 < auVar21._0_8_) {
          iVar14 = auVar21._4_4_;
        }
        iVar10 = auVar21._12_4_ + auVar21._4_4_;
        if (*(int *)(lVar15 + 0x44) < iVar10) {
          iVar10 = *(int *)(lVar15 + 0x44);
        }
        if (-1 < iVar10 - iVar14) {
          iVar9 = iVar13 - iVar8;
          iVar11 = iVar10 - iVar14;
        }
      }
      uVar16 = CONCAT71((int7)((ulong)lVar15 >> 8),0 < iVar11 && 0 < iVar9);
      break;
    }
  }
LAB_00220979:
  return uVar16 & 0xffffffff;
}


