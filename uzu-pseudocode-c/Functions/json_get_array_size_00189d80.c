// Function : json_get_array_size
// Namespace: 
// Entry    : 00189d80
// Prototype: undefined8 json_get_array_size(long * param_1)
// Body     : 00189d80 - 00189ff4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_get_array_size(json_parse_state_s*) */

undefined8 __cdecl json_get_array_size(long *param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  bool bVar6;
  long lVar7;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + param_1[2]) == '[') {
    uVar5 = param_1[3];
    uVar2 = param_1[1];
    uVar3 = param_1[2] + 1;
    param_1[2] = uVar3;
    param_1[6] = param_1[6] + 0x10;
    if ((uVar5 & 0x10) == 0) {
      if ((uVar5 & 1) == 0) {
        if (uVar3 < uVar2) {
          bVar6 = true;
          lVar7 = 0;
          do {
            uVar4 = json_skip_all_skippables(param_1);
            if ((int)uVar4 != 0) break;
            uVar5 = param_1[2];
            if (*(char *)(lVar1 + uVar5) == ']') {
LAB_00189fd7:
              param_1[2] = uVar5 + 1;
              param_1[6] = param_1[6] + lVar7 * 0x10;
              return 0;
            }
            if (!bVar6) {
              if (*(char *)(lVar1 + uVar5) != ',') {
LAB_00189feb:
                param_1[10] = 1;
                return 1;
              }
              param_1[2] = uVar5 + 1;
              uVar4 = json_skip_all_skippables(param_1);
              if ((int)uVar4 != 0) break;
            }
            uVar4 = json_get_value_size(param_1,0);
            if ((int)uVar4 != 0) {
              return 1;
            }
            lVar7 = lVar7 + 1;
            bVar6 = false;
          } while ((ulong)param_1[2] < uVar2);
        }
      }
      else if (uVar3 < uVar2) {
        bVar6 = true;
        lVar7 = 0;
        do {
          while( true ) {
            uVar4 = json_skip_all_skippables(param_1);
            if ((int)uVar4 != 0) goto LAB_00189fc1;
            uVar5 = param_1[2];
            if (*(char *)(lVar1 + uVar5) == ']') goto LAB_00189fd7;
            if (bVar6) break;
            if (*(char *)(lVar1 + uVar5) != ',') goto LAB_00189feb;
            param_1[2] = uVar5 + 1;
            bVar6 = true;
            if (uVar2 <= uVar5 + 1) goto LAB_00189fc1;
          }
          uVar4 = json_get_value_size(param_1,0);
          if ((int)uVar4 != 0) {
            return 1;
          }
          lVar7 = lVar7 + 1;
          bVar6 = false;
        } while ((ulong)param_1[2] < uVar2);
      }
    }
    else if ((uVar5 & 1) == 0) {
      if (uVar3 < uVar2) {
        bVar6 = true;
        lVar7 = 0;
        do {
          uVar4 = json_skip_all_skippables(param_1);
          if ((int)uVar4 != 0) break;
          uVar5 = param_1[2];
          if (*(char *)(lVar1 + uVar5) == ']') goto LAB_00189fd7;
          if (!bVar6) {
            if (*(char *)(lVar1 + uVar5) == ',') {
              param_1[2] = uVar5 + 1;
            }
            uVar4 = json_skip_all_skippables(param_1);
            if ((int)uVar4 != 0) break;
          }
          uVar4 = json_get_value_size(param_1,0);
          if ((int)uVar4 != 0) {
            return 1;
          }
          lVar7 = lVar7 + 1;
          bVar6 = false;
        } while ((ulong)param_1[2] < uVar2);
      }
    }
    else if (uVar3 < uVar2) {
      bVar6 = true;
      lVar7 = 0;
      do {
        while( true ) {
          uVar4 = json_skip_all_skippables(param_1);
          if ((int)uVar4 != 0) goto LAB_00189fc1;
          uVar5 = param_1[2];
          if (*(char *)(lVar1 + uVar5) == ']') goto LAB_00189fd7;
          if (bVar6) break;
          if (*(char *)(lVar1 + uVar5) == ',') {
            uVar5 = uVar5 + 1;
            param_1[2] = uVar5;
          }
          bVar6 = true;
          if (uVar2 <= uVar5) goto LAB_00189fc1;
        }
        uVar4 = json_get_value_size(param_1,0);
        if ((int)uVar4 != 0) {
          return 1;
        }
        lVar7 = lVar7 + 1;
        bVar6 = false;
      } while ((ulong)param_1[2] < uVar2);
    }
LAB_00189fc1:
    param_1[10] = 7;
  }
  else {
    param_1[10] = 0xb;
  }
  return 1;
}


