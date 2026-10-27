// Function : pd_term
// Namespace: 
// Entry    : 0053ae00
// Prototype: undefined pd_term(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0053ae00 - 0053ae35


void pd_term(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined8 param_13,undefined8 param_14)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar4;
  
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar2 = extraout_RDX;
  uVar4 = extraout_XMM0_Qa;
  for (lVar1 = *(long *)(*plVar3 + 0x10); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0xd8)) {
    uVar4 = canvas_closebang(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar1,
                             param_10,uVar2,param_12,param_13,param_14);
    uVar2 = extraout_RDX_00;
  }
  return;
}


