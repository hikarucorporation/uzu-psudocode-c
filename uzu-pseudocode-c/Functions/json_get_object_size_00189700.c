// Function : json_get_object_size
// Namespace: 
// Entry    : 00189700
// Prototype: undefined8 json_get_object_size(long * param_1, int param_2)
// Body     : 00189700 - 00189b3c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_get_object_size(json_parse_state_s*, int) */

undefined8 __cdecl json_get_object_size(long *param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long *local_38;
  
  uVar2 = param_1[3];
  lVar3 = *param_1;
  uVar4 = param_1[1];
  if (param_2 == 0) {
    lVar8 = param_1[2];
  }
  else {
    uVar5 = json_skip_all_skippables(param_1);
    if (((int)uVar5 != 0) || (lVar8 = param_1[2], *(char *)(*param_1 + lVar8) != '{')) {
      param_1[6] = param_1[6] + 0x10;
      lVar8 = 0;
      bVar7 = false;
      do {
        uVar5 = json_skip_all_skippables(param_1);
        if ((int)uVar5 != 0) break;
        if (bVar7) {
          uVar6 = param_1[2];
          if (*(char *)(lVar3 + uVar6) == ',') {
            uVar6 = uVar6 + 1;
            param_1[2] = uVar6;
          }
          else if ((uVar2 & 0x10) == 0) goto LAB_00189b06;
          bVar7 = false;
          if ((uVar2 & 1) == 0) {
            uVar5 = json_skip_all_skippables(param_1);
            if ((int)uVar5 == 0) goto LAB_001897c2;
            goto LAB_00189857;
          }
        }
        else {
LAB_001897c2:
          uVar5 = json_get_key_size(param_1);
          if ((int)uVar5 != 0) goto LAB_00189af2;
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
          cVar1 = *(char *)(lVar3 + param_1[2]);
          if ((uVar2 & 8) == 0) {
            if (cVar1 != ':') goto LAB_00189afc;
          }
          else if ((cVar1 != ':') && (cVar1 != '=')) goto LAB_00189afc;
          param_1[2] = param_1[2] + 1;
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
          uVar5 = json_get_value_size(param_1,0);
          if ((int)uVar5 != 0) {
            return 1;
          }
          lVar8 = lVar8 + 1;
          uVar6 = param_1[2];
          bVar7 = true;
        }
      } while (uVar6 < uVar4);
      goto LAB_00189b1d;
    }
  }
  if (*(char *)(lVar3 + lVar8) != '{') {
    param_1[10] = 0xb;
    return 1;
  }
  param_1[2] = lVar8 + 1U;
  param_1[6] = param_1[6] + 0x10;
  if (lVar8 + 1U != uVar4) {
    if ((uVar2 & 8) == 0) {
      lVar8 = 0;
      bVar7 = false;
      do {
        uVar5 = json_skip_all_skippables(param_1);
        if ((int)uVar5 != 0) goto LAB_00189857;
        uVar6 = param_1[2];
        if (*(char *)(lVar3 + uVar6) == '}') goto LAB_00189b15;
        if (bVar7) {
          if (*(char *)(lVar3 + uVar6) == ',') {
            uVar6 = uVar6 + 1;
            param_1[2] = uVar6;
          }
          else if ((uVar2 & 0x10) == 0) {
LAB_00189b06:
            param_1[10] = 1;
            return 1;
          }
          bVar7 = false;
          if ((uVar2 & 1) == 0) {
            uVar5 = json_skip_all_skippables(param_1);
            if ((int)uVar5 == 0) goto LAB_001898ed;
            goto LAB_00189857;
          }
        }
        else {
LAB_001898ed:
          uVar5 = json_get_key_size(param_1);
          if ((int)uVar5 != 0) {
LAB_00189af2:
            param_1[10] = 8;
            return 1;
          }
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
          if (*(char *)(lVar3 + param_1[2]) != ':') {
LAB_00189afc:
            param_1[10] = 2;
            return 1;
          }
          param_1[2] = param_1[2] + 1;
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
          uVar5 = json_get_value_size(param_1,0);
          if ((int)uVar5 != 0) {
            return 1;
          }
          lVar8 = lVar8 + 1;
          uVar6 = param_1[2];
          bVar7 = true;
        }
      } while (uVar6 < uVar4);
    }
    else if ((uVar2 & 1) == 0) {
      bVar7 = true;
      lVar8 = 0;
      do {
        uVar5 = json_skip_all_skippables(param_1);
        if ((int)uVar5 != 0) goto LAB_00189857;
        uVar6 = param_1[2];
        if (*(char *)(lVar3 + uVar6) == '}') goto LAB_00189b15;
        if (!bVar7) {
          if (*(char *)(lVar3 + uVar6) == ',') {
            param_1[2] = uVar6 + 1;
          }
          else if ((uVar2 & 0x10) == 0) goto LAB_00189b06;
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
        }
        uVar5 = json_get_key_size(param_1);
        if ((int)uVar5 != 0) goto LAB_00189af2;
        uVar5 = json_skip_all_skippables(param_1);
        if ((int)uVar5 != 0) goto LAB_00189857;
        cVar1 = *(char *)(lVar3 + param_1[2]);
        if ((cVar1 != '=') && (cVar1 != ':')) goto LAB_00189afc;
        param_1[2] = param_1[2] + 1;
        uVar5 = json_skip_all_skippables(param_1);
        if ((int)uVar5 != 0) goto LAB_00189857;
        uVar5 = json_get_value_size(param_1,0);
        if ((int)uVar5 != 0) {
          return 1;
        }
        lVar8 = lVar8 + 1;
        uVar6 = param_1[2];
        bVar7 = false;
      } while (uVar6 < uVar4);
    }
    else {
      lVar8 = 0;
      bVar7 = false;
      do {
        uVar5 = json_skip_all_skippables(param_1);
        if ((int)uVar5 != 0) goto LAB_00189857;
        uVar6 = param_1[2];
        if (*(char *)(lVar3 + uVar6) == '}') goto LAB_00189b15;
        if (bVar7) {
          if (*(char *)(lVar3 + uVar6) == ',') {
            uVar6 = uVar6 + 1;
            param_1[2] = uVar6;
            bVar7 = false;
          }
          else {
            bVar7 = false;
            if ((uVar2 & 0x10) == 0) goto LAB_00189b06;
          }
        }
        else {
          uVar5 = json_get_key_size(param_1);
          if ((int)uVar5 != 0) goto LAB_00189af2;
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
          cVar1 = *(char *)(lVar3 + param_1[2]);
          if ((cVar1 != ':') && (cVar1 != '=')) goto LAB_00189afc;
          param_1[2] = param_1[2] + 1;
          uVar5 = json_skip_all_skippables(param_1);
          if ((int)uVar5 != 0) goto LAB_00189857;
          uVar5 = json_get_value_size(param_1,0);
          if ((int)uVar5 != 0) {
            return 1;
          }
          lVar8 = lVar8 + 1;
          uVar6 = param_1[2];
          bVar7 = true;
        }
      } while (uVar6 < uVar4);
    }
    if (uVar6 != uVar4) goto LAB_00189b1d;
  }
LAB_00189857:
  param_1[10] = 7;
  return 1;
LAB_00189b15:
  param_1[2] = uVar6 + 1;
LAB_00189b1d:
  local_38 = param_1 + 6;
  *local_38 = *local_38 + lVar8 * 0x18;
  return 0;
}


