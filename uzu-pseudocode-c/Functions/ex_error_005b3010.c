// Function : ex_error
// Namespace: 
// Entry    : 005b3010
// Prototype: undefined ex_error(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, undefined8 param_11, undefined8 param_12, char * param_13, undefined8 param_14, undefined1 param_15)
// Body     : 005b3010 - 005b30de


void ex_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,char *param_10,undefined8 param_11,undefined8 param_12,char *param_13,
             undefined8 param_14,undefined1 param_15)

{
  char in_AL;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_4e8;
  undefined1 *local_4e0;
  undefined1 *local_4d8;
  undefined1 local_4c8 [16];
  undefined8 local_4b8;
  undefined8 local_4b0;
  char *local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_488;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 local_428;
  char local_418 [1024];
  
  if (in_AL != '\0') {
    local_498 = param_1;
    local_488 = param_2;
    local_478 = param_3;
    local_468 = param_4;
    local_458 = param_5;
    local_448 = param_6;
    local_438 = param_7;
    local_428 = param_8;
  }
  local_4b8 = param_11;
  local_4b0 = param_12;
  local_4a8 = param_13;
  local_4a0 = param_14;
  pd_error(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"expr: \'%s\'",
           *(undefined8 *)(param_9 + 0x40),param_12,param_13,param_14);
  local_4d8 = local_4c8;
  local_4e0 = &param_15;
  local_4e8 = 0x3000000010;
  vsprintf(local_418,param_10,&local_4e8);
  pd_error(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,"%s",
           local_418,param_12,param_13,param_14);
  return;
}


