// Function : glob_addtopath
// Namespace: 
// Entry    : 005457e0
// Prototype: undefined glob_addtopath(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, undefined8 * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005457e0 - 005459d0


void glob_addtopath(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9,undefined8 *param_10,undefined8 param_11,undefined8 param_12,
                   char *param_13,undefined8 param_14)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 uVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined1 in_stack_fffffffffffffbf8;
  undefined4 local_3fc;
  char local_3f8 [1000];
  
  local_3fc = (float)param_1;
  pcVar7 = (char *)*param_10;
  if (*pcVar7 == '+') {
    pcVar7 = pcVar7 + 1;
  }
  else {
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"sys_decodedialog: %s",
        pcVar7,param_11,param_12,param_13,param_14,in_stack_fffffffffffffbf8);
  }
  uVar2 = 1;
  do {
    cVar6 = *pcVar7;
    if (cVar6 == '+') {
      pcVar9 = pcVar7 + 1;
      cVar6 = ' ';
      switch(pcVar7[1]) {
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
switchD_005458be_caseD_60:
        cVar6 = '+';
        pcVar9 = pcVar7;
        break;
      case 'c':
        cVar6 = ',';
        break;
      case 'd':
        cVar6 = '$';
        break;
      case 's':
        cVar6 = ';';
        break;
      default:
        if (pcVar7[1] != '+') goto switchD_005458be_caseD_60;
        cVar6 = '+';
      }
    }
    else {
      pcVar9 = pcVar7;
      if (cVar6 == '\0') {
        uVar2 = uVar2 - 1;
LAB_00545914:
        local_3f8[uVar2 & 0xffffffff] = '\0';
        puVar3 = gensym(local_3f8);
        pcVar7 = (char *)*puVar3;
        if (*pcVar7 != '\0') {
          iVar8 = (int)local_3fc;
          plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
          if (iVar8 < 0) {
            uVar5 = namelist_append_files
                              (*(undefined8 **)(*(long *)(*plVar4 + 0x50) + 0x20),(long)pcVar7);
            plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
            *(undefined8 *)(*(long *)(*plVar4 + 0x50) + 0x20) = uVar5;
          }
          else {
            uVar5 = namelist_append_files
                              (*(undefined8 **)(*(long *)(*plVar4 + 0x50) + 8),(long)pcVar7);
            plVar4 = (long *)__tls_get_addr(&PTR_007159b0);
            *(undefined8 *)(*(long *)(*plVar4 + 0x50) + 8) = uVar5;
          }
          if (0.0 < local_3fc) {
            sys_savepreferences();
          }
        }
        return;
      }
    }
    local_3f8[uVar2 - 1] = cVar6;
    if (uVar2 == 999) {
      uVar2 = 999;
      goto LAB_00545914;
    }
    pcVar1 = pcVar9 + 1;
    cVar6 = *pcVar1;
    if (cVar6 == '+') {
      pcVar7 = pcVar9 + 2;
      cVar6 = ' ';
      switch(pcVar9[2]) {
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
switchD_00545897_caseD_60:
        cVar6 = '+';
        pcVar7 = pcVar1;
        break;
      case 'c':
        cVar6 = ',';
        break;
      case 'd':
        cVar6 = '$';
        break;
      case 's':
        cVar6 = ';';
        break;
      default:
        if (pcVar9[2] != '+') goto switchD_00545897_caseD_60;
        cVar6 = '+';
      }
    }
    else {
      pcVar7 = pcVar1;
      if (cVar6 == '\0') goto LAB_00545914;
    }
    local_3f8[uVar2] = cVar6;
    pcVar7 = pcVar7 + 1;
    uVar2 = uVar2 + 2;
  } while( true );
}


