// Function : inlet_fwd
// Namespace: 
// Entry    : 0053a560
// Prototype: undefined inlet_fwd(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 param_10, uint param_11, void * param_12, undefined8 param_13, uint * param_14)
// Body     : 0053a560 - 0053a5e0


void inlet_fwd(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
              undefined8 param_10,uint param_11,void *param_12,undefined8 param_13,uint *param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint *puVar4;
  uint *puVar5;
  undefined8 extraout_XMM0_Qa;
  int aiStack_38 [4];
  
  puVar4 = (uint *)(long)(int)param_11;
  aiStack_38[(long)puVar4 * -4] = 2;
  *(undefined8 *)(aiStack_38 + (long)puVar4 * -4 + 2) = param_10;
  piVar3 = aiStack_38 + (long)puVar4 * -4;
  puVar5 = puVar4;
  if (0 < (int)param_11) {
    (aiStack_38 + (long)puVar4 * -4 + -2)[0] = 0x53a5b3;
    (aiStack_38 + (long)puVar4 * -4 + -2)[1] = 0;
    memcpy(aiStack_38 + (long)puVar4 * -4 + 4,param_12,(ulong)param_11 << 4);
    piVar3 = aiStack_38 + (long)puVar4 * -4;
  }
  plVar1 = *(long **)(param_9 + 0x18);
  piVar3[-2] = 0x53a5c3;
  piVar3[-1] = 0;
  puVar2 = gensym("fwd");
  piVar3[-2] = 0x53a5d4;
  piVar3[-1] = 0;
  pd_typedmess(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar1,
               puVar2,param_11 + 1,aiStack_38 + (long)puVar4 * -4,puVar5,param_14);
  return;
}


