// Function : peak_tilde_dsp
// Namespace: 
// Entry    : 00565e90
// Prototype: undefined peak_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 00565e90 - 00565edb


void peak_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 *param_10)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  undefined8 in_stack_00000008;
  
  puVar3 = (uint *)*param_10;
  *(uint *)(param_9 + 0x58) = *puVar3;
  iVar1 = *(int *)(param_9 + 0x44);
  iVar4 = iVar1 % (int)*puVar3;
  iVar5 = (*puVar3 + iVar1) - iVar4;
  if (iVar4 == 0) {
    iVar5 = iVar1;
  }
  *(int *)(param_9 + 0x48) = iVar5;
  uVar2 = *puVar3;
  if (*(int *)(param_9 + 0x54) < (int)uVar2) {
    *(uint *)(param_9 + 0x54) = uVar2;
    uVar2 = *puVar3;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,peak_tilde_perform,3,
          param_9,*(undefined8 *)(puVar3 + 2),(ulong)uVar2,param_9,in_stack_00000008);
  return;
}


