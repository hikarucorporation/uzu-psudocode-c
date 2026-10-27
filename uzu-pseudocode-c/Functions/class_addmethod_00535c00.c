// Function : class_addmethod
// Namespace: 
// Entry    : 00535c00
// Prototype: undefined class_addmethod(undefined4 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9, long param_10, int * param_11, int param_12, char * param_13, undefined8 param_14, int param_15)
// Body     : 00535c00 - 0053620a


void class_addmethod(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long *param_9,long param_10,int *param_11,int param_12,char *param_13,
                    undefined8 param_14,int param_15)

{
  undefined *puVar1;
  size_t sVar2;
  char in_AL;
  int iVar3;
  long *plVar4;
  int *piVar5;
  char *pcVar6;
  char *__dest;
  ulong uVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  char cVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  bool bVar16;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 uVar17;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined8 uVar18;
  undefined4 extraout_XMM0_Db_01;
  undefined4 uVar19;
  undefined4 extraout_XMM0_Db_02;
  undefined1 in_stack_fffffffffffffec8;
  char local_12e [6];
  undefined8 local_128;
  int *local_120;
  undefined1 *local_118;
  uint local_10c;
  size_t local_108;
  long *local_100;
  int *local_f8;
  long local_f0;
  undefined1 local_e8 [32];
  char *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 local_48;
  
  if (in_AL != '\0') {
    local_b8 = param_1;
    local_a8 = param_2;
    local_98 = param_3;
    local_88 = param_4;
    local_78 = param_5;
    local_68 = param_6;
    local_58 = param_7;
    local_48 = param_8;
  }
  if (param_9 == (long *)0x0) {
    return;
  }
  local_118 = local_e8;
  local_120 = &param_15;
  local_128 = 0x3000000020;
  local_c8 = param_13;
  local_c0 = param_14;
  plVar4 = (long *)__tls_get_addr();
  lVar13 = *plVar4;
  uVar17 = extraout_XMM0_Da;
  uVar19 = extraout_XMM0_Db;
  uVar7 = local_128;
  piVar5 = local_120;
  if ((int *)(lVar13 + 0xf0) == param_11) {
    if ((int)param_9[0x12] != 0) {
      post(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
           param_7,param_8,"warning: signal method overrides class_mainsignalin");
      plVar4 = (long *)__tls_get_addr();
      lVar13 = *plVar4;
      uVar17 = extraout_XMM0_Da_00;
      uVar19 = extraout_XMM0_Db_00;
    }
    *(undefined4 *)(param_9 + 0x12) = 0xffffffff;
    uVar7 = local_128;
    piVar5 = local_120;
  }
  piVar9 = (int *)(lVar13 + 0xa8);
  local_120 = piVar5;
  if (piVar9 == param_11) {
    if (param_12 == 0) {
      param_9[7] = param_10;
      return;
    }
LAB_00535e47:
    local_128 = uVar7;
    if ((undefined8 *)*param_9 == (undefined8 *)0x0) {
      pcVar12 = "<anon>";
    }
    else {
      pcVar12 = *(char **)*param_9;
    }
    if (param_11 == (int *)0x0) {
      pcVar15 = "<nomethod>";
    }
    else {
      pcVar15 = *(char **)param_11;
    }
    bug(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
        "class_addmethod: %s_%s: bad argument types\n",pcVar12,pcVar15,piVar9,param_13,param_14,
        in_stack_fffffffffffffec8);
    return;
  }
  uVar18 = CONCAT44(uVar19,uVar17);
  piVar9 = (int *)(lVar13 + 0x78);
  local_128._0_4_ = (int)uVar7;
  iVar3 = (int)local_128;
  local_128._4_4_ = (undefined4)(uVar7 >> 0x20);
  local_128 = uVar7;
  if (piVar9 == param_11) {
    if (param_12 == 1) {
      if ((uVar7 & 0xffffffff) < 0x29) {
        piVar9 = (int *)(ulong)((int)local_128 + 8U);
        local_128 = CONCAT44(local_128._4_4_,(int)local_128 + 8U);
        iVar3 = *(int *)(local_118 + (uVar7 & 0xffffffff));
      }
      else {
        piVar9 = piVar5 + 2;
        iVar3 = *piVar5;
        piVar5 = piVar9;
      }
      uVar7 = local_128;
      local_120 = piVar5;
      if (iVar3 == 0) {
        param_9[9] = param_10;
        return;
      }
    }
    goto LAB_00535e47;
  }
  piVar9 = (int *)(lVar13 + 0x90);
  if (piVar9 == param_11) {
    if (param_12 == 2) {
      if ((uVar7 & 0xffffffff) < 0x29) {
        piVar9 = (int *)(ulong)((int)local_128 + 8U);
        local_128 = CONCAT44(local_128._4_4_,(int)local_128 + 8U);
        piVar5 = (int *)(local_118 + (uVar7 & 0xffffffff));
      }
      else {
        piVar9 = piVar5 + 2;
        local_120 = piVar9;
      }
      uVar7 = local_128;
      if (*piVar5 == 0) {
        param_9[10] = param_10;
        return;
      }
    }
    goto LAB_00535e47;
  }
  piVar9 = (int *)(lVar13 + 0xc0);
  if (piVar9 == param_11) {
    if (param_12 == 10) {
      param_9[0xb] = param_10;
      return;
    }
    goto LAB_00535e47;
  }
  if ((int *)(lVar13 + 0xd8) == param_11) {
    if (param_12 == 10) {
      param_9[0xc] = param_10;
      return;
    }
    goto LAB_00535e47;
  }
  if (param_12 == 0) {
    lVar13 = 0;
    goto LAB_00536027;
  }
  local_12e[0] = (char)param_12;
  if ((uVar7 & 0xffffffff) < 0x29) {
    uVar8 = (int)local_128 + 8;
    local_128 = CONCAT44(local_128._4_4_,uVar8);
    if (*(int *)(local_118 + (uVar7 & 0xffffffff)) == 0) {
LAB_00535f24:
      bVar16 = false;
      lVar13 = 1;
    }
    else {
      local_12e[1] = (char)*(int *)(local_118 + (uVar7 & 0xffffffff));
      if (uVar8 < 0x29) {
        uVar7 = (ulong)uVar8;
        uVar8 = iVar3 + 0x10;
        local_128 = CONCAT44(local_128._4_4_,uVar8);
        piVar5 = (int *)(local_118 + uVar7);
      }
      else {
        local_120 = piVar5 + 2;
      }
      if (*piVar5 == 0) {
LAB_00535f5d:
        bVar16 = false;
        lVar13 = 2;
      }
      else {
        local_12e[2] = (char)*piVar5;
        if (uVar8 < 0x29) {
          uVar7 = (ulong)uVar8;
          uVar8 = uVar8 + 8;
          local_128 = CONCAT44(local_128._4_4_,uVar8);
          piVar5 = (int *)(local_118 + uVar7);
        }
        else {
          piVar5 = local_120;
          local_120 = local_120 + 2;
        }
        if (*piVar5 == 0) {
LAB_00535f96:
          bVar16 = false;
          lVar13 = 3;
        }
        else {
          local_12e[3] = (char)*piVar5;
          if (uVar8 < 0x29) {
            uVar7 = (ulong)uVar8;
            uVar8 = uVar8 + 8;
            local_128 = CONCAT44(local_128._4_4_,uVar8);
            piVar5 = (int *)(local_118 + uVar7);
          }
          else {
            piVar5 = local_120;
            local_120 = local_120 + 2;
          }
          if (*piVar5 != 0) {
            local_12e[4] = (char)*piVar5;
            if (uVar8 < 0x29) {
              local_128 = CONCAT44(local_128._4_4_,uVar8 + 8);
              piVar5 = (int *)(local_118 + uVar8);
            }
            else {
              piVar5 = local_120;
              local_120 = local_120 + 2;
            }
            iVar3 = *piVar5;
            goto LAB_00535fe4;
          }
LAB_00535fcc:
          bVar16 = false;
          lVar13 = 4;
        }
      }
    }
  }
  else {
    local_120 = piVar5 + 2;
    if (*piVar5 == 0) goto LAB_00535f24;
    local_12e[1] = (char)*piVar5;
    local_120 = piVar5 + 4;
    if (piVar5[2] == 0) goto LAB_00535f5d;
    local_12e[2] = (char)piVar5[2];
    local_120 = piVar5 + 6;
    if (piVar5[4] == 0) goto LAB_00535f96;
    local_12e[3] = (char)piVar5[4];
    local_120 = piVar5 + 8;
    if (piVar5[6] == 0) goto LAB_00535fcc;
    local_12e[4] = (char)piVar5[6];
    local_120 = piVar5 + 10;
    iVar3 = piVar5[8];
LAB_00535fe4:
    bVar16 = iVar3 != 0;
    lVar13 = 5;
  }
  uVar18 = CONCAT44(uVar19,uVar17);
  if (bVar16) {
    if ((undefined8 *)*param_9 == (undefined8 *)0x0) {
      pcVar12 = "<anon>";
    }
    else {
      pcVar12 = *(char **)*param_9;
    }
    if (param_11 == (int *)0x0) {
      pcVar15 = "<nomethod>";
    }
    else {
      pcVar15 = *(char **)param_11;
    }
    uVar18 = pd_error(CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,
                      param_8,0,"%s_%s: only 5 arguments are typecheckable; use A_GIMME",pcVar12,
                      pcVar15,param_13,param_14);
  }
LAB_00536027:
  puVar1 = PTR_pd_instances_00715a80;
  local_12e[lVar13] = '\0';
  if (0 < *(int *)PTR_pd_ninstances_00715d50) {
    if (param_11 == (int *)0x0) {
      lVar10 = 0;
      lVar13 = 0;
      do {
        uVar18 = class_addmethodtolist
                           (uVar18,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                            (long *)(param_9[4] + lVar10),*(uint *)(param_9 + 5),param_10,
                            (char *)0x0,local_12e,*(long *)(*(long *)puVar1 + lVar10));
        lVar13 = lVar13 + 1;
        lVar10 = lVar10 + 8;
      } while (lVar13 < *(int *)PTR_pd_ninstances_00715d50);
    }
    else {
      lVar13 = 0;
      local_100 = param_9;
      local_f8 = param_11;
      local_f0 = param_10;
      do {
        pcVar12 = *(char **)local_f8;
        cVar11 = *pcVar12;
        if (cVar11 == '\0') {
          local_108 = 1;
          uVar7 = 0x1505;
        }
        else {
          uVar8 = 0x1505;
          lVar10 = 1;
          do {
            uVar8 = (int)cVar11 + uVar8 * 0x21;
            cVar11 = pcVar12[lVar10];
            lVar10 = lVar10 + 1;
          } while (cVar11 != '\0');
          uVar7 = (ulong)(uVar8 & 0x3fff);
          local_108 = (size_t)(int)lVar10;
        }
        lVar10 = param_9[4];
        local_10c = *(uint *)(param_9 + 5);
        lVar14 = *(long *)(*(long *)PTR_pd_instances_00715a80 + lVar13 * 8);
        pcVar15 = *(char **)(*(long *)(lVar14 + 0x28) + uVar7 * 8);
        if (pcVar15 == (char *)0x0) {
          pcVar15 = (char *)(*(long *)(lVar14 + 0x28) + uVar7 * 8);
        }
        else {
          do {
            pcVar6 = pcVar15;
            iVar3 = strcmp(*(char **)pcVar6,pcVar12);
            uVar17 = extraout_XMM0_Da_02;
            uVar19 = extraout_XMM0_Db_02;
            if (iVar3 == 0) goto LAB_005360ae;
            pcVar15 = *(char **)(pcVar6 + 0x10);
          } while (*(char **)(pcVar6 + 0x10) != (char *)0x0);
          pcVar15 = pcVar6 + 0x10;
        }
        sVar2 = local_108;
        pcVar6 = getbytes(0x18);
        __dest = getbytes(sVar2);
        pcVar6[8] = '\0';
        pcVar6[9] = '\0';
        pcVar6[10] = '\0';
        pcVar6[0xb] = '\0';
        pcVar6[0xc] = '\0';
        pcVar6[0xd] = '\0';
        pcVar6[0xe] = '\0';
        pcVar6[0xf] = '\0';
        pcVar6[0x10] = '\0';
        pcVar6[0x11] = '\0';
        pcVar6[0x12] = '\0';
        pcVar6[0x13] = '\0';
        pcVar6[0x14] = '\0';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
        strcpy(__dest,pcVar12);
        *(char **)pcVar6 = __dest;
        *(char **)pcVar15 = pcVar6;
        lVar14 = *(long *)(*(long *)PTR_pd_instances_00715a80 + lVar13 * 8);
        param_9 = local_100;
        uVar17 = extraout_XMM0_Da_01;
        uVar19 = extraout_XMM0_Db_01;
LAB_005360ae:
        class_addmethodtolist
                  (CONCAT44(uVar19,uVar17),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9,(long *)(lVar13 * 8 + lVar10),local_10c,local_f0,pcVar6,local_12e,lVar14)
        ;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)PTR_pd_ninstances_00715d50);
    }
  }
  *(int *)(param_9 + 5) = (int)param_9[5] + 1;
  return;
}


