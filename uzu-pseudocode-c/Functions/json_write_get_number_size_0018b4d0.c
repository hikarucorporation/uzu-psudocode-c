// Function : json_write_get_number_size
// Namespace: 
// Entry    : 0018b4d0
// Prototype: undefined8 json_write_get_number_size(long * param_1, long * param_2)
// Body     : 0018b4d0 - 0018b746


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_get_number_size(json_number_s const*, unsigned long*) */

undefined8 __cdecl json_write_get_number_size(long *param_1,long *param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  uintmax_t uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  char *pcVar9;
  
  uVar2 = param_1[1];
  if (uVar2 < 2) {
    if (uVar2 != 0) {
      pcVar6 = (char *)*param_1;
      goto LAB_0018b547;
    }
    uVar7 = 0;
LAB_0018b708:
    pcVar6 = (char *)*param_1;
    if ((uVar7 + 1 == uVar2) && (pcVar6[uVar7] == '.')) goto LAB_0018b71a;
  }
  else {
    pcVar6 = (char *)*param_1;
    if ((byte)(pcVar6[1] | 0x20U) == 0x78) {
      lVar8 = 0;
      uVar5 = strtoumax(pcVar6,(char **)0x0,0);
      if (uVar5 != 0) {
        lVar8 = 0;
        do {
          lVar8 = lVar8 + 1;
          bVar4 = 9 < uVar5;
          uVar5 = uVar5 / 10;
        } while (bVar4);
      }
      lVar8 = lVar8 + *param_2;
      goto LAB_0018b731;
    }
LAB_0018b547:
    uVar7 = (ulong)((*pcVar6 - 0x2bU & 0xfd) == 0);
    if (uVar2 <= uVar7) goto LAB_0018b708;
    pcVar6 = (char *)*param_1;
    cVar1 = pcVar6[uVar7];
    if (cVar1 != '.') {
      if (cVar1 == 'N') {
        if (uVar7 + 1 < uVar2) {
          pcVar9 = "N";
          if ((pcVar6[uVar7 + 1] == 'a') && (uVar7 + 2 < uVar2)) {
            pcVar9 = &DAT_005db4b9 + (uVar7 + 3 < uVar2 && pcVar6[uVar7 + 2] == 'N');
          }
        }
        else {
          pcVar9 = "aN";
        }
        if (*pcVar9 == '\0') {
          lVar8 = *param_2 + 1;
          goto LAB_0018b731;
        }
      }
      else if (cVar1 == 'I') {
        if (uVar7 + 1 < uVar2) {
          pcVar9 = "finity";
          if (((((pcVar6[uVar7 + 1] == 'n') && (uVar7 + 2 < uVar2)) &&
               (pcVar9 = "inity", pcVar6[uVar7 + 2] == 'f')) &&
              ((((uVar7 + 3 < uVar2 && (pcVar9 = "nity", pcVar6[uVar7 + 3] == 'i')) &&
                ((uVar7 + 4 < uVar2 &&
                 ((pcVar9 = "ity", pcVar6[uVar7 + 4] == 'n' && (uVar7 + 5 < uVar2)))))) &&
               (pcVar9 = "ty", pcVar6[uVar7 + 5] == 'i')))) &&
             (((uVar7 + 6 < uVar2 && (pcVar9 = "y", pcVar6[uVar7 + 6] == 't')) &&
              (uVar7 + 7 < uVar2)))) {
            pcVar9 = "Infinity" + (ulong)((uVar7 | 8) < uVar2 && pcVar6[uVar7 + 7] == 'y') + 8;
          }
        }
        else {
          pcVar9 = "nfinity";
        }
        if (*pcVar9 != '\0') {
          return 0;
        }
        lVar8 = *param_2;
        *param_2 = lVar8 + 0x16;
        if (*pcVar6 != '-') {
          return 0;
        }
        lVar8 = lVar8 + 0x17;
        goto LAB_0018b731;
      }
      do {
        if (9 < (byte)(*(char *)(*param_1 + uVar7) - 0x30U)) goto LAB_0018b708;
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
      uVar7 = uVar2;
      goto LAB_0018b708;
    }
LAB_0018b71a:
    *param_2 = *param_2 + 1;
  }
  lVar8 = *param_2;
  lVar3 = param_1[1];
  *param_2 = lVar8 + lVar3;
  if (*pcVar6 != '+') {
    return 0;
  }
  lVar8 = lVar8 + lVar3 + -1;
LAB_0018b731:
  *param_2 = lVar8;
  return 0;
}


