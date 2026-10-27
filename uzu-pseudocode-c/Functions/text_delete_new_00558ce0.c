// Function : text_delete_new
// Namespace: 
// Entry    : 00558ce0
// Prototype: long * text_delete_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 00558ce0 - 00558df0


long * text_delete_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  undefined8 uVar4;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  uint uVar5;
  undefined4 extraout_XMM0_Da;
  undefined8 uVar6;
  undefined4 extraout_XMM0_Db;
  
  uVar5 = (uint)param_10;
  plVar3 = pd_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long *)PTR_text_delete_class_00715e30,param_10,param_11,param_12,param_13,
                  param_14);
  plVar3[6] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  uVar6 = gpointer_init(plVar3 + 7);
  uVar4 = extraout_RDX;
  if (uVar5 != 0) {
    if (*param_11 == 2) {
      puVar1 = *(undefined8 **)(param_11 + 2);
      iVar2 = strcmp((char *)*puVar1,"-s");
      uVar6 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
      if (iVar2 == 0) {
        if ((((int)uVar5 < 3) || (param_11[4] != 2)) || (param_11[8] != 2)) {
          uVar6 = pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                           param_5,param_6,param_7,param_8,(long)plVar3,
                           "%s: \'-s\' needs a struct and field name","text delete",param_12,
                           param_13,param_14);
          uVar4 = extraout_RDX_02;
        }
        else {
          uVar6 = canvas_makebindsym(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,
                                     param_4,param_5,param_6,param_7,param_8,
                                     *(undefined8 **)(param_11 + 6));
          plVar3[10] = extraout_RAX;
          plVar3[0xb] = *(long *)(param_11 + 10);
          uVar5 = uVar5 - 3;
          param_11 = param_11 + 0xc;
          uVar4 = extraout_RDX_01;
        }
      }
      else {
        plVar3[6] = (long)puVar1;
        uVar5 = uVar5 - 1;
        param_11 = param_11 + 4;
        uVar4 = extraout_RDX_00;
      }
      if (uVar5 == 0) goto LAB_00558dc0;
    }
    uVar6 = post(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 "warning: text delete ignoring extra argument: ");
    uVar6 = postatom(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar5,param_11,
                     extraout_RDX_03,param_12,param_13,param_14);
    uVar6 = endpost(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar4 = extraout_RDX_04;
  }
LAB_00558dc0:
  if (plVar3[10] == 0) {
    symbolinlet_new(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                    (long)(plVar3 + 6),uVar4,param_12,param_13,param_14);
  }
  else {
    pointerinlet_new(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar3,
                     (long)(plVar3 + 7),uVar4,param_12,param_13,param_14);
  }
  return plVar3;
}


