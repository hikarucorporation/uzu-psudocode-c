// Function : cartopol_dsp
// Namespace: 
// Entry    : 0055e450
// Prototype: undefined cartopol_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0055e450 - 0055e4f4


void cartopol_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  code *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar2 = *(undefined8 *)(param_9 + 0x40);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar2 = magic_inlet_connection
                    (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,uVar2,1,*plVar1 + 0xf0);
  *(long *)(param_9 + 0x50) = (long)(int)uVar2;
  lVar3 = magic_outlet_connections(*(long *)(param_9 + 0x38));
  if (lVar3 == 0) {
    pcVar5 = cartopol_perform_nophase;
    iVar4 = 5;
  }
  else {
    pcVar5 = cartopol_perform;
    iVar4 = 6;
  }
  dsp_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar5,iVar4,
          param_9,(ulong)*(uint *)*param_10,*(undefined8 *)((uint *)*param_10 + 2),
          *(undefined8 *)(param_10[1] + 8),*(undefined8 *)(param_10[2] + 8));
  return;
}


