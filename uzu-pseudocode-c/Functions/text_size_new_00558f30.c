// Function : text_size_new
// Namespace: 
// Entry    : 00558f30
// Prototype: long * text_size_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00558f30 - 00559084


long * text_size_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,int *param_11,undefined8 param_12,
                    char *param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long extraout_RAX;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 uVar5;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  uint uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Db_00;
  
  uVar6 = (uint)param_10;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_text_size_class_00715678,param_10,param_11,param_12,param_13,param_14
                 );
  plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
  plVar4 = outlet_new(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,(long)plVar3,*plVar4 + 0x78,extraout_RDX,param_12,
                      param_13,param_14);
  plVar3[0xc] = (long)plVar4;
  plVar3[6] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  uVar7 = gpointer_init(plVar3 + 7);
  uVar5 = extraout_RDX_00;
  if (uVar6 != 0) {
    if (*param_11 == 2) {
      puVar1 = *(undefined8 **)(param_11 + 2);
      iVar2 = strcmp((char *)*puVar1,"-s");
      uVar7 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      if (iVar2 == 0) {
        if ((((int)uVar6 < 3) || (param_11[4] != 2)) || (param_11[8] != 2)) {
          uVar7 = pd_error(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,(long)plVar3,
                           "%s: \'-s\' needs a struct and field name","text size",param_12,param_13,
                           param_14);
          uVar5 = extraout_RDX_05;
        }
        else {
          uVar7 = canvas_makebindsym(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,
                                     param_3,param_4,param_5,param_6,param_7,param_8,
                                     *(undefined8 **)(param_11 + 6));
          plVar3[10] = extraout_RAX;
          plVar3[0xb] = *(long *)(param_11 + 10);
          uVar6 = uVar6 - 3;
          param_11 = param_11 + 0xc;
          uVar5 = extraout_RDX_04;
        }
      }
      else {
        plVar3[6] = (long)puVar1;
        uVar6 = uVar6 - 1;
        param_11 = param_11 + 4;
        uVar5 = extraout_RDX_01;
      }
      if (uVar6 == 0) goto LAB_00558ff7;
    }
    uVar7 = post(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "warning: text size ignoring extra argument: ");
    uVar7 = postatom(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar6,param_11,
                     extraout_RDX_02,param_12,param_13,param_14);
    uVar7 = endpost(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar5 = extraout_RDX_03;
  }
LAB_00558ff7:
  if (plVar3[10] == 0) {
    symbolinlet_new(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                    (long)(plVar3 + 6),uVar5,param_12,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                     (long)(plVar3 + 7),uVar5,param_12,param_13,param_14);
  }
  return plVar3;
}


