// Function : pointerinlet_new
// Namespace: 
// Entry    : 00538530
// Prototype: long * pointerinlet_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00538530 - 005385b1


long * pointerinlet_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,long param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pointerinlet_class
                  ,param_10,param_11,param_12,param_13,param_14);
  plVar2[2] = param_9;
  plVar2[3] = 0;
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar2[4] = *plVar3 + 0x60;
  plVar2[5] = param_10;
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


