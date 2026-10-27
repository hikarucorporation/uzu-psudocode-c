// Function : dereconnect
// Namespace: 
// Entry    : 00515a20
// Prototype: undefined dereconnect(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, long * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00515a20 - 00515be0


void dereconnect(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,long *param_11,undefined8 param_12,undefined8 param_13,
                undefined8 param_14)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  long *plVar9;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  uint local_84;
  long *local_80;
  long *local_78;
  int local_6c;
  int local_68;
  int local_64;
  long local_60;
  long *local_58;
  long *local_50;
  long *local_48;
  long local_40 [2];
  
  local_58 = param_10;
  local_48 = param_11;
  local_68 = canvas_getindex(param_9,(long)param_11);
  plVar9 = *(long **)(param_9 + 0x30);
  if (plVar9 != (long *)0x0) {
    local_60 = param_9;
    do {
      plVar4 = pd_checkobject(plVar9);
      local_50 = plVar9;
      local_64 = canvas_getindex(local_60,(long)plVar9);
      local_78 = plVar4;
      if ((plVar4 != (long *)0x0) && (local_6c = obj_noutlets((long)plVar4), 0 < local_6c)) {
        iVar8 = 0;
        do {
          local_40[1] = 0;
          puVar5 = (undefined8 *)obj_starttraverseoutlet((long)local_78,local_40 + 1,iVar8);
          if (puVar5 != (undefined8 *)0x0) {
            do {
              local_80 = (long *)0x0;
              local_40[0] = 0;
              puVar5 = (undefined8 *)
                       obj_nexttraverseoutlet(puVar5,(long *)&local_80,local_40,&local_84);
              lVar2 = local_60;
              if (local_80 == local_58) {
                iVar3 = canvas_getindex(local_60,(long)local_58);
                plVar9 = local_78;
                obj_disconnect(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,(long)local_78,iVar8,local_80,local_84);
                iVar1 = local_64;
                uVar7 = (ulong)local_84;
                uVar6 = canvas_undo_set_disconnect(lVar2,local_64,iVar8,iVar3,local_84);
                canvas_undo_add(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,lVar2,2,"disconnect",uVar6,uVar7,param_14);
                obj_connect(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,param_7,
                            param_8,(long)plVar9,iVar8,local_48,local_84);
                uVar7 = (ulong)local_84;
                uVar6 = canvas_undo_set_connect(lVar2,iVar1,iVar8,local_68,local_84);
                canvas_undo_add(extraout_XMM0_Qa_02,param_2,param_3,param_4,param_5,param_6,param_7,
                                param_8,lVar2,1,"connect",uVar6,uVar7,param_14);
              }
            } while (puVar5 != (undefined8 *)0x0);
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 != local_6c);
      }
      plVar9 = (long *)local_50[1];
    } while (plVar9 != (long *)0x0);
  }
  return;
}


