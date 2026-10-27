// Function : logpost
// Namespace: 
// Entry    : 00547610
// Prototype: undefined logpost(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, char * param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14, undefined1 param_15)
// Body     : 00547610 - 005476e4


void logpost(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,uint param_10,char *param_11,undefined8 param_12,undefined8 param_13,
            undefined8 param_14,undefined1 param_15)

{
  char in_AL;
  size_t sVar1;
  undefined8 *puVar2;
  undefined8 extraout_XMM0_Qa;
  undefined8 local_4d8;
  undefined1 *local_4d0;
  undefined1 *local_4c8;
  undefined1 local_4b8 [24];
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_458;
  undefined8 local_448;
  undefined8 local_438;
  undefined8 local_428;
  undefined8 local_418;
  char local_408 [1008];
  
  puVar2 = &local_4d8;
  if (in_AL != '\0') {
    local_488 = param_1;
    local_478 = param_2;
    local_468 = param_3;
    local_458 = param_4;
    local_448 = param_5;
    local_438 = param_6;
    local_428 = param_7;
    local_418 = param_8;
  }
  if (((int)param_10 < 4) || (*(int *)PTR_sys_verbose_00715ce0 != 0)) {
    local_4c8 = local_4b8;
    local_4d0 = &param_15;
    local_4d8 = 0x3000000018;
    local_4a0 = param_12;
    local_498 = param_13;
    local_490 = param_14;
    vsnprintf(local_408,999,param_11,&local_4d8);
    sVar1 = strlen(local_408);
    (local_408 + sVar1)[0] = '\n';
    (local_408 + sVar1)[1] = '\0';
    dologpost(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              param_10,local_408,puVar2,param_13,param_14);
  }
  return;
}


