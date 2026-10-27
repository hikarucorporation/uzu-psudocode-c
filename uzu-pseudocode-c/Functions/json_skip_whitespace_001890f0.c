// Function : json_skip_whitespace
// Namespace: 
// Entry    : 001890f0
// Prototype: undefined8 json_skip_whitespace(long * param_1)
// Body     : 001890f0 - 0018917f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_skip_whitespace(json_parse_state_s*) */

undefined8 __cdecl json_skip_whitespace(long *param_1)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  cVar1 = *(char *)(*param_1 + param_1[2]);
  uVar2 = 0;
  if (((uint)(int)cVar1 < 0x21) && ((0x100002600U >> ((ulong)(uint)(int)cVar1 & 0x3f) & 1) != 0)) {
    lVar3 = param_1[2];
    while ((int)cVar1 - 9U < 0x18) {
      switch((int)cVar1 - 9U) {
      case 0:
      case 4:
      case 0x17:
        break;
      case 1:
        param_1[8] = param_1[8] + 1;
        param_1[9] = lVar3;
        break;
      default:
        goto switchD_00189137_caseD_2;
      }
      if ((ulong)param_1[1] <= lVar3 + 1U) {
        lVar3 = lVar3 + 1;
        break;
      }
      cVar1 = *(char *)(*param_1 + 1 + lVar3);
      lVar3 = lVar3 + 1;
    }
switchD_00189137_caseD_2:
    param_1[2] = lVar3;
    uVar2 = 1;
  }
  return uVar2;
}


