// Function : slider_set
// Namespace: 
// Entry    : 005aacd0
// Prototype: undefined slider_set(float param_1, long param_2)
// Body     : 005aacd0 - 005aadea


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_set(float param_1,long param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = 0.0;
  if (((uint)param_1 & 0x7f800000) != 0x7f800000) {
    fVar6 = param_1;
  }
  fVar7 = 0.0;
  if (((uint)param_1 & 0x7f800000) != 0) {
    fVar7 = fVar6;
  }
  iVar3 = *(int *)(param_2 + 0x494);
  fVar6 = (float)(~-(uint)(param_1 != 0.0) & (uint)param_1 | (uint)fVar7 & -(uint)(param_1 != 0.0));
  *(float *)(param_2 + 0x4b8) = fVar6;
  dVar1 = *(double *)(param_2 + 0x4a0);
  dVar2 = *(double *)(param_2 + 0x4a8);
  if (dVar1 <= dVar2) {
    if (dVar2 < (double)fVar6) {
      fVar6 = (float)dVar2;
    }
    if ((double)fVar6 < dVar1) {
      fVar6 = (float)dVar1;
    }
  }
  else {
    if (dVar1 < (double)fVar6) {
      fVar6 = (float)dVar1;
    }
    if ((double)fVar6 < dVar2) {
      fVar6 = (float)dVar2;
    }
  }
  if (*(int *)(param_2 + 0x498) == 0) {
    dVar1 = (double)fVar6 - dVar1;
  }
  else {
    dVar1 = log((double)fVar6 / dVar1);
  }
  iVar4 = (int)((dVar1 * DAT_005d90a0) / *(double *)(param_2 + 0x4b0) + _DAT_0065e808);
  iVar5 = 0;
  if (-1 < iVar4) {
    iVar5 = iVar4;
  }
  *(int *)(param_2 + 0x494) = iVar5;
  *(int *)(param_2 + 0x490) = iVar5;
  if (iVar5 == iVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005aade9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x38))(param_2,*(undefined8 *)(param_2 + 0x30),0);
  return;
}


