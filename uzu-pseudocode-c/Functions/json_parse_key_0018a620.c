// Function : json_parse_key
// Namespace: 
// Entry    : 0018a620
// Prototype: undefined json_parse_key(long * param_1, long * param_2)
// Body     : 0018a620 - 0018a6e1


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_parse_key(json_parse_state_s*, json_string_s*) */

void __cdecl json_parse_key(long *param_1,long *param_2)

{
  byte *pbVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar5;
  long lVar6;
  
  if ((*(byte *)(param_1 + 3) & 2) != 0) {
    lVar2 = *param_1;
    lVar6 = param_1[2];
    if ((*(char *)(lVar2 + lVar6) != '\'') && (*(char *)(lVar2 + lVar6) != '\"')) {
      lVar3 = param_1[4];
      *param_2 = lVar3;
      bVar4 = is_valid_unquoted_key_char(*(byte *)(lVar2 + lVar6));
      if ((int)CONCAT71(extraout_var,bVar4) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = 0;
        do {
          *(undefined1 *)(lVar3 + lVar5) = *(undefined1 *)(lVar6 + lVar2 + lVar5);
          pbVar1 = (byte *)(lVar6 + lVar2 + 1 + lVar5);
          lVar5 = lVar5 + 1;
          bVar4 = is_valid_unquoted_key_char(*pbVar1);
        } while ((int)CONCAT71(extraout_var_00,bVar4) != 0);
        lVar6 = lVar6 + lVar5;
      }
      *(undefined1 *)(lVar3 + lVar5) = 0;
      param_2[1] = lVar5;
      param_1[4] = param_1[4] + lVar5 + 1;
      param_1[2] = lVar6;
      return;
    }
  }
  json_parse_string(param_1,param_2);
  return;
}


