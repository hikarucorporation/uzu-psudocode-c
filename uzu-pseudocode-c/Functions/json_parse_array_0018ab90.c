// Function : json_parse_array
// Namespace: 
// Entry    : 0018ab90
// Prototype: undefined json_parse_array(long * param_1, long * param_2)
// Body     : 0018ab90 - 0018acc5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_parse_array(json_parse_state_s*, json_array_s*) */

void __cdecl json_parse_array(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  bool bVar5;
  long *plVar6;
  undefined8 *puVar7;
  long local_48;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  param_1[2] = param_1[2] + 1;
  json_skip_all_skippables(param_1);
  bVar5 = false;
  local_48 = 0;
  puVar7 = (undefined8 *)0x0;
  do {
    while( true ) {
      json_skip_all_skippables(param_1);
      lVar3 = param_1[2];
      if (*(char *)(lVar1 + lVar3) == ']') {
        param_1[2] = lVar3 + 1;
        goto LAB_0018ac8c;
      }
      if ((!bVar5) || (*(char *)(lVar1 + lVar3) != ',')) break;
      param_1[2] = lVar3 + 1U;
      bVar5 = false;
      if (uVar2 <= lVar3 + 1U) goto LAB_0018ac8c;
    }
    puVar4 = (undefined8 *)param_1[5];
    plVar6 = puVar7 + 1;
    if (puVar7 == (undefined8 *)0x0) {
      plVar6 = param_2;
    }
    *plVar6 = (long)puVar4;
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      param_1[5] = (long)(puVar4 + 4);
    }
    else {
      param_1[5] = (long)(puVar4 + 7);
      puVar4[4] = lVar3;
      puVar4[5] = param_1[8];
      puVar4[6] = lVar3 - param_1[9];
    }
    *puVar4 = puVar4 + 2;
    json_parse_value(param_1,0,puVar4 + 2);
    local_48 = local_48 + 1;
    bVar5 = true;
    puVar7 = puVar4;
  } while ((ulong)param_1[2] < uVar2);
LAB_0018ac8c:
  if (puVar7 != (undefined8 *)0x0) {
    puVar7[1] = 0;
  }
  if (local_48 == 0) {
    *param_2 = 0;
  }
  param_2[1] = local_48;
  return;
}


