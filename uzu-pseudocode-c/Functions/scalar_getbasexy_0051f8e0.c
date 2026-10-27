// Function : scalar_getbasexy
// Namespace: 
// Entry    : 0051f8e0
// Prototype: undefined scalar_getbasexy(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined4 * param_10, undefined4 * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051f8e0 - 0051f94e


void scalar_getbasexy(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined4 *param_10,undefined4 *param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar3;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  
  lVar1 = template_findbyname(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              *(long *)(param_9 + 0x10));
  puVar2 = gensym("x");
  uVar3 = template_getfloat(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                            param_5,param_6,param_7,param_8,lVar1,puVar2,param_9 + 0x18,0,param_13,
                            param_14);
  *param_10 = uVar3;
  puVar2 = gensym("y");
  uVar3 = template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,lVar1,puVar2,param_9 + 0x18,0,
                            param_13,param_14);
  *param_11 = uVar3;
  return;
}


