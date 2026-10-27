// Function : poltocar_dsp
// Namespace: 
// Entry    : 0055f470
// Prototype: undefined poltocar_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10)
// Body     : 0055f470 - 0055f4ec


void poltocar_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 *param_10)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar2 = *(undefined8 *)(param_9 + 0x40);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar2 = magic_inlet_connection
                    (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,uVar2,1,*plVar1 + 0xf0);
  *(long *)(param_9 + 0x50) = (long)(int)uVar2;
  dsp_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
          poltocar_perform,6,param_9,(ulong)*(uint *)*param_10,
          *(undefined8 *)((uint *)*param_10 + 2),*(undefined8 *)(param_10[1] + 8),
          *(undefined8 *)(param_10[2] + 8));
  return;
}


