// Function : text_define_save
// Namespace: 
// Entry    : 00557af0
// Prototype: undefined text_define_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 00557af0 - 00557bc1


void text_define_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,int *param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14,double param_15)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  double unaff_RBX;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_XMM0_Qa;
  double dVar8;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar2;
  puVar3 = gensym("obj");
  dVar8 = (double)(int)*(short *)(param_9 + 0x2a);
  uVar6 = binbuf_addv((double)(int)*(short *)(param_9 + 0x28),dVar8,param_3,param_4,param_5,param_6,
                      param_7,param_8,param_10,0x65e85f,lVar1 + 0x120,puVar3,param_13,param_14,
                      unaff_RBX);
  puVar5 = *(uint **)(param_9 + 0x10);
  uVar6 = binbuf_addbinbuf(uVar6,dVar8,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                           puVar5,extraout_RDX,(ulong)puVar3,param_13,param_14);
  uVar7 = binbuf_addsemi(uVar6,dVar8,param_3,param_4,param_5,param_6,param_7,param_8,param_10,puVar5
                         ,extraout_RDX_00,puVar3,param_13,param_14);
  uVar6 = extraout_RDX_01;
  if (*(char *)(param_9 + 0x90) != '\0') {
    puVar4 = gensym("#A");
    puVar3 = gensym("set");
    uVar6 = binbuf_addv(extraout_XMM0_Qa,dVar8,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_10,0x65470c,puVar4,puVar3,param_13,param_14,unaff_RBX);
    puVar5 = *(uint **)(param_9 + 0x30);
    uVar6 = binbuf_addbinbuf(uVar6,dVar8,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                             puVar5,extraout_RDX_02,(ulong)puVar3,param_13,param_14);
    uVar7 = binbuf_addsemi(uVar6,dVar8,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                           puVar5,extraout_RDX_03,puVar3,param_13,param_14);
    uVar6 = extraout_RDX_04;
  }
  obj_saveformat(uVar7,dVar8,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,uVar6,
                 puVar3,param_13,param_14,param_15);
  return;
}


