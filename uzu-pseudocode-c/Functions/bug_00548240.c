// Function : bug
// Namespace: 
// Entry    : 00548240
// Prototype: undefined bug(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, char * param_9, undefined8 param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00548240 - 005482fa


void bug(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
        undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,char *param_9,
        undefined8 param_10,undefined8 param_11,undefined8 param_12,char *param_13,
        undefined8 param_14,undefined1 param_15)

{
  char in_AL;
  undefined8 *puVar1;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_4c8;
  undefined1 *local_4c0;
  undefined1 *local_4b8;
  undefined1 local_4a8 [8];
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  char *local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 local_428;
  undefined8 local_418;
  undefined8 local_408;
  char local_3f8 [1008];
  
  puVar1 = &local_4c8;
  if (in_AL != '\0') {
    local_478 = param_1;
    local_468 = param_2;
    local_458 = param_3;
    local_448 = param_4;
    local_438 = param_5;
    local_428 = param_6;
    local_418 = param_7;
    local_408 = param_8;
  }
  local_4b8 = local_4a8;
  local_4c0 = &param_15;
  local_4c8 = 0x3000000008;
  local_4a0 = param_10;
  local_498 = param_11;
  local_490 = param_12;
  local_488 = param_13;
  local_480 = param_14;
  vsnprintf(local_3f8,999,param_9,&local_4c8);
  pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,
           "consistency check failed: %s",local_3f8,puVar1,param_13,param_14);
  return;
}


