// Function : outlet_anything
// Namespace: 
// Entry    : 00538fb0
// Prototype: long outlet_anything(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long * param_9, undefined8 * param_10, uint param_11, int * param_12, uint * param_13, uint * param_14)
// Body     : 00538fb0 - 0053906c


long outlet_anything(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    double param_5,double param_6,double param_7,undefined8 param_8,long *param_9,
                    undefined8 *param_10,uint param_11,int *param_12,uint *param_13,uint *param_14)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  
  lVar4 = __tls_get_addr(&PTR_007153d8);
  uVar2 = *(uint *)(lVar4 + 0xf0);
  *(uint *)(lVar4 + 0xf0) = uVar2 + 1;
  if ((int)uVar2 < 999) {
    if (*(char *)(lVar4 + 0xf8) != '\x01') {
      uVar5 = extraout_XMM0_Qa;
      for (puVar3 = (undefined8 *)param_9[2]; puVar3 != (undefined8 *)0x0;
          puVar3 = (undefined8 *)*puVar3) {
        uVar5 = pd_typedmess(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             (long *)puVar3[1],param_10,param_11,param_12,param_13,param_14);
      }
      goto LAB_00539013;
    }
  }
  else {
    *(undefined1 *)(lVar4 + 0xf8) = 1;
  }
  pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*param_9,
           "stack overflow",(ulong)(uVar2 + 1),(ulong)uVar2,(char *)param_13,param_14);
LAB_00539013:
  piVar1 = (int *)(lVar4 + 0xf0);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined1 *)(lVar4 + 0xf8) = 0;
  }
  return lVar4;
}


