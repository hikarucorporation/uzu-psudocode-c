// Function : garray_list
// Namespace: 
// Entry    : 004fb2c0
// Prototype: undefined garray_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 004fb2c0 - 004fb425


void garray_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined8 param_11,int *param_12,char *param_13,
                undefined8 param_14)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long extraout_RAX;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  char *pcVar12;
  uint uVar13;
  ulong uVar14;
  bool bVar15;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float fVar16;
  int iVar17;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 auStack_248 [128];
  undefined1 uVar18;
  int in_stack_ffffffffffffffb8;
  int local_44;
  long local_40;
  char local_38 [8];
  
  puVar4 = (uint *)garray_getarray(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,param_10,param_11,param_12,param_13,param_14);
  template_findbyname(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,
                      param_6,param_7,param_8,*(long *)(puVar4 + 4));
  puVar5 = gensym("y");
  puVar8 = auStack_248 + 0x80;
  pcVar12 = local_38;
  uVar6 = template_find_field(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,
                              param_4,param_5,param_6,param_7,param_8,extraout_RAX,(long)puVar5,
                              &local_44,auStack_248 + 0x80,pcVar12,param_14);
  if (((int)uVar6 == 0) || (in_stack_ffffffffffffffb8 != 0)) {
    pd_error(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
             param_6,param_7,param_8,0,"%s: needs floating-point \'y\' field",
             **(undefined8 **)(param_9 + 0x28),puVar8,pcVar12,param_14);
    return;
  }
  if ((int)param_11 < 2) {
    return;
  }
  uVar3 = puVar4[1];
  fVar16 = (float)atom_getfloat(param_12);
  uVar2 = (uint)fVar16;
  uVar13 = (int)param_11 - 1;
  piVar10 = param_12 + 4;
  if ((int)uVar2 < 0) {
    bVar15 = SCARRY4(uVar13,uVar2);
    uVar13 = uVar13 + uVar2;
    if (uVar13 == 0 || bVar15 != (int)uVar13 < 0) {
      return;
    }
    piVar10 = piVar10 + (long)(int)uVar2 * -4;
    uVar2 = 0;
    uVar7 = *puVar4;
    uVar9 = (ulong)uVar7;
    if ((int)uVar13 <= (int)uVar7) goto LAB_004fb395;
  }
  else {
    uVar7 = *puVar4;
    uVar9 = (ulong)uVar7;
    if ((int)(uVar2 + uVar13) <= (int)uVar7) goto LAB_004fb395;
  }
  uVar13 = uVar7 - uVar2;
  uVar9 = (ulong)uVar13;
  if (uVar13 == 0 || (int)uVar7 < (int)uVar2) {
    return;
  }
LAB_004fb395:
  lVar11 = (ulong)uVar2 * (long)(int)uVar3 + (long)local_44 * 4;
  uVar14 = 0;
  local_40 = param_9;
  do {
    iVar17 = atom_getfloat(piVar10);
    lVar1 = local_40;
    uVar18 = (undefined1)in_stack_ffffffffffffffb8;
    *(int *)(*(long *)(puVar4 + 2) + lVar11) = iVar17;
    uVar14 = uVar14 + 1;
    lVar11 = lVar11 + (int)uVar3;
    piVar10 = piVar10 + 4;
  } while (uVar14 < uVar13);
  uVar3 = glist_isvisible(*(long *)(local_40 + 0x18));
  if (uVar3 == 0) {
    if ((*(byte *)(lVar1 + 0x30) & 8) != 0) {
      pdgui_vmess(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,0x653aa2,"s",**(undefined8 **)(lVar1 + 0x28),uVar9,pcVar12
                  ,param_14,uVar18);
    }
  }
  else {
    sys_queuegui(lVar1,*(long *)(lVar1 + 0x18),0x4fa9e0);
  }
  return;
}


