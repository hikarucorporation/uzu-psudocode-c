// Function : getX11BoundsFromJuce
// Namespace: juce:XEmbedComponent:Pimpl
// Entry    : 004d3db0
// Prototype: undefined1[16] getX11BoundsFromJuce(Pimpl * this)
// Body     : 004d3db0 - 004d40ee


/* juce::XEmbedComponent::Pimpl::getX11BoundsFromJuce() */

undefined1  [16] __thiscall juce::XEmbedComponent::Pimpl::getX11BoundsFromJuce(Pimpl *this)

{
  long *plVar1;
  Desktop *this_00;
  undefined8 uVar2;
  int iVar3;
  ComponentHelpers *this_01;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  
  this_01 = *(ComponentHelpers **)(this + 8);
  do {
    if ((*(ushort *)(this_01 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 004d3e00 to 004d3e09 has its CatchHandler @ 004d4102 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 004d3e0d to 004d3e14 has its CatchHandler @ 004d40ef */
        Desktop::Desktop(this_00);
        iVar7 = *(int *)(this_00 + 0xdc);
        Desktop::instance = this_00;
      }
      else {
        iVar7 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar7 != 0) {
        lVar6 = 0;
        goto LAB_004d3e40;
      }
      break;
    }
    this_01 = *(ComponentHelpers **)(this_01 + 0x30);
  } while (this_01 != (ComponentHelpers *)0x0);
  goto LAB_004d3e53;
  while (lVar6 = lVar6 + 8, (long)iVar7 * 8 != lVar6) {
LAB_004d3e40:
    plVar1 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6);
    if ((ComponentHelpers *)plVar1[1] == this_01) {
      auVar19 = detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
                          (this_01,*(ComponentHelpers **)(this + 8),0,
                           *(undefined8 *)(*(ComponentHelpers **)(this + 8) + 0x40));
      dVar14 = (double)(**(code **)(*plVar1 + 0x130))(plVar1);
      dVar18 = (double)auVar19._0_4_ * dVar14;
      dVar16 = (double)auVar19._4_4_ * dVar14;
      iVar7 = -0x80000000;
      iVar8 = -0x80000000;
      if (DAT_005de630 < dVar18) {
        dVar15 = floor(dVar18);
        iVar8 = (int)dVar15;
      }
      if (DAT_005de630 < dVar16) {
        dVar15 = floor(dVar16);
        iVar7 = (int)dVar15;
      }
      dVar18 = dVar18 + (double)auVar19._8_4_ * dVar14;
      iVar3 = 0x7fffffff;
      iVar5 = 0x7fffffff;
      if (dVar18 < DAT_0065a018) {
        dVar18 = ceil(dVar18);
        iVar5 = (int)dVar18;
      }
      dVar16 = dVar16 + dVar14 * (double)auVar19._12_4_;
      if (dVar16 < DAT_0065a018) {
        dVar14 = ceil(dVar16);
        iVar3 = (int)dVar14;
      }
      fVar11 = (float)(**(code **)(*(long *)plVar1[1] + 0x88))();
      fVar17 = (float)iVar8 * fVar11;
      fVar12 = (float)iVar7 * fVar11;
      iVar9 = -0x80000000;
      iVar10 = -0x80000000;
      if (DAT_00653430 < fVar17) {
        fVar13 = floorf(fVar17);
        iVar10 = (int)fVar13;
      }
      if (DAT_00653430 < fVar12) {
        fVar13 = floorf(fVar12);
        iVar9 = (int)fVar13;
      }
      fVar17 = fVar17 + (float)(iVar5 - iVar8) * fVar11;
      iVar5 = 0x7fffffff;
      iVar8 = 0x7fffffff;
      if (fVar17 < DAT_00653434) {
        fVar17 = ceilf(fVar17);
        iVar8 = (int)fVar17;
      }
      fVar12 = fVar12 + fVar11 * (float)(iVar3 - iVar7);
      if (fVar12 < DAT_00653434) {
        fVar11 = ceilf(fVar12);
        iVar5 = (int)fVar11;
      }
      uVar4 = CONCAT44(iVar5 - iVar9,iVar8 - iVar10);
      uVar2 = CONCAT44(iVar9,iVar10);
      goto LAB_004d3e5d;
    }
  }
LAB_004d3e53:
  uVar4 = *(undefined8 *)(*(long *)(this + 8) + 0x40);
  uVar2 = 0;
LAB_004d3e5d:
  auVar19._8_8_ = uVar4;
  auVar19._0_8_ = uVar2;
  return auVar19;
}


