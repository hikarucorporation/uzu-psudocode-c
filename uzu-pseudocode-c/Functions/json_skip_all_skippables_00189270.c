// Function : json_skip_all_skippables
// Namespace: 
// Entry    : 00189270
// Prototype: undefined8 json_skip_all_skippables(long * param_1)
// Body     : 00189270 - 001892eb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_skip_all_skippables(json_parse_state_s*) */

undefined8 __cdecl json_skip_all_skippables(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_1[1];
  if ((*(byte *)(param_1 + 3) & 0x20) == 0) {
    do {
      if (param_1[2] == lVar1) goto LAB_001892da;
      uVar2 = json_skip_whitespace(param_1);
    } while ((int)uVar2 != 0);
  }
  else {
    do {
      if ((param_1[2] == lVar1) || (uVar2 = json_skip_whitespace(param_1), param_1[2] == lVar1))
      goto LAB_001892da;
      uVar3 = json_skip_c_style_comments(param_1);
    } while ((int)uVar3 != 0 || (int)uVar2 != 0);
  }
  uVar2 = 0;
  if (param_1[2] == lVar1) {
LAB_001892da:
    param_1[10] = 7;
    uVar2 = 1;
  }
  return uVar2;
}


