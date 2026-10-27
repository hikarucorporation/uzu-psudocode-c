// Function : array_min_new
// Namespace: 
// Entry    : 0054a4e0
// Prototype: long * array_min_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, long param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 0054a4e0 - 0054a55a


long * array_min_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,uint param_10,long param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint local_1c;
  long local_18;
  
  uVar4 = 0;
  pcVar5 = (char *)0x1;
  local_1c = param_10;
  local_18 = param_11;
  plVar1 = array_rangeop_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                             array_min_class,&local_1c,&local_18,0,(char *)0x1,param_14);
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar3 = outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar2 + 0x78,extraout_RDX,uVar4,pcVar5,param_14);
  plVar1[0x10] = (long)plVar3;
  plVar2 = outlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      (long)plVar1,*plVar2 + 0x78,extraout_RDX_00,uVar4,pcVar5,param_14);
  plVar1[0x11] = (long)plVar2;
  return plVar1;
}


