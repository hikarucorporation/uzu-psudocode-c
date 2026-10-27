// Function : sigbiquad_new
// Namespace: 
// Entry    : 00593e50
// Prototype: long * sigbiquad_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, long param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00593e50 - 00593ebf


long * sigbiquad_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  long *plVar2;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_sigbiquad_class_00715c48,param_10,param_11,param_12,param_13,param_14
                 );
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
             *plVar2 + 0xf0,extraout_RDX,param_12,param_13,param_14);
  *(undefined8 *)((long)plVar1 + 0x34) = 0;
  sigbiquad_list((long)plVar1,param_9,(int)param_10,param_11);
  *(undefined4 *)(plVar1 + 6) = 0;
  return plVar1;
}


