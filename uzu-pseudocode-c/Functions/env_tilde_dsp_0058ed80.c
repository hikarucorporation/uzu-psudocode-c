// Function : env_tilde_dsp
// Namespace: 
// Entry    : 0058ed80
// Prototype: undefined env_tilde_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined8 param_15)
// Body     : 0058ed80 - 0058ee22


void env_tilde_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14,undefined8 param_15)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int *piVar4;
  ulong uVar5;
  int iVar6;
  undefined8 extraout_RDX;
  int iVar7;
  undefined8 extraout_XMM0_Qa;
  
  piVar4 = (int *)*param_10;
  iVar7 = *piVar4;
  iVar1 = *(int *)(param_9 + 0x4c);
  iVar6 = iVar1 % iVar7;
  iVar7 = (iVar7 + iVar1) - iVar6;
  if (iVar6 == 0) {
    iVar7 = iVar1;
  }
  *(int *)(param_9 + 0x50) = iVar7;
  iVar7 = *piVar4;
  if (*(int *)(param_9 + 0xe0) < iVar7) {
    uVar2 = *(uint *)(param_9 + 0x54);
    uVar5 = (ulong)uVar2;
    pvVar3 = resizebytes(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         *(void **)(param_9 + 0x40),
                         (long)(int)(*(int *)(param_9 + 0xe0) + uVar2) << 2,
                         (long)(int)(iVar7 + uVar2) << 2);
    if (pvVar3 == (void *)0x0) {
      pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
               "env~: out of memory",extraout_RDX,uVar5,param_13,param_14);
      return;
    }
    *(void **)(param_9 + 0x40) = pvVar3;
    piVar4 = (int *)*param_10;
    *(int *)(param_9 + 0xe0) = *piVar4;
    param_1 = extraout_XMM0_Qa;
  }
  else {
    piVar4 = (int *)*param_10;
  }
  dsp_add(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,env_tilde_perform,3,
          param_9,*(undefined8 *)(piVar4 + 2),(long)*piVar4,param_14,param_15);
  return;
}


