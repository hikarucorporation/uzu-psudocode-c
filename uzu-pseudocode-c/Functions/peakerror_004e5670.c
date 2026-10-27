// Function : peakerror
// Namespace: 
// Entry    : 004e5670
// Prototype: undefined8 peakerror(float param_1, float param_2, float param_3, float * param_4, float * param_5)
// Body     : 004e5670 - 004e581c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 peakerror(float param_1,float param_2,float param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar5;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [16];
  float fVar6;
  float fVar7;
  
  fVar5 = in_XMM1._0_4_;
  dVar1 = (double)param_1;
  dVar2 = sin(dVar1);
  fVar7 = (float)dVar2;
  if ((DAT_00651f48 <= dVar1) || (dVar1 <= _DAT_00652bc0)) {
    fVar6 = DAT_005d9044;
    if (((dVar1 <= _DAT_00652bc8) || (_DAT_00652bd0 <= dVar1)) &&
       ((_DAT_00652bd8 <= dVar1 || (dVar1 <= _DAT_00652be0)))) {
      auVar4._4_4_ = param_1 + _UNK_00652bf4;
      auVar4._0_4_ = param_1 + _DAT_00652bf0;
      auVar4._8_4_ = param_1 + _UNK_00652bf8;
      auVar4._12_4_ = param_1 + _UNK_00652bfc;
      auVar4 = rcpps(in_XMM1,auVar4);
      fVar6 = fVar7 * auVar4._0_4_;
      fVar3 = fVar7 * auVar4._4_4_;
      fVar6 = (float)((double)((fVar7 - (param_1 + _UNK_00652bf4) * fVar3) * auVar4._4_4_ + fVar3 +
                              (fVar7 - (param_1 + _DAT_00652bf0) * fVar6) * auVar4._0_4_ + fVar6) *
                      DAT_00652be8 + (double)(fVar7 / param_1));
    }
  }
  else {
    fVar6 = DAT_005d9038;
  }
  dVar1 = cos(dVar1);
  fVar3 = (float)((double)fVar5 *
                 ((double)(param_5[2] + param_5[-2]) * _DAT_00651fc0 - (double)*param_5)) +
          fVar6 * (param_3 * (float)dVar1 - param_2 * fVar7);
  fVar5 = (float)((double)fVar5 *
                 ((double)(param_4[2] + param_4[-2]) * _UNK_00651fc8 - (double)*param_4)) +
          fVar6 * (param_3 * fVar7 + param_2 * (float)dVar1);
  fVar5 = fVar5 * fVar5;
  return CONCAT44(fVar5,fVar5 + fVar3 * fVar3);
}


