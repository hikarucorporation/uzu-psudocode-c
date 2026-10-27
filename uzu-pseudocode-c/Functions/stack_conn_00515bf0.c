// Function : stack_conn
// Namespace: 
// Entry    : 00515bf0
// Prototype: undefined stack_conn(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long param_10, int * param_11, long param_12, int param_13, undefined8 * param_14)
// Body     : 00515bf0 - 00515d29


void stack_conn(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,long param_10,int *param_11,long param_12,int param_13,
               undefined8 *param_14)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  uint local_5c;
  long *local_58;
  int local_4c;
  long local_48;
  int *local_40;
  long local_38;
  
  local_58 = (long *)0x0;
  local_38 = 0;
  if (param_14 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)obj_nexttraverseoutlet(param_14,(long *)&local_58,&local_38,&local_5c);
    stack_conn(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
               param_10,param_11,param_12,param_13,puVar4);
    local_4c = canvas_getindex(param_9,param_10);
    iVar2 = canvas_getindex(param_9,param_12);
    local_40 = param_11;
    iVar3 = canvas_getindex(param_9,(long)local_58);
    local_48 = param_10;
    obj_disconnect(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_12,param_13,local_58,local_5c);
    uVar6 = (ulong)local_5c;
    uVar5 = canvas_undo_set_disconnect(param_9,iVar2,param_13,iVar3,local_5c);
    canvas_undo_add(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,2,"disconnect",uVar5,uVar6,puVar4);
    piVar1 = local_40;
    obj_connect(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_48
                ,*local_40,local_58,local_5c);
    uVar6 = (ulong)local_5c;
    uVar5 = canvas_undo_set_connect(param_9,local_4c,*piVar1,iVar3,local_5c);
    canvas_undo_add(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,1,"connect",uVar5,uVar6,puVar4);
    *piVar1 = *piVar1 + 1;
  }
  return;
}


