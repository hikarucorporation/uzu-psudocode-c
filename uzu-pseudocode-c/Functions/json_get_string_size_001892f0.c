// Function : json_get_string_size
// Namespace: 
// Entry    : 001892f0
// Prototype: undefined8 json_get_string_size(long * param_1, long param_2)
// Body     : 001892f0 - 001895d4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_get_string_size(json_parse_state_s*, unsigned long) */

undefined8 __cdecl json_get_string_size(long *param_1,long param_2)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_60;
  int local_54;
  long local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  
  lVar5 = param_1[2];
  local_50 = *param_1;
  cVar2 = *(char *)(local_50 + lVar5);
  local_38 = param_1[3];
  lVar6 = 0x28;
  if ((local_38 & 0x80) == 0) {
    lVar6 = 0x10;
  }
  if (param_2 == 0) {
    lVar6 = 0x10;
  }
  local_48 = param_1[1];
  param_1[6] = param_1[6] + lVar6;
  if ((*(char *)(local_50 + lVar5) == '\"') || (((local_38 & 0x100) != 0 && (cVar2 == '\'')))) {
    uVar7 = lVar5 + 1;
    if (uVar7 < local_48) {
      local_54 = (uint)(cVar2 == '\'') * 5 + 0x22;
      lVar5 = 0;
      local_40 = 0;
      uVar8 = uVar7;
      do {
        cVar2 = *(char *)(local_50 + uVar8);
        iVar3 = (int)cVar2;
        if (local_54 == iVar3) {
          if (uVar8 == local_48) goto LAB_00189542;
          goto LAB_00189586;
        }
        if ((iVar3 == 9) || (iVar3 == 0)) {
          param_1[10] = 8;
LAB_00189570:
          param_1[2] = uVar8;
          return 1;
        }
        lVar6 = lVar5 + 1;
        if ((cVar2 == '\n') || (cVar2 == '\r')) {
          if ((local_38 & 0x2000) == 0) {
            param_1[10] = 4;
            goto LAB_00189570;
          }
LAB_001893fd:
          uVar7 = uVar8 + 1;
LAB_00189401:
          local_60 = local_40;
          lVar5 = lVar6;
        }
        else {
          if (cVar2 != '\\') goto LAB_001893fd;
          uVar1 = uVar8 + 1;
          if (uVar1 == local_48) {
            param_1[10] = 7;
            goto LAB_0018954e;
          }
          switch(*(undefined1 *)(local_50 + uVar1)) {
          case 0x22:
          case 0x2f:
          case 0x5c:
          case 0x62:
          case 0x66:
          case 0x6e:
          case 0x72:
          case 0x74:
            uVar7 = uVar8 + 2;
            goto LAB_00189401;
          default:
switchD_001893e4_caseD_23:
            param_1[10] = 4;
            param_1[2] = uVar1;
            return 1;
          case 0x75:
            uVar7 = uVar8 + 6;
            if (local_48 <= uVar7) goto switchD_001893e4_caseD_23;
            local_60 = 0;
            uVar4 = json_hexadecimal_value(uVar8 + local_50 + 2,4,&local_60);
            if ((int)uVar4 == 0) goto switchD_001893e4_caseD_23;
            if (local_40 == 0) {
              if (0x7f < local_60) {
                if (local_60 < 0x800) {
                  lVar5 = lVar5 + 2;
                }
                else {
                  if ((local_60 & 0xfffffffffffffc00) == 0xd800) {
                    if (((local_48 < uVar8 + 0xc) || (*(char *)(local_50 + uVar7) != '\\')) ||
                       (lVar5 = lVar6, *(char *)(uVar8 + 7 + local_50) != 'u'))
                    goto switchD_001893e4_caseD_23;
                    break;
                  }
                  if ((local_60 & 0xfffffffffffff800) == 0xd800) goto switchD_001893e4_caseD_23;
                  lVar5 = lVar5 + 3;
                }
                goto LAB_001894a2;
              }
              local_60 = 0;
              lVar5 = lVar6;
            }
            else {
              if ((local_60 & 0xfffffffffffffc00) != 0xdc00) goto switchD_001893e4_caseD_23;
              lVar5 = lVar5 + 4;
LAB_001894a2:
              local_60 = 0;
            }
          }
        }
        local_40 = local_60;
        uVar8 = uVar7;
      } while (uVar7 < local_48);
    }
    else {
      lVar5 = 0;
    }
    uVar8 = uVar7;
    if (uVar7 == local_48) {
LAB_00189542:
      param_1[10] = 7;
      local_48 = local_48 - 1;
LAB_0018954e:
      param_1[2] = local_48;
      uVar4 = 1;
    }
    else {
LAB_00189586:
      param_1[7] = param_1[7] + lVar5 + 1;
      param_1[2] = uVar8 + 1;
      uVar4 = 0;
    }
  }
  else {
    param_1[10] = 3;
    uVar4 = 1;
  }
  return uVar4;
}


