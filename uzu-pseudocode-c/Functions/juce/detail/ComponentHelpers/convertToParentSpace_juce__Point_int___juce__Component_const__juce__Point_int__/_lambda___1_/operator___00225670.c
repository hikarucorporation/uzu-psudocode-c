// Function : operator()
// Namespace: juce:detail:ComponentHelpers:convertToParentSpace_juce__Point_int___juce__Component_const__juce__Point_int__:_lambda___1_
// Entry    : 00225670
// Prototype: ulong operator()({lambda()#1} * this)
// Body     : 00225670 - 002258ca


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::ComponentHelpers::convertToParentSpace<juce::Point<int> >(juce::Component const&,
   juce::Point<int>)::{lambda()#1}::TEMPNAMEPLACEHOLDERVALUE() const */

ulong __thiscall
juce::detail::ComponentHelpers::
convertToParentSpace<juce::Point<int>>(juce::Component_const&,juce::Point<int>)::{lambda()#1}::
operator()(_lambda___1_ *this)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  Desktop *this_00;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  plVar2 = *(long **)this;
  if ((*(ushort *)(plVar2 + 0x1d) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022576a to 00225773 has its CatchHandler @ 002258e6 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 00225777 to 0022577e has its CatchHandler @ 002258d3 */
      Desktop::Desktop(this_00);
      iVar10 = *(int *)(this_00 + 0xdc);
      Desktop::instance = this_00;
    }
    else {
      iVar10 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar10 != 0) {
      lVar5 = 0;
      do {
        plVar3 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5);
        if ((long *)plVar3[1] == plVar2) {
          uVar8 = **(undefined8 **)(this + 8);
                    /* try { // try from 002257d6 to 002257db has its CatchHandler @ 002258cb */
          fVar7 = (float)(**(code **)(**(long **)this + 0x88))();
          iVar10 = (int)uVar8;
          fVar9 = (float)(_DAT_005d91c0 & (uint)fVar7);
          if (fVar9 == DAT_005d94c8) {
            if ((fVar7 != DAT_005d9038) || (NAN(fVar7) || NAN(DAT_005d9038))) {
LAB_0022583f:
              iVar10 = (int)(fVar7 * (float)iVar10);
            }
          }
          else {
            fVar11 = (float)((uint)(fVar7 + DAT_005d9054) & _DAT_005d91c0);
            if (DAT_005d94cc < fVar11) {
              fVar12 = DAT_005d9038;
              if (DAT_005d9038 <= fVar9) {
                fVar12 = fVar9;
              }
              if (fVar12 * DAT_005d94d0 < fVar11) goto LAB_0022583f;
            }
          }
          uVar8 = (**(code **)(*plVar3 + 0x50))((float)iVar10,plVar3);
          uVar6 = (ulong)((double)(float)uVar8 + DAT_005d9098) & 0xffffffff |
                  (long)((double)(float)((ulong)uVar8 >> 0x20) + DAT_005d9098) << 0x20;
          goto LAB_0022588f;
        }
        lVar5 = lVar5 + 8;
      } while ((long)iVar10 * 8 != lVar5);
    }
    return **(ulong **)(this + 8);
  }
  uVar1 = plVar2[7] + **(ulong **)(this + 8);
  uVar4 = (**(ulong **)(this + 8) & 0xffffffff00000000) + plVar2[7];
  uVar6 = uVar1 & 0xffffffff | uVar4 & 0xffffffff00000000;
  if (plVar2[6] != 0) {
    return uVar6;
  }
                    /* try { // try from 002256c4 to 002256cc has its CatchHandler @ 002258ee */
  fVar7 = (float)(**(code **)(*plVar2 + 0x88))(plVar2);
  fVar9 = (float)(_DAT_005d91c0 & (uint)fVar7);
  if (fVar9 == DAT_005d94c8) {
    if ((fVar7 == DAT_005d9038) && (!NAN(fVar7) && !NAN(DAT_005d9038))) goto LAB_0022588f;
  }
  else {
    fVar11 = (float)((uint)(DAT_005d9054 + fVar7) & _DAT_005d91c0);
    if (fVar11 <= DAT_005d94cc) goto LAB_0022588f;
    fVar12 = DAT_005d9038;
    if (DAT_005d9038 <= fVar9) {
      fVar12 = fVar9;
    }
    if (fVar11 <= fVar12 * DAT_005d94d0) goto LAB_0022588f;
  }
  uVar6 = CONCAT44((int)((float)(int)(uVar4 >> 0x20) * fVar7),(int)((float)(int)uVar1 * fVar7));
LAB_0022588f:
  uVar6 = ScalingHelpers::unscaledScreenPosToScaled<juce::Point<int>>(uVar6);
  return uVar6;
}


