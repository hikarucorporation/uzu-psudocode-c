// Function : array_define_save
// Namespace: 
// Entry    : 00548ab0
// Prototype: undefined array_define_save(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, double param_15)
// Body     : 00548ab0 - 00548b7d


void array_define_save(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9,int *param_10,undefined8 param_11,undefined8 param_12,
                      char *param_13,undefined8 param_14,double param_15)

{
  long lVar1;
  double in_RAX;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint *puVar5;
  undefined8 uVar6;
  double dVar7;
  
  if (*(long **)(param_9 + 0x30) == (long *)0x0) {
    plVar2 = (long *)0x0;
  }
  else {
    plVar2 = pd_checkglist(*(long **)(param_9 + 0x30));
  }
  plVar3 = (long *)__tls_get_addr(&PTR_007159b0);
  lVar1 = *plVar3;
  piVar4 = (int *)gensym("obj");
  dVar7 = (double)(int)*(short *)(param_9 + 0x2a);
  uVar6 = binbuf_addv((double)(int)*(short *)(param_9 + 0x28),dVar7,param_3,param_4,param_5,param_6,
                      param_7,param_8,param_10,0x65e85f,lVar1 + 0x120,piVar4,param_13,param_14,
                      in_RAX);
  puVar5 = *(uint **)(param_9 + 0x10);
  uVar6 = binbuf_addbinbuf(uVar6,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,param_10,
                           puVar5,extraout_RDX,(ulong)piVar4,param_13,param_14);
  uVar6 = binbuf_addsemi(uVar6,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,param_10,puVar5
                         ,extraout_RDX_00,piVar4,param_13,param_14);
  if (plVar2 == (long *)0x0) {
    bug(uVar6,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,"array_define_save",puVar5,
        extraout_RDX_01,piVar4,param_13,param_14,param_15._0_1_);
    return;
  }
  uVar6 = garray_savecontentsto
                    (uVar6,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,plVar2[6],param_10,
                     extraout_RDX_01,piVar4,param_13,param_14);
  obj_saveformat(uVar6,dVar7,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 extraout_RDX_02,piVar4,param_13,param_14,param_15);
  return;
}


