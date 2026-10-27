// Function : block_bang
// Namespace: 
// Entry    : 004f60c0
// Prototype: undefined block_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004f60c0 - 004f6164


void block_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  if (*(char *)(param_9 + 0x54) == '\0') {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "[block~]: bang has no effect",param_11,param_12,param_13,param_14);
    return;
  }
  if (*(char *)(param_9 + 0x55) == '\0') {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    lVar1 = **(long **)(*plVar2 + 0x40);
    if (lVar1 != 0) {
      *(undefined4 *)(param_9 + 0x60) = 1;
      puVar3 = (undefined8 *)(lVar1 + (long)*(int *)(param_9 + 0x48) * 8);
      do {
        puVar3 = (undefined8 *)(*(code *)*puVar3)();
      } while (puVar3 != (undefined8 *)0x0);
      *(undefined4 *)(param_9 + 0x60) = 0;
      return;
    }
  }
  else {
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "[switch~]: bang has no effect at on-state",param_11,param_12,param_13,param_14);
  }
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  if (**(long **)(*plVar2 + 0x40) == 0) {
    pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "[switch~]: bang has no effect if DSP is off",extraout_RDX,param_12,param_13,param_14);
    return;
  }
  return;
}


