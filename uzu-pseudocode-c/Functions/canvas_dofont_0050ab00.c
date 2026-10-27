// Function : canvas_dofont
// Namespace: 
// Entry    : 0050ab00
// Prototype: undefined canvas_dofont(float param_1, ulong param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined * param_9, undefined * param_10, undefined8 param_11, char * param_12, char * param_13, undefined4 * param_14)
// Body     : 0050ab00 - 0050ac6e


void canvas_dofont(float param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
                  undefined *param_10,undefined8 param_11,char *param_12,char *param_13,
                  undefined4 *param_14)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined7 extraout_var;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_XMM0_Qa;
  ulong uVar4;
  ulong extraout_XMM0_Qa_00;
  ulong extraout_XMM0_Qa_01;
  ulong extraout_XMM0_Qa_02;
  double dVar5;
  float fVar6;
  float fVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined1 in_stack_ffffffffffffffa8;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  char local_34 [4];
  
  fVar6 = (float)param_3;
  *(int *)(param_9 + 0xd0) = (int)param_1;
  dVar5 = (double)param_2;
  uVar8 = param_3;
  if (((float)param_2 != DAT_005d9038) || (uVar4 = param_3 & 0xffffffff, fVar6 != DAT_005d9038)) {
    plVar2 = canvas_undo_set_move((long)param_9,0);
    param_12 = "motion";
    param_10 = PTR_canvas_undo_move_00715b48;
    uVar4 = canvas_setundo(extraout_XMM0_Qa,dVar5,uVar8,param_4,param_5,param_6,param_7,param_8,
                           param_9,PTR_canvas_undo_move_00715b48,(long)plVar2,"motion",param_13,
                           param_14,in_stack_ffffffffffffffa8);
    plVar2 = *(long **)(param_9 + 0x30);
    param_11 = extraout_RDX;
    if (plVar2 != (long *)0x0) {
      do {
        param_13 = local_34;
        param_14 = &local_38;
        gobj_getrect(plVar2,param_9,&local_3c,&local_40,(undefined4 *)local_34,&local_38);
        param_12 = (char *)(ulong)(uint)((int)((double)((float)local_40 * fVar6) + DAT_005db338) -
                                        local_40);
        param_10 = param_9;
        dVar5 = DAT_005db338;
        uVar4 = gobj_displace(plVar2);
        plVar2 = (long *)plVar2[1];
        param_11 = extraout_RDX_00;
      } while (plVar2 != (long *)0x0);
    }
  }
  for (plVar2 = *(long **)(param_9 + 0x30); plVar2 != (long *)0x0; plVar2 = (long *)plVar2[1]) {
    plVar3 = pd_checkglist(plVar2);
    param_11 = extraout_RDX_01;
    uVar4 = extraout_XMM0_Qa_00;
    if (plVar3 != (long *)0x0) {
      bVar1 = canvas_isabstraction((long)plVar2);
      param_11 = extraout_RDX_02;
      uVar4 = extraout_XMM0_Qa_01;
      if ((int)CONCAT71(extraout_var,bVar1) == 0) {
        dVar5 = (double)(param_2 & 0xffffffff);
        uVar9 = 0;
        fVar7 = fVar6;
        canvas_dofont(param_1,(ulong)dVar5,param_3 & 0xffffffff,param_4,param_5,param_6,param_7,
                      param_8,(undefined *)plVar2,param_10,extraout_RDX_02,param_12,param_13,
                      param_14);
        uVar8 = CONCAT44(uVar9,fVar7);
        param_11 = extraout_RDX_03;
        uVar4 = extraout_XMM0_Qa_02;
      }
    }
  }
  if ((param_9[0xe8] & 1) != 0) {
    canvas_redraw(uVar4,dVar5,uVar8,param_4,param_5,param_6,param_7,param_8,(long *)param_9,param_10
                  ,param_11,param_12,param_13,(undefined *)param_14,in_stack_ffffffffffffffa8);
  }
  return;
}


