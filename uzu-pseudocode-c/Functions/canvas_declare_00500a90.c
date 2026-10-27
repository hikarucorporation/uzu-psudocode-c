// Function : canvas_declare
// Namespace: 
// Entry    : 00500a90
// Prototype: undefined canvas_declare(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined8 param_11, char * param_12, char * param_13, undefined8 param_14)
// Body     : 00500a90 - 00501134


void canvas_declare(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9,undefined8 param_10,undefined8 param_11,char *param_12,
                   char *param_13,undefined8 param_14)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  size_t sVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  int iVar9;
  char *__s2;
  int iVar11;
  int iVar10;
  long lVar12;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 uVar13;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 uVar14;
  undefined8 extraout_XMM0_Qa_17;
  undefined1 in_stack_fffffffffffff7d8;
  char local_808 [991];
  undefined1 local_429;
  undefined1 local_421;
  char local_418 [991];
  undefined1 local_39;
  undefined1 local_31;
  
  pcVar8 = param_12;
  if (param_9 == 0) {
    param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"canvas_getenv",
                  param_10,param_11,param_12,param_13,param_14,in_stack_fffffffffffff7d8);
    uVar14 = extraout_RDX;
    lVar12 = lRam00000000000000e0;
  }
  else {
    lVar12 = *(long *)(param_9 + 0xe0);
    uVar14 = param_11;
  }
  if (lVar12 == 0) {
    lVar4 = param_9;
    do {
      lVar4 = *(long *)(lVar4 + 0x48);
      if (lVar4 == 0) {
        param_1 = bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                      "t_canvasenvironment",param_10,uVar14,pcVar8,param_13,param_14,
                      in_stack_fffffffffffff7d8);
        uVar14 = extraout_RDX_08;
      }
      lVar12 = *(long *)(lVar4 + 0xe0);
    } while (lVar12 == 0);
  }
  iVar9 = (int)param_11;
  if (iVar9 < 1) {
    return;
  }
  iVar10 = 0;
LAB_00500b24:
  puVar3 = (undefined8 *)atom_getsymbolarg(iVar10,iVar9,(long)param_12);
  pcVar7 = (char *)*puVar3;
  iVar11 = iVar10 + 1;
  uVar14 = extraout_XMM0_Qa;
  if (iVar11 < iVar9) {
    puVar3 = (undefined8 *)atom_getsymbolarg(iVar11,iVar9,(long)param_12);
    __s2 = (char *)*puVar3;
    uVar14 = extraout_XMM0_Qa_00;
    if (__s2 == (char *)0x0) goto LAB_00500b00;
    iVar2 = strcmp(pcVar7,"-path");
    if (iVar2 != 0) {
      iVar2 = strcmp(pcVar7,"-stdpath");
      if (iVar2 == 0) {
        bVar1 = sys_isabsolutepath(__s2);
        if ((int)CONCAT71(extraout_var_01,bVar1) == 0) {
          iVar10 = strncmp("extra/",__s2,6);
          pcVar7 = __s2 + 6;
          if (iVar10 != 0) {
            pcVar7 = __s2;
          }
          bVar1 = sys_isabsolutepath(pcVar7);
          if ((int)CONCAT71(extraout_var_03,bVar1) == 0) {
            strncpy(local_418,(char *)**(undefined8 **)PTR_sys_libdir_00715520,0x3de);
            local_39 = 0;
            sVar5 = strlen(local_418);
            pcVar8 = (char *)0x2f61727478652f;
            builtin_strncpy(local_418 + sVar5,"/extra/",8);
          }
          else {
            local_418[0] = '\0';
          }
          __s2 = local_418;
          sVar5 = strlen(__s2);
          strncat(__s2,pcVar7,1000 - sVar5);
          local_31 = 0;
          sys_bashfilename(__s2,local_808);
          iVar10 = access(local_808,0);
          if (iVar10 != 0) {
            plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
            uVar14 = extraout_XMM0_Qa_13;
            for (puVar3 = *(undefined8 **)(*(long *)(*plVar6 + 0x50) + 0x10);
                puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
              pcVar8 = (char *)puVar3[1];
              param_13 = pcVar7;
              pd_snprintf(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_418,
                          999,"%s/%s/",pcVar8,pcVar7,param_14,in_stack_fffffffffffff7d8);
              local_31 = 0;
              sys_bashfilename(local_418,local_808);
              iVar10 = access(local_808,0);
              if (iVar10 == 0) goto LAB_00500ff9;
              uVar14 = extraout_XMM0_Qa_14;
            }
            goto LAB_00500b14;
          }
        }
        goto LAB_00500d58;
      }
      iVar2 = strcmp(pcVar7,"-lib");
      if (iVar2 == 0) {
        bVar1 = sys_isabsolutepath(__s2);
        uVar14 = extraout_RDX_01;
        uVar13 = extraout_XMM0_Qa_08;
        if ((((int)CONCAT71(extraout_var_02,bVar1) == 0) &&
            (iVar10 = strncmp("./",__s2,2), uVar14 = extraout_RDX_02, uVar13 = extraout_XMM0_Qa_09,
            iVar10 != 0)) &&
           (iVar10 = strncmp("../",__s2,3), uVar14 = extraout_RDX_03, uVar13 = extraout_XMM0_Qa_10,
           iVar10 != 0)) {
          uVar14 = canvas_completepath(extraout_XMM0_Qa_10,param_2,param_3,param_4,param_5,param_6,
                                       param_7,param_8,__s2,local_808,param_9,pcVar8,param_13,
                                       param_14);
          iVar10 = sys_load_lib(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                param_9,__s2,extraout_RDX_04,pcVar8,param_13,param_14);
          if (iVar10 == 0) {
            plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
            uVar14 = extraout_XMM0_Qa_11;
            for (puVar3 = *(undefined8 **)(*(long *)(*plVar6 + 0x50) + 8);
                puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
              pcVar8 = (char *)puVar3[1];
              param_13 = __s2;
              uVar14 = pd_snprintf(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   local_808,999,"%s/%s",pcVar8,__s2,param_14,
                                   in_stack_fffffffffffff7d8);
              local_421 = 0;
              iVar10 = sys_load_lib(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                    param_9,local_808,extraout_RDX_05,pcVar8,param_13,param_14);
              if (iVar10 != 0) break;
              uVar14 = extraout_XMM0_Qa_12;
            }
          }
        }
        else {
          lVar4 = param_9;
LAB_00500d80:
          sys_load_lib(uVar13,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar4,__s2,
                       uVar14,pcVar8,param_13,param_14);
        }
      }
      else {
        iVar2 = strcmp(pcVar7,"-stdlib");
        uVar14 = extraout_XMM0_Qa_01;
        if (iVar2 != 0) goto LAB_00500b00;
        bVar1 = sys_isabsolutepath(__s2);
        if ((int)CONCAT71(extraout_var,bVar1) != 0) {
          uVar14 = extraout_RDX_00;
          lVar4 = 0;
          uVar13 = extraout_XMM0_Qa_02;
          goto LAB_00500d80;
        }
        iVar10 = strncmp("extra/",__s2,6);
        pcVar7 = __s2 + 6;
        if (iVar10 != 0) {
          pcVar7 = __s2;
        }
        pcVar8 = pcVar7;
        bVar1 = sys_isabsolutepath(pcVar7);
        if ((int)CONCAT71(extraout_var_04,bVar1) == 0) {
          strncpy(local_808,(char *)**(undefined8 **)PTR_sys_libdir_00715520,0x3de);
          local_429 = 0;
          sVar5 = strlen(local_808);
          pcVar8 = (char *)0x2f61727478652f;
          builtin_strncpy(local_808 + sVar5,"/extra/",8);
        }
        else {
          local_808[0] = '\0';
        }
        sVar5 = strlen(local_808);
        strncat(local_808,pcVar7,1000 - sVar5);
        local_421 = 0;
        iVar10 = sys_load_lib(extraout_XMM0_Qa_15,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8,0,local_808,extraout_RDX_06,pcVar8,param_13,param_14);
        if (iVar10 == 0) {
          plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
          uVar14 = extraout_XMM0_Qa_16;
          for (puVar3 = *(undefined8 **)(*(long *)(*plVar6 + 0x50) + 0x10);
              puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
            pcVar8 = (char *)puVar3[1];
            param_13 = pcVar7;
            uVar14 = pd_snprintf(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                 local_808,999,"%s/%s",pcVar8,pcVar7,param_14,
                                 in_stack_fffffffffffff7d8);
            local_421 = 0;
            iVar10 = sys_load_lib(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
                                  local_808,extraout_RDX_07,pcVar8,param_13,param_14);
            if (iVar10 != 0) break;
            uVar14 = extraout_XMM0_Qa_17;
          }
        }
      }
      goto LAB_00500b14;
    }
    bVar1 = sys_isabsolutepath(__s2);
    if ((((int)CONCAT71(extraout_var_00,bVar1) == 0) && (iVar10 = strncmp("./",__s2,2), iVar10 != 0)
        ) && (iVar10 = strncmp("../",__s2,3), iVar10 != 0)) {
      canvas_completepath(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,
                          param_8,__s2,local_418,param_9,pcVar8,param_13,param_14);
      sys_bashfilename(local_418,local_808);
      iVar10 = access(local_808,0);
      if (iVar10 != 0) {
        plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
        lVar4 = *(long *)(*plVar6 + 0x50);
        plVar6 = *(long **)(lVar4 + 8);
        uVar14 = extraout_XMM0_Qa_04;
        if (plVar6 != (long *)0x0) {
          do {
            pcVar8 = (char *)plVar6[1];
            param_13 = __s2;
            pd_snprintf(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_418,999
                        ,"%s/%s/",pcVar8,__s2,param_14,in_stack_fffffffffffff7d8);
            local_31 = 0;
            sys_bashfilename(local_418,local_808);
            iVar10 = access(local_808,0);
            if (iVar10 == 0) goto LAB_00500ff9;
            plVar6 = (long *)*plVar6;
            uVar14 = extraout_XMM0_Qa_05;
          } while (plVar6 != (long *)0x0);
          plVar6 = (long *)__tls_get_addr(&PTR_007159b0);
          lVar4 = *(long *)(*plVar6 + 0x50);
          uVar14 = extraout_XMM0_Qa_06;
        }
        for (puVar3 = *(undefined8 **)(lVar4 + 0x10); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          pcVar8 = (char *)puVar3[1];
          param_13 = __s2;
          pd_snprintf(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,local_418,999,
                      "%s/%s/",pcVar8,__s2,param_14,in_stack_fffffffffffff7d8);
          local_31 = 0;
          sys_bashfilename(local_418,local_808);
          iVar10 = access(local_808,0);
          if (iVar10 == 0) goto LAB_00500ff9;
          uVar14 = extraout_XMM0_Qa_07;
        }
        goto LAB_00500b14;
      }
    }
    goto LAB_00500d58;
  }
LAB_00500b00:
  post(uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
       "declare: %s: unknown declaration");
  iVar11 = iVar10;
  goto LAB_00500b14;
LAB_00500ff9:
  __s2 = local_418;
LAB_00500d58:
  puVar3 = namelist_append(*(undefined8 **)(lVar12 + 0x20),__s2,0);
  *(undefined8 **)(lVar12 + 0x20) = puVar3;
LAB_00500b14:
  iVar10 = iVar11 + 1;
  if (iVar9 <= iVar10) {
    return;
  }
  goto LAB_00500b24;
}


