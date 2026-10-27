// Function : inlet_new
// Namespace: 
// Entry    : 005383b0
// Prototype: long * inlet_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, long param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 005383b0 - 00538445


long * inlet_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10,long param_11,long param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,inlet_class,
                  param_10,param_11,param_12,param_13,param_14);
  plVar2[2] = param_9;
  plVar2[3] = param_10;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  if (*plVar3 + 0xf0 == param_11) {
    *(undefined4 *)(plVar2 + 5) = 0;
  }
  else {
    plVar2[5] = param_12;
  }
  plVar2[4] = param_11;
  plVar2[1] = 0;
  lVar1 = *(long *)(param_9 + 0x20);
  if (*(long *)(param_9 + 0x20) == 0) {
    puVar5 = (undefined8 *)(param_9 + 0x20);
  }
  else {
    do {
      lVar4 = lVar1;
      lVar1 = *(long *)(lVar4 + 8);
    } while (lVar1 != 0);
    puVar5 = (undefined8 *)(lVar4 + 8);
  }
  *puVar5 = plVar2;
  return plVar2;
}


