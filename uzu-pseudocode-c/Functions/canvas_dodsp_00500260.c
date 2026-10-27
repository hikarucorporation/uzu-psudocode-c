// Function : canvas_dodsp
// Namespace: 
// Entry    : 00500260
// Prototype: undefined canvas_dodsp(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, int param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00500260 - 00500372


void canvas_dodsp(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,int param_10,undefined8 param_11,undefined8 param_12,
                 undefined8 param_13,undefined8 param_14)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined7 extraout_var;
  long *plVar8;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 uVar9;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  long *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  uint local_94;
  long *local_90;
  uint local_74;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar4 = gensym("dsp");
  iVar2 = obj_nsiginlets(param_9);
  iVar3 = obj_nsigoutlets((long)param_9);
  plVar5 = ugen_start_graph(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8
                            ,param_10,param_11,iVar2,iVar3);
  uVar9 = extraout_XMM0_Qa_00;
  for (plVar8 = (long *)param_9[6]; plVar8 != (long *)0x0; plVar8 = (long *)plVar8[1]) {
    plVar6 = pd_checkobject(plVar8);
    uVar9 = extraout_XMM0_Qa_01;
    if ((plVar6 != (long *)0x0) &&
       (lVar7 = zgetfn(plVar8,(long)puVar4), uVar9 = extraout_XMM0_Qa_02, lVar7 != 0)) {
      uVar9 = ugen_add(plVar5,plVar6);
    }
  }
  local_a0 = (undefined8 *)0x0;
  local_40 = 0;
  local_98 = 0;
  local_38 = 0;
  local_a8 = param_9;
  puVar4 = linetraverser_next(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                              (long *)&local_a8);
  uVar9 = extraout_XMM0_Qa_03;
  while (puVar4 != (undefined8 *)0x0) {
    bVar1 = obj_issignaloutlet((long)local_a0,local_94);
    uVar9 = extraout_XMM0_Qa_05;
    if ((int)CONCAT71(extraout_var,bVar1) != 0) {
      uVar9 = ugen_connect(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,param_7,
                           param_8,plVar5,local_a0,local_94,local_90,(char *)(ulong)local_74,
                           param_14);
    }
    puVar4 = linetraverser_next(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                (long *)&local_a8);
    uVar9 = extraout_XMM0_Qa_04;
  }
  ugen_done_graph(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar5);
  return;
}


