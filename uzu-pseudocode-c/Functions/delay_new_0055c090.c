// Function : delay_new
// Namespace: 
// Entry    : 0055c090
// Prototype: long * delay_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0055c090 - 0055c16b


long * delay_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 extraout_RDX;
  float fVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined4 uVar6;
  int local_20;
  float local_1c;
  
  fVar5 = (float)param_1;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,delay_class,
                  param_10,param_11,param_12,param_13,param_14);
  uVar6 = 0;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  plVar1[7] = (long)(double)fVar5;
  lVar2 = clock_new(plVar1,delay_tick);
  plVar1[6] = lVar2;
  puVar3 = gensym("bang");
  outlet_new(extraout_XMM0_Qa,CONCAT44(uVar6,fVar5),param_3,param_4,param_5,param_6,param_7,param_8,
             (long)plVar1,(long)puVar3,extraout_RDX,param_12,param_13,param_14);
  puVar3 = gensym("float");
  puVar4 = gensym("ft1");
  inlet_new(extraout_XMM0_Qa_00,CONCAT44(uVar6,fVar5),param_3,param_4,param_5,param_6,param_7,
            param_8,(long)plVar1,(long)plVar1,(long)puVar3,(long)puVar4,param_13,param_14);
  if ((float)param_2 != DAT_005d9058) {
    parsetimeunits((float)param_2,CONCAT44(uVar6,fVar5),param_3,param_4,param_5,param_6,param_7,
                   param_8,(long)plVar1,param_9,&local_1c,&local_20,param_13,param_14);
    clock_setunit((double)local_1c,(double *)plVar1[6],local_20);
  }
  return plVar1;
}


