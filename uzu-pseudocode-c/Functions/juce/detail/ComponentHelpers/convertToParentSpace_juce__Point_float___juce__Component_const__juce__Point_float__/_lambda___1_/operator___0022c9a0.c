// Function : operator()
// Namespace: juce:detail:ComponentHelpers:convertToParentSpace_juce__Point_float___juce__Component_const__juce__Point_float__:_lambda___1_
// Entry    : 0022c9a0
// Prototype: undefined operator()({lambda()#1} * this)
// Body     : 0022c9a0 - 0022ccc8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::ComponentHelpers::convertToParentSpace<juce::Point<float> >(juce::Component const&,
   juce::Point<float>)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
juce::detail::ComponentHelpers::
convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)::{lambda()#1}::
operator()(_lambda___1_ *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  Desktop *pDVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  plVar2 = *(long **)this;
  if ((*(ushort *)(plVar2 + 0x1d) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022caff to 0022cb08 has its CatchHandler @ 0022ccec */
      pDVar5 = operator_new(0x1d0);
                    /* try { // try from 0022cb0c to 0022cb13 has its CatchHandler @ 0022ccd9 */
      Desktop::Desktop(pDVar5);
      iVar1 = *(int *)(pDVar5 + 0xdc);
      Desktop::instance = pDVar5;
    }
    else {
      iVar1 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar1 == 0) {
      return;
    }
    lVar6 = 0;
    while (plVar3 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6),
          (long *)plVar3[1] != plVar2) {
      lVar6 = lVar6 + 8;
      if ((long)iVar1 * 8 == lVar6) {
        return;
      }
    }
                    /* try { // try from 0022cb72 to 0022cb77 has its CatchHandler @ 0022ccd1 */
    (**(code **)(**(long **)this + 0x88))();
    uVar8 = (**(code **)(*plVar3 + 0x50))(plVar3);
    fStack_20 = (float)extraout_XMM0_Qb;
    fStack_1c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022cc2f to 0022cc38 has its CatchHandler @ 0022cccb */
      pDVar5 = operator_new(0x1d0);
                    /* try { // try from 0022cc3c to 0022cc43 has its CatchHandler @ 0022ccc9 */
      Desktop::Desktop(pDVar5);
      Desktop::instance = pDVar5;
    }
    fVar7 = *(float *)(Desktop::instance + 0x130);
    fVar10 = (float)(_DAT_005d91c0 & (uint)fVar7);
    if (fVar10 == DAT_005d94c8) {
      auVar9._8_4_ = fStack_20;
      auVar9._0_8_ = uVar8;
      auVar9._12_4_ = fStack_1c;
      if ((fVar7 == DAT_005d9038) && (!NAN(fVar7) && !NAN(DAT_005d9038))) {
        return;
      }
    }
    else {
      fVar11 = (float)((uint)(DAT_005d9054 + fVar7) & _DAT_005d91c0);
      if (fVar11 <= DAT_005d94cc) {
        return;
      }
      fVar12 = DAT_005d9038;
      if (DAT_005d9038 <= fVar10) {
        fVar12 = fVar10;
      }
      auVar9._8_4_ = fStack_20;
      auVar9._0_8_ = uVar8;
      auVar9._12_4_ = fStack_1c;
      if (fVar11 <= fVar12 * DAT_005d94d0) {
        return;
      }
    }
    goto LAB_0022ccbc;
  }
  local_28 = (float)(int)plVar2[7] + (float)**(undefined8 **)(this + 8);
  fStack_24 = (float)(int)((ulong)plVar2[7] >> 0x20) +
              (float)((ulong)**(undefined8 **)(this + 8) >> 0x20);
  fStack_20 = 0.0;
  fStack_1c = 0.0;
  if (plVar2[6] != 0) {
    return;
  }
                    /* try { // try from 0022ca0b to 0022ca13 has its CatchHandler @ 0022ccf4 */
  fVar7 = (float)(**(code **)(*plVar2 + 0x88))(plVar2);
  fVar10 = (float)(_DAT_005d91c0 & (uint)fVar7);
  if (fVar10 == DAT_005d94c8) {
    if ((fVar7 != DAT_005d9038) || (NAN(fVar7) || NAN(DAT_005d9038))) {
LAB_0022ca63:
      local_28 = local_28 * fVar7;
      fStack_24 = fStack_24 * fVar7;
      fStack_20 = fVar7 * 0.0;
      fStack_1c = fVar7 * 0.0;
    }
  }
  else {
    fVar11 = (float)((uint)(fVar7 + DAT_005d9054) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar11) {
      fVar12 = DAT_005d9038;
      if (DAT_005d9038 <= fVar10) {
        fVar12 = fVar10;
      }
      if (fVar12 * DAT_005d94d0 < fVar11) goto LAB_0022ca63;
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022ca7e to 0022ca87 has its CatchHandler @ 0022cccf */
    pDVar5 = operator_new(0x1d0);
                    /* try { // try from 0022ca8b to 0022ca92 has its CatchHandler @ 0022cccd */
    Desktop::Desktop(pDVar5);
    Desktop::instance = pDVar5;
  }
  fVar7 = *(float *)(Desktop::instance + 0x130);
  fVar10 = (float)(_DAT_005d91c0 & (uint)fVar7);
  if (fVar10 == DAT_005d94c8) {
    if ((fVar7 == DAT_005d9038) && (!NAN(fVar7) && !NAN(DAT_005d9038))) {
      return;
    }
  }
  else {
    fVar11 = (float)((uint)(DAT_005d9054 + fVar7) & _DAT_005d91c0);
    if (fVar11 <= DAT_005d94cc) {
      return;
    }
    fVar12 = DAT_005d9038;
    if (DAT_005d9038 <= fVar10) {
      fVar12 = fVar10;
    }
    if (fVar11 <= fVar12 * DAT_005d94d0) {
      return;
    }
  }
  auVar9._4_4_ = fStack_24;
  auVar9._0_4_ = local_28;
  auVar9._8_4_ = fStack_20;
  auVar9._12_4_ = fStack_1c;
LAB_0022ccbc:
  auVar4._4_4_ = fVar7;
  auVar4._0_4_ = fVar7;
  auVar4._8_4_ = fVar7;
  auVar4._12_4_ = fVar7;
  divps(auVar9,auVar4);
  return;
}


