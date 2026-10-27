// Function : vectral_dsp
// Namespace: 
// Entry    : 00560f50
// Prototype: undefined vectral_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 00560f50 - 00560ff4


void vectral_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar3 = *(undefined8 *)(param_9 + 0x70);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar3 = magic_inlet_connection
                    (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,uVar3,1,*plVar2 + 0xf0);
  *(long *)(param_9 + 0x88) = (long)(int)uVar3;
  uVar1 = *(uint *)*param_10;
  if ((int)*(uint *)(param_9 + 0x40) < (int)*(uint *)*param_10) {
    uVar1 = *(uint *)(param_9 + 0x40);
  }
  memset(*(void **)(param_9 + 0x50),0,(long)(int)uVar1 * 4);
  dsp_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          vectral_perform,6,param_9,(ulong)uVar1,*(undefined8 *)(*param_10 + 8),
          *(undefined8 *)(param_10[1] + 8),*(undefined8 *)(param_10[2] + 8));
  return;
}


