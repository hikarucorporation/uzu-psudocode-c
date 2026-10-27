// Function : graph_click
// Namespace: 
// Entry    : 00518bb0
// Prototype: ulong graph_click(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, undefined8 param_10, undefined8 param_11, ulong param_12, int * param_13, int * param_14, undefined8 param_15, int param_16)
// Body     : 00518bb0 - 00518d0a


ulong graph_click(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long *param_9,undefined8 param_10,ulong param_11,ulong param_12,int *param_13,
                 int *param_14,undefined8 param_15,int param_16)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  int iVar4;
  long *plVar5;
  int *piVar6;
  int *piVar7;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined1 in_stack_ffffffffffffffa8;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  piVar7 = (int *)((ulong)param_13 & 0xffffffff);
  iVar4 = (int)param_11;
  if ((*(ushort *)(param_9 + 0x1d) & 0x100) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00518bf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(PTR_text_widgetbehavior_00715630 + 0x30))
                      (param_9,param_10,param_11 & 0xffffffff,param_12 & 0xffffffff,piVar7);
    return uVar1;
  }
  if ((*(ushort *)(param_9 + 0x1d) & 1) != 0) {
    return 0;
  }
  uVar1 = param_12;
  piVar6 = param_14;
  for (plVar5 = (long *)param_9[6]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[1]) {
    param_13 = &local_34;
    piVar6 = &local_38;
    uVar1 = param_12 & 0xffffffff;
    uVar2 = canvas_hitbox(param_9,plVar5,iVar4,(int)param_12,param_13,piVar6,&local_3c,&local_40);
    param_11 = extraout_RDX;
    param_1 = extraout_XMM0_Qa;
    if ((int)uVar2 != 0) {
      uVar1 = param_12 & 0xffffffff;
      piVar6 = (int *)((ulong)param_14 & 0xffffffff);
      param_13 = piVar7;
      uVar3 = gobj_click(plVar5);
      param_11 = extraout_RDX_00;
      param_1 = extraout_XMM0_Qa_00;
      if ((int)uVar3 != 0) {
        uVar3 = uVar3 & 0xffffffff;
        if (param_16 != 0) {
          return uVar3;
        }
        goto LAB_00518ca3;
      }
    }
  }
  if (param_16 != 0) {
    return 0;
  }
  do {
    plVar5 = param_9;
    if ((long *)plVar5[9] == (long *)0x0) break;
    param_9 = (long *)plVar5[9];
  } while ((*(ushort *)(plVar5 + 0x1d) & 0x901) == 0x100);
  uVar3 = 0;
LAB_00518cf4:
  canvas_setcursor(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar5,
                   uVar3,param_11,uVar1,(char *)param_13,piVar6,in_stack_ffffffffffffffa8);
  return uVar3;
  while (param_9 = (long *)plVar5[9], (*(ushort *)(plVar5 + 0x1d) & 0x901) == 0x100) {
LAB_00518ca3:
    plVar5 = param_9;
    if ((long *)plVar5[9] == (long *)0x0) break;
  }
  goto LAB_00518cf4;
}


