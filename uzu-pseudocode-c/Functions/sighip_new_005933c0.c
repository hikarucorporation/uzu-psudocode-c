// Function : sighip_new
// Namespace: 
// Entry    : 005933c0
// Prototype: long * sighip_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005933c0 - 00593490


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * sighip_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                 char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 extraout_RDX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  float fVar5;
  float fVar6;
  
  fVar6 = (float)param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_sighip_class_00715d30,param_10,param_11,param_12,param_13,param_14);
  puVar2 = gensym("float");
  puVar3 = gensym("ft1");
  inlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,(long)plVar1,(long)plVar1,(long)puVar2,(long)puVar3,param_13,param_14);
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,(long)plVar1,*plVar4 + 0xf0,extraout_RDX,puVar3,param_13,
             param_14);
  *(undefined4 *)(plVar1 + 6) = 0x472c4400;
  *(undefined4 *)(plVar1 + 7) = 0;
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar5 = (float)((double)fVar6 * _DAT_0065d7f8 + _DAT_005d9000);
  *(float *)((long)plVar1 + 0x34) = fVar6;
  *(float *)((long)plVar1 + 0x3c) = fVar5;
  fVar6 = 0.0;
  if ((fVar5 < 0.0) || (fVar6 = DAT_005d9038, DAT_005d9038 < fVar5)) {
    *(float *)((long)plVar1 + 0x3c) = fVar6;
  }
  *(undefined4 *)(plVar1 + 8) = 0;
  return plVar1;
}


