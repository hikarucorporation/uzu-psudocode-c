// Function : array_get_new
// Namespace: 
// Entry    : 00549b10
// Prototype: long * array_get_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, long param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00549b10 - 00549b66


long * array_get_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,uint param_10,long param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  char *pcVar4;
  undefined8 extraout_XMM0_Qa;
  uint local_14;
  long local_10;
  
  uVar3 = 0;
  pcVar4 = (char *)0x1;
  local_14 = param_10;
  local_10 = param_11;
  plVar1 = array_rangeop_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             array_get_class,&local_14,&local_10,0,(char *)0x1,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             *plVar2 + 0x78,extraout_RDX,uVar3,pcVar4,param_14);
  return plVar1;
}


