// Function : radio_click
// Namespace: 
// Entry    : 005a78d0
// Prototype: undefined radio_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005a78d0 - 005a7b52


void radio_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  float fVar5;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 local_38 [2];
  float local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  fVar5 = (float)param_2;
  if (*(int *)(param_9 + 0x4a8) == 0) {
    iVar3 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      *(long *)(param_9 + 0x30),param_11,param_12,param_13,param_14);
    iVar3 = ((int)(float)param_1 - iVar3) / *(int *)(param_9 + 0x44);
  }
  else {
    iVar3 = text_ypix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      *(long *)(param_9 + 0x30),param_11,param_12,param_13,param_14);
    iVar3 = ((int)fVar5 - iVar3) / *(int *)(param_9 + 0x40);
  }
  iVar1 = *(int *)(param_9 + 0x49c);
  if (iVar1 <= iVar3) {
    iVar3 = iVar1 + -1;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  fVar5 = (float)iVar3;
  *(float *)(param_9 + 0x4a4) = fVar5;
  iVar3 = 0;
  if (-1 < (int)fVar5) {
    iVar3 = (int)fVar5;
  }
  if (iVar1 <= iVar3) {
    iVar3 = iVar1 + -1;
  }
  if (*(int *)(param_9 + 0x4ac) == 0) {
    if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2e) {
      fVar5 = (float)iVar3;
    }
    *(undefined4 *)(param_9 + 0x494) = *(undefined4 *)(param_9 + 0x490);
    *(int *)(param_9 + 0x490) = iVar3;
    (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
    outlet_float((ulong)(uint)fVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar2 != (long *)0x0)) {
      pd_float(plVar2);
      return;
    }
  }
  else {
    if ((*(int *)(param_9 + 0x498) != 0) && (iVar3 != *(int *)(param_9 + 0x494))) {
      local_38[0] = 1;
      local_30 = (float)*(int *)(param_9 + 0x494);
      local_28 = 1;
      local_20 = 0;
      plVar2 = *(long **)(param_9 + 0x18);
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar2,*plVar4 + 0xc0,2,local_38,param_13,param_14);
      if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
         (plVar2 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar2 != (long *)0x0)) {
        plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
        pd_list(plVar2,*plVar4 + 0xc0,2,local_38);
      }
    }
    if (*(int *)(param_9 + 0x490) != *(int *)(param_9 + 0x494)) {
      *(int *)(param_9 + 0x494) = *(int *)(param_9 + 0x490);
    }
    *(int *)(param_9 + 0x490) = iVar3;
    (**(code **)(param_9 + 0x38))(param_9,*(undefined8 *)(param_9 + 0x30),0);
    *(int *)(param_9 + 0x494) = *(int *)(param_9 + 0x490);
    local_38[0] = 1;
    local_30 = (float)*(int *)(param_9 + 0x490);
    local_28 = 1;
    local_20 = 0x3f800000;
    plVar2 = *(long **)(param_9 + 0x18);
    plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar2,*plVar4 + 0xc0,2,local_38,param_13,param_14);
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar2 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar2 != (long *)0x0)) {
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      pd_list(plVar2,*plVar4 + 0xc0,2,local_38);
    }
  }
  return;
}


