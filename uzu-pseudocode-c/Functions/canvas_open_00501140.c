// Function : canvas_open
// Namespace: 
// Entry    : 00501140
// Prototype: int canvas_open(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, char * param_10, char * param_11, char * param_12, undefined8 * param_13, uint param_14, uint param_15)
// Body     : 00501140 - 005011e6


int canvas_open(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9,char *param_10,char *param_11,char *param_12,undefined8 *param_13,
               uint param_14,uint param_15)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  char *pcVar3;
  ulong uVar4;
  undefined8 extraout_XMM0_Qa;
  int local_64;
  char *local_60;
  char *local_58;
  char *local_50;
  undefined8 *local_48;
  uint local_40;
  uint local_3c;
  int local_38;
  
  uVar4 = (ulong)param_15;
  local_64 = -1;
  pcVar3 = (char *)(ulong)param_14;
  puVar2 = param_13;
  uVar1 = sys_open_absolute(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_10
                            ,param_11,param_12,param_13,param_14,uVar4,&local_64,1);
  if ((int)uVar1 == 0) {
    local_3c = param_15;
    local_38 = -1;
    local_60 = param_10;
    local_58 = param_11;
    local_50 = param_12;
    local_48 = param_13;
    local_40 = param_14;
    canvas_path_iterate(extraout_XMM0_Qa,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                        param_9,canvas_open_iter,(undefined *)&local_60,puVar2,pcVar3,uVar4);
    local_64 = local_38;
  }
  return local_64;
}


