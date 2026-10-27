// Function : get_pointer
// Namespace: 
// Entry    : 005aeb50
// Prototype: undefined get_pointer(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, long * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005aeb50 - 005aed2a


void get_pointer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,long *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
                undefined8 param_14)

{
  char cVar1;
  long lVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long extraout_RAX;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  long *plVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar12;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  int local_4c;
  long local_48;
  int local_3c;
  char local_38 [8];
  
  iVar10 = *(int *)(param_9 + 0x38);
  lVar2 = param_10[2];
  bVar3 = gpointer_check(param_10,0);
  if ((int)CONCAT71(extraout_var,bVar3) == 0) {
    pd_error(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
             param_7,param_8,param_9,"get: stale or empty pointer",extraout_RDX,param_12,param_13,
             param_14);
    return;
  }
  puVar5 = *(undefined8 **)(param_9 + 0x30);
  cVar1 = *(char *)*puVar5;
  puVar4 = (undefined8 *)gpointer_gettemplatesym(param_10);
  if ((cVar1 != '\0') && (bVar3 = puVar5 != puVar4, puVar4 = puVar5, bVar3)) {
    uVar12 = *puVar5;
    puVar5 = (undefined8 *)gpointer_gettemplatesym(param_10);
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,param_9,"get %s: got wrong template (%s)",uVar12,*puVar5,
             param_13,param_14);
    return;
  }
  uVar12 = template_findbyname(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                               param_4,param_5,param_6,param_7,param_8,(long)puVar4);
  if (extraout_RAX == 0) {
    pd_error(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
             "get: couldn\'t find template %s",*puVar4,param_12,param_13,param_14);
    return;
  }
  if (*(int *)(lVar2 + 8) == 2) {
    local_48 = *param_10;
  }
  else {
    local_48 = *param_10 + 0x18;
  }
  if (0 < iVar10) {
    plVar11 = (long *)((ulong)(iVar10 - 1) * 0x10 + *(long *)(param_9 + 0x40));
    do {
      pcVar8 = local_38;
      uVar12 = template_find_field(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   extraout_RAX,*plVar11,&local_4c,&local_3c,local_38,param_14);
      if ((int)uVar12 == 0) {
        uVar12 = **(undefined8 **)(extraout_RAX + 0x10);
        uVar6 = *(undefined8 *)*plVar11;
        pcVar7 = "get: %s.%s: no such field";
LAB_005aec87:
        uVar12 = pd_error(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,param_9,pcVar7,uVar12,uVar6,pcVar8,
                          param_14);
      }
      else if (local_3c == 1) {
        outlet_symbol(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,
                      param_5,param_6,param_7,param_8,(long *)plVar11[1]);
        uVar12 = CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04);
      }
      else {
        if (local_3c != 0) {
          uVar12 = **(undefined8 **)(extraout_RAX + 0x10);
          uVar6 = *(undefined8 *)*plVar11;
          pcVar7 = "get: %s.%s is not a number or symbol";
          goto LAB_005aec87;
        }
        outlet_float((ulong)*(uint *)(local_48 + local_4c),param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8,(long *)plVar11[1]);
        uVar12 = CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03);
      }
      plVar11 = plVar11 + -2;
      iVar9 = iVar10 + -1;
      bVar3 = 0 < iVar10;
      iVar10 = iVar9;
    } while (iVar9 != 0 && bVar3);
  }
  return;
}


