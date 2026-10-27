// Function : screenPosToLocalPos
// Namespace: juce:detail:ScalingHelpers
// Entry    : 0023ad40
// Prototype: undefined8 screenPosToLocalPos(undefined8 param_1_00, long * param_2)
// Body     : 0023ad40 - 0023b019


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::ScalingHelpers::screenPosToLocalPos(juce::Component&, juce::Point<float>) */

undefined8 __cdecl
juce::detail::ScalingHelpers::screenPosToLocalPos(undefined8 param_1_00,long *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  Desktop *this;
  long *plVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  undefined4 in_XMM0_Dc;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 in_XMM0_Dd;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 local_48 [16];
  undefined8 local_38;
  long *local_30;
  undefined8 *local_28;
  
  local_48._8_4_ = in_XMM0_Dc;
  local_48._0_8_ = param_1_00;
  local_48._12_4_ = in_XMM0_Dd;
  plVar5 = param_2;
  do {
    if ((*(ushort *)(plVar5 + 0x1d) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0023ad90 to 0023ad99 has its CatchHandler @ 0023b035 */
        this = operator_new(0x1d0);
                    /* try { // try from 0023ad9d to 0023ada4 has its CatchHandler @ 0023b022 */
        Desktop::Desktop(this);
        iVar1 = *(int *)(this + 0xdc);
        Desktop::instance = this;
      }
      else {
        iVar1 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar1 != 0) {
        lVar6 = 0;
        goto LAB_0023add0;
      }
      break;
    }
    plVar5 = (long *)plVar5[6];
  } while (plVar5 != (long *)0x0);
  goto LAB_0023ade7;
  while (lVar6 = lVar6 + 8, (long)iVar1 * 8 != lVar6) {
LAB_0023add0:
    plVar4 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6);
    if ((long *)plVar4[1] == plVar5) {
      local_48._0_8_ = (**(code **)(*plVar4 + 0x58))((int)param_1_00,plVar4);
      local_48._8_4_ = extraout_XMM0_Dc;
      local_48._12_4_ = extraout_XMM0_Dd;
      plVar5 = (long *)plVar4[1];
                    /* try { // try from 0023aec2 to 0023aeca has its CatchHandler @ 0023b01a */
      fVar7 = (float)(**(code **)(*plVar5 + 0x88))(plVar5);
      fVar9 = (float)(_DAT_005d91c0 & (uint)fVar7);
      if (fVar9 == DAT_005d94c8) {
        if ((fVar7 == DAT_005d9038) && (!NAN(fVar7) && !NAN(DAT_005d9038))) goto LAB_0023af25;
      }
      else {
        fVar11 = (float)((uint)(fVar7 + DAT_005d9054) & _DAT_005d91c0);
        if (fVar11 <= DAT_005d94cc) goto LAB_0023af25;
        fVar12 = DAT_005d9038;
        if (DAT_005d9038 <= fVar9) {
          fVar12 = fVar9;
        }
        if (fVar11 <= fVar12 * DAT_005d94d0) goto LAB_0023af25;
      }
      auVar10._4_4_ = fVar7;
      auVar10._0_4_ = fVar7;
      auVar10._8_4_ = fVar7;
      auVar10._12_4_ = fVar7;
      local_48 = divps(local_48,auVar10);
LAB_0023af25:
      do {
        uVar8 = local_48._0_8_;
        if (plVar5 == param_2) {
          return uVar8;
        }
        plVar4 = param_2;
        while (plVar4 != (long *)0x0) {
          plVar4 = (long *)plVar4[6];
          if (plVar4 == plVar5) goto LAB_0023afe2;
        }
        local_38 = uVar8;
        local_30 = plVar5;
        local_28 = &local_38;
        uVar8 = ComponentHelpers::
                convertToParentSpace<juce::Point<float>>(juce::Component_const&,juce::Point<float>)
                ::{lambda()#1}::operator()((_lambda___1_ *)&local_30);
        fVar9 = (float)((ulong)uVar8 >> 0x20);
        fVar7 = (float)uVar8;
        local_48._8_4_ = extraout_XMM0_Dc_00;
        local_48._0_8_ = uVar8;
        local_48._12_4_ = extraout_XMM0_Dd_00;
        pfVar2 = (float *)plVar5[10];
        if (pfVar2 != (float *)0x0) {
          local_48._0_4_ = fVar7 * *pfVar2 + pfVar2[1] * fVar9 + pfVar2[2];
          local_48._4_4_ = fVar7 * pfVar2[3] + pfVar2[4] * fVar9 + pfVar2[5];
          local_48._8_4_ = fVar7 * 0.0 + fVar9 * 0.0 + 0.0;
          local_48._12_4_ = fVar7 * 0.0 + fVar9 * 0.0 + 0.0;
        }
        plVar5 = (long *)plVar5[6];
      } while (plVar5 != (long *)0x0);
      plVar4 = param_2;
      do {
        plVar5 = plVar4;
        plVar4 = (long *)plVar5[6];
      } while ((long *)plVar5[6] != (long *)0x0);
      uVar8 = ComponentHelpers::convertFromParentSpace<juce::Point<float>>(local_48._0_8_,plVar5);
      if (plVar5 == param_2) {
        return uVar8;
      }
LAB_0023afe2:
      uVar8 = ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                        (uVar8,(long)plVar5,param_2);
      return uVar8;
    }
  }
LAB_0023ade7:
                    /* try { // try from 0023adea to 0023adf2 has its CatchHandler @ 0023b03d */
  fVar7 = (float)(**(code **)(*param_2 + 0x88))(param_2);
  fVar9 = (float)(_DAT_005d91c0 & (uint)fVar7);
  if (fVar9 == DAT_005d94c8) {
    if ((fVar7 == DAT_005d9038) && (uVar8 = param_1_00, !NAN(fVar7) && !NAN(DAT_005d9038)))
    goto LAB_0023ae51;
  }
  else {
    fVar11 = (float)((uint)(fVar7 + DAT_005d9054) & _DAT_005d91c0);
    uVar8 = param_1_00;
    if (fVar11 <= DAT_005d94cc) goto LAB_0023ae51;
    fVar12 = DAT_005d9038;
    if (DAT_005d9038 <= fVar9) {
      fVar12 = fVar9;
    }
    uVar8 = param_1_00;
    if (fVar11 <= fVar12 * DAT_005d94d0) goto LAB_0023ae51;
  }
  auVar3._4_4_ = fVar7;
  auVar3._0_4_ = fVar7;
  auVar3._8_4_ = fVar7;
  auVar3._12_4_ = fVar7;
  auVar10 = divps(local_48,auVar3);
  uVar8 = auVar10._0_8_;
LAB_0023ae51:
  local_48._0_8_ = uVar8;
  plVar5 = param_2;
  do {
    plVar4 = plVar5;
    plVar5 = (long *)plVar4[6];
  } while ((long *)plVar4[6] != (long *)0x0);
  uVar8 = ComponentHelpers::convertFromParentSpace<juce::Point<float>>(local_48._0_8_,plVar4);
  if (plVar4 == param_2) {
    return uVar8;
  }
  uVar8 = ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                    (uVar8,(long)plVar4,param_2);
  return uVar8;
}


