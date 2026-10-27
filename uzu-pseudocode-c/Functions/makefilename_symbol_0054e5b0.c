// Function : makefilename_symbol
// Namespace: 
// Entry    : 0054e5b0
// Prototype: undefined makefilename_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054e5b0 - 0054e670


void makefilename_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  char local_3f8 [1008];
  
  puVar1 = *(undefined8 **)(param_9 + 0x30);
  if (puVar1 == (undefined8 *)0x0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "makefilename: invalid format string",param_11,param_12,param_13,param_14);
    return;
  }
  switch(*(undefined4 *)(param_9 + 0x38)) {
  default:
    strcpy(local_3f8,(char *)*puVar1);
    break;
  case 1:
    sprintf(local_3f8,(char *)*puVar1,0);
    goto joined_r0x0054e64f;
  case 2:
    sprintf(local_3f8,(char *)*puVar1,0);
joined_r0x0054e64f:
    if (local_3f8[0] == '\0') {
      return;
    }
    goto LAB_0054e651;
  case 3:
  case 4:
    sprintf(local_3f8,(char *)*puVar1,*param_10);
  }
  if (local_3f8[0] != '\0') {
LAB_0054e651:
    plVar2 = *(long **)(param_9 + 0x18);
    gensym(local_3f8);
    outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar2);
  }
  return;
}


