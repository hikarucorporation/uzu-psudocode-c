// Function : slider_bang
// Namespace: 
// Entry    : 005aa070
// Prototype: undefined slider_bang(undefined8 param_1, double param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005aa070 - 005aa18c


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void slider_bang(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  double dVar5;
  ulong uVar6;
  float fVar7;
  undefined4 uVar8;
  
  uVar8 = (undefined4)((ulong)param_3 >> 0x20);
  if (0x2d < *(int *)PTR_pd_compatibilitylevel_00715a40) {
    uVar6 = (ulong)*(uint *)(param_9 + 0x4b8);
    goto LAB_005aa14f;
  }
  uVar1 = *(uint *)(param_9 + 0x440);
  iVar2 = *(int *)(param_9 + 0x494);
  iVar4 = iVar2;
  if ((uVar1 & 0x2000000) == 0) {
    iVar4 = (iVar2 / 100) * 100;
    if ((uVar1 & 0x80) != 0) goto LAB_005aa0f4;
LAB_005aa09f:
    if (*(int *)(param_9 + 0x498) != 0) goto LAB_005aa0a8;
LAB_005aa10e:
    dVar5 = (double)iVar4 * DAT_00651f48 * *(double *)(param_9 + 0x4b0) +
            *(double *)(param_9 + 0x4a0);
  }
  else {
    if ((uVar1 & 0x80) == 0) goto LAB_005aa09f;
LAB_005aa0f4:
    if (*(long *)(param_9 + 0x458) == *(long *)(param_9 + 0x460)) {
      iVar4 = iVar2;
    }
    if (*(int *)(param_9 + 0x498) == 0) goto LAB_005aa10e;
LAB_005aa0a8:
    dVar5 = exp((double)iVar4 * DAT_00651f48 * *(double *)(param_9 + 0x4b0));
    dVar5 = dVar5 * *(double *)(param_9 + 0x4a0);
  }
  fVar7 = (float)dVar5;
  param_2 = (double)fVar7;
  uVar6 = 0;
  if (param_2 <= _DAT_0065e800) {
    uVar6 = CONCAT44(uVar8,fVar7);
  }
  param_3 = CONCAT44(uVar8,fVar7);
  if (_DAT_00652e60 <= param_2) {
    uVar6 = CONCAT44(uVar8,fVar7);
    param_3 = CONCAT44(uVar8,fVar7);
  }
LAB_005aa14f:
  outlet_float(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x18));
  if (((*(byte *)(param_9 + 0x440) & 0x80) == 0) ||
     (plVar3 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar3 == (long *)0x0)) {
    return;
  }
  pd_float(plVar3);
  return;
}


