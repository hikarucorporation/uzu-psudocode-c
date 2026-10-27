// Function : canvas_loadbangabstractions
// Namespace: 
// Entry    : 004fff50
// Prototype: undefined canvas_loadbangabstractions(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004fff50 - 004ffffa


void canvas_loadbangabstractions
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 uVar6;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  double unaff_RBX;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar7;
  
  puVar4 = gensym("loadbang");
  puVar3 = PTR_clone_class_00715970;
  puVar2 = PTR_canvas_class_00715918;
  uVar7 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  uVar6 = extraout_RDX;
  for (plVar1 = *(long **)(param_9 + 0x30); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[1]) {
    if (*plVar1 == *(long *)puVar2) {
      if (plVar1[0x1c] == 0) {
        uVar7 = canvas_loadbangabstractions
                          (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar1,param_10,uVar6,param_12,param_13,param_14);
        uVar6 = extraout_RDX_04;
      }
      else {
        uVar7 = canvas_loadbangabstractions
                          (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar1,param_10,uVar6,param_12,param_13,param_14);
        uVar7 = canvas_loadbangsubpatches
                          (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar1,param_10,extraout_RDX_00,param_12,param_13,param_14);
        uVar6 = extraout_RDX_01;
      }
    }
    else if (*plVar1 == *(long *)puVar3) {
      param_10 = puVar4;
      lVar5 = zgetfn(plVar1,(long)puVar4);
      uVar7 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
      uVar6 = extraout_RDX_02;
      if (lVar5 != 0) {
        param_10 = puVar4;
        uVar7 = pd_vmess(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar1,
                         puVar4,0x651ee3,param_12,param_13,param_14,unaff_RBX);
        uVar6 = extraout_RDX_03;
      }
    }
  }
  return;
}


