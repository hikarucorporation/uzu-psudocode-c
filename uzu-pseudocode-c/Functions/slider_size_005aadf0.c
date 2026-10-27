// Function : slider_size
// Namespace: 
// Entry    : 005aadf0
// Prototype: undefined slider_size(undefined8 param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12)
// Body     : 005aadf0 - 005ab082


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_size(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,int param_11,long param_12)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double extraout_XMM0_Qa;
  double dVar7;
  double extraout_XMM0_Qa_00;
  float fVar8;
  
  fVar5 = (float)atom_getfloatarg(0,param_11,param_12);
  fVar6 = (float)atom_getfloatarg(1,param_11,param_12);
  if (*(int *)(param_9 + 0x4bc) == 0) {
    iVar2 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    iVar4 = (int)fVar5 * iVar2;
    if (iVar4 < iVar2 * 2) {
      iVar4 = iVar2 * 2;
    }
    iVar3 = iVar4 * 100 + -100;
    if (iVar3 < *(int *)(param_9 + 0x494)) {
      *(int *)(param_9 + 0x494) = iVar3;
    }
    if (*(int *)(param_9 + 0x498) == 0) {
      dVar7 = *(double *)(param_9 + 0x4a8) - *(double *)(param_9 + 0x4a0);
    }
    else {
      dVar7 = log(*(double *)(param_9 + 0x4a8) / *(double *)(param_9 + 0x4a0));
    }
    param_2 = (double)(iVar4 / iVar2 + -1);
    dVar7 = dVar7 / param_2;
    *(double *)(param_9 + 0x4b0) = dVar7;
    *(int *)(param_9 + 0x44) = iVar4;
    if (param_11 < 2) goto LAB_005aaf5a;
    iVar2 = iemgui_clip_size((int)fVar6);
    iVar2 = iVar2 * *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    dVar7 = extraout_XMM0_Qa_00;
  }
  else {
    iVar2 = iemgui_clip_size((int)fVar5);
    iVar4 = *(int *)(*(long *)(param_9 + 0x30) + 0xec);
    *(int *)(param_9 + 0x44) = iVar2 * iVar4;
    dVar7 = extraout_XMM0_Qa;
    if (param_11 < 2) goto LAB_005aaf5a;
    iVar2 = (int)fVar6 * iVar4;
    if (iVar2 < iVar4 * 2) {
      iVar2 = iVar4 * 2;
    }
    iVar3 = iVar2 * 100 + -100;
    if (iVar3 < *(int *)(param_9 + 0x494)) {
      *(int *)(param_9 + 0x494) = iVar3;
    }
    if (*(int *)(param_9 + 0x498) == 0) {
      dVar7 = *(double *)(param_9 + 0x4a8) - *(double *)(param_9 + 0x4a0);
    }
    else {
      dVar7 = log(*(double *)(param_9 + 0x4a8) / *(double *)(param_9 + 0x4a0));
    }
    param_2 = (double)(iVar2 / iVar4 + -1);
    dVar7 = dVar7 / param_2;
    *(double *)(param_9 + 0x4b0) = dVar7;
  }
  *(int *)(param_9 + 0x40) = iVar2;
LAB_005aaf5a:
  iemgui_size(dVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_9);
  fVar5 = *(float *)(param_9 + 0x4b8);
  fVar6 = 0.0;
  if (((uint)fVar5 & 0x7f800000) != 0x7f800000) {
    fVar6 = fVar5;
  }
  fVar8 = 0.0;
  if (((uint)fVar5 & 0x7f800000) != 0) {
    fVar8 = fVar6;
  }
  iVar2 = *(int *)(param_9 + 0x494);
  fVar5 = (float)(~-(uint)(fVar5 != 0.0) & (uint)fVar5 | (uint)fVar8 & -(uint)(fVar5 != 0.0));
  *(float *)(param_9 + 0x4b8) = fVar5;
  dVar7 = *(double *)(param_9 + 0x4a0);
  dVar1 = *(double *)(param_9 + 0x4a8);
  if (dVar7 <= dVar1) {
    if (dVar1 < (double)fVar5) {
      fVar5 = (float)dVar1;
    }
    if ((double)fVar5 < dVar7) {
      fVar5 = (float)dVar7;
    }
  }
  else {
    if (dVar7 < (double)fVar5) {
      fVar5 = (float)dVar7;
    }
    if ((double)fVar5 < dVar1) {
      fVar5 = (float)dVar1;
    }
  }
  if (*(int *)(param_9 + 0x498) == 0) {
    dVar7 = (double)fVar5 - dVar7;
  }
  else {
    dVar7 = log((double)fVar5 / dVar7);
  }
  iVar3 = (int)((dVar7 * DAT_005d90a0) / *(double *)(param_9 + 0x4b0) + _DAT_0065e808);
  iVar4 = 0;
  if (-1 < iVar3) {
    iVar4 = iVar3;
  }
  *(int *)(param_9 + 0x494) = iVar4;
  *(int *)(param_9 + 0x490) = iVar4;
  if (iVar4 == iVar2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005ab081. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
  return;
}


