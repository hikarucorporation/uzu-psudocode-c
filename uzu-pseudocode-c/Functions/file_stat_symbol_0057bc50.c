// Function : file_stat_symbol
// Namespace: 
// Entry    : 0057bc50
// Prototype: undefined file_stat_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, uint * param_13, uint * param_14)
// Body     : 0057bc50 - 0057c0a8


void file_stat_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     double param_5,double param_6,double param_7,undefined8 param_8,long param_9,
                     undefined8 *param_10,undefined8 param_11,undefined8 param_12,uint *param_13,
                     uint *param_14)

{
  __uid_t _Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int *piVar6;
  long *plVar7;
  uint uVar8;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined4 extraout_XMM0_Da_08;
  undefined4 extraout_XMM0_Da_09;
  undefined4 extraout_XMM0_Da_10;
  undefined4 extraout_XMM0_Da_11;
  undefined4 extraout_XMM0_Da_12;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Db_07;
  undefined4 extraout_XMM0_Db_08;
  undefined4 extraout_XMM0_Db_09;
  undefined4 extraout_XMM0_Db_10;
  undefined4 extraout_XMM0_Db_11;
  undefined4 extraout_XMM0_Db_12;
  undefined8 uVar9;
  int local_4d8 [2];
  undefined8 *local_4d0;
  uint local_4c8;
  int local_4c4;
  __uid_t local_4c0;
  __uid_t local_4bc;
  stat local_4b8;
  char local_428 [1016];
  
  local_4c8 = 0;
  iVar2 = do_file_stat(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       (char *)*param_10,&local_4b8,&local_4c8,(char *)param_13,param_14);
  if (iVar2 < 0) {
    outlet_bang(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,*(long **)(param_9 + 0x60));
    return;
  }
  do_expandpath((char *)*param_10,local_428,1000);
  iVar2 = access(local_428,4);
  iVar3 = access(local_428,2);
  iVar4 = access(local_428,1);
  local_4c0 = geteuid();
  local_4bc = local_4b8.st_uid;
  uVar8 = local_4b8.st_mode & 0xf000;
  if (uVar8 != 0x8000) {
    if (uVar8 == 0x4000) {
      plVar7 = *(long **)(param_9 + 0x58);
      local_4d0._0_4_ = 0.0;
      goto LAB_0057bd61;
    }
    if (uVar8 != 0xa000) {
      plVar7 = *(long **)(param_9 + 0x58);
      local_4d0._0_4_ = -1.0;
      goto LAB_0057bd61;
    }
  }
  local_4d0._0_4_ = (float)(int)local_4b8.st_size;
  plVar7 = *(long **)(param_9 + 0x58);
LAB_0057bd61:
  local_4d8[0] = 1;
  local_4c4 = iVar4;
  puVar5 = gensym("size");
  outlet_anything(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)DAT_005d9038;
  if (iVar2 != 0) {
    local_4d0._0_4_ = 0.0;
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("readable");
  outlet_anything(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)DAT_005d9038;
  if (iVar3 != 0) {
    local_4d0._0_4_ = 0.0;
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("writable");
  outlet_anything(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  _Var1 = local_4bc;
  local_4d0._0_4_ = (float)DAT_005d9038;
  if (local_4c4 != 0) {
    local_4d0._0_4_ = 0.0;
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("executable");
  outlet_anything(CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)DAT_005d9038;
  if (local_4c0 != _Var1) {
    local_4d0._0_4_ = 0.0;
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("owned");
  outlet_anything(CONCAT44(extraout_XMM0_Db_04,extraout_XMM0_Da_04),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)DAT_005d9038;
  if (uVar8 != 0x8000) {
    local_4d0._0_4_ = 0.0;
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("isfile");
  outlet_anything(CONCAT44(extraout_XMM0_Db_05,extraout_XMM0_Da_05),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)DAT_005d9038;
  if (uVar8 != 0x4000) {
    local_4d0._0_4_ = 0.0;
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("isdirectory");
  outlet_anything(CONCAT44(extraout_XMM0_Db_06,extraout_XMM0_Da_06),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)(int)local_4c8;
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("issymlink");
  outlet_anything(CONCAT44(extraout_XMM0_Db_07,extraout_XMM0_Da_07),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)(int)_Var1;
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("uid");
  outlet_anything(CONCAT44(extraout_XMM0_Db_08,extraout_XMM0_Da_08),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  local_4d0._0_4_ = (float)(int)local_4b8.st_gid;
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  puVar5 = gensym("gid");
  outlet_anything(CONCAT44(extraout_XMM0_Db_09,extraout_XMM0_Da_09),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 1;
  local_4d0 = (undefined8 *)CONCAT44(local_4d0._4_4_,(float)(local_4b8.st_mode & 0x1ff));
  puVar5 = gensym("permissions");
  outlet_anything(CONCAT44(extraout_XMM0_Db_10,extraout_XMM0_Da_10),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  if (((0xbfff < uVar8 - 0x1000) ||
      (uVar8 = uVar8 - 0x1000 >> 0xc, (0xaabU >> (uVar8 & 0x1f) & 1) == 0)) ||
     (puVar5 = gensym(&DAT_0065c1d0 + *(int *)(&DAT_0065c1d0 + (ulong)uVar8 * 4)),
     puVar5 == (undefined8 *)0x0)) {
    puVar5 = gensym("unknown");
  }
  plVar7 = *(long **)(param_9 + 0x58);
  local_4d8[0] = 2;
  local_4d0 = puVar5;
  puVar5 = gensym("type");
  piVar6 = local_4d8;
  outlet_anything(CONCAT44(extraout_XMM0_Db_11,extraout_XMM0_Da_11),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,plVar7,puVar5,1,local_4d8,param_13,param_14);
  uVar9 = do_dataout_time(CONCAT44(extraout_XMM0_Db_12,extraout_XMM0_Da_12),param_2,param_3,param_4,
                          param_5,param_6,param_7,param_8,param_9,"atime",local_4b8.st_atim.tv_sec,
                          piVar6,param_13,param_14);
  do_dataout_time(uVar9,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"mtime",
                  local_4b8.st_mtim.tv_sec,piVar6,param_13,param_14);
  return;
}


