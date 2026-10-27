// Function : text_set_new
// Namespace: 
// Entry    : 00558430
// Prototype: long * text_set_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00558430 - 00558626


long * text_set_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long extraout_RAX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  undefined8 extraout_RDX_10;
  uint uVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  ulong uVar5;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar6;
  
  uVar4 = (uint)param_10;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_text_set_class_00715960,param_10,param_11,param_12,param_13,param_14)
  ;
  floatinlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,(long)plVar3,(long)(plVar3 + 0xc),extraout_RDX,param_12,param_13,
                 param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)plVar3 + 100,extraout_RDX_00,param_12,
                 param_13,param_14);
  plVar3[0xc] = -0x4080000000000000;
  plVar3[6] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  uVar5 = gpointer_init(plVar3 + 7);
  uVar6 = extraout_RDX_01;
  if (uVar4 != 0) {
    iVar2 = *param_11;
    if (iVar2 == 2) {
      puVar1 = *(undefined8 **)(param_11 + 2);
      iVar2 = strcmp((char *)*puVar1,"-s");
      uVar5 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
      if (iVar2 == 0) {
        if ((((int)uVar4 < 3) || (param_11[4] != 2)) || (param_11[8] != 2)) {
          uVar5 = pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar3,
                           "%s: \'-s\' needs a struct and field name","text set",param_12,param_13,
                           param_14);
          uVar6 = extraout_RDX_04;
        }
        else {
          uVar5 = canvas_makebindsym(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,
                                     param_3,param_4,param_5,param_6,param_7,param_8,
                                     *(undefined8 **)(param_11 + 6));
          plVar3[10] = extraout_RAX;
          plVar3[0xb] = *(long *)(param_11 + 10);
          uVar4 = uVar4 - 3;
          param_11 = param_11 + 0xc;
          uVar6 = extraout_RDX_03;
        }
      }
      else {
        plVar3[6] = (long)puVar1;
        uVar4 = uVar4 - 1;
        param_11 = param_11 + 4;
        uVar6 = extraout_RDX_02;
      }
      if (uVar4 == 0) goto LAB_005585f1;
      iVar2 = *param_11;
    }
    if (iVar2 == 1) {
      uVar5 = (ulong)(uint)param_11[2];
      *(int *)(plVar3 + 0xc) = param_11[2];
    }
    else {
      uVar6 = post(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "text set: can\'t understand line number");
      uVar6 = postatom(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4,param_11,
                       extraout_RDX_05,param_12,param_13,param_14);
      uVar5 = endpost(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar6 = extraout_RDX_06;
    }
    if (uVar4 != 1) {
      if (param_11[4] == 1) {
        uVar5 = (ulong)(uint)param_11[6];
        *(int *)((long)plVar3 + 100) = param_11[6];
      }
      else {
        uVar6 = post(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "text set: can\'t understand field number");
        uVar6 = postatom(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4 - 1,
                         param_11 + 4,extraout_RDX_07,param_12,param_13,param_14);
        uVar5 = endpost(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar6 = extraout_RDX_08;
      }
      if (uVar4 != 2) {
        uVar6 = post(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "warning: text set ignoring extra argument: ");
        uVar6 = postatom(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar4 - 2,
                         param_11 + 8,extraout_RDX_09,param_12,param_13,param_14);
        uVar5 = endpost(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar6 = extraout_RDX_10;
      }
    }
  }
LAB_005585f1:
  if (plVar3[10] == 0) {
    symbolinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                    (long)(plVar3 + 6),uVar6,param_12,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                     (long)(plVar3 + 7),uVar6,param_12,param_13,param_14);
  }
  return plVar3;
}


