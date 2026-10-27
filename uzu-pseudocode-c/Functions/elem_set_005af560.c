// Function : elem_set
// Namespace: 
// Entry    : 005af560
// Prototype: undefined elem_set(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11)
// Body     : 005af560 - 005af5b8


void elem_set(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
      goto LAB_005af5ab;
    }
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar2 = *plVar3 + 0x168;
LAB_005af5ab:
  *(long *)(param_9 + 0x30) = lVar2;
  *(undefined8 *)(param_9 + 0x38) = param_11;
  return;
}


