// Function : obj_disconnect
// Namespace: 
// Entry    : 005391f0
// Prototype: undefined obj_disconnect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, long * param_11, int param_12)
// Body     : 005391f0 - 00539304


void obj_disconnect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,int param_10,long *param_11,int param_12)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 extraout_XMM0_Qa;
  
  lVar1 = *(long *)(param_9 + 0x18);
  for (; (lVar1 != 0 && (param_10 != 0)); param_10 = param_10 + -1) {
    lVar1 = *(long *)(lVar1 + 8);
  }
  if (lVar1 == 0) {
    return;
  }
  if ((*(byte *)(*param_11 + 0x94) & 4) != 0) {
    if (param_12 == 0) goto LAB_0053927a;
    param_12 = param_12 + -1;
  }
  param_11 = (long *)param_11[4];
  for (; (param_11 != (long *)0x0 && (param_12 != 0)); param_12 = param_12 + -1) {
    param_11 = (long *)param_11[1];
  }
  if (param_11 == (long *)0x0) {
    return;
  }
LAB_0053927a:
  if (*(long *)(lVar1 + 0x10) != 0) {
    plVar4 = *(long **)(*(long *)(lVar1 + 0x10) + 8);
    plVar3 = plVar4 + 1;
    if (*plVar4 != *(long *)PTR_backtracer_class_00715ba0) {
      plVar3 = (long *)(lVar1 + 0x10);
    }
    plVar4 = (long *)*plVar3;
    if (plVar4 != (long *)0x0) {
      do {
        if ((long *)plVar4[1] == param_11) {
          *plVar3 = *plVar4;
          freebytes(plVar4);
          break;
        }
        plVar2 = (long *)*plVar4;
        plVar3 = plVar4;
        plVar4 = plVar2;
      } while (plVar2 != (long *)0x0);
      plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
      if (*(long *)(lVar1 + 0x18) == *plVar4 + 0xf0) {
        canvas_update_dsp(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
    }
  }
  return;
}


