// Function : displayTipInternal
// Namespace: juce:TooltipWindow
// Entry    : 002e8a60
// Prototype: undefined displayTipInternal(Component * param_1, ulong param_2, long * param_3)
// Body     : 002e8a60 - 002e8d60


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TooltipWindow::displayTipInternal(juce::Point<int>, juce::String const&,
   juce::TooltipWindow::ShownManually) */

void __cdecl juce::TooltipWindow::displayTipInternal(Component *param_1,ulong param_2,long *param_3)

{
  byte *pbVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  Desktop *this;
  byte *pbVar10;
  int *piVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if (param_1[0x14c] != (Component)0x0) {
    return;
  }
  param_1[0x14c] = (Component)0x1;
  pbVar10 = (byte *)*param_3;
  if ((*(byte **)(param_1 + 0x128) != pbVar10) &&
     (uVar5 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (*(byte **)(param_1 + 0x128),pbVar10), uVar5 != 0)) {
    pbVar1 = pbVar10 + -0x10;
    if (pbVar1 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar1 = *(int *)pbVar1 + 1;
      UNLOCK();
      pbVar10 = (byte *)*param_3;
    }
    LOCK();
    lVar12 = *(long *)(param_1 + 0x128);
    *(byte **)(param_1 + 0x128) = pbVar10;
    UNLOCK();
    piVar11 = (int *)(lVar12 + -0x10);
    if (piVar11 != &emptyString) {
      LOCK();
      iVar18 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar18 == 0) {
        operator_delete__(piVar11);
      }
    }
                    /* try { // try from 002e8ae6 to 002e8af4 has its CatchHandler @ 002e8d78 */
    Component::internalRepaintUnchecked((long)param_1,0,*(ulong *)(param_1 + 0x40),'\x01');
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      plVar7 = plVar4;
      plVar4 = (long *)plVar7[6];
    } while ((long *)plVar7[6] != (long *)0x0);
                    /* try { // try from 002e8b1c to 002e8b4e has its CatchHandler @ 002e8d7a */
    uVar8 = detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>(plVar7,param_2);
    if (plVar7 != plVar2) {
      uVar8 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
                        ((long)plVar7,plVar2,uVar8);
    }
    updatePosition(param_1,param_3,uVar8,0,plVar2[8]);
    goto LAB_002e8cf7;
  }
  uVar9 = detail::ScalingHelpers::scaledScreenPosToUnscaled<juce::Point<int>>(param_2);
                    /* try { // try from 002e8b63 to 002e8b6b has its CatchHandler @ 002e8d6e */
  fVar19 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1);
  fVar21 = (float)(_DAT_005d91c0 & (uint)fVar19);
  if (fVar21 == DAT_005d94c8) {
    if ((fVar19 != DAT_005d9038) || (NAN(fVar19) || NAN(DAT_005d9038))) {
LAB_002e8bbc:
      uVar9 = CONCAT44((int)((float)(int)((ulong)uVar9 >> 0x20) / fVar19),
                       (int)((float)(int)uVar9 / fVar19));
    }
  }
  else {
    fVar22 = (float)((uint)(DAT_005d9054 + fVar19) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar22) {
      fVar23 = DAT_005d9038;
      if (DAT_005d9038 <= fVar21) {
        fVar23 = fVar21;
      }
      if (fVar23 * DAT_005d94d0 < fVar22) goto LAB_002e8bbc;
    }
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e8bf4 to 002e8bfd has its CatchHandler @ 002e8d76 */
    this = operator_new(0x1d0);
                    /* try { // try from 002e8c01 to 002e8c08 has its CatchHandler @ 002e8d61 */
    Desktop::Desktop(this);
    Desktop::instance = this;
  }
  lVar12 = **(long **)(Desktop::instance + 0xe0);
  lVar17 = (long)*(int *)((long)*(long **)(Desktop::instance + 0xe0) + 0xc) * 0x70;
  iVar18 = 0x7fffffff;
  lVar15 = 0;
  do {
    uVar8 = *(ulong *)(lVar12 + 0xc);
    iVar14 = (int)*(undefined8 *)(lVar12 + 4);
    iVar16 = (int)param_2;
    iVar6 = (int)((ulong)*(undefined8 *)(lVar12 + 4) >> 0x20);
    iVar13 = (int)(param_2 >> 0x20);
    iVar3 = (int)(uVar8 >> 0x20);
    if ((((iVar14 - iVar16 == 0 || iVar14 < iVar16) && (iVar6 <= iVar13)) &&
        (iVar16 < iVar14 + (int)uVar8)) && (iVar13 < iVar3 + iVar6)) {
      lVar15 = lVar12;
      break;
    }
    dVar20 = hypot((double)((iVar14 - iVar16) +
                           ((int)(((uint)(uVar8 >> 0x1f) & 1) + (int)uVar8) >> 1)),
                   (double)((iVar6 - iVar13) + iVar3 / 2));
    if ((int)dVar20 <= iVar18) {
      iVar18 = (int)dVar20;
      lVar15 = lVar12;
    }
    lVar12 = lVar12 + 0x70;
    lVar17 = lVar17 + -0x70;
  } while (lVar17 != 0);
                    /* try { // try from 002e8cd0 to 002e8cf6 has its CatchHandler @ 002e8d76 */
  updatePosition(param_1,param_3,uVar9,*(undefined8 *)(lVar15 + 0x14),*(undefined8 *)(lVar15 + 0x1c)
                );
  (**(code **)(*(long *)param_1 + 0x70))(param_1,0x506,0);
LAB_002e8cf7:
                    /* try { // try from 002e8cf7 to 002e8d00 has its CatchHandler @ 002e8d78 */
  Component::toFront(param_1,'\0');
  LOCK();
  lVar12 = *(long *)(param_1 + 0x138);
  *(undefined1 **)(param_1 + 0x138) = &DAT_0061ac58;
  UNLOCK();
  piVar11 = (int *)(lVar12 + -0x10);
  if (piVar11 != &emptyString) {
    LOCK();
    iVar18 = *piVar11;
    *piVar11 = *piVar11 + -1;
    UNLOCK();
    if (iVar18 == 0) {
      operator_delete__(piVar11);
    }
  }
  *(undefined2 *)(param_1 + 0x14c) = 0;
  return;
}


