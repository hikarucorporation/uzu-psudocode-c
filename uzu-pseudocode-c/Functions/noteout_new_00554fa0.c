// Function : noteout_new
// Namespace: 
// Entry    : 00554fa0
// Prototype: long * noteout_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00554fa0 - 00554ff8


long * noteout_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  float fVar2;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,noteout_class,
                  param_10,param_11,param_12,param_13,param_14);
  *(undefined4 *)(plVar1 + 6) = 0;
  fVar2 = (float)param_1;
  if ((float)param_1 <= DAT_005d9038) {
    fVar2 = DAT_005d9038;
  }
  *(float *)((long)plVar1 + 0x34) = fVar2;
  floatinlet_new((ulong)(uint)fVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 (long)plVar1,(long)(plVar1 + 6),extraout_RDX,param_12,param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,(long)plVar1,(long)plVar1 + 0x34,extraout_RDX_00,param_12,param_13
                 ,param_14);
  return plVar1;
}


