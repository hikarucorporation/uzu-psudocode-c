// Function : slider_click
// Namespace: 
// Entry    : 005aa2c0
// Prototype: undefined slider_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005aa2c0 - 005aa4ac


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  double dVar10;
  
  if (*(int *)(param_9 + 0x4bc) == 0) {
    iVar5 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      *(long *)(param_9 + 0x30),param_11,param_12,param_13,param_14);
    fVar6 = (float)param_1 - (float)iVar5;
    iVar5 = *(int *)(param_9 + 0x44);
  }
  else {
    iVar5 = *(int *)(param_9 + 0x40);
    iVar4 = text_ypix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      *(long *)(param_9 + 0x30),param_11,param_12,param_13,param_14);
    fVar6 = (float)(iVar4 + iVar5) - (float)param_2;
    iVar5 = *(int *)(param_9 + 0x40);
  }
  lVar3 = *(long *)(param_9 + 0x30);
  iVar4 = *(int *)(lVar3 + 0xec);
  iVar5 = (iVar5 / iVar4) * 100 + -100;
  if (*(int *)(param_9 + 0x49c) == 0) {
    iVar4 = (int)(((double)fVar6 * DAT_005d90a0) / (double)iVar4);
    *(int *)(param_9 + 0x494) = iVar4;
  }
  else {
    iVar4 = *(int *)(param_9 + 0x494);
  }
  if ((iVar5 < iVar4) || (iVar5 = iVar4, iVar4 < 0)) {
    iVar4 = 0;
    if (-1 < iVar5) {
      iVar4 = iVar5;
    }
    *(int *)(param_9 + 0x494) = iVar4;
    uVar1 = *(uint *)(param_9 + 0x440);
  }
  else {
    uVar1 = *(uint *)(param_9 + 0x440);
  }
  if ((uVar1 & 0x2000000) == 0) {
    iVar5 = (iVar4 / 100) * 100;
  }
  else {
    iVar5 = iVar4;
  }
  if ((uVar1 & 0x80) == 0) {
    iVar2 = *(int *)(param_9 + 0x498);
  }
  else {
    if (*(long *)(param_9 + 0x458) == *(long *)(param_9 + 0x460)) {
      iVar5 = iVar4;
    }
    iVar2 = *(int *)(param_9 + 0x498);
  }
  if (iVar2 == 0) {
    dVar7 = (double)iVar5 * DAT_00651f48 * *(double *)(param_9 + 0x4b0) +
            *(double *)(param_9 + 0x4a0);
  }
  else {
    dVar7 = exp((double)iVar5 * DAT_00651f48 * *(double *)(param_9 + 0x4b0));
    dVar7 = dVar7 * *(double *)(param_9 + 0x4a0);
  }
  uVar9 = (undefined4)((ulong)dVar7 >> 0x20);
  fVar6 = (float)dVar7;
  dVar10 = (double)fVar6;
  dVar7 = 0.0;
  if (dVar10 <= _DAT_0065e800) {
    dVar7 = (double)CONCAT44(uVar9,fVar6);
  }
  if (_DAT_00652e60 <= dVar10) {
    dVar7 = (double)CONCAT44(uVar9,fVar6);
  }
  *(int *)(param_9 + 0x4b8) = SUB84(dVar7,0);
  *(int *)(param_9 + 0x490) = iVar4;
  uVar8 = (**(code **)(param_9 + 0x38))(param_9,lVar3,0);
  slider_bang(uVar8,dVar7,dVar10,param_4,param_5,param_6,param_7,param_8,param_9);
  glist_grab(*(long *)(param_9 + 0x30),param_9,0x5aa4b0,0,(int)(float)param_1,(int)(float)param_2);
  return;
}


