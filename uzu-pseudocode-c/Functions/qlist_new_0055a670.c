// Function : qlist_new
// Namespace: 
// Entry    : 0055a670
// Prototype: long * qlist_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055a670 - 0055a71b


long * qlist_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long extraout_RAX;
  long lVar4;
  long *plVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,qlist_class,
                  param_10,param_11,param_12,param_13,param_14);
  puVar2 = gensym("qlist");
  puVar3 = binbuf_new();
  plVar1[6] = (long)puVar3;
  canvas_getcurrent(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                    param_6,param_7,param_8);
  plVar1[7] = extraout_RAX;
  plVar1[9] = (long)puVar2;
  lVar4 = clock_new(plVar1,qlist_tick);
  plVar1[0xc] = lVar4;
  plVar5 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,*plVar5 + 0xc0,extraout_RDX,param_12,param_13,
             param_14);
  plVar5 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar1,*plVar5 + 0xa8,extraout_RDX_00,
                      param_12,param_13,param_14);
  plVar1[10] = (long)plVar5;
  *(undefined4 *)(plVar1 + 0xb) = 0x7fffffff;
  *(undefined4 *)(plVar1 + 0xd) = 0x3f800000;
  plVar1[0xe] = 0;
  plVar1[0xf] = 0;
  *(undefined4 *)(plVar1 + 0x10) = 0;
  return plVar1;
}


