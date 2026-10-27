// Function : append_set
// Namespace: 
// Entry    : 005affd0
// Prototype: undefined append_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005affd0 - 005b004e


void append_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined8 extraout_XMM0_Qa;
  
  if (*(int *)(param_9 + 0x50) != 1) {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "append set: cannot set multiple fields.",param_11,param_12,param_13,param_14);
    return;
  }
  if (*(char *)*param_10 != '\0') {
    iVar2 = strcmp((char *)*param_10,"-");
    if (iVar2 != 0) {
      lVar3 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_10);
      goto LAB_005b0037;
    }
  }
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar3 = *plVar4 + 0x168;
LAB_005b0037:
  *(long *)(param_9 + 0x48) = lVar3;
  puVar1 = *(undefined8 **)(param_9 + 0x58);
  *puVar1 = param_11;
  *(undefined4 *)(puVar1 + 1) = 0;
  return;
}


