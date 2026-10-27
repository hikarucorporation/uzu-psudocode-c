// Function : vectral_new
// Namespace: 
// Entry    : 00560df0
// Prototype: long * vectral_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00560df0 - 00560f07


long * vectral_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  long extraout_RAX;
  undefined4 *puVar4;
  long lVar5;
  undefined8 extraout_RDX;
  ulong uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar7;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,vectral_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar6 = 0x40;
  if (0x40 < (int)(float)param_1) {
    uVar6 = (ulong)(uint)(int)(float)param_1;
  }
  *(int *)(plVar1 + 8) = (int)uVar6;
  pvVar2 = getbytes(uVar6 << 2);
  plVar1[9] = (long)pvVar2;
  if (pvVar2 != (void *)0x0) {
    pvVar2 = getbytes((long)(int)plVar1[8] << 2);
    plVar1[10] = (long)pvVar2;
    if (pvVar2 != (void *)0x0) {
      plVar1[7] = (long)vectral_perform_bypass;
      plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
      inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,(long)plVar1,(long)plVar1,*plVar3 + 0xf0,*plVar3 + 0xf0,param_13,
                param_14);
      lVar5 = *plVar3 + 0xf0;
      inlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,(long)plVar1,(long)plVar1,lVar5,lVar5,param_13,param_14);
      canvas_getcurrent(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8);
      plVar1[0xe] = extraout_RAX;
      puVar4 = obj_findsignalscalar(plVar1,1);
      plVar1[0xf] = (long)puVar4;
      puVar4 = obj_findsignalscalar(plVar1,2);
      plVar1[0x10] = (long)puVar4;
      magic_setnan((undefined4 *)plVar1[0xf]);
      uVar7 = magic_setnan((undefined4 *)plVar1[0x10]);
      outlet_new(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                 *plVar3 + 0xf0,extraout_RDX,lVar5,param_13,param_14);
      return plVar1;
    }
  }
  pd_free(plVar1);
  return (long *)0x0;
}


