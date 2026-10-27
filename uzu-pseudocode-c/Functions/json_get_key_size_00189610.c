// Function : json_get_key_size
// Namespace: 
// Entry    : 00189610
// Prototype: undefined8 json_get_key_size(long * param_1)
// Body     : 00189610 - 001896fc


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_get_key_size(json_parse_state_s*) */

undefined8 __cdecl json_get_key_size(long *param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined7 extraout_var;
  long lVar6;
  undefined7 extraout_var_00;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  uVar2 = param_1[3];
  if ((uVar2 & 2) != 0) {
    uVar8 = param_1[2];
    lVar7 = *param_1;
    bVar1 = *(byte *)(lVar7 + uVar8);
    if (bVar1 != 0x22) {
      uVar3 = param_1[1];
      lVar9 = param_1[7];
      if (((uVar2 & 0x100) == 0) || (bVar1 != 0x27)) {
        if ((uVar8 < uVar3) &&
           (bVar4 = is_valid_unquoted_key_char(bVar1), (int)CONCAT71(extraout_var,bVar4) != 0)) {
          lVar6 = (lVar9 + uVar3) - uVar8;
          do {
            if (uVar3 - 1 == uVar8) {
              uVar8 = uVar3;
              lVar9 = lVar6;
              break;
            }
            lVar9 = lVar9 + 1;
            bVar4 = is_valid_unquoted_key_char(*(byte *)(lVar7 + 1 + uVar8));
            uVar8 = uVar8 + 1;
          } while ((int)CONCAT71(extraout_var_00,bVar4) != 0);
        }
        lVar7 = param_1[6] + 0x10;
        if ((uVar2 & 0x80) != 0) {
          lVar7 = param_1[6] + 0x28;
        }
        param_1[6] = lVar7;
        param_1[2] = uVar8;
        param_1[7] = lVar9 + 1;
        return 0;
      }
    }
  }
  uVar5 = json_get_string_size(param_1,1);
  return uVar5;
}


