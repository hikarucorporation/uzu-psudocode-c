// Function : setsize_set
// Namespace: 
// Entry    : 005afbf0
// Prototype: undefined setsize_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11)
// Body     : 005afbf0 - 005afc48


void setsize_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 *param_10,undefined8 param_11)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 extraout_XMM0_Qa;
  
  if (*(char *)*param_10 != '\0') {
    iVar1 = strcmp((char *)*param_10,"-");
    if (iVar1 != 0) {
      lVar2 = canvas_makebindsym(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                                 param_8,param_10);
      goto LAB_005afc3b;
    }
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *plVar3 + 0x168;
LAB_005afc3b:
  *(long *)(param_9 + 0x30) = lVar2;
  *(undefined8 *)(param_9 + 0x38) = param_11;
  return;
}


