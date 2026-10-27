// Function : scalarmin_dsp
// Namespace: 
// Entry    : 0058ba90
// Prototype: undefined scalarmin_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0058ba90 - 0058baf1


void scalarmin_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14,undefined8 param_15)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = (ulong)((int *)*param_10)[5];
  uVar3 = (long)*(int *)*param_10 * uVar1;
  uVar4 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 1,uVar1,param_11,param_12,param_13,param_14);
  if ((uVar3 & 7) == 0) {
    puVar2 = PTR_scalarmin_perf8_00715688;
  }
  else {
    puVar2 = PTR_scalarmin_perform_00715448;
  }
  dsp_add(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,puVar2,4,
          *(undefined8 *)(*param_10 + 8),param_9 + 0x30,*(undefined8 *)(param_10[1] + 8),uVar3,
          param_15);
  return;
}


