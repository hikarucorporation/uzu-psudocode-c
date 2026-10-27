// Function : garray_getarray
// Namespace: 
// Entry    : 004f9a20
// Prototype: undefined8 garray_getarray(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004f9a20 - 004f9ab4


undefined8
garray_getarray(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
               undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 uVar7;
  int local_28;
  int local_24;
  char local_20 [8];
  
  lVar1 = *(long *)(param_9 + 0x10);
  puVar2 = *(undefined8 **)(lVar1 + 0x10);
  lVar3 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long)puVar2);
  if (lVar3 == 0) {
    uVar5 = *puVar2;
    pcVar6 = "array: couldn\'t find template %s";
    uVar7 = extraout_XMM0_Qa;
  }
  else {
    puVar4 = gensym("z");
    param_12 = &local_28;
    param_13 = local_20;
    uVar5 = template_find_field(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,lVar3,(long)puVar4,&local_24,&local_28,param_13,param_14);
    uVar7 = extraout_XMM0_Qa_01;
    if ((int)uVar5 == 0) {
      uVar5 = *puVar2;
      pcVar6 = "array: template %s has no \'z\' field";
    }
    else {
      if (local_28 == 3) {
        return *(undefined8 *)(lVar1 + 0x18 + (long)local_24 * 8);
      }
      uVar5 = *puVar2;
      pcVar6 = "array: template %s, \'z\' field is not an array";
    }
  }
  pd_error(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,pcVar6,uVar5,param_12,
           param_13,param_14);
  return 0;
}


