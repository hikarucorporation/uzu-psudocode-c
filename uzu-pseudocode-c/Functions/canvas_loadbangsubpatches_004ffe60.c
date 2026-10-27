// Function : canvas_loadbangsubpatches
// Namespace: 
// Entry    : 004ffe60
// Prototype: undefined canvas_loadbangsubpatches(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 004ffe60 - 004fff26


void canvas_loadbangsubpatches
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 extraout_RDX;
  undefined8 uVar5;
  undefined8 extraout_RDX_00;
  double unaff_RBX;
  long *plVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined8 uVar7;
  
  puVar3 = gensym("loadbang");
  puVar1 = PTR_canvas_class_00715918;
  uVar7 = CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da);
  plVar6 = *(long **)(param_9 + 0x30);
  if (plVar6 != (long *)0x0) {
    lVar4 = *(long *)PTR_canvas_class_00715918;
    uVar5 = extraout_RDX;
    do {
      if ((*plVar6 == lVar4) && (plVar6[0x1c] == 0)) {
        uVar7 = canvas_loadbangsubpatches
                          (uVar7,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                           (long)plVar6,param_10,uVar5,param_12,param_13,param_14);
        lVar4 = *(long *)puVar1;
        uVar5 = extraout_RDX_00;
      }
      puVar2 = PTR_clone_class_00715970;
      plVar6 = (long *)plVar6[1];
    } while (plVar6 != (long *)0x0);
    for (plVar6 = *(long **)(param_9 + 0x30); plVar6 != (long *)0x0; plVar6 = (long *)plVar6[1]) {
      if (((*plVar6 != *(long *)puVar1) && (*plVar6 != *(long *)puVar2)) &&
         (lVar4 = zgetfn(plVar6,(long)puVar3), lVar4 != 0)) {
        pd_vmess(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar6,puVar3,
                 0x651ee3,param_12,param_13,param_14,unaff_RBX);
      }
    }
  }
  return;
}


