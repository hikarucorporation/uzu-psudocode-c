// Function : file_glob_symbol
// Namespace: 
// Entry    : 0057b850
// Prototype: undefined file_glob_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057b850 - 0057bc21


void file_glob_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                     char *param_13,undefined8 param_14)

{
  char cVar1;
  long *plVar2;
  char *__s;
  bool bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  size_t sVar7;
  undefined7 extraout_var;
  ulong uVar8;
  undefined8 *puVar9;
  glob_t *__pglob;
  _func_4975 *p_Var10;
  bool bVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  uint uVar12;
  undefined1 local_d08 [48];
  _func_4976 *local_cd8;
  stat local_c98;
  undefined4 local_c08;
  char local_818 [1008];
  char local_428 [1016];
  
  do_expandpath((char *)*param_10,(char *)&local_c08,1000);
  sVar7 = strlen((char *)&local_c08);
  cVar1 = *(char *)((long)&local_c08 + (sVar7 - 1));
  bVar4 = true;
  if (((short)local_c08 == 0x2e) || (local_c08._2_1_ == '\0' && (short)local_c08 == 0x2f2e)) {
    uVar12 = 0;
    goto LAB_0057b9a0;
  }
  sVar7 = strlen((char *)&local_c08);
  uVar12 = 1;
  if (1 < sVar7) {
    iVar5 = strcmp((char *)((long)local_c98.__unused + sVar7 + 0x16),"/.");
    if (iVar5 == 0) {
      bVar4 = true;
      uVar12 = 0;
      goto LAB_0057b9a0;
    }
    uVar12 = 1;
    if (2 < sVar7) {
      iVar5 = strcmp((char *)((long)local_c98.__unused + sVar7 + 0x15),"/./");
      uVar12 = 0;
      if (iVar5 == 0) {
        bVar4 = true;
        goto LAB_0057b9a0;
      }
    }
  }
  uVar8 = (ulong)(local_c08 ^ 0x2e2e);
  if ((local_c08._2_1_ != '\0' || (short)(local_c08 ^ 0x2e2e) != 0) && (local_c08 != 0x2f2e2e)) {
    if ((char)uVar12 == '\0') {
      uVar12 = strcmp((char *)((long)local_c98.__unused + sVar7 + 0x15),"/..");
      uVar8 = (ulong)uVar12;
      if (uVar12 == 0) goto LAB_0057b98a;
    }
    bVar4 = str_endswith((char *)&local_c08,"/../");
    uVar8 = CONCAT71(extraout_var,bVar4);
    if ((int)uVar8 == 0) {
      bVar4 = false;
      uVar12 = 0;
      goto LAB_0057b9a0;
    }
  }
LAB_0057b98a:
  uVar12 = (uint)CONCAT71((int7)(uVar8 >> 8),1);
  bVar4 = false;
LAB_0057b9a0:
  __pglob = (glob_t *)(local_d08 + 0x28);
  iVar5 = glob((char *)&local_c08,0,(__errfunc *)0x0,__pglob);
  if (iVar5 == 0) {
    if ((_func_4975 *)local_d08._40_8_ != (_func_4975 *)0x0) {
      p_Var10 = (_func_4975 *)0x0;
      do {
        __s = *(char **)(local_cd8 + (long)p_Var10 * 8);
        do_expandpath(__s,local_818,1000);
        iVar5 = stat(local_818,&local_c98);
        if (iVar5 == 0) {
LAB_0057baed:
          bVar11 = (local_c98.st_mode & 0xf000) == 0x4000;
LAB_0057bb05:
          bVar3 = bVar11;
          if (cVar1 != '/') goto LAB_0057bb13;
LAB_0057bb0a:
          bVar3 = true;
          if (bVar11) goto LAB_0057bb13;
        }
        else {
          do_expandpath(__s,local_428,1000);
          iVar5 = sys_open(CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01),param_2,param_3,param_4
                           ,param_5,param_6,param_7,param_8,local_428,0,0x1b6,__pglob,param_13,
                           param_14,uVar12);
          if (-1 < iVar5) {
            iVar6 = fstat(iVar5,&local_c98);
            sys_close(iVar5);
            bVar11 = false;
            if (iVar6 == 0) goto LAB_0057baed;
            goto LAB_0057bb05;
          }
          bVar11 = false;
          bVar3 = bVar11;
          if (cVar1 == '/') goto LAB_0057bb0a;
LAB_0057bb13:
          sVar7 = strlen(__s);
          iVar5 = (int)sVar7 + -1;
          if (__s[iVar5] == '/') {
            __s[iVar5] = '\0';
          }
          if (((bVar4) ||
              ((iVar5 = strcmp(__s,"."), iVar5 != 0 &&
               ((sVar7 = strlen(__s), sVar7 < 2 ||
                (iVar5 = strcmp(__s + (sVar7 - 2),"/."), iVar5 != 0)))))) &&
             (((char)uVar12 != '\0' ||
              ((iVar5 = strcmp(__s,".."), iVar5 != 0 &&
               ((sVar7 = strlen(__s), sVar7 < 3 ||
                (iVar5 = strcmp(__s + (sVar7 - 3),"/.."), iVar5 != 0)))))))) {
            local_d08._8_8_ = gensym(__s);
            local_d08._0_4_ = 2;
            local_d08._24_4_ = (BADTYPE)bVar3;
            local_d08._16_4_ = 1;
            plVar2 = *(long **)(param_9 + 0x58);
            puVar9 = gensym("list");
            __pglob = (glob_t *)local_d08;
            outlet_list(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,
                        param_5,param_6,param_7,param_8,plVar2,puVar9,2,__pglob,param_13,param_14);
          }
        }
        p_Var10 = p_Var10 + 1;
      } while (p_Var10 < (ulong)local_d08._40_8_);
    }
  }
  else {
    outlet_bang(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
                param_7,param_8,*(long **)(param_9 + 0x60));
  }
  globfree((glob_t *)(local_d08 + 0x28));
  return;
}


