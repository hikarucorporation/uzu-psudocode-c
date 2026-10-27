// Function : garray_const
// Namespace: 
// Entry    : 004fb170
// Prototype: undefined garray_const(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, ulong param_14)
// Body     : 004fb170 - 004fb2bb


void garray_const(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                 ulong param_14)

{
  uint uVar1;
  uint *puVar2;
  long extraout_RAX;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  char *pcVar10;
  int iVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined1 in_stack_ffffffffffffffc8;
  int local_28;
  int local_24;
  char local_20 [8];
  
  iVar11 = (int)param_1;
  puVar2 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,*(long *)(puVar2 + 4));
  puVar3 = gensym("y");
  piVar6 = &local_28;
  pcVar10 = local_20;
  uVar4 = template_find_field(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,extraout_RAX,(long)puVar3,
                              &local_24,piVar6,pcVar10,param_14);
  if (((int)uVar4 == 0) || (local_28 != 0)) {
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,0,"%s: needs floating-point \'y\' field",
             **(undefined8 **)(param_9 + 0x28),piVar6,pcVar10,param_14);
  }
  else {
    uVar1 = *puVar2;
    param_14 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      pcVar10 = (char *)(long)local_24;
      lVar5 = (long)(int)puVar2[1];
      piVar6 = *(int **)(puVar2 + 2);
      uVar7 = (ulong)(uVar1 & 3);
      if (param_14 - 1 < 3) {
        uVar8 = 0;
      }
      else {
        param_14 = (ulong)(uVar1 & 0xfffffffc);
        piVar9 = piVar6 + (long)pcVar10;
        uVar8 = 0;
        do {
          *piVar9 = iVar11;
          *(int *)((long)piVar9 + lVar5) = iVar11;
          *(int *)((long)piVar9 + lVar5 * 2) = iVar11;
          *(int *)((long)piVar9 + lVar5 * 3) = iVar11;
          uVar8 = uVar8 + 4;
          piVar9 = piVar9 + lVar5;
        } while (param_14 != uVar8);
      }
      if (uVar7 != 0) {
        piVar6 = (int *)((long)piVar6 + uVar8 * lVar5 + (long)pcVar10 * 4);
        do {
          *piVar6 = iVar11;
          piVar6 = (int *)((long)piVar6 + lVar5);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
    }
  }
  uVar1 = glist_isvisible(*(long *)(param_9 + 0x18));
  if (uVar1 == 0) {
    if ((*(byte *)(param_9 + 0x30) & 8) != 0) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x653aa2,"s",**(undefined8 **)(param_9 + 0x28),piVar6,
                  pcVar10,param_14,in_stack_ffffffffffffffc8);
    }
  }
  else {
    sys_queuegui(param_9,*(long *)(param_9 + 0x18),0x4fa9e0);
  }
  return;
}


