// Function : sigfiddle_new
// Namespace: 
// Entry    : 004e1d60
// Prototype: long * sigfiddle_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 004e1d60 - 004e1ed4


long * sigfiddle_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  long lVar7;
  char *pcVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar11 = (float)param_4;
  fVar10 = (float)param_3;
  fVar9 = (float)param_2;
  plVar1 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,sigfiddle_class,
                  param_10,param_11,param_12,param_13,param_14);
  lVar6 = (long)(int)fVar10;
  pcVar8 = (char *)(long)(int)fVar11;
  uVar2 = sigfiddle_doinit(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)plVar1,(long)(float)param_1,
                           (long)fVar9,lVar6,pcVar8,param_14);
  if ((int)uVar2 == 0) {
    plVar1[7] = 0;
    pd_free(plVar1);
    plVar1 = (long *)0x0;
  }
  else {
    puVar3 = gensym("float");
    plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX,lVar6
                        ,pcVar8,param_14);
    plVar1[0x6a] = (long)plVar4;
    puVar3 = gensym("bang");
    plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX_00,
                        lVar6,pcVar8,param_14);
    plVar1[0x69] = (long)plVar4;
    if (0 < *(int *)((long)plVar1 + 0x2b4)) {
      plVar4 = plVar1 + 0x25;
      lVar7 = 0;
      do {
        puVar3 = gensym("list");
        plVar5 = outlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,
                            param_4,param_5,param_6,param_7,param_8,(long)plVar1,(long)puVar3,
                            extraout_RDX_01,lVar6,pcVar8,param_14);
        *plVar4 = (long)plVar5;
        lVar7 = lVar7 + 1;
        plVar4 = plVar4 + 0x18;
      } while (lVar7 < *(int *)((long)plVar1 + 0x2b4));
    }
    puVar3 = gensym("float");
    plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX_02,
                        lVar6,pcVar8,param_14);
    plVar1[0x67] = (long)plVar4;
    if ((int)plVar1[0xb] == 0) {
      plVar1[0x6b] = 0;
    }
    else {
      puVar3 = gensym("list");
      plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,(long)plVar1,(long)puVar3,extraout_RDX_03,
                          lVar6,pcVar8,param_14);
      plVar1[0x6b] = (long)plVar4;
    }
    lVar6 = clock_new(plVar1,PTR_sigfiddle_bang_00715ec8);
    plVar1[6] = lVar6;
  }
  return plVar1;
}


