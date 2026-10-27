// Function : backtracer_settracing
// Namespace: 
// Entry    : 00538870
// Prototype: undefined8 backtracer_settracing(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00538870 - 00538902


undefined8
backtracer_settracing
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          int param_10,undefined8 param_11,undefined8 param_12,char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  plVar1 = backtracer_stack;
  if (param_10 == 0) {
    uVar2 = 0;
    uVar3 = post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"backtrace:");
    for (; plVar1 != (long *)0x0; plVar1 = (long *)plVar1[0xd]) {
      uVar3 = backtracer_printmsg(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                  *(undefined8 **)(*plVar1 + 0x10),(undefined8 *)plVar1[1],
                                  *(uint *)(plVar1 + 2),(int *)(plVar1 + 3),param_13,param_14);
    }
    *(undefined4 *)PTR_backtracer_tracing_007157a0 = 0;
  }
  else if (*(int *)PTR_backtracer_tracing_007157a0 == 0) {
    *(undefined4 *)PTR_backtracer_tracing_007157a0 = 1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "trace: already tracing",param_11,param_12,param_13,param_14);
  }
  return uVar2;
}


