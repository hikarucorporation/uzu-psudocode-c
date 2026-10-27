// Function : spigot_list
// Namespace: 
// Entry    : 0054e270
// Prototype: undefined spigot_list(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, undefined8 param_10, undefined4 param_11, undefined8 param_12, char * param_13, undefined8 param_14)
// Body     : 0054e270 - 0054e282


void spigot_list(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
                char *param_13,undefined8 param_14)

{
  if (*(float *)(param_9 + 0x30) == 0.0) {
    return;
  }
  outlet_list(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18),
              param_10,param_11,param_12,param_13,param_14);
  return;
}


