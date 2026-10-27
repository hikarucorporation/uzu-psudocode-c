// Function : json_parse_string
// Namespace: 
// Entry    : 0018a360
// Prototype: undefined json_parse_string(long * param_1, long * param_2)
// Body     : 0018a360 - 0018a610


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_parse_string(json_parse_state_s*, json_string_s*) */

void __cdecl json_parse_string(long *param_1,long *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong local_48;
  long *local_40;
  long *local_38;
  
  lVar3 = *param_1;
  lVar9 = param_1[2];
  cVar1 = *(char *)(lVar3 + lVar9);
  lVar4 = param_1[4];
  *param_2 = lVar4;
  lVar9 = lVar9 + 1;
  uVar12 = 0;
  lVar11 = 0;
  local_40 = param_2;
  local_38 = param_1;
LAB_0018a3b4:
  do {
    lVar7 = lVar11;
    local_48 = uVar12;
    lVar9 = lVar9 + 3;
    do {
      lVar10 = lVar9;
      uVar12 = local_48;
      cVar2 = *(char *)(lVar3 + -3 + lVar10);
      if ((uint)(cVar1 == '\'') * 5 + 0x22 == (int)cVar2) {
        local_40[1] = lVar7;
        *(undefined1 *)(lVar4 + lVar7) = 0;
        local_38[4] = local_38[4] + lVar7 + 1;
        local_38[2] = lVar10 + -2;
        return;
      }
      if (cVar2 != '\\') {
        *(char *)(lVar4 + lVar7) = cVar2;
        lVar11 = lVar7 + 1;
        lVar9 = lVar10 + -2;
        goto LAB_0018a3ae;
      }
      iVar6 = (int)*(char *)(lVar3 + -2 + lVar10);
      if (iVar6 != 0x75) {
        switch(iVar6) {
        case 0x5c:
          *(undefined1 *)(lVar4 + lVar7) = 0x5c;
          break;
        case 0x5d:
        case 0x5e:
        case 0x5f:
        case 0x60:
        case 0x61:
        case 99:
        case 100:
        case 0x65:
        case 0x67:
        case 0x68:
        case 0x69:
        case 0x6a:
        case 0x6b:
        case 0x6c:
        case 0x6d:
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x73:
switchD_0018a4c6_caseD_5d:
          return;
        case 0x62:
          *(undefined1 *)(lVar4 + lVar7) = 8;
          break;
        case 0x66:
          *(undefined1 *)(lVar4 + lVar7) = 0xc;
          break;
        case 0x6e:
switchD_0018a4c6_caseD_6e:
          *(undefined1 *)(lVar4 + lVar7) = 10;
          break;
        case 0x72:
          *(undefined1 *)(lVar4 + lVar7) = 0xd;
          break;
        case 0x74:
          *(undefined1 *)(lVar4 + lVar7) = 9;
          break;
        default:
          switch(iVar6) {
          case 10:
            goto switchD_0018a4c6_caseD_6e;
          default:
            goto switchD_0018a4c6_caseD_5d;
          case 0xd:
            *(undefined1 *)(lVar4 + lVar7) = 0xd;
            lVar9 = lVar10 + -1;
            lVar11 = lVar7 + 1;
            if (*(char *)(lVar3 + -1 + lVar10) != '\n') goto LAB_0018a3b4;
            *(undefined1 *)(lVar4 + 1 + lVar7) = 10;
            lVar11 = lVar7 + 2;
            lVar9 = lVar10;
            goto LAB_0018a3ae;
          case 0x22:
            *(undefined1 *)(lVar4 + lVar7) = 0x22;
            break;
          case 0x2f:
            *(undefined1 *)(lVar4 + lVar7) = 0x2f;
          }
        }
        lVar11 = lVar7 + 1;
        lVar9 = lVar10 + -1;
        goto LAB_0018a3ae;
      }
      local_48 = 0;
      uVar8 = json_hexadecimal_value(lVar3 + lVar10 + -1,4,&local_48);
      if ((int)uVar8 == 0) {
        return;
      }
      bVar5 = (byte)local_48;
      if (local_48 < 0x80) {
        *(byte *)(lVar4 + lVar7) = bVar5;
        lVar11 = lVar7 + 1;
        goto LAB_0018a5ce;
      }
      if (local_48 < 0x800) {
        *(byte *)(lVar4 + lVar7) = (byte)(local_48 >> 6) | 0xc0;
        *(byte *)(lVar4 + 1 + lVar7) = bVar5 & 0x3f | 0x80;
        lVar11 = lVar7 + 2;
        goto LAB_0018a5ce;
      }
      lVar9 = lVar10 + 6;
    } while ((local_48 & 0xfffffffffffffc00) == 0xd800);
    if ((local_48 & 0xfffffffffffffc00) == 0xdc00) {
      uVar12 = uVar12 * 0x400 + local_48 + 0xfca02400;
      *(byte *)(lVar4 + lVar7) = (byte)(uVar12 >> 0x12) | 0xf0;
      *(byte *)(lVar4 + 1 + lVar7) = (byte)(uVar12 >> 0xc) & 0x3f | 0x80;
      *(byte *)(lVar4 + 2 + lVar7) = (byte)(uVar12 >> 6) & 0x3f | 0x80;
      local_48._0_1_ = (byte)uVar12;
      *(byte *)(lVar4 + 3 + lVar7) = (byte)local_48 & 0x3f | 0x80;
      lVar9 = lVar10 + 3;
      uVar12 = 0;
      lVar11 = lVar7 + 4;
    }
    else {
      *(byte *)(lVar4 + lVar7) = (byte)(local_48 >> 0xc) | 0xe0;
      *(byte *)(lVar4 + 1 + lVar7) = (byte)(local_48 >> 6) & 0x3f | 0x80;
      *(byte *)(lVar4 + 2 + lVar7) = bVar5 & 0x3f | 0x80;
      lVar11 = lVar7 + 3;
LAB_0018a5ce:
      lVar9 = lVar10 + 3;
LAB_0018a3ae:
    }
  } while( true );
}


