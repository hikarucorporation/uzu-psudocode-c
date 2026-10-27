// Function : glob_path_dialog
// Namespace: 
// Entry    : 00545580
// Prototype: undefined glob_path_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, int param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00545580 - 005457d9


void glob_path_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 param_9,undefined8 param_10,int param_11,long param_12,
                     char *param_13,undefined8 param_14)

{
  char *pcVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char cVar8;
  undefined8 extraout_RDX;
  int iVar9;
  float fVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined1 in_stack_fffffffffffffbd8;
  undefined8 local_420;
  char local_418 [1000];
  
  plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
  namelist_free(*(long **)(*(long *)(*plVar2 + 0x50) + 8));
  *(undefined8 *)(*(long *)(*plVar2 + 0x50) + 8) = 0;
  fVar10 = (float)atom_getfloatarg(0,param_11,param_12);
  *(int *)PTR_sys_usestdpath_00715ef8 = (int)fVar10;
  local_420 = param_12;
  fVar10 = (float)atom_getfloatarg(1,param_11,param_12);
  pcVar6 = PTR_sys_verbose_00715ce0;
  *(int *)PTR_sys_verbose_00715ce0 = (int)fVar10;
  if (2 < param_11) {
    iVar9 = 0;
    do {
      puVar3 = (undefined8 *)atom_getsymbolarg(iVar9 + 2,param_11,local_420);
      pcVar1 = (char *)*puVar3;
      if (*pcVar1 == '+') {
        pcVar6 = pcVar1 + 1;
      }
      else {
        bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,
            param_7,param_8,"sys_decodedialog: %s",pcVar1,extraout_RDX,pcVar6,param_13,param_14,
            in_stack_fffffffffffffbd8);
        pcVar6 = pcVar1;
      }
      uVar4 = 1;
LAB_0054569a:
      cVar8 = *pcVar6;
      if (cVar8 == '+') {
        pcVar1 = pcVar6 + 1;
        cVar8 = ' ';
        switch(pcVar6[1]) {
        case '_':
          break;
        case '`':
        case 'a':
        case 'b':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
switchD_0054570e_caseD_60:
          cVar8 = '+';
          pcVar1 = pcVar6;
          break;
        case 'c':
          cVar8 = ',';
          break;
        case 'd':
          cVar8 = '$';
          break;
        case 's':
          cVar8 = ';';
          break;
        default:
          if (pcVar6[1] != '+') goto switchD_0054570e_caseD_60;
          cVar8 = '+';
        }
switchD_0054570e_caseD_5f:
        pcVar6 = pcVar1;
        local_418[uVar4 - 1] = cVar8;
        if (uVar4 == 999) {
          uVar4 = 999;
          goto LAB_00545774;
        }
        pcVar1 = pcVar6 + 1;
        cVar8 = *pcVar1;
        if (cVar8 == '+') {
          pcVar7 = pcVar6 + 2;
          cVar8 = ' ';
          switch(pcVar6[2]) {
          case '_':
            break;
          case '`':
          case 'a':
          case 'b':
          case 'e':
          case 'f':
          case 'g':
          case 'h':
          case 'i':
          case 'j':
          case 'k':
          case 'l':
          case 'm':
          case 'n':
          case 'o':
          case 'p':
          case 'q':
          case 'r':
switchD_005456e7_caseD_60:
            cVar8 = '+';
            pcVar7 = pcVar1;
            break;
          case 'c':
            cVar8 = ',';
            break;
          case 'd':
            cVar8 = '$';
            break;
          case 's':
            cVar8 = ';';
            break;
          default:
            if (pcVar6[2] != '+') goto switchD_005456e7_caseD_60;
            cVar8 = '+';
          }
        }
        else {
          pcVar7 = pcVar1;
          pcVar6 = pcVar1;
          if (cVar8 == '\0') goto LAB_00545774;
        }
        local_418[uVar4] = cVar8;
        pcVar6 = pcVar7 + 1;
        uVar4 = uVar4 + 2;
        goto LAB_0054569a;
      }
      pcVar1 = pcVar6;
      if (cVar8 != '\0') goto switchD_0054570e_caseD_5f;
      uVar4 = uVar4 - 1;
LAB_00545774:
      local_418[uVar4 & 0xffffffff] = '\0';
      puVar3 = gensym(local_418);
      pcVar1 = (char *)*puVar3;
      if (*pcVar1 != '\0') {
        plVar2 = (long *)__tls_get_addr(&PTR_007159b0);
        uVar5 = namelist_append_files(*(undefined8 **)(*(long *)(*plVar2 + 0x50) + 8),(long)pcVar1);
        pcVar6 = *(char **)(*plVar2 + 0x50);
        *(undefined8 *)(pcVar6 + 8) = uVar5;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != param_11 + -2);
  }
  return;
}


