// Function : file_patchpath_list
// Namespace: 
// Entry    : 0057b620
// Prototype: undefined file_patchpath_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, int param_11, int * param_12, char * param_13, undefined8 param_14)
// Body     : 0057b620 - 0057b823


void file_patchpath_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,long param_9,undefined8 *param_10,int param_11,int *param_12,char *param_13
                        ,undefined8 param_14)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  uint uVar4;
  undefined *puVar5;
  int *piVar6;
  uint uVar7;
  char *extraout_RDX;
  char *pcVar8;
  char *extraout_RDX_00;
  undefined8 extraout_RDX_01;
  char *pcVar9;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined1 in_stack_fffffffffffff7f8;
  float local_7fc;
  char local_7f8 [998];
  undefined1 local_412;
  char local_408 [999];
  undefined1 local_21;
  
  if (param_10 == (undefined8 *)0x0) {
    pcVar8 = "";
    if (param_11 == 0) goto LAB_0057b671;
LAB_0057b63f:
    if (param_11 == 2) {
      if ((*param_12 != 2) || (param_12[4] != 1)) goto LAB_0057b6ae;
      piVar6 = param_12 + 4;
      puVar3 = (undefined8 *)atom_getsymbol(param_12);
      pcVar9 = (char *)*puVar3;
    }
    else {
      if (param_11 != 1) {
LAB_0057b6ae:
        puVar5 = &DAT_005e3c3c;
        if (*pcVar8 == '\0') {
          puVar5 = &DAT_005e2ee7;
        }
        pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                 "bad arguments for %s%smessage to object \'file patchpath\'",pcVar8,puVar5,param_13
                 ,param_14);
        return;
      }
      if (*param_12 != 1) {
        if (*param_12 != 2) goto LAB_0057b6ae;
        puVar3 = (undefined8 *)atom_getsymbol(param_12);
        pcVar9 = (char *)*puVar3;
        pcVar8 = extraout_RDX;
        goto LAB_0057b674;
      }
      pcVar9 = (char *)0x0;
      piVar6 = param_12;
    }
    fVar10 = (float)atom_getfloat(piVar6);
    puVar3 = *(undefined8 **)(param_9 + 0x50);
    if ((int)fVar10 < 1) {
      local_7fc = 0.0;
      pcVar8 = extraout_RDX_00;
    }
    else {
      piVar6 = (int *)0x0;
      pcVar8 = (char *)0x0;
      do {
        while (param_10 = puVar3, param_10[0x1c] == 0) {
          puVar3 = (undefined8 *)param_10[9];
        }
        puVar1 = (undefined8 *)param_10[9];
        puVar3 = puVar1;
        if (puVar1 == (undefined8 *)0x0) {
          puVar3 = param_10;
        }
        uVar4 = (int)piVar6 + (uint)(puVar1 != (undefined8 *)0x0);
        piVar6 = (int *)(ulong)uVar4;
        uVar7 = (int)pcVar8 + 1;
        pcVar8 = (char *)(ulong)uVar7;
      } while (uVar7 != (int)fVar10);
      local_7fc = (float)(int)uVar4;
    }
  }
  else {
    pcVar8 = (char *)*param_10;
    if (param_11 != 0) goto LAB_0057b63f;
LAB_0057b671:
    pcVar9 = (char *)0x0;
LAB_0057b674:
    puVar3 = *(undefined8 **)(param_9 + 0x50);
    local_7fc = 0.0;
    piVar6 = param_12;
  }
  if (pcVar9 == (char *)0x0) {
    canvas_getdir((ulong)(uint)local_7fc,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)puVar3,param_10,pcVar8,piVar6,param_13,param_14);
  }
  else {
    do_expandpath(pcVar9,local_7f8,999);
    local_412 = 0;
    pcVar8 = local_7f8;
    sys_unbashfilename(local_7f8,local_7f8);
    local_412 = 0;
    bVar2 = sys_isabsolutepath(local_7f8);
    if ((int)CONCAT71(extraout_var,bVar2) == 0) {
      puVar3 = (undefined8 *)
               canvas_getdir(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,
                             param_5,param_6,param_7,param_8,(long)puVar3,pcVar8,extraout_RDX_01,
                             piVar6,param_13,param_14);
      pcVar8 = local_408;
      pd_snprintf(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                  param_6,param_7,param_8,pcVar8,1000,"%s/%s",*puVar3,local_7f8,param_14,
                  in_stack_fffffffffffff7f8);
      local_21 = 0;
    }
    else {
      pcVar8 = local_7f8;
    }
    gensym(pcVar8);
  }
  outlet_float((ulong)(uint)local_7fc,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
               *(long **)(param_9 + 0x60));
  outlet_symbol(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,*(long **)(param_9 + 0x58));
  return;
}


