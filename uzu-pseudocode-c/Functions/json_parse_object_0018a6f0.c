// Function : json_parse_object
// Namespace: 
// Entry    : 0018a6f0
// Prototype: undefined json_parse_object(long * param_1, int param_2, undefined8 * param_3)
// Body     : 0018a6f0 - 0018a8ee


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_parse_object(json_parse_state_s*, int, json_object_s*) */

void __cdecl json_parse_object(long *param_1,int param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long local_48;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  if ((param_2 == 0) || (*(char *)(lVar1 + param_1[2]) == '{')) {
    param_1[2] = param_1[2] + 1;
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  uVar3 = param_1[3];
  json_skip_all_skippables(param_1);
  if ((ulong)param_1[2] < uVar2) {
    local_48 = 0;
    bVar7 = false;
    puVar12 = (undefined8 *)0x0;
    do {
      while( true ) {
        uVar9 = json_skip_all_skippables(param_1);
        if (bVar8) {
          if (*(char *)(lVar1 + param_1[2]) == '}') {
            param_1[2] = param_1[2] + 1;
            goto LAB_0018a8b1;
          }
        }
        else if ((int)uVar9 != 0) goto LAB_0018a8b1;
        if ((!bVar7) || (*(char *)(lVar1 + param_1[2]) != ',')) break;
        uVar10 = param_1[2] + 1;
        param_1[2] = uVar10;
        bVar7 = false;
        if (uVar2 <= uVar10) goto LAB_0018a8b1;
      }
      puVar4 = (undefined8 *)param_1[5];
      puVar11 = puVar12 + 2;
      if (puVar12 == (undefined8 *)0x0) {
        puVar11 = param_3;
      }
      *puVar11 = puVar4;
      if ((uVar3 & 0x80) == 0) {
        param_1[5] = (long)(puVar4 + 5);
      }
      else {
        param_1[5] = (long)(puVar4 + 8);
        lVar6 = param_1[2];
        puVar4[5] = lVar6;
        puVar4[6] = param_1[8];
        puVar4[7] = lVar6 - param_1[9];
      }
      *puVar4 = puVar4 + 3;
      json_parse_key(param_1,puVar4 + 3);
      json_skip_all_skippables(param_1);
      param_1[2] = param_1[2] + 1;
      json_skip_all_skippables(param_1);
      plVar5 = (long *)param_1[5];
      if ((uVar3 & 0x80) == 0) {
        param_1[5] = (long)(plVar5 + 2);
      }
      else {
        param_1[5] = (long)(plVar5 + 5);
        lVar6 = param_1[2];
        plVar5[2] = lVar6;
        plVar5[3] = param_1[8];
        plVar5[4] = lVar6 - param_1[9];
      }
      puVar4[1] = plVar5;
      json_parse_value(param_1,0,plVar5);
      local_48 = local_48 + 1;
      bVar7 = true;
      puVar12 = puVar4;
    } while ((ulong)param_1[2] < uVar2);
LAB_0018a8b1:
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[2] = 0;
    }
    if (local_48 != 0) goto LAB_0018a8d7;
  }
  *param_3 = 0;
  local_48 = 0;
LAB_0018a8d7:
  param_3[1] = local_48;
  return;
}


