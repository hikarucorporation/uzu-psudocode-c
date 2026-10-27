// Function : triggerize_defanout
// Namespace: 
// Entry    : 005158e0
// Prototype: undefined triggerize_defanout(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10, undefined8 * param_11, long param_12, long param_13, uint param_14)
// Body     : 005158e0 - 00515a11


void triggerize_defanout(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,int param_10,undefined8 *param_11,long param_12,long param_13,
                        uint param_14)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  uint local_4c;
  long *local_48;
  int local_40;
  int local_3c;
  long local_38;
  
  local_48 = (long *)0x0;
  local_38 = 0;
  local_4c = 0;
  local_3c = canvas_getindex(param_9,param_12);
  local_40 = canvas_getindex(param_9,param_13);
  if (param_11 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)obj_nexttraverseoutlet(param_11,(long *)&local_48,&local_38,&local_4c);
    uVar5 = (ulong)param_14;
    triggerize_defanout(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,param_10 + -1,puVar2,param_12,param_13,param_14);
    iVar1 = canvas_getindex(param_9,(long)local_48);
    obj_disconnect(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_12,param_14,local_48,local_4c);
    uVar4 = (ulong)local_4c;
    uVar3 = canvas_undo_set_disconnect(param_9,local_3c,param_14,iVar1,local_4c);
    canvas_undo_add(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,2,"disconnect",uVar3,uVar4,uVar5);
    obj_connect(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_13
                ,param_10,local_48,local_4c);
    uVar4 = (ulong)local_4c;
    uVar3 = canvas_undo_set_connect(param_9,local_40,param_10,iVar1,local_4c);
    canvas_undo_add(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                    param_9,1,"connect",uVar3,uVar4,uVar5);
  }
  return;
}


