// Function : canvas_initbang
// Namespace: 
// Entry    : 00500000
// Prototype: undefined canvas_initbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00500000 - 005000c7


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void canvas_initbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  double in_RAX;
  undefined8 *puVar2;
  long lVar3;
  undefined8 extraout_RDX;
  undefined8 uVar4;
  undefined8 extraout_RDX_00;
  long *plVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar6;
  
  puVar2 = gensym("loadbang");
  puVar1 = PTR_canvas_class_00715918;
  plVar5 = *(long **)(param_9 + 0x30);
  if (plVar5 != (long *)0x0) {
    lVar3 = *(long *)PTR_canvas_class_00715918;
    uVar4 = extraout_RDX;
    uVar6 = extraout_XMM0_Qa;
    do {
      if ((*plVar5 == lVar3) && (plVar5[0x1c] == 0)) {
        uVar6 = canvas_initbang(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (long)plVar5,param_10,uVar4,param_12,param_13,param_14);
        lVar3 = *(long *)puVar1;
        uVar4 = extraout_RDX_00;
      }
      plVar5 = (long *)plVar5[1];
    } while (plVar5 != (long *)0x0);
    for (plVar5 = *(long **)(param_9 + 0x30); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
      if ((*plVar5 != *(long *)puVar1) && (lVar3 = zgetfn(plVar5,(long)puVar2), lVar3 != 0)) {
        pd_vmess(_DAT_005d9000,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar5,
                 puVar2,0x651ee3,param_12,param_13,param_14,in_RAX);
      }
    }
  }
  return;
}


