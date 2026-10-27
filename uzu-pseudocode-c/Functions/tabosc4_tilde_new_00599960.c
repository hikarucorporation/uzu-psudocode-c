// Function : tabosc4_tilde_new
// Namespace: 
// Entry    : 00599960
// Prototype: long * tabosc4_tilde_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00599960 - 005999ec


long * tabosc4_tilde_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                        char *param_13,undefined8 param_14)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  
  plVar2 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  tabosc4_tilde_class,param_10,param_11,param_12,param_13,param_14);
  plVar2[8] = param_9;
  plVar2[7] = 0;
  plVar2[6] = 0x3b00000044000000;
  puVar3 = gensym("signal");
  outlet_new(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2,
             (long)puVar3,extraout_RDX,param_12,param_13,param_14);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar4;
  puVar3 = gensym("ft1");
  inlet_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar2
            ,(long)plVar2,lVar1 + 0x78,(long)puVar3,param_13,param_14);
  *(undefined4 *)(plVar2 + 9) = 0;
  return plVar2;
}


