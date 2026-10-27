// Function : makefilename_bang
// Namespace: 
// Entry    : 0054e680
// Prototype: undefined makefilename_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054e680 - 0054e71d


void makefilename_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  char local_3f8 [1008];
  
  puVar2 = *(undefined8 **)(param_9 + 0x30);
  if (puVar2 == (undefined8 *)0x0) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "makefilename: invalid format string",param_11,param_12,param_13,param_14);
    return;
  }
  iVar1 = *(int *)(param_9 + 0x38);
  if (iVar1 != 0) {
    if (iVar1 == 2) {
      sprintf(local_3f8,(char *)*puVar2,0);
      goto joined_r0x0054e6e4;
    }
    if (iVar1 == 1) {
      sprintf(local_3f8,(char *)*puVar2,0);
      goto joined_r0x0054e6e4;
    }
  }
  strcpy(local_3f8,(char *)*puVar2);
joined_r0x0054e6e4:
  if (local_3f8[0] != '\0') {
    plVar3 = *(long **)(param_9 + 0x18);
    gensym(local_3f8);
    outlet_symbol(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar3);
  }
  return;
}


