// Function : glob_startup_dialog
// Namespace: 
// Entry    : 00545a30
// Prototype: undefined glob_startup_dialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 param_10, uint param_11, long param_12, char * param_13, undefined8 param_14)
// Body     : 00545a30 - 00545db7


void glob_startup_dialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,uint param_11,long param_12,
                        char *param_13,undefined8 param_14)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char *pcVar6;
  char cVar7;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  char *pcVar8;
  ulong uVar9;
  char *pcVar10;
  int iVar11;
  float fVar12;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  int iVar13;
  undefined8 local_420;
  char local_418 [1000];
  
  uVar9 = (ulong)param_11;
  plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
  namelist_free((long *)**(undefined8 **)(*plVar1 + 0x50));
  **(undefined8 **)(*plVar1 + 0x50) = 0;
  fVar12 = (float)atom_getfloatarg(0,param_11,param_12);
  puVar5 = PTR_sys_defeatrt_00715588;
  *(int *)PTR_sys_defeatrt_00715588 = (int)fVar12;
  local_420 = param_12;
  puVar2 = (undefined8 *)atom_getsymbolarg(1,param_11,param_12);
  pcVar8 = (char *)*puVar2;
  if (*pcVar8 == '+') {
    pcVar8 = pcVar8 + 1;
  }
  else {
    bug(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6,param_7,
        param_8,"sys_decodedialog: %s",pcVar8,extraout_RDX,puVar5,param_13,param_14,(char)uVar9);
  }
  uVar3 = 1;
LAB_00545afa:
  cVar7 = *pcVar8;
  if (cVar7 == '+') {
    pcVar10 = pcVar8 + 1;
    cVar7 = ' ';
    switch(pcVar8[1]) {
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
switchD_00545b6e_caseD_60:
      cVar7 = '+';
      pcVar10 = pcVar8;
      break;
    case 'c':
      cVar7 = ',';
      break;
    case 'd':
      cVar7 = '$';
      break;
    case 's':
      cVar7 = ';';
      break;
    default:
      if (pcVar8[1] != '+') goto switchD_00545b6e_caseD_60;
      cVar7 = '+';
    }
  }
  else {
    pcVar10 = pcVar8;
    if (cVar7 == '\0') {
      uVar3 = uVar3 - 1;
LAB_00545bc4:
      local_418[uVar3 & 0xffffffff] = '\0';
      puVar2 = gensym(local_418);
      pcVar8 = PTR_sys_flags_007153e8;
      *(undefined8 **)PTR_sys_flags_007153e8 = puVar2;
      iVar13 = (int)uVar9;
      if (2 < iVar13) {
        iVar11 = 0;
        do {
          puVar2 = (undefined8 *)atom_getsymbolarg(iVar11 + 2,(int)uVar9,local_420);
          pcVar10 = (char *)*puVar2;
          if (*pcVar10 == '+') {
            pcVar8 = pcVar10 + 1;
          }
          else {
            bug(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2,param_3,param_4,param_5,
                param_6,param_7,param_8,"sys_decodedialog: %s",pcVar10,extraout_RDX_00,pcVar8,
                param_13,param_14,(char)uVar9);
            pcVar8 = pcVar10;
          }
          uVar3 = 1;
LAB_00545c7a:
          cVar7 = *pcVar8;
          if (cVar7 == '+') {
            pcVar10 = pcVar8 + 1;
            cVar7 = ' ';
            switch(pcVar8[1]) {
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
switchD_00545cee_caseD_60:
              cVar7 = '+';
              pcVar10 = pcVar8;
              break;
            case 'c':
              cVar7 = ',';
              break;
            case 'd':
              cVar7 = '$';
              break;
            case 's':
              cVar7 = ';';
              break;
            default:
              if (pcVar8[1] != '+') goto switchD_00545cee_caseD_60;
              cVar7 = '+';
            }
switchD_00545cee_caseD_5f:
            pcVar8 = pcVar10;
            local_418[uVar3 - 1] = cVar7;
            if (uVar3 == 999) {
              uVar3 = 999;
              goto LAB_00545d54;
            }
            pcVar10 = pcVar8 + 1;
            cVar7 = *pcVar10;
            if (cVar7 == '+') {
              pcVar6 = pcVar8 + 2;
              cVar7 = ' ';
              switch(pcVar8[2]) {
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
switchD_00545cc7_caseD_60:
                cVar7 = '+';
                pcVar6 = pcVar10;
                break;
              case 'c':
                cVar7 = ',';
                break;
              case 'd':
                cVar7 = '$';
                break;
              case 's':
                cVar7 = ';';
                break;
              default:
                if (pcVar8[2] != '+') goto switchD_00545cc7_caseD_60;
                cVar7 = '+';
              }
            }
            else {
              pcVar6 = pcVar10;
              pcVar8 = pcVar10;
              if (cVar7 == '\0') goto LAB_00545d54;
            }
            local_418[uVar3] = cVar7;
            pcVar8 = pcVar6 + 1;
            uVar3 = uVar3 + 2;
            goto LAB_00545c7a;
          }
          pcVar10 = pcVar8;
          if (cVar7 != '\0') goto switchD_00545cee_caseD_5f;
          uVar3 = uVar3 - 1;
LAB_00545d54:
          local_418[uVar3 & 0xffffffff] = '\0';
          puVar2 = gensym(local_418);
          pcVar10 = (char *)*puVar2;
          if (*pcVar10 != '\0') {
            plVar1 = (long *)__tls_get_addr(&PTR_007159b0);
            uVar4 = namelist_append_files
                              ((undefined8 *)**(undefined8 **)(*plVar1 + 0x50),(long)pcVar10);
            pcVar8 = *(char **)(*plVar1 + 0x50);
            *(undefined8 *)pcVar8 = uVar4;
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 != iVar13 + -2);
      }
      return;
    }
  }
  local_418[uVar3 - 1] = cVar7;
  if (uVar3 == 999) {
    uVar3 = 999;
    goto LAB_00545bc4;
  }
  pcVar6 = pcVar10 + 1;
  cVar7 = *pcVar6;
  if (cVar7 == '+') {
    pcVar8 = pcVar10 + 2;
    cVar7 = ' ';
    switch(pcVar10[2]) {
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
switchD_00545b46_caseD_60:
      cVar7 = '+';
      pcVar8 = pcVar6;
      break;
    case 'c':
      cVar7 = ',';
      break;
    case 'd':
      cVar7 = '$';
      break;
    case 's':
      cVar7 = ';';
      break;
    default:
      if (pcVar10[2] != '+') goto switchD_00545b46_caseD_60;
      cVar7 = '+';
    }
  }
  else {
    pcVar8 = pcVar6;
    if (cVar7 == '\0') goto LAB_00545bc4;
  }
  local_418[uVar3] = cVar7;
  pcVar8 = pcVar8 + 1;
  uVar3 = uVar3 + 2;
  goto LAB_00545afa;
}


