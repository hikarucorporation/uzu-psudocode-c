// Function : convertFromParentSpace<juce::Point<int>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00225900
// Prototype: ulong convertFromParentSpace<juce::Point<int>>(long * param_1, ulong param_2)
// Body     : 00225900 - 00225ce4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Point<int> juce::detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>
   >(juce::Component const&, juce::Point<int>) */

ulong __cdecl
juce::detail::ComponentHelpers::convertFromParentSpace<juce::Point<int>>
          (long *param_1,ulong param_2)

{
  int iVar1;
  float *pfVar2;
  long *plVar3;
  long lVar4;
  Desktop *this;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  
  pfVar2 = (float *)param_1[10];
  if (pfVar2 != (float *)0x0) {
    fVar8 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar9 = pfVar2[4];
    fVar7 = pfVar2[3];
    fVar14 = fVar8 * fVar9 - fVar7 * fVar10;
    dVar12 = (double)fVar14;
    dVar13 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar12 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar12,0));
    if (dVar13 == DAT_005d94e0) {
      if ((fVar14 != 0.0) || (NAN(fVar14))) goto LAB_0022598d;
LAB_00225a03:
      fVar14 = pfVar2[2];
      fVar11 = pfVar2[5];
    }
    else {
      if ((dVar13 <= DAT_005db368) || (dVar13 <= DAT_005db370 * dVar13)) goto LAB_00225a03;
LAB_0022598d:
      dVar12 = _DAT_005d9000 / dVar12;
      dVar13 = (double)fVar9;
      fVar7 = (float)((double)(float)((uint)fVar7 ^ _DAT_006524b0) * dVar12);
      fVar9 = (float)((double)fVar8 * dVar12);
      fVar10 = (float)((double)(float)((uint)fVar10 ^ _DAT_006524b0) * dVar12);
      fVar11 = (float)((uint)pfVar2[2] ^ _DAT_006524b0) * fVar7 - pfVar2[5] * fVar9;
      fVar14 = (float)((uint)pfVar2[2] ^ _DAT_006524b0) * (float)(dVar13 * dVar12) -
               pfVar2[5] * fVar10;
      fVar8 = (float)(dVar13 * dVar12);
    }
    fVar15 = (float)(int)(param_2 >> 0x20);
    param_2 = CONCAT44((int)(fVar7 * (float)(int)param_2 + fVar9 * fVar15 + fVar11),
                       (int)(fVar14 + fVar8 * (float)(int)param_2 + fVar10 * fVar15));
  }
  if ((*(ushort *)(param_1 + 0x1d) & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00225b6a to 00225b73 has its CatchHandler @ 00225d00 */
      this = operator_new(0x1d0);
                    /* try { // try from 00225b77 to 00225b7e has its CatchHandler @ 00225ced */
      Desktop::Desktop(this);
      iVar1 = *(int *)(this + 0xdc);
      Desktop::instance = this;
    }
    else {
      iVar1 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar1 == 0) {
      return param_2;
    }
    lVar4 = 0;
    while (plVar3 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar4),
          (long *)plVar3[1] != param_1) {
      lVar4 = lVar4 + 8;
      if ((long)iVar1 * 8 == lVar4) {
        return param_2;
      }
    }
    uVar5 = ScalingHelpers::scaledScreenPosToUnscaled<juce::Point<int>>(param_2);
    uVar5 = (**(code **)(*plVar3 + 0x58))
                      ((float)(int)uVar5,(float)(int)((ulong)uVar5 >> 0x20),plVar3);
                    /* try { // try from 00225bf5 to 00225bfd has its CatchHandler @ 00225ce5 */
    fVar8 = (float)(**(code **)(*param_1 + 0x88))(param_1);
    dVar12 = (double)(float)uVar5 + DAT_005d9098;
    dVar13 = (double)(float)((ulong)uVar5 >> 0x20) + DAT_005d9098;
    uVar6 = (ulong)dVar12 & 0xffffffff | (long)dVar13 << 0x20;
    fVar10 = (float)(_DAT_005d91c0 & (uint)fVar8);
    if (fVar10 == DAT_005d94c8) {
      if ((fVar8 == DAT_005d9038) && (!NAN(fVar8) && !NAN(DAT_005d9038))) {
        return uVar6;
      }
    }
    else {
      fVar9 = (float)((uint)(DAT_005d9054 + fVar8) & _DAT_005d91c0);
      if (fVar9 <= DAT_005d94cc) {
        return uVar6;
      }
      fVar7 = DAT_005d9038;
      if (DAT_005d9038 <= fVar10) {
        fVar7 = fVar10;
      }
      if (fVar9 <= fVar7 * DAT_005d94d0) {
        return uVar6;
      }
    }
    return CONCAT44((int)((float)SUB84(dVar13,0) / fVar8),(int)((float)SUB84(dVar12,0) / fVar8));
  }
  if (param_1[6] != 0) {
    return param_2 - (param_1[7] & 0xffffffff00000000U) & 0xffffffff00000000 |
           (ulong)(uint)((int)param_2 - (int)param_1[7]);
  }
  lVar4 = ScalingHelpers::scaledScreenPosToUnscaled<juce::Point<int>>(param_2);
                    /* try { // try from 00225ac0 to 00225ac8 has its CatchHandler @ 00225d08 */
  fVar8 = (float)(**(code **)(*param_1 + 0x88))(param_1);
  fVar10 = (float)(_DAT_005d91c0 & (uint)fVar8);
  if (fVar10 == DAT_005d94c8) {
    if ((fVar8 == DAT_005d9038) && (!NAN(fVar8) && !NAN(DAT_005d9038))) goto LAB_00225b45;
  }
  else {
    fVar9 = (float)((uint)(DAT_005d9054 + fVar8) & _DAT_005d91c0);
    if (fVar9 <= DAT_005d94cc) goto LAB_00225b45;
    fVar7 = DAT_005d9038;
    if (DAT_005d9038 <= fVar10) {
      fVar7 = fVar10;
    }
    if (fVar9 <= fVar7 * DAT_005d94d0) goto LAB_00225b45;
  }
  lVar4 = CONCAT44((int)((float)(int)((ulong)lVar4 >> 0x20) / fVar8),
                   (int)((float)(int)lVar4 / fVar8));
LAB_00225b45:
  return (ulong)(uint)((int)lVar4 - (int)param_1[7]) |
         lVar4 - (param_1[7] & 0xffffffff00000000U) & 0xffffffff00000000;
}


