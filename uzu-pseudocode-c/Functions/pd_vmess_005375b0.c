// Function : pd_vmess
// Namespace: 
// Entry    : 005375b0
// Prototype: undefined pd_vmess(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, long param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, double param_15)
// Body     : 005375b0 - 0053779a


void pd_vmess(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,double param_5,
             double param_6,double param_7,undefined8 param_8,long param_9,undefined8 *param_10,
             long param_11,undefined8 param_12,undefined8 param_13,uint *param_14,double param_15)

{
  char in_AL;
  long lVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  float *pfVar5;
  double *pdVar6;
  float fVar7;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined8 local_188;
  double *local_180;
  double local_168 [4];
  undefined8 local_148;
  uint *local_140;
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined8 local_118;
  undefined8 local_108;
  double local_f8;
  double local_e8;
  double local_d8;
  undefined8 local_c8;
  float local_b8 [2];
  undefined8 local_b0 [19];
  
  local_168[3] = (double)param_12;
  local_148 = param_13;
  local_140 = param_14;
  if (in_AL != '\0') {
    local_138._8_4_ = in_XMM0_Dc;
    local_138._0_8_ = param_1;
    local_138._12_4_ = in_XMM0_Dd;
    local_128 = param_2;
    local_118 = param_3;
    local_108 = param_4;
    local_f8 = param_5;
    local_e8 = param_6;
    local_d8 = param_7;
    local_c8 = param_8;
  }
  local_188 = 0x3000000018;
  local_180 = &param_15;
  pdVar6 = local_168;
  pfVar5 = (float *)local_b0;
  lVar1 = 0;
  do {
    switch(*(undefined1 *)(param_11 + lVar1)) {
    case 0x66:
      pfVar5[-2] = 1.4013e-45;
      uVar2 = (ulong)local_188._4_4_;
      if (uVar2 < 0xa1) {
        pdVar3 = (double *)(ulong)(local_188._4_4_ + 0x10);
        local_188 = CONCAT44(local_188._4_4_ + 0x10,(int)local_188);
        pdVar4 = (double *)(uVar2 + (long)pdVar6);
      }
      else {
        pdVar3 = local_180 + 1;
        pdVar4 = local_180;
        local_180 = pdVar3;
      }
      fVar7 = (float)*pdVar4;
      param_1 = CONCAT44((int)((ulong)*pdVar4 >> 0x20),fVar7);
      *pfVar5 = fVar7;
      break;
    default:
      goto switchD_0053768c_caseD_67;
    case 0x69:
      pfVar5[-2] = 1.4013e-45;
      uVar2 = local_188 & 0xffffffff;
      if (uVar2 < 0x29) {
        pdVar3 = (double *)(ulong)((int)local_188 + 8U);
        local_188 = CONCAT44(local_188._4_4_,(int)local_188 + 8U);
        pdVar4 = (double *)(uVar2 + (long)pdVar6);
      }
      else {
        pdVar3 = local_180 + 1;
        pdVar4 = local_180;
        local_180 = pdVar3;
      }
      param_1 = (ulong)(uint)(float)(long)*pdVar4;
      *pfVar5 = (float)(long)*pdVar4;
      break;
    case 0x70:
      pfVar5[-2] = 4.2039e-45;
      if ((local_188 & 0xffffffff) < 0x29) goto LAB_00537714;
LAB_00537650:
      pdVar3 = local_180;
      local_180 = local_180 + 1;
      goto LAB_0053765e;
    case 0x73:
      pfVar5[-2] = 2.8026e-45;
      if (0x28 < (local_188 & 0xffffffff)) goto LAB_00537650;
LAB_00537714:
      uVar2 = local_188 & 0xffffffff;
      local_188 = CONCAT44(local_188._4_4_,(int)local_188 + 8);
      pdVar3 = (double *)(uVar2 + (long)pdVar6);
LAB_0053765e:
      pdVar3 = (double *)*pdVar3;
      *(double **)pfVar5 = pdVar3;
    }
    lVar1 = lVar1 + 1;
    pfVar5 = pfVar5 + 4;
  } while ((int)lVar1 != 10);
  param_1 = pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     "pd_vmess: only 10 allowed",param_11,pdVar3,(char *)pdVar6,param_14);
  lVar1 = 10;
switchD_0053768c_caseD_67:
  pd_typedmess(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long *)param_9,
               param_10,(uint)lVar1,(int *)local_b8,(uint *)pdVar6,param_14);
  return;
}


