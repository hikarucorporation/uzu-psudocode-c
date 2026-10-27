// Function : text_get_new
// Namespace: 
// Entry    : 00557e40
// Prototype: long * text_get_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00557e40 - 00558071


long * text_get_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
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
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  uint uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  ulong uVar7;
  undefined4 extraout_XMM0_Db_03;
  undefined8 uVar8;
  
  uVar6 = (uint)param_10;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_text_get_class_007153f8,param_10,param_11,param_12,param_13,param_14)
  ;
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar5 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar3,*plVar4 + 0xc0,extraout_RDX,param_12,
                      param_13,param_14);
  plVar3[0xc] = (long)plVar5;
  plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long)plVar3,*plVar4 + 0x78,extraout_RDX_00,
                      param_12,param_13,param_14);
  plVar3[0xd] = (long)plVar4;
  floatinlet_new(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)(plVar3 + 0xe),extraout_RDX_01,param_12,
                 param_13,param_14);
  floatinlet_new(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,(long)plVar3,(long)plVar3 + 0x74,extraout_RDX_02,param_12,
                 param_13,param_14);
  plVar3[0xe] = 0x3f800000bf800000;
  plVar3[6] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  uVar7 = gpointer_init(plVar3 + 7);
  uVar8 = extraout_RDX_03;
  if (uVar6 != 0) {
    iVar2 = *param_11;
    if (iVar2 == 2) {
      puVar1 = *(undefined8 **)(param_11 + 2);
      iVar2 = strcmp((char *)*puVar1,"-s");
      uVar7 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
      if (iVar2 == 0) {
        if ((((int)uVar6 < 3) || (param_11[4] != 2)) || (param_11[8] != 2)) {
          uVar7 = pd_error(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar3,
                           "%s: \'-s\' needs a struct and field name","text get",param_12,param_13,
                           param_14);
          uVar8 = extraout_RDX_06;
        }
        else {
          uVar7 = canvas_makebindsym(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,
                                     param_3,param_4,param_5,param_6,param_7,param_8,
                                     *(undefined8 **)(param_11 + 6));
          plVar3[10] = extraout_RAX;
          plVar3[0xb] = *(long *)(param_11 + 10);
          uVar6 = uVar6 - 3;
          param_11 = param_11 + 0xc;
          uVar8 = extraout_RDX_05;
        }
      }
      else {
        plVar3[6] = (long)puVar1;
        uVar6 = uVar6 - 1;
        param_11 = param_11 + 4;
        uVar8 = extraout_RDX_04;
      }
      if (uVar6 == 0) goto LAB_0055803c;
      iVar2 = *param_11;
    }
    if (iVar2 == 1) {
      uVar7 = (ulong)(uint)param_11[2];
      *(int *)(plVar3 + 0xe) = param_11[2];
    }
    else {
      uVar8 = post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   "text get: can\'t understand field number");
      uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6,param_11,
                       extraout_RDX_07,param_12,param_13,param_14);
      uVar7 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar8 = extraout_RDX_08;
    }
    if (uVar6 != 1) {
      if (param_11[4] == 1) {
        uVar7 = (ulong)(uint)param_11[6];
        *(int *)((long)plVar3 + 0x74) = param_11[6];
      }
      else {
        uVar8 = post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "text get: can\'t understand field count");
        uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6 - 1,
                         param_11 + 4,extraout_RDX_09,param_12,param_13,param_14);
        uVar7 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar8 = extraout_RDX_10;
      }
      if (uVar6 != 2) {
        uVar8 = post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                     "warning: text get ignoring extra argument: ");
        uVar8 = postatom(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6 - 2,
                         param_11 + 8,extraout_RDX_11,param_12,param_13,param_14);
        uVar7 = endpost(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        uVar8 = extraout_RDX_12;
      }
    }
  }
LAB_0055803c:
  if (plVar3[10] == 0) {
    symbolinlet_new(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                    (long)(plVar3 + 6),uVar8,param_12,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                     (long)(plVar3 + 7),uVar8,param_12,param_13,param_14);
  }
  return plVar3;
}


