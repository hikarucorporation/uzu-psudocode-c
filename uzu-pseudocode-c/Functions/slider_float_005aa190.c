// Function : slider_float
// Namespace: 
// Entry    : 005aa190
// Prototype: undefined slider_float(ulong param_1, long param_2)
// Body     : 005aa190 - 005aa2b8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_float(ulong param_1,long param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  int iVar3;
  double dVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  double extraout_XMM1_Qa;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  undefined8 in_XMM4_Qa;
  undefined8 in_XMM5_Qa;
  undefined8 in_XMM6_Qa;
  undefined8 in_XMM7_Qa;
  
  auVar9 = (undefined1  [16])0x0;
  if (((uint)(float)param_1 & 0x7f800000) != 0x7f800000) {
    auVar9._8_4_ = in_XMM0_Dc;
    auVar9._0_8_ = param_1;
    auVar9._12_4_ = in_XMM0_Dd;
  }
  auVar7 = (undefined1  [16])0x0;
  if ((param_1 & 0x7f800000) != 0) {
    auVar7 = auVar9;
  }
  iVar1 = *(int *)(param_2 + 0x494);
  auVar9 = ZEXT416(-(uint)((float)param_1 != 0.0));
  auVar2._8_4_ = in_XMM0_Dc;
  auVar2._0_8_ = param_1;
  auVar2._12_4_ = in_XMM0_Dd;
  auVar9 = ~auVar9 & auVar2 | auVar7 & auVar9;
  *(float *)(param_2 + 0x4b8) = auVar9._0_4_;
  dVar6 = *(double *)(param_2 + 0x4a0);
  dVar5 = *(double *)(param_2 + 0x4a8);
  dVar8 = (double)auVar9._0_4_;
  if (dVar6 <= dVar5) {
    if (dVar5 < dVar8) {
      auVar9 = ZEXT416((uint)(float)dVar5);
    }
    if ((double)auVar9._0_4_ < dVar6) {
      auVar9 = ZEXT416((uint)(float)dVar6);
    }
  }
  else {
    if (dVar6 < dVar8) {
      auVar9 = ZEXT416((uint)(float)dVar6);
    }
    dVar8 = (double)auVar9._0_4_;
    if (dVar8 < dVar5) {
      auVar9 = ZEXT416((uint)(float)dVar5);
    }
  }
  dVar5 = auVar9._0_8_;
  if (*(int *)(param_2 + 0x498) == 0) {
    dVar4 = (double)auVar9._0_4_ - dVar6;
  }
  else {
    dVar4 = log((double)auVar9._0_4_ / dVar6);
    dVar5 = auVar9._0_8_;
  }
  dVar4 = (dVar4 * DAT_005d90a0) / *(double *)(param_2 + 0x4b0) + _DAT_0065e808;
  iVar3 = 0;
  if (-1 < (int)dVar4) {
    iVar3 = (int)dVar4;
  }
  *(int *)(param_2 + 0x494) = iVar3;
  *(int *)(param_2 + 0x490) = iVar3;
  if (iVar3 != iVar1) {
    dVar4 = (double)(**(code **)(param_2 + 0x38))(param_2,*(undefined8 *)(param_2 + 0x30),0);
    dVar5 = extraout_XMM1_Qa;
  }
  if ((*(byte *)(param_2 + 0x443) & 4) == 0) {
    return;
  }
  slider_bang(dVar4,dVar5,dVar6,dVar8,in_XMM4_Qa,in_XMM5_Qa,in_XMM6_Qa,in_XMM7_Qa,param_2);
  return;
}


