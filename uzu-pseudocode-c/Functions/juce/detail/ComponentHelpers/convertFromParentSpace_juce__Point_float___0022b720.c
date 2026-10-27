// Function : convertFromParentSpace<juce::Point<float>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 0022b720
// Prototype: undefined8 convertFromParentSpace<juce::Point<float>>(undefined8 param_1_00, long * param_2)
// Body     : 0022b720 - 0022bbd9


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::Point<float> juce::detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>
   >(juce::Component const&, juce::Point<float>) */

undefined8 __cdecl
juce::detail::ComponentHelpers::convertFromParentSpace<juce::Point<float>>
          (undefined8 param_1_00,long *param_2)

{
  ushort uVar1;
  int iVar2;
  float *pfVar3;
  long *plVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  Desktop *pDVar7;
  long lVar8;
  float fVar9;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  fVar10 = (float)((ulong)param_1_00 >> 0x20);
  fVar9 = (float)param_1_00;
  pfVar3 = (float *)param_2[10];
  if (pfVar3 == (float *)0x0) {
    fStack_40 = (float)in_XMM0_Dc;
    local_48 = (undefined1  [8])param_1_00;
    fStack_3c = (float)in_XMM0_Dd;
    uVar1 = *(ushort *)(param_2 + 0x1d);
  }
  else {
    fVar17 = *pfVar3 * pfVar3[4] - pfVar3[3] * pfVar3[1];
    dVar16 = (double)fVar17;
    dVar15 = (double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar16 >> 0x20),
                              _DAT_005d91b0 & SUB84(dVar16,0));
    if (dVar15 == DAT_005d94e0) {
      if ((fVar17 != 0.0) || (NAN(fVar17))) goto LAB_0022b7a5;
LAB_0022b88b:
      local_28 = *(undefined8 *)(pfVar3 + 4);
      local_38 = *(undefined8 *)pfVar3;
      uStack_30 = *(undefined8 *)(pfVar3 + 2);
    }
    else {
      if ((dVar15 <= DAT_005db368) || (dVar15 <= DAT_005db370 * dVar15)) goto LAB_0022b88b;
LAB_0022b7a5:
      dVar16 = _DAT_005d9000 / dVar16;
      fVar14 = (float)((double)pfVar3[4] * dVar16);
      fVar13 = (float)((double)(float)((uint)pfVar3[3] ^ _DAT_006524b0) * dVar16);
      fVar12 = (float)((double)(float)((uint)pfVar3[1] ^ _DAT_006524b0) * dVar16);
      fVar17 = (float)((double)*pfVar3 * dVar16);
      local_38 = CONCAT44(fVar12,fVar14);
      uStack_30 = CONCAT44(fVar13,(float)((uint)pfVar3[2] ^ _DAT_006524b0) * fVar14 -
                                  fVar12 * pfVar3[5]);
      local_28 = CONCAT44((float)((uint)pfVar3[2] ^ _DAT_006524b0) * fVar13 - pfVar3[5] * fVar17,
                          fVar17);
    }
    local_48._4_4_ = local_28._4_4_ + fVar9 * uStack_30._4_4_ + (float)local_28 * fVar10;
    local_48._0_4_ = (float)uStack_30 + fVar9 * (float)local_38 + local_38._4_4_ * fVar10;
    fStack_40 = (float)local_28 + fVar9 * (float)uStack_30 + uStack_30._4_4_ * fVar10;
    fStack_3c = local_28._4_4_ + fVar9 * uStack_30._4_4_ + (float)local_28 * fVar10;
    uVar1 = *(ushort *)(param_2 + 0x1d);
  }
  uVar6 = local_48._0_4_;
  if ((uVar1 & 1) != 0) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022b90c to 0022b915 has its CatchHandler @ 0022bc1c */
      pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0022b919 to 0022b920 has its CatchHandler @ 0022bc09 */
      Desktop::Desktop(pDVar7);
      iVar2 = *(int *)(pDVar7 + 0xdc);
      Desktop::instance = pDVar7;
    }
    else {
      iVar2 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar2 != 0) {
      lVar8 = 0;
      do {
        plVar4 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar8);
        if ((long *)plVar4[1] == param_2) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022ba68 to 0022ba71 has its CatchHandler @ 0022bbdc */
            pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0022ba75 to 0022ba7c has its CatchHandler @ 0022bbda */
            Desktop::Desktop(pDVar7);
            Desktop::instance = pDVar7;
          }
          fVar9 = *(float *)(Desktop::instance + 0x130);
          fVar10 = (float)(_DAT_005d91c0 & (uint)fVar9);
          if (fVar10 == DAT_005d94c8) {
            if ((fVar9 == DAT_005d9038) && (!NAN(fVar9) && !NAN(DAT_005d9038))) goto LAB_0022baec;
          }
          else {
            fVar17 = (float)((uint)(DAT_005d9054 + fVar9) & _DAT_005d91c0);
            if (fVar17 <= DAT_005d94cc) goto LAB_0022baec;
            fVar12 = DAT_005d9038;
            if (DAT_005d9038 <= fVar10) {
              fVar12 = fVar10;
            }
            if (fVar17 <= fVar12 * DAT_005d94d0) goto LAB_0022baec;
          }
          local_48._4_4_ = 0;
          local_48._0_4_ = (float)uVar6 * fVar9;
          fStack_40 = fStack_40 * fVar9;
          fStack_3c = fStack_3c * fVar9;
LAB_0022baec:
          local_48 = (undefined1  [8])(**(code **)(*plVar4 + 0x58))(local_48._0_4_,plVar4);
          fStack_40 = (float)extraout_XMM0_Dc;
          fStack_3c = (float)extraout_XMM0_Dd;
                    /* try { // try from 0022bb00 to 0022bb08 has its CatchHandler @ 0022bbf9 */
          fVar9 = (float)(**(code **)(*param_2 + 0x88))(param_2);
          fVar10 = (float)(_DAT_005d91c0 & (uint)fVar9);
          if (fVar10 == DAT_005d94c8) {
            if ((fVar9 == DAT_005d9038) && (!NAN(fVar9) && !NAN(DAT_005d9038))) {
              return local_48;
            }
          }
          else {
            fVar17 = (float)((uint)(fVar9 + DAT_005d9054) & _DAT_005d91c0);
            if (fVar17 <= DAT_005d94cc) {
              return local_48;
            }
            fVar12 = DAT_005d9038;
            if (DAT_005d9038 <= fVar10) {
              fVar12 = fVar10;
            }
            if (fVar17 <= fVar12 * DAT_005d94d0) {
              return local_48;
            }
          }
          auVar11._4_4_ = fVar9;
          auVar11._0_4_ = fVar9;
          auVar11._8_4_ = fVar9;
          auVar11._12_4_ = fVar9;
          auVar11 = divps(_local_48,auVar11);
          return auVar11._0_8_;
        }
        lVar8 = lVar8 + 8;
      } while ((long)iVar2 * 8 != lVar8);
    }
    return local_48;
  }
  if (param_2[6] != 0) goto LAB_0022b8f7;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0022b978 to 0022b981 has its CatchHandler @ 0022bbf1 */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0022b985 to 0022b98c has its CatchHandler @ 0022bbde */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  fVar9 = *(float *)(Desktop::instance + 0x130);
  fVar10 = (float)(_DAT_005d91c0 & (uint)fVar9);
  if (fVar10 == DAT_005d94c8) {
    if ((fVar9 != DAT_005d9038) || (NAN(fVar9) || NAN(DAT_005d9038))) {
LAB_0022b9ec:
      local_48._4_4_ = (float)local_48._4_4_ * fVar9;
      local_48._0_4_ = (float)uVar6 * fVar9;
      fStack_40 = fStack_40 * fVar9;
      fStack_3c = fStack_3c * fVar9;
    }
  }
  else {
    fVar17 = (float)((uint)(DAT_005d9054 + fVar9) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar17) {
      fVar12 = DAT_005d9038;
      if (DAT_005d9038 <= fVar10) {
        fVar12 = fVar10;
      }
      if (fVar12 * DAT_005d94d0 < fVar17) goto LAB_0022b9ec;
    }
  }
                    /* try { // try from 0022b9fe to 0022ba06 has its CatchHandler @ 0022bc01 */
  fVar9 = (float)(**(code **)(*param_2 + 0x88))(param_2);
  fVar10 = (float)(_DAT_005d91c0 & (uint)fVar9);
  if (fVar10 == DAT_005d94c8) {
    if ((fVar9 == DAT_005d9038) && (!NAN(fVar9) && !NAN(DAT_005d9038))) goto LAB_0022b8f7;
  }
  else {
    fVar17 = (float)((uint)(fVar9 + DAT_005d9054) & _DAT_005d91c0);
    if (fVar17 <= DAT_005d94cc) goto LAB_0022b8f7;
    fVar12 = DAT_005d9038;
    if (DAT_005d9038 <= fVar10) {
      fVar12 = fVar10;
    }
    if (fVar17 <= fVar12 * DAT_005d94d0) goto LAB_0022b8f7;
  }
  auVar5._4_4_ = fVar9;
  auVar5._0_4_ = fVar9;
  auVar5._8_4_ = fVar9;
  auVar5._12_4_ = fVar9;
  auVar11 = divps(_local_48,auVar5);
  local_48 = auVar11._0_8_;
LAB_0022b8f7:
  return CONCAT44((float)local_48._4_4_ - (float)(int)((ulong)param_2[7] >> 0x20),
                  (float)local_48._0_4_ - (float)(int)param_2[7]);
}


