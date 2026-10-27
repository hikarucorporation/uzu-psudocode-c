// Function : json_skip_c_style_comments
// Namespace: 
// Entry    : 00189180
// Prototype: undefined8 json_skip_c_style_comments(long * param_1)
// Body     : 00189180 - 00189266


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_skip_c_style_comments(json_parse_state_s*) */

undefined8 __cdecl json_skip_c_style_comments(long *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  bool bVar7;
  
  lVar2 = *param_1;
  lVar3 = param_1[2];
  uVar4 = 0;
  if (*(char *)(lVar2 + lVar3) == '/') {
    param_1[2] = lVar3 + 1;
    cVar1 = *(char *)(lVar2 + 1 + lVar3);
    if (cVar1 == '*') {
      lVar6 = lVar3 + 2;
      param_1[2] = lVar6;
      uVar4 = 1;
      if (lVar3 + 3U < (ulong)param_1[1]) {
        do {
          if (*(char *)(lVar2 + lVar6) == '\n') {
            param_1[8] = param_1[8] + 1;
            param_1[9] = lVar6;
          }
          else if ((*(char *)(lVar2 + lVar6) == '*') && (*(char *)(lVar2 + 1 + lVar6) == '/')) {
            param_1[2] = lVar6 + 2;
            return uVar4;
          }
          lVar3 = lVar6 - param_1[1];
          lVar6 = lVar6 + 1;
          param_1[2] = lVar6;
        } while (lVar3 != -2);
      }
    }
    else if (cVar1 == '/') {
      param_1[2] = lVar3 + 2U;
      uVar4 = 1;
      if (lVar3 + 2U < (ulong)param_1[1]) {
        uVar5 = lVar3 + 3;
        do {
          cVar1 = *(char *)(lVar2 + -1 + uVar5);
          param_1[2] = uVar5;
          if (cVar1 == '\n') {
            param_1[8] = param_1[8] + 1;
            param_1[9] = uVar5;
            return uVar4;
          }
          bVar7 = uVar5 != param_1[1];
          uVar5 = uVar5 + 1;
        } while (bVar7);
      }
    }
  }
  return uVar4;
}


