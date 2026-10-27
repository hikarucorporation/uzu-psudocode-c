// Function : scalarlog_tilde_dsp
// Namespace: 
// Entry    : 0058bbf0
// Prototype: undefined scalarlog_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0058bbf0 - 0058bc3f


void scalarlog_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,long *param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = *(int *)*param_10;
  uVar2 = (ulong)((int *)*param_10)[5];
  uVar3 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 1,uVar2,param_11,param_12,param_13,param_14);
  dsp_add(uVar3,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          PTR_log_tilde_perform_scalar_00715790,4,*(undefined8 *)(*param_10 + 8),param_9 + 0x34,
          *(undefined8 *)(param_10[1] + 8),(long)iVar1 * uVar2,param_15);
  return;
}


