// Function : convert
// Namespace: 
// Entry    : 0056e510
// Prototype: ulong convert(undefined8 param_1, long param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, char * param_6, undefined8 param_7)
// Body     : 0056e510 - 0056e77b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong convert(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,char *param_6,undefined8 param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined8 in_XMM7_Qa;
  
  fVar6 = (float)param_1;
  fVar7 = *(float *)(param_2 + 0x44);
  fVar1 = *(float *)(param_2 + 0x4c);
  if (fVar6 == fVar7) goto LAB_0056e523;
  fVar2 = *(float *)(param_2 + 0x48);
  fVar3 = *(float *)(param_2 + 0x50);
  uVar8 = (ulong)(uint)fVar3;
  if (fVar2 == fVar6) {
    return uVar8;
  }
  fVar10 = fVar2 - fVar7;
  if (*(int *)(param_2 + 0x38) != 0) {
    if (0.0 <= fVar10) {
      if (fVar6 < fVar7) goto LAB_0056e523;
      if (fVar2 < fVar6) {
        return uVar8;
      }
    }
    else {
      if (fVar7 < fVar6) {
LAB_0056e523:
        return (ulong)(uint)fVar1;
      }
      if (fVar6 < fVar2) {
        return uVar8;
      }
    }
  }
  fVar11 = fVar3 - fVar1;
  if (*(int *)(param_2 + 0x40) != 0) {
    if (((0.0 < fVar7) || (fVar2 < 0.0)) && ((fVar7 < 0.0 || (0.0 < fVar2)))) {
      fVar7 = DAT_005d9038 / fVar7;
      dVar9 = log((double)(fVar7 * fVar2));
      dVar4 = log((double)(fVar7 * fVar6));
      return (ulong)(uint)(fVar1 + fVar11 * (float)(dVar4 / dVar9));
    }
    uVar8 = 0;
    pcVar5 = "[rescale]: intput range cannot contain \'0\' in reverse log mode";
LAB_0056e5ef:
    pd_error(CONCAT44((int)((ulong)param_1 >> 0x20),fVar6),uVar8,(ulong)(uint)fVar7,
             (ulong)(uint)fVar2,(ulong)(uint)fVar10,(ulong)(uint)fVar11,(ulong)(uint)fVar1,
             in_XMM7_Qa,param_2,pcVar5,param_4,param_5,param_6,param_7);
    return 0;
  }
  fVar6 = (fVar6 - fVar7) / fVar10;
  if (*(int *)(param_2 + 0x3c) == 0) {
    fVar7 = *(float *)(param_2 + 0x54);
    dVar9 = (double)fVar7;
    if (((double)CONCAT44(_UNK_005d91b4 & (uint)((ulong)dVar9 >> 0x20),
                          _DAT_005d91b0 & SUB84(dVar9,0)) == _DAT_005d9000) || (fVar7 == 0.0)) {
      return (ulong)(uint)(fVar1 + fVar11 * fVar6);
    }
    if (0.0 < fVar7) {
      dVar9 = pow((double)fVar6,dVar9);
      return (ulong)(uint)(float)((double)fVar1 + (double)fVar11 * dVar9);
    }
    dVar9 = pow((double)(DAT_005d9038 - fVar6),(double)(float)((uint)fVar7 ^ _DAT_006524b0));
    dVar9 = (double)fVar1 + (double)fVar11 * (_DAT_005d9000 - dVar9);
  }
  else {
    if (((fVar1 <= 0.0) && (0.0 <= fVar3)) || ((0.0 <= fVar1 && (fVar3 <= 0.0)))) {
      fVar7 = 0.0;
      pcVar5 = "[rescale]: output range cannot contain \'0\' in log mode";
      goto LAB_0056e5ef;
    }
    dVar9 = log((double)(fVar3 / fVar1));
    dVar9 = exp(dVar9 * (double)fVar6);
    dVar9 = (double)fVar1 * dVar9;
  }
  return (ulong)(uint)(float)dVar9;
}


