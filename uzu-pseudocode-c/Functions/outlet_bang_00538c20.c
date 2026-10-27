// Function : outlet_bang
// Namespace: 
// Entry    : 00538c20
// Prototype: long outlet_bang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 00538c20 - 00538cb2


long outlet_bang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  char *in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  
  lVar4 = __tls_get_addr(&PTR_007153d8);
  uVar2 = *(uint *)(lVar4 + 0xf0);
  *(uint *)(lVar4 + 0xf0) = uVar2 + 1;
  if ((int)uVar2 < 999) {
    if (*(char *)(lVar4 + 0xf8) != '\x01') {
      for (puVar3 = (undefined8 *)param_9[2]; puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        pd_bang((long *)puVar3[1]);
      }
      goto LAB_00538c73;
    }
  }
  else {
    *(undefined1 *)(lVar4 + 0xf8) = 1;
  }
  pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*param_9,
           "stack overflow",(ulong)(uVar2 + 1),(ulong)uVar2,in_R8,in_R9);
LAB_00538c73:
  piVar1 = (int *)(lVar4 + 0xf0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined1 *)(lVar4 + 0xf8) = 0;
    return lVar4;
  }
  return lVar4;
}


