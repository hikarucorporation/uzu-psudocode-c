// Function : garray_save
// Namespace: 
// Entry    : 004fc530
// Prototype: undefined garray_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004fc530 - 004fc685


void garray_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,int *param_10,undefined8 param_11,int *param_12,char *param_13,
                undefined8 param_14)

{
  uint *puVar1;
  undefined8 *puVar2;
  long extraout_RAX;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  ulong uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  puVar1 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  puVar3 = *(undefined8 **)(*(long *)(param_9 + 0x10) + 0x10);
  puVar2 = gensym("pd-float-array");
  uVar9 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  if (puVar3 == puVar2) {
    uVar9 = template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                                param_5,param_6,param_7,param_8,
                                *(long *)(*(long *)(param_9 + 0x10) + 0x10));
    if (extraout_RAX != 0) {
      puVar3 = gensym("style");
      template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,extraout_RAX,puVar3,
                        *(long *)(param_9 + 0x10) + 0x18,0,param_13,param_14);
      puVar3 = gensym("#X");
      piVar4 = (int *)gensym("array");
      plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
      pcVar7 = *(char **)(param_9 + 0x20);
      uVar8 = (ulong)*puVar1;
      uVar9 = binbuf_addv(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,param_10,0x653e05,puVar3,piVar4,pcVar7,
                          uVar8,(double)(*plVar5 + 0x78));
      garray_savecontentsto
                (uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 extraout_RDX,piVar4,pcVar7,uVar8);
      return;
    }
    uVar6 = **(undefined8 **)(*(long *)(param_9 + 0x10) + 0x10);
    pcVar7 = "array: no template of type %s";
    param_9 = 0;
  }
  else {
    uVar6 = **(undefined8 **)(*(long *)(param_9 + 0x10) + 0x10);
    pcVar7 = "can\'t save arrays of type %s yet";
  }
  pd_error(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,pcVar7,uVar6,
           param_12,param_13,param_14);
  return;
}


