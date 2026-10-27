// Function : canvas_restoreconnections
// Namespace: 
// Entry    : 0050ed30
// Prototype: undefined canvas_restoreconnections(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0050ed30 - 0050ed81


void canvas_restoreconnections
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined8 extraout_XMM0_Qa;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  uVar1 = *(undefined8 *)(*plVar2 + 0x128);
  *(long *)(*plVar2 + 0x128) = param_9;
  binbuf_eval(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
              *(uint **)(*(long *)(param_9 + 0xc0) + 0x48),(uint *)0x0,0,0,in_R8,in_R9);
  *(undefined8 *)(*plVar2 + 0x128) = uVar1;
  return;
}


