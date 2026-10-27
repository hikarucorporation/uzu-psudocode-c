// Function : garray_getfloatwords
// Namespace: 
// Entry    : 004faaa0
// Prototype: undefined8 garray_getfloatwords(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined4 * param_10, undefined8 * param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004faaa0 - 004fab5c


undefined8
garray_getfloatwords
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          undefined4 *param_10,undefined8 *param_11,int *param_12,char *param_13,undefined8 param_14
          )

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar7;
  char *pcVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  int local_38;
  undefined4 local_34;
  char local_30 [8];
  
  lVar1 = garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10,param_11,param_12,param_13,param_14);
  lVar2 = template_findbyname(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,*(long *)(lVar1 + 0x10));
  puVar3 = gensym("y");
  piVar6 = &local_38;
  pcVar8 = local_30;
  uVar4 = template_find_field(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,lVar2,(long)puVar3,&local_34,&local_38,pcVar8,param_14);
  if (((int)uVar4 == 0) || (local_38 != 0)) {
    uVar4 = **(undefined8 **)(param_9 + 0x28);
    pcVar7 = "%s: needs floating-point \'y\' field";
  }
  else {
    if (*(int *)(lVar1 + 4) == 8) {
      puVar5 = (undefined4 *)
               garray_getarray(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_9,puVar3,extraout_RDX,piVar6,pcVar8,param_14);
      *param_10 = *puVar5;
      lVar1 = garray_getarray(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,param_9,puVar3,extraout_RDX_00,piVar6,pcVar8,param_14);
      *param_11 = *(undefined8 *)(lVar1 + 8);
      return 1;
    }
    uVar4 = **(undefined8 **)(param_9 + 0x28);
    pcVar7 = "%s: has more than one field";
  }
  pd_error(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar7,
           uVar4,piVar6,pcVar8,param_14);
  return 0;
}


