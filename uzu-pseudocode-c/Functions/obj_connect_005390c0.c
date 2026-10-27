// Function : obj_connect
// Namespace: 
// Entry    : 005390c0
// Prototype: undefined8 * obj_connect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, long * param_11, int param_12)
// Body     : 005390c0 - 005391e5


undefined8 *
obj_connect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
           undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
           int param_10,long *param_11,int param_12)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_XMM0_Qa;
  
  lVar1 = *(long *)(param_9 + 0x18);
  for (; (lVar1 != 0 && (param_10 != 0)); param_10 = param_10 + -1) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  if (lVar1 != 0) {
    if ((*(byte *)(*param_11 + 0x94) & 4) == 0) {
LAB_00539111:
      param_11 = (long *)param_11[4];
      for (; (param_11 != (long *)0x0 && (param_12 != 0)); param_12 = param_12 + -1) {
        param_11 = (long *)param_11[1];
      }
      if (param_11 == (long *)0x0) goto LAB_005391d4;
    }
    else if (param_12 != 0) {
      param_12 = param_12 + -1;
      goto LAB_00539111;
    }
    plVar5 = (long *)(lVar1 + 0x10);
    if ((*(long *)(lVar1 + 0x10) != 0) &&
       (plVar2 = *(long **)(*(long *)(lVar1 + 0x10) + 8),
       *plVar2 == *(long *)PTR_backtracer_class_00715ba0)) {
      plVar5 = plVar2 + 1;
    }
    puVar4 = getbytes(0x10);
    *puVar4 = 0;
    puVar4[1] = param_11;
    plVar2 = (long *)*plVar5;
    while (plVar3 = plVar2, plVar3 != (long *)0x0) {
      plVar5 = plVar3;
      plVar2 = (long *)*plVar3;
    }
    *plVar5 = (long)puVar4;
    plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
    if (*(long *)(lVar1 + 0x18) == *plVar5 + 0xf0) {
      canvas_update_dsp(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
LAB_005391d4:
    puVar4 = (undefined8 *)0x0;
  }
  return puVar4;
}


