// Function : delay_dsp
// Namespace: 
// Entry    : 0055eae0
// Prototype: undefined delay_dsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10)
// Body     : 0055eae0 - 0055ebbf


void delay_dsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,long *param_10)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  uVar2 = *(undefined8 *)(param_9 + 0x30);
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar2 = magic_inlet_connection
                    (extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     param_9,uVar2,1,*plVar1 + 0xf0);
  *(int *)(param_9 + 0x8c) = (int)uVar2;
  *(int *)(param_9 + 0x58) = (int)*(float *)(*param_10 + 0x10);
  *(undefined4 *)(param_9 + 0x88) = 0;
  memset(*(void **)(param_9 + 0x40),0,(long)*(int *)(param_9 + 0x5c) * 4 + 0x1c);
  lVar3 = *(long *)(param_9 + 0x40);
  if (*(int *)(param_9 + 0x8c) == 0) {
    lVar4 = lVar3 + (long)*(int *)(param_9 + 0x5c) * 4;
    pcVar5 = delay_perform;
  }
  else {
    lVar4 = lVar3 + (long)*(int *)(param_9 + 0x5c) * 4 + 0x1c;
    lVar3 = lVar3 + 0xc;
    pcVar5 = delay_performsig;
  }
  *(long *)(param_9 + 0x50) = lVar3;
  *(long *)(param_9 + 0x48) = lVar4;
  dsp_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,pcVar5,5,
          param_9,(ulong)*(uint *)*param_10,*(undefined8 *)((uint *)*param_10 + 2),
          *(undefined8 *)(param_10[1] + 8),*(undefined8 *)(param_10[2] + 8));
  return;
}


