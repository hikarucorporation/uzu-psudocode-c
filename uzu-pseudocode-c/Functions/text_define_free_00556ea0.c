// Function : text_define_free
// Namespace: 
// Entry    : 00556ea0
// Prototype: undefined text_define_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00556ea0 - 00556f0e


void text_define_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long *param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  param_9[6] = 0;
  textbuf_free(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
               param_10,param_11,param_12,param_13,param_14);
  puVar5 = (undefined8 *)param_9[0xc];
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  puVar3 = (undefined8 *)(*plVar2 + 0x168);
  uVar4 = extraout_RDX;
  uVar6 = extraout_XMM0_Qa;
  if (puVar5 != puVar3) {
    uVar6 = pd_unbind(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,puVar5,extraout_RDX,puVar3,param_13,param_14);
    uVar4 = extraout_RDX_00;
    param_10 = puVar5;
  }
  gpointer_unset(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)(param_9 + 0xe)
                 ,param_10,uVar4,puVar3,param_13,param_14);
  pd_free((long *)param_9[0xd]);
  iVar1 = *(int *)PTR_glist_valid_007157f8;
  *(int *)PTR_glist_valid_007157f8 = iVar1 + 1;
  *(int *)(param_9[7] + 0x40) = iVar1 + 1;
  return;
}


