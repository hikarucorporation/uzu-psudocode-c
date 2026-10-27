// Function : json_write_string
// Namespace: 
// Entry    : 0018bc50
// Prototype: char * json_write_string(long * param_1, undefined1 * param_2)
// Body     : 0018bc50 - 0018bd00


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_string(json_string_s const*, char*) */

char * __cdecl json_write_string(long *param_1,undefined1 *param_2)

{
  char cVar1;
  char *pcVar2;
  ulong uVar3;
  
  *param_2 = 0x22;
  pcVar2 = param_2 + 1;
  if (param_1[1] != 0) {
    uVar3 = 0;
    do {
      cVar1 = *(char *)(*param_1 + uVar3);
      switch((int)cVar1) {
      case 8:
        pcVar2[0] = '\\';
        pcVar2[1] = 'b';
        pcVar2 = pcVar2 + 2;
        break;
      case 9:
        pcVar2[0] = '\\';
        pcVar2[1] = 't';
        pcVar2 = pcVar2 + 2;
        break;
      case 10:
        pcVar2[0] = '\\';
        pcVar2[1] = 'n';
        pcVar2 = pcVar2 + 2;
        break;
      case 0xb:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
switchD_0018bca5_caseD_b:
        *pcVar2 = cVar1;
        pcVar2 = pcVar2 + 1;
        break;
      case 0xc:
        pcVar2[0] = '\\';
        pcVar2[1] = 'f';
        pcVar2 = pcVar2 + 2;
        break;
      case 0xd:
        pcVar2[0] = '\\';
        pcVar2[1] = 'r';
        pcVar2 = pcVar2 + 2;
        break;
      case 0x22:
        pcVar2[0] = '\\';
        pcVar2[1] = '\"';
        pcVar2 = pcVar2 + 2;
        break;
      default:
        if (cVar1 != 0x5c) goto switchD_0018bca5_caseD_b;
        pcVar2[0] = '\\';
        pcVar2[1] = '\\';
        pcVar2 = pcVar2 + 2;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (ulong)param_1[1]);
  }
  *pcVar2 = '\"';
  return pcVar2 + 1;
}


