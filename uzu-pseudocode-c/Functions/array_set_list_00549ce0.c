// Function : array_set_list
// Namespace: 
// Entry    : 00549ce0
// Prototype: undefined array_set_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, int param_11, long param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00549ce0 - 00549d95


void array_set_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,int param_11,long param_12,undefined8 param_13,
                   undefined8 param_14)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar9;
  int local_58;
  int local_54;
  long local_50;
  long local_48;
  undefined4 *local_40;
  int local_34;
  
  piVar3 = &local_54;
  piVar6 = &local_34;
  uVar1 = array_rangeop_getrange
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     (long *)&local_40,&local_58,piVar3,piVar6,param_14);
  if ((int)uVar1 != 0) {
    iVar7 = local_58;
    if (param_11 < local_58) {
      iVar7 = param_11;
    }
    uVar1 = extraout_RDX;
    uVar8 = extraout_XMM0_Da;
    uVar9 = extraout_XMM0_Db;
    local_48 = param_9;
    if (0 < iVar7) {
      iVar4 = 0;
      puVar5 = local_40;
      do {
        uVar8 = atom_getfloatarg(iVar4,param_11,param_12);
        *puVar5 = uVar8;
        iVar4 = iVar4 + 1;
        puVar5 = (undefined4 *)((long)puVar5 + (long)local_54);
        uVar1 = extraout_RDX_00;
        uVar9 = extraout_XMM0_Db_00;
      } while (iVar7 != iVar4);
    }
    local_50 = 0;
    lVar2 = array_client_getbuf(CONCAT44(uVar9,uVar8),param_2,param_3,param_4,param_5,param_6,
                                param_7,param_8,local_48,&local_50,uVar1,piVar3,(char *)piVar6,
                                param_14);
    if (local_50 != 0) {
      array_redraw(lVar2,local_50);
    }
  }
  return;
}


