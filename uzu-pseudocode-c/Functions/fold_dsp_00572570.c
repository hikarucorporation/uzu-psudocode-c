// Function : fold_dsp
// Namespace: 
// Entry    : 00572570
// Prototype: undefined fold_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00572570 - 00572646


void fold_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffd8;
  
  piVar2 = (int *)*param_10;
  lVar3 = (long)*piVar2;
  *(long *)(param_9 + 0x48) = lVar3;
  uVar1 = piVar2[5];
  *(uint *)(param_9 + 0x40) = uVar1;
  *(long *)(param_9 + 0x50) = (long)*(int *)(param_10[1] + 0x14);
  *(long *)(param_9 + 0x58) = (long)*(int *)(param_10[2] + 0x14);
  uVar5 = signal_setmultiout(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             param_10 + 3,(ulong)uVar1,param_11,lVar3,param_13,param_14);
  if (((*(long *)(param_9 + 0x50) < 2) ||
      (iVar4 = *(int *)(param_9 + 0x40), *(long *)(param_9 + 0x50) == (long)iVar4)) &&
     ((*(long *)(param_9 + 0x58) < 2 ||
      (iVar4 = *(int *)(param_9 + 0x40), *(long *)(param_9 + 0x58) == (long)iVar4)))) {
    dsp_add(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,fold_perform,5,param_9,
            *(undefined8 *)(*param_10 + 8),*(undefined8 *)(param_10[1] + 8),
            *(undefined8 *)(param_10[2] + 8),*(undefined8 *)(param_10[3] + 8));
    return;
  }
  uVar5 = dsp_add_zero(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                       *(undefined8 *)(param_10[3] + 8),iVar4 * *(int *)(param_9 + 0x48),
                       extraout_RDX,lVar3,param_13,param_14,in_stack_ffffffffffffffd8);
  pd_error(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
           "[fold~]: channel sizes mismatch",extraout_RDX_00,lVar3,param_13,param_14);
  return;
}


