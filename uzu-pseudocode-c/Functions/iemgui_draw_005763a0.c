// Function : iemgui_draw
// Namespace: 
// Entry    : 005763a0
// Prototype: undefined iemgui_draw(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, ulong param_11, undefined8 param_12, char * param_13, char * param_14)
// Body     : 005763a0 - 005766fe


void iemgui_draw(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long param_10,ulong param_11,undefined8 param_12,char *param_13,
                char *param_14)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_var;
  undefined8 uVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 extraout_RDX;
  bool bVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar6;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 in_stack_fffffffffffffe08;
  char local_1b8 [128];
  char local_138 [128];
  char local_b8 [136];
  
  switch(param_11 & 0xffffffff) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 0x20);
    UNRECOVERED_JUMPTABLE_00 = iemgui_draw_update;
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
    }
    sys_queuegui(param_9,*(long *)(param_9 + 0x30),(long)UNRECOVERED_JUMPTABLE_00);
    return;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 0x38);
    bVar5 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    UNRECOVERED_JUMPTABLE_00 = iemgui_draw_move;
    break;
  case 2:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 8);
    bVar5 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    UNRECOVERED_JUMPTABLE_00 = iemgui_draw_new;
    break;
  case 3:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 0x28);
    bVar5 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    UNRECOVERED_JUMPTABLE_00 = iemgui_draw_select;
    break;
  case 4:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 0x30);
    bVar5 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    UNRECOVERED_JUMPTABLE_00 = iemgui_draw_erase;
    break;
  case 5:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 0x10);
    bVar5 = UNRECOVERED_JUMPTABLE == (code *)0x0;
    UNRECOVERED_JUMPTABLE_00 = iemgui_draw_config;
    break;
  default:
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_9 + 0x48) + 0x18);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0057642c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_9,param_10,(int)param_11 + -6);
      return;
    }
    uVar1 = *(undefined4 *)(*(long *)(param_9 + 0x30) + 0xec);
    iVar2 = text_xpix(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11,param_12,param_13,param_14);
    iVar3 = text_ypix(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      param_9,param_10,extraout_RDX,param_12,param_13,param_14);
    uVar4 = glist_getcanvas(param_10);
    sprintf(local_b8,"%pOBJ",(void *)param_9);
    sprintf(local_138,"%pLABEL",(void *)param_9);
    sprintf(local_1b8,"%pOUT%d",(void *)param_9,0);
    uVar6 = pdgui_vmess(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0,"crs",uVar4,"delete",local_1b8,param_14,in_stack_fffffffffffffe08);
    if ((*(byte *)(param_9 + 0x440) & 0x80) == 0) {
      uVar6 = pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                          "crr iiii rs rS",uVar4,"create","rectangle",CONCAT44(extraout_var,iVar2),
                          (char)*(undefined4 *)(param_9 + 0x40) + (char)iVar3 + (char)uVar1 * -2);
      param_14 = local_138;
      pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar4,
                  "lower",local_1b8,param_14,in_stack_fffffffffffffe08);
    }
    sprintf(local_1b8,"%pIN%d",(void *)param_9,0);
    uVar6 = pdgui_vmess(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        0,"crs",uVar4,"delete",local_1b8,param_14,in_stack_fffffffffffffe08);
    if ((*(byte *)(param_9 + 0x440) & 0x40) == 0) {
      uVar6 = pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                          "crr iiii rs rS",uVar4,"create","rectangle",CONCAT44(extraout_var,iVar2),
                          (char)iVar3);
      pdgui_vmess(uVar6,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,"crss",uVar4,
                  "lower",local_1b8,local_138,in_stack_fffffffffffffe08);
    }
    return;
  }
  if (!bVar5) {
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x005764ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_9,param_10,param_11,UNRECOVERED_JUMPTABLE_00);
  return;
}


