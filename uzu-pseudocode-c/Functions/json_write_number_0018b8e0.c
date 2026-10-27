// Function : json_write_number
// Namespace: 
// Entry    : 0018b8e0
// Prototype: char * json_write_number(long * param_1, char * param_2)
// Body     : 0018b8e0 - 0018bc4f


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_number(json_number_s const*, char*) */

char * __cdecl json_write_number(long *param_1,char *param_2)

{
  undefined8 uVar1;
  uintmax_t uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  long lVar6;
  uintmax_t uVar7;
  byte *pbVar8;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  
  uVar3 = param_1[1];
  if (uVar3 < 2) {
    if (uVar3 != 0) {
      pcVar10 = (char *)*param_1;
      goto LAB_0018b988;
    }
    uVar4 = 0;
  }
  else {
    pcVar10 = (char *)*param_1;
    if ((byte)(pcVar10[1] | 0x20U) == 0x78) {
      lVar6 = 0;
      uVar2 = strtoumax(pcVar10,(char **)0x0,0);
      if (uVar2 != 0) {
        lVar6 = 0;
        uVar7 = uVar2;
        do {
          lVar6 = lVar6 + 1;
          bVar11 = 9 < uVar7;
          uVar7 = uVar7 / 10;
        } while (bVar11);
      }
      pbVar8 = (byte *)(param_2 + lVar6);
      do {
        pbVar8 = pbVar8 + -1;
        *pbVar8 = (char)uVar2 + (char)(uVar2 / 10) * -10 | 0x30;
        bVar11 = 9 < uVar2;
        uVar2 = uVar2 / 10;
      } while (bVar11);
      return param_2 + lVar6;
    }
LAB_0018b988:
    uVar4 = (ulong)((*pcVar10 - 0x2bU & 0xfd) == 0);
    if ((uVar4 < uVar3) && (pcVar10 = (char *)*param_1, pcVar10[uVar4] == 'I')) {
      if (uVar4 + 1 < uVar3) {
        pcVar9 = "finity";
        if ((((((pcVar10[uVar4 + 1] == 'n') && (uVar4 + 2 < uVar3)) &&
              (pcVar9 = "inity", pcVar10[uVar4 + 2] == 'f')) &&
             ((uVar4 + 3 < uVar3 && (pcVar9 = "nity", pcVar10[uVar4 + 3] == 'i')))) &&
            ((uVar4 + 4 < uVar3 &&
             ((pcVar9 = "ity", pcVar10[uVar4 + 4] == 'n' && (uVar4 + 5 < uVar3)))))) &&
           ((pcVar9 = "ty", pcVar10[uVar4 + 5] == 'i' &&
            (((uVar4 + 6 < uVar3 && (pcVar9 = "y", pcVar10[uVar4 + 6] == 't')) &&
             (uVar4 + 7 < uVar3)))))) {
          pcVar9 = "Infinity" + (ulong)(uVar4 + 8 < uVar3 && pcVar10[uVar4 + 7] == 'y') + 8;
        }
      }
      else {
        pcVar9 = "nfinity";
      }
      if (*pcVar9 == '\0') {
        if (*pcVar10 == '-') {
          *param_2 = '-';
          param_2 = param_2 + 1;
        }
        uVar1 = _UNK_005d9a08;
        *(undefined8 *)param_2 = _DAT_005d9a00;
        *(undefined8 *)(param_2 + 8) = uVar1;
        param_2[0x10] = '5';
        param_2[0x11] = '8';
        param_2[0x12] = 'e';
        param_2[0x13] = '3';
        param_2[0x14] = '0';
        param_2[0x15] = '8';
        return param_2 + 0x16;
      }
    }
  }
  if ((uVar4 < uVar3) && (lVar6 = *param_1, *(char *)(lVar6 + uVar4) == 'N')) {
    if (uVar4 + 1 < uVar3) {
      pcVar10 = "N";
      if ((*(char *)(lVar6 + 1 + uVar4) == 'a') && (uVar4 + 2 < uVar3)) {
        pcVar10 = &DAT_005db4b9 + (uVar4 + 3 < uVar3 && *(char *)(lVar6 + uVar4 + 2) == 'N');
      }
    }
    else {
      pcVar10 = "aN";
    }
    if (*pcVar10 == '\0') goto LAB_0018bbd8;
  }
  if (uVar4 < uVar3) {
    pcVar10 = (char *)*param_1;
    if (pcVar10[uVar4] == '.') {
      cVar5 = *pcVar10;
      uVar3 = (ulong)(cVar5 == '+');
      if (pcVar10[uVar3] == '-') {
        *param_2 = '-';
        param_2 = param_2 + 1;
        uVar3 = (ulong)(cVar5 == '+') + 1;
      }
      *param_2 = '0';
      pcVar10 = param_2 + 1;
      if ((ulong)param_1[1] <= uVar3) {
        return pcVar10;
      }
      do {
        *pcVar10 = *(char *)(*param_1 + uVar3);
        uVar3 = uVar3 + 1;
        pcVar10 = pcVar10 + 1;
      } while (uVar3 < (ulong)param_1[1]);
      return pcVar10;
    }
    do {
      if (9 < (byte)(*(char *)(*param_1 + uVar4) - 0x30U)) goto LAB_0018bb78;
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
    uVar4 = uVar3;
  }
LAB_0018bb78:
  pcVar10 = (char *)*param_1;
  if ((uVar4 + 1 != uVar3) || (pcVar10[uVar4] != '.')) {
    uVar4 = (ulong)(*pcVar10 == '+');
    if (uVar3 <= uVar4) {
      return param_2;
    }
    uVar3 = (ulong)(*pcVar10 == '+');
    cVar5 = pcVar10[uVar4];
    while( true ) {
      *param_2 = cVar5;
      param_2 = param_2 + 1;
      uVar3 = uVar3 + 1;
      if ((ulong)param_1[1] <= uVar3) break;
      cVar5 = *(char *)(*param_1 + uVar3);
    }
    return param_2;
  }
  cVar5 = *pcVar10;
  uVar4 = (ulong)(cVar5 == '+');
  if (pcVar10[uVar4] == '-') {
    *param_2 = '-';
    param_2 = param_2 + 1;
    uVar4 = (ulong)(cVar5 == '+') + 1;
    uVar3 = param_1[1];
  }
  if (uVar4 < uVar3) {
    do {
      *param_2 = *(char *)(*param_1 + uVar4);
      param_2 = param_2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)param_1[1]);
  }
LAB_0018bbd8:
  *param_2 = '0';
  return param_2 + 1;
}


