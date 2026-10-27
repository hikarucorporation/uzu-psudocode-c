// Function : radio_bang
// Namespace: 
// Entry    : 005a7490
// Prototype: undefined radio_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a7490 - 005a7664


void radio_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  long *plVar1;
  long *plVar2;
  char *in_R8;
  undefined8 in_R9;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar3;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar4;
  undefined4 local_38 [2];
  float local_30;
  undefined4 local_28;
  undefined4 local_20;
  
  uVar4 = (undefined4)((ulong)param_1 >> 0x20);
  if (*(int *)(param_9 + 0x4ac) == 0) {
    if (*(int *)PTR_pd_compatibilitylevel_00715a40 < 0x2e) {
      fVar3 = (float)*(int *)(param_9 + 0x490);
    }
    else {
      fVar3 = *(float *)(param_9 + 0x4a4);
      uVar4 = 0;
    }
    outlet_float(CONCAT44(uVar4,fVar3),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x18));
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      pd_float(plVar1);
      return;
    }
  }
  else {
    if ((*(int *)(param_9 + 0x498) != 0) && (*(int *)(param_9 + 0x490) != *(int *)(param_9 + 0x494))
       ) {
      local_38[0] = 1;
      local_30 = (float)*(int *)(param_9 + 0x494);
      local_28 = 1;
      local_20 = 0;
      plVar1 = *(long **)(param_9 + 0x18);
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      outlet_list(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar1,*plVar2 + 0xc0,2,local_38,in_R8,in_R9);
      if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
         (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        pd_list(plVar1,*plVar2 + 0xc0,2,local_38);
      }
    }
    *(int *)(param_9 + 0x494) = *(int *)(param_9 + 0x490);
    local_38[0] = 1;
    local_30 = (float)*(int *)(param_9 + 0x490);
    local_28 = 1;
    local_20 = 0x3f800000;
    plVar1 = *(long **)(param_9 + 0x18);
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,plVar1,*plVar2 + 0xc0,2,local_38,in_R8,in_R9);
    if (((*(byte *)(param_9 + 0x440) & 0x80) != 0) &&
       (plVar1 = *(long **)(*(long *)(param_9 + 0x458) + 8), plVar1 != (long *)0x0)) {
      plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
      pd_list(plVar1,*plVar2 + 0xc0,2,local_38);
    }
  }
  return;
}


