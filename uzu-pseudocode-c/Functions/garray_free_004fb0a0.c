// Function : garray_free
// Namespace: 
// Entry    : 004fb0a0
// Prototype: undefined garray_free(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined * param_10, undefined8 param_11, undefined8 * param_12, char * param_13, undefined8 param_14)
// Body     : 004fb0a0 - 004fb162


void garray_free(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9,undefined *param_10,undefined8 param_11,undefined8 *param_12,
                char *param_13,undefined8 param_14)

{
  undefined *puVar1;
  undefined1 in_AL;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  
  uVar4 = sys_unqueuegui((long)param_9);
  uVar5 = extraout_RDX;
  if ((*(byte *)(param_9 + 6) & 8) != 0) {
    *(byte *)(param_9 + 6) = *(byte *)(param_9 + 6) & 0xf7;
    param_10 = &DAT_006552a4;
    uVar4 = pdgui_vmess(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x653c2c,"s",
                        *(undefined8 *)param_9[5],param_12,param_13,param_14,in_AL);
    uVar5 = extraout_RDX_00;
  }
  uVar5 = pdgui_stub_deleteforkey
                    (uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)param_9,
                     param_10,uVar5,param_12,param_13,param_14);
  pd_unbind(uVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
            (undefined8 *)param_9[5],extraout_RDX_01,param_12,param_13,param_14);
  puVar2 = gensym("#A");
  puVar1 = PTR_garray_class_00715780;
  plVar3 = pd_findbyclass(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                          (long)puVar2,*(long *)PTR_garray_class_00715780);
  if (plVar3 != (long *)0x0) {
    do {
      puVar2 = gensym("#A");
      pd_unbind(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar3,
                puVar2,extraout_RDX_02,param_12,param_13,param_14);
      puVar2 = gensym("#A");
      plVar3 = pd_findbyclass(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,(long)puVar2,*(long *)puVar1);
    } while (plVar3 != (long *)0x0);
  }
  pd_free((long *)param_9[2]);
  return;
}


