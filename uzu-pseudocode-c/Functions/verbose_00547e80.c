// Function : verbose
// Namespace: 
// Entry    : 00547e80
// Prototype: undefined verbose(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, int param_9, char * param_10, undefined8 param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00547e80 - 00547f6a


void verbose(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,int param_9,
            char *param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
            undefined8 param_14,undefined1 param_15)

{
  int iVar1;
  char in_AL;
  size_t sVar2;
  undefined8 *puVar3;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined1 local_4a8 [16];
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 local_428;
  undefined8 local_418;
  undefined8 local_408;
  char local_3f8 [1000];
  
  puVar3 = &local_4c8;
  if (in_AL == '\0') {
    iVar1 = *(int *)PTR_sys_verbose_00715ce0;
  }
  else {
    iVar1 = *(int *)PTR_sys_verbose_00715ce0;
    local_478 = param_1;
    local_468 = param_2;
    local_458 = param_3;
    local_448 = param_4;
    local_438 = param_5;
    local_428 = param_6;
    local_418 = param_7;
    local_408 = param_8;
  }
  if (iVar1 < param_9) {
    return;
  }
  local_4b8 = local_4a8;
  local_4c0 = &param_15;
  local_4c8 = 0x3000000010;
  local_498 = param_11;
  local_490 = param_12;
  local_488 = param_13;
  local_480 = param_14;
  vsnprintf(local_3f8,999,param_10,&local_4c8);
  sVar2 = strlen(local_3f8);
  (local_3f8 + sVar2)[0] = '\n';
  (local_3f8 + sVar2)[1] = '\0';
  dologpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,param_9 + 3,
            local_3f8,puVar3,param_13,param_14);
  return;
}


