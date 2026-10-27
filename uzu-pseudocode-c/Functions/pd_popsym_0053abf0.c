// Function : pd_popsym
// Namespace: 
// Entry    : 0053abf0
// Prototype: undefined pd_popsym(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0053abf0 - 0053ac64


void pd_popsym(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
              char *param_13,undefined8 param_14,undefined1 param_15)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  puVar1 = gstack_head;
  if (gstack_head != (undefined8 *)0x0) {
    plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
    param_11 = extraout_RDX;
    param_1 = extraout_XMM0_Qa;
    if (*(long *)(*plVar2 + 0x128) == param_9) {
      *(undefined8 *)(*plVar2 + 0x128) = *puVar1;
      gstack_head = (undefined8 *)puVar1[2];
      freebytes(puVar1);
      lastpopped = param_9;
      return;
    }
  }
  bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"gstack_pop",param_10,param_11
      ,param_12,param_13,param_14,param_15);
  return;
}


