// Function : atom_string
// Namespace: 
// Entry    : 0052eea0
// Prototype: undefined atom_string(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int * param_9, char * param_10, uint * param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 0052eea0 - 0052f119


void atom_string(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                int *param_9,char *param_10,uint *param_11,undefined8 param_12,char *param_13,
                undefined8 param_14,undefined1 param_15)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  size_t sVar6;
  char cVar7;
  ulong uVar8;
  ulong uVar9;
  char *__src;
  char *pcVar10;
  char acStack_48 [32];
  uint switchD_0052eed2::switchdataD_00655cc4;
  
  uVar2 = *param_9 - 1;
  uVar8 = (ulong)uVar2;
  uVar9 = uVar8;
  if (8 < uVar2) {
switchD_0052eed2_caseD_6:
    bug(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"atom_string",param_10,
        param_11,uVar9,param_13,param_14,param_15);
    return;
  }
  iVar3 = (int)param_11;
  param_11 = &switchD_0052eed2::switchdataD_00655cc4;
  uVar9 = (long)&switchD_0052eed2::switchdataD_00655cc4 +
          (long)(int)(&switchD_0052eed2::switchdataD_00655cc4)[uVar8];
  switch(uVar8) {
  case 0:
    sprintf(acStack_48,"%g",(double)(float)param_9[2]);
    sVar6 = strlen(acStack_48);
    if (sVar6 < iVar3 - 1) {
      strcpy(param_10,acStack_48);
    }
    else if (0.0 < (float)param_9[2] || (float)param_9[2] == 0.0) {
      param_10[0] = '+';
      param_10[1] = '\0';
    }
    else {
      param_10[0] = '-';
      param_10[1] = '\0';
    }
    break;
  default:
    __src = (char *)**(undefined8 **)(param_9 + 2);
    if (*param_9 != 2) {
      lVar5 = 0;
      bVar4 = false;
      do {
        bVar1 = __src[lVar5] - 0x20;
        if ((bVar1 < 0x3d) && ((0x1000000008001001U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
          bVar4 = true;
        }
        else if (__src[lVar5] == '\0') goto LAB_0052ef3b;
        lVar5 = lVar5 + 1;
      } while( true );
    }
    lVar5 = 0;
    bVar4 = false;
    do {
      cVar7 = __src[lVar5];
      switch(cVar7) {
      case ' ':
      case ',':
      case ';':
switchD_0052ef1f_caseD_20:
        bVar4 = true;
        break;
      case '!':
      case '\"':
      case '#':
      case '%':
      case '&':
      case '\'':
      case '(':
      case ')':
      case '*':
      case '+':
      case '-':
      case '.':
      case '/':
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case ':':
        break;
      case '$':
        if ((byte)(__src[lVar5 + 1] - 0x30U) < 10) goto switchD_0052ef1f_caseD_20;
        break;
      default:
        if (cVar7 == '\\') goto switchD_0052ef1f_caseD_20;
        if (cVar7 == '\0') goto LAB_0052ef3b;
      }
      lVar5 = lVar5 + 1;
    } while( true );
  case 2:
    builtin_strncpy(param_10,"(pointer)",10);
    break;
  case 3:
    param_10[0] = ';';
    param_10[1] = '\0';
    break;
  case 4:
    param_10[0] = ',';
    param_10[1] = '\0';
    break;
  case 5:
  case 6:
    goto switchD_0052eed2_caseD_6;
  case 7:
    sprintf(param_10,"$%d",(ulong)(uint)param_9[2]);
    return;
  }
  return;
LAB_0052ef3b:
  if (!bVar4) {
    if ((uint)lVar5 < iVar3 - 1U) {
      strcpy(param_10,__src);
      return;
    }
    strncpy(param_10,__src,(ulong)(iVar3 - 2));
    (param_10 + (iVar3 - 2))[0] = '*';
    (param_10 + (iVar3 - 2))[1] = '\0';
    return;
  }
  if (iVar3 - 2U != 0) {
    pcVar10 = param_10 + (iVar3 - 2U);
    do {
      cVar7 = *__src;
      if (((byte)(cVar7 - 0x20U) < 0x3d) &&
         ((0x1000000008001001U >> ((ulong)(byte)(cVar7 - 0x20U) & 0x3f) & 1) != 0)) {
LAB_0052ef60:
        *param_10 = '\\';
        param_10 = param_10 + 1;
        cVar7 = *__src;
      }
      else {
        if (cVar7 == '\0') goto LAB_0052efbe;
        if (((*param_9 == 2) && (cVar7 == '$')) && (cVar7 = '$', (byte)(__src[1] - 0x30U) < 10))
        goto LAB_0052ef60;
      }
      __src = __src + 1;
      *param_10 = cVar7;
      param_10 = param_10 + 1;
    } while (param_10 < pcVar10);
  }
  if (*__src != '\0') {
    *param_10 = '*';
    param_10 = param_10 + 1;
  }
LAB_0052efbe:
  *param_10 = '\0';
  return;
}


