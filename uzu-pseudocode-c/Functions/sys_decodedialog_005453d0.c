// Function : sys_decodedialog
// Namespace: 
// Entry    : 005453d0
// Prototype: undefined sys_decodedialog(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 005453d0 - 0054550a


void sys_decodedialog(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     undefined8 *param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12
                     ,char *param_13,undefined8 param_14)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uStack_400;
  undefined1 in_stack_fffffffffffffc08;
  char local_3f7 [1007];
  
  pcVar4 = (char *)*param_9;
  if (*pcVar4 == '+') {
    pcVar4 = pcVar4 + 1;
  }
  else {
    uStack_400 = 0x5453f7;
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"sys_decodedialog: %s",
        pcVar4,param_11,param_12,param_13,param_14,in_stack_fffffffffffffc08);
  }
  uVar2 = 1;
  do {
    cVar3 = *pcVar4;
    if (cVar3 == '+') {
      pcVar5 = pcVar4 + 1;
      cVar3 = ' ';
      switch(pcVar4[1]) {
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
switchD_0054549e_caseD_60:
        cVar3 = '+';
        pcVar5 = pcVar4;
        break;
      case 'c':
        cVar3 = ',';
        break;
      case 'd':
        cVar3 = '$';
        break;
      case 's':
        cVar3 = ';';
        break;
      default:
        if (pcVar4[1] != '+') goto switchD_0054549e_caseD_60;
        cVar3 = '+';
      }
    }
    else {
      pcVar5 = pcVar4;
      if (cVar3 == '\0') {
        uVar2 = uVar2 - 1;
LAB_005454f4:
        local_3f7[(uVar2 & 0xffffffff) - 1] = '\0';
        uStack_400 = 0x545502;
        gensym(local_3f7 + -1);
        return;
      }
    }
    local_3f7[uVar2 - 2] = cVar3;
    if (uVar2 == 999) {
      uVar2 = 999;
      goto LAB_005454f4;
    }
    pcVar1 = pcVar5 + 1;
    cVar3 = *pcVar1;
    if (cVar3 == '+') {
      pcVar4 = pcVar5 + 2;
      cVar3 = ' ';
      switch(pcVar5[2]) {
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
switchD_00545476_caseD_60:
        cVar3 = '+';
        pcVar4 = pcVar1;
        break;
      case 'c':
        cVar3 = ',';
        break;
      case 'd':
        cVar3 = '$';
        break;
      case 's':
        cVar3 = ';';
        break;
      default:
        if (pcVar5[2] != '+') goto switchD_00545476_caseD_60;
        cVar3 = '+';
      }
    }
    else {
      pcVar4 = pcVar1;
      if (cVar3 == '\0') goto LAB_005454f4;
    }
    local_3f7[uVar2 - 1] = cVar3;
    pcVar4 = pcVar4 + 1;
    uVar2 = uVar2 + 2;
  } while( true );
}


