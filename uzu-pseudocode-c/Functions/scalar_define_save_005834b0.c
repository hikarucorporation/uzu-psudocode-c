// Function : scalar_define_save
// Namespace: 
// Entry    : 005834b0
// Prototype: undefined scalar_define_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005834b0 - 005835d1


void scalar_define_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       long param_9,int *param_10,undefined8 param_11,undefined8 param_12,
                       char *param_13,undefined8 param_14)

{
  long lVar1;
  double in_RAX;
  long *plVar2;
  undefined8 *puVar3;
  uint *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint *puVar7;
  undefined8 uVar8;
  undefined8 extraout_XMM0_Qa;
  double dVar9;
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar2;
  puVar3 = gensym("obj");
  dVar9 = (double)(int)*(short *)(param_9 + 0x2a);
  uVar8 = binbuf_addv((double)(int)*(short *)(param_9 + 0x28),dVar9,param_3,param_4,param_5,param_6,
                      param_7,param_8,param_10,0x65e85f,lVar1 + 0x120,puVar3,param_13,param_14,
                      in_RAX);
  puVar7 = *(uint **)(param_9 + 0x10);
  uVar8 = binbuf_addbinbuf(uVar8,dVar9,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                           puVar7,extraout_RDX,(ulong)puVar3,param_13,param_14);
  binbuf_addsemi(uVar8,dVar9,param_3,param_4,param_5,param_6,param_7,param_8,param_10,puVar7,
                 extraout_RDX_00,puVar3,param_13,param_14);
  if ((((*(byte *)(param_9 + 0xe9) & 4) == 0) || (*(long **)(param_9 + 0x30) == (long *)0x0)) ||
     (**(long **)(param_9 + 0x30) != *(long *)PTR_scalar_class_00715810)) {
    return;
  }
  puVar4 = binbuf_new();
  lVar1 = *(long *)(param_9 + 0x30);
  puVar3 = gensym("#A");
  puVar5 = gensym("set");
  uVar8 = binbuf_addv(extraout_XMM0_Qa,dVar9,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_10,0x65470c,puVar3,puVar5,param_13,param_14,in_RAX);
  uVar6 = 0;
  uVar8 = canvas_writescalar(uVar8,dVar9,param_3,param_4,param_5,param_6,param_7,param_8,
                             *(long **)(lVar1 + 0x10),(uint *)(lVar1 + 0x18),(int *)puVar4,0,
                             param_13,param_14);
  puVar7 = puVar4;
  uVar8 = binbuf_addbinbuf(uVar8,dVar9,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                           puVar4,extraout_RDX_01,uVar6,param_13,param_14);
  binbuf_addsemi(uVar8,dVar9,param_3,param_4,param_5,param_6,param_7,param_8,param_10,puVar7,
                 extraout_RDX_02,uVar6,param_13,param_14);
  binbuf_free(puVar4);
  return;
}


