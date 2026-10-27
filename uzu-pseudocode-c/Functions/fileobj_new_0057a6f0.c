// Function : fileobj_new
// Namespace: 
// Entry    : 0057a6f0
// Prototype: long * fileobj_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, uint param_10, int * param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0057a6f0 - 0057ac33


long * fileobj_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 *param_9,uint param_10,int *param_11,undefined8 param_12,char *param_13
                  ,undefined8 param_14)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  size_t sVar4;
  long lVar5;
  undefined8 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar9;
  char *pcVar10;
  ulong uVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  
  puVar3 = gensym("file");
  if (puVar3 == param_9) {
    pcVar9 = "handle";
    if (param_10 == 0) {
      param_10 = 0;
      cVar1 = s_file_handle_0065ba35[5];
    }
    else {
      if (*param_11 == 2) {
        puVar3 = (undefined8 *)atom_getsymbol(param_11);
        pcVar9 = (char *)*puVar3;
        param_10 = param_10 - 1;
        param_11 = param_11 + 4;
        if (pcVar9 == (char *)0x0) goto LAB_0057a9c3;
      }
      cVar1 = *pcVar9;
    }
joined_r0x0057a9bd:
    if (cVar1 != '\0') {
      pcVar10 = "define";
      iVar2 = strcmp(pcVar9,"define");
      if (iVar2 == 0) {
        puVar3 = gensym("file define");
        plVar7 = pd_new(extraout_XMM0_Qa_00,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        *(long *)PTR_file_define_class_00715550,pcVar10,extraout_RDX,param_12,
                        param_13,param_14);
        plVar7[7] = (long)(plVar7 + 6);
        *(undefined4 *)(plVar7 + 6) = 0xffffffff;
        lVar5 = canvas_getcurrent(extraout_XMM0_Qa_01,param_2,param_3,param_4,param_5,param_6,
                                  param_7,param_8);
        plVar7[10] = lVar5;
        plVar7[9] = 0x1b6;
        if ((param_10 == 1) && (*param_11 == 2)) {
          lVar5 = atom_getsymbol(param_11);
          plVar7[8] = lVar5;
          pd_bind(extraout_XMM0_Qa_03,param_2,param_3,param_4,param_5,param_6,param_7,param_8,plVar7
                  ,lVar5,extraout_RDX_00,param_12,param_13,param_14);
          return plVar7;
        }
        pcVar9 = (char *)*puVar3;
        pcVar10 = "%s requires an argument: handle name";
        uVar12 = extraout_XMM0_Qa_02;
LAB_0057a9ff:
        pd_error(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,(long)plVar7,pcVar10
                 ,pcVar9,param_12,param_13,param_14);
        return plVar7;
      }
      iVar2 = strcmp(pcVar9,"handle");
      if (iVar2 == 0) {
        gensym("file handle");
        pcVar9 = (char *)0x1b6;
        plVar7 = do_file_handle_new(extraout_XMM0_Qa_05,param_2,param_3,param_4,param_5,param_6,
                                    param_7,param_8,*(long *)PTR_file_handle_class_00715dc8,
                                    (ulong)param_10,param_11,1,(char *)0x1b6,param_14);
        puVar3 = gensym("symbol");
        puVar6 = gensym("set");
        inlet_new(extraout_XMM0_Qa_06,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  (long)plVar7,(long)plVar7,(long)puVar3,(long)puVar6,pcVar9,param_14);
        return plVar7;
      }
      iVar2 = strcmp(pcVar9,"which");
      if (iVar2 == 0) {
        lVar5 = *(long *)PTR_file_which_class_00715930;
        pcVar9 = "file which";
LAB_0057abfc:
        gensym(pcVar9);
        uVar8 = 0;
        uVar12 = extraout_XMM0_Qa_09;
      }
      else {
        iVar2 = strcmp(pcVar9,"patchpath");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_patchpath_class_00715dd8;
          pcVar9 = "file patchpath";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"glob");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_glob_class_00715f30;
          pcVar9 = "file glob";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"stat");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_stat_class_00715998;
          pcVar9 = "file stat";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"size");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_size_class_00715fd8;
          pcVar9 = "file size";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"isfile");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_isfile_class_00715400;
          pcVar9 = "file isfile";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"isdirectory");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_isdirectory_class_00715928;
          pcVar9 = "file isdirectory";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"mkdir");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_mkdir_class_00715cb8;
          gensym("file mkdir");
          uVar11 = (ulong)param_10;
          uVar8 = 0;
          pcVar9 = (char *)0x1ff;
          uVar12 = extraout_XMM0_Qa_07;
          goto LAB_0057ac0f;
        }
        iVar2 = strcmp(pcVar9,"delete");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_delete_class_00715628;
          pcVar9 = "file delete";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"copy");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_copy_class_00715658;
          pcVar9 = "file copy";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"move");
        if (iVar2 == 0) {
          lVar5 = *(long *)PTR_file_move_class_00715aa8;
          pcVar9 = "file move";
          goto LAB_0057abfc;
        }
        iVar2 = strcmp(pcVar9,"cwd");
        if (iVar2 != 0) {
          iVar2 = strcmp(pcVar9,"split");
          if (iVar2 == 0) {
            lVar5 = *(long *)PTR_file_split_class_007156b0;
            pcVar9 = "file split";
          }
          else {
            iVar2 = strcmp(pcVar9,"join");
            if (iVar2 == 0) {
              lVar5 = *(long *)PTR_file_join_class_00715608;
              pcVar9 = "file join";
            }
            else {
              iVar2 = strcmp(pcVar9,"splitext");
              if (iVar2 == 0) {
                lVar5 = *(long *)PTR_file_splitext_class_00715f88;
                pcVar9 = "file splitext";
              }
              else {
                iVar2 = strcmp(pcVar9,"splitname");
                if (iVar2 == 0) {
                  lVar5 = *(long *)PTR_file_splitname_class_00715be8;
                  pcVar9 = "file splitname";
                }
                else {
                  iVar2 = strcmp(pcVar9,"isabsolute");
                  if (iVar2 != 0) {
                    iVar2 = strcmp(pcVar9,"normalize");
                    if (iVar2 != 0) {
                      pcVar10 = "file %s: unknown function";
                      plVar7 = (long *)0x0;
                      uVar12 = extraout_XMM0_Qa;
                      goto LAB_0057a9ff;
                    }
                    lVar5 = *(long *)PTR_file_normalize_class_007156a0;
                    pcVar9 = "file normalize";
                    goto LAB_0057ab8a;
                  }
                  lVar5 = *(long *)PTR_file_isabsolute_class_00715bd8;
                  pcVar9 = "file isabsolute";
                }
              }
            }
          }
          goto LAB_0057abfc;
        }
        lVar5 = *(long *)PTR_file_cwd_class_00715d90;
        pcVar9 = "file cwd";
LAB_0057ab8a:
        gensym(pcVar9);
        uVar8 = 1;
        uVar12 = extraout_XMM0_Qa_08;
      }
      uVar11 = (ulong)param_10;
      pcVar9 = (char *)0x0;
      goto LAB_0057ac0f;
    }
  }
  else {
    pcVar9 = (char *)*param_9;
    sVar4 = strlen(pcVar9);
    if (5 < sVar4) {
      pcVar9 = pcVar9 + 5;
      cVar1 = *pcVar9;
      goto joined_r0x0057a9bd;
    }
  }
LAB_0057a9c3:
  lVar5 = *(long *)PTR_file_handle_class_00715dc8;
  gensym("file handle");
  uVar11 = (ulong)param_10;
  uVar8 = 1;
  pcVar9 = (char *)0x1b6;
  uVar12 = extraout_XMM0_Qa_04;
LAB_0057ac0f:
  plVar7 = do_file_handle_new(uVar12,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar5,
                              uVar11,param_11,uVar8,pcVar9,param_14);
  return plVar7;
}


