// Function : get_set
// Namespace: 
// Entry    : 005aed30
// Prototype: undefined get_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005aed30 - 005aeda7


void get_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9
            ,undefined8 *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
            undefined8 param_14)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  
  if (*(int *)(param_9 + 0x38) != 1) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "get: cannot set multiple fields.",param_11,param_12,param_13,param_14);
    return;
  }
  if (*(char *)*param_10 != '\0') {
    iVar1 = strcmp((char *)*param_10,"-");
    if (iVar1 != 0) {
      lVar2 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_10);
      goto LAB_005aed97;
    }
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *plVar3 + 0x168;
LAB_005aed97:
  *(long *)(param_9 + 0x30) = lVar2;
  **(undefined8 **)(param_9 + 0x40) = param_11;
  return;
}


