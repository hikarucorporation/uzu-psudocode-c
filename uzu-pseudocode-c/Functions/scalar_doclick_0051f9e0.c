// Function : scalar_doclick
// Namespace: 
// Entry    : 0051f9e0
// Prototype: undefined8 scalar_doclick(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, long param_10, undefined8 param_11, undefined8 param_12, uint * param_13, undefined8 param_14, undefined4 param_15, undefined4 param_16, undefined4 param_17, undefined4 param_18, int param_19)
// Body     : 0051f9e0 - 0051fb5f


undefined8
scalar_doclick(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
              long param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
              undefined8 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
              undefined4 param_18,int param_19)

{
  long lVar1;
  undefined8 *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 extraout_XMM0_Da;
  float fVar6;
  undefined4 extraout_XMM0_Da_00;
  float fVar7;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  float fVar8;
  undefined4 uVar9;
  uint local_68 [2];
  undefined4 local_60;
  undefined4 local_58;
  float local_50;
  undefined4 local_48;
  float local_40;
  
  fVar8 = (float)param_2;
  puVar3 = param_13;
  uVar4 = param_14;
  lVar1 = template_findcanvas(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              param_10,param_10,param_11,param_12,(char *)param_13,param_14);
  puVar2 = gensym("x");
  fVar6 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                                   param_4,param_5,param_6,param_7,param_8,param_10,puVar2,param_9,0
                                   ,(char *)puVar3,uVar4);
  puVar2 = gensym("y");
  fVar7 = (float)template_getfloat(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3
                                   ,param_4,param_5,param_6,param_7,param_8,param_10,puVar2,param_9,
                                   0,(char *)puVar3,uVar4);
  local_68[0] = 1;
  local_60 = 0;
  local_58 = 1;
  uVar9 = 0;
  fVar6 = fVar6 + (float)param_1;
  local_48 = 1;
  fVar7 = fVar7 + fVar8;
  local_50 = fVar6;
  local_40 = fVar7;
  if (param_19 != 0) {
    fVar8 = fVar6;
    puVar3 = (uint *)gensym("click");
    template_notifyforscalar
              (CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),CONCAT44(uVar9,fVar8),param_3,
               param_4,param_5,param_6,param_7,param_8,param_10,param_13,param_11,puVar3,3,local_68)
    ;
  }
  plVar5 = *(long **)(lVar1 + 0x30);
  while( true ) {
    if (plVar5 == (long *)0x0) {
      return 0;
    }
    lVar1 = pd_getparentwidget(plVar5);
    if ((lVar1 != 0) &&
       (uVar4 = (**(code **)(lVar1 + 0x28))
                          (fVar6,fVar7,plVar5,param_13,param_9,param_10,param_11,param_12,param_14,
                           param_15,param_16,param_17,param_18,param_19), (int)uVar4 != 0)) break;
    plVar5 = (long *)plVar5[1];
  }
  return uVar4;
}


