// Function : scalar_save
// Namespace: 
// Entry    : 0051fc90
// Prototype: undefined scalar_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0051fc90 - 0051fd12


void scalar_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,int *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  double unaff_RBX;
  uint *puVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  
  puVar2 = binbuf_new();
  canvas_writescalar(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     *(long **)(param_9 + 0x10),(uint *)(param_9 + 0x18),(int *)puVar2,0,param_13,
                     param_14);
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar3;
  puVar4 = gensym("scalar");
  uVar6 = binbuf_addv(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_10,0x65470c,lVar1 + 0x120,puVar4,param_13,param_14,unaff_RBX);
  puVar5 = puVar2;
  uVar6 = binbuf_addbinbuf(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                           puVar2,extraout_RDX,(ulong)puVar4,param_13,param_14);
  binbuf_addsemi(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10,puVar5,
                 extraout_RDX_00,puVar4,param_13,param_14);
  binbuf_free(puVar2);
  return;
}


