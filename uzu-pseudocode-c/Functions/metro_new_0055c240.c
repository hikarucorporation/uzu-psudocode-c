// Function : metro_new
// Namespace: 
// Entry    : 0055c240
// Prototype: long * metro_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055c240 - 0055c334


long * metro_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int local_30;
  float local_2c;
  undefined8 local_28;
  
  local_28 = param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,metro_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar6 = DAT_005d9038;
  uVar5 = (uint)(float)local_28 & -(uint)(0.0 < (float)local_28);
  uVar7 = 0;
  uVar8 = 0;
  plVar1[7] = (long)(double)(float)(~-(uint)(0.0 < (float)local_28) & DAT_005d9038 | uVar5);
  *(undefined4 *)(plVar1 + 8) = 0;
  lVar2 = clock_new(plVar1,metro_tick);
  plVar1[6] = lVar2;
  puVar3 = gensym("bang");
  outlet_new(extraout_XMM0_Qa,CONCAT44(uVar8,uVar6),CONCAT44(uVar7,uVar5),param_4,param_5,param_6,
             param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX,param_12,param_13,param_14);
  puVar3 = gensym("float");
  puVar4 = gensym("ft1");
  inlet_new(extraout_XMM0_Qa_00,CONCAT44(uVar8,uVar6),CONCAT44(uVar7,uVar5),param_4,param_5,param_6,
            param_7,param_8,(long)plVar1,(long)plVar1,(long)puVar3,(long)puVar4,param_13,param_14);
  if ((float)param_2 != DAT_005d9058) {
    parsetimeunits((float)param_2,CONCAT44(uVar8,uVar6),CONCAT44(uVar7,uVar5),param_4,param_5,
                   param_6,param_7,param_8,(long)plVar1,param_9,&local_2c,&local_30,param_13,
                   param_14);
    clock_setunit((double)local_2c,(double *)plVar1[6],local_30);
  }
  return plVar1;
}


