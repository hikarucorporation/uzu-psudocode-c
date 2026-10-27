// Function : spigot_float
// Namespace: 
// Entry    : 0054e230
// Prototype: undefined spigot_float(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054e230 - 0054e242


void spigot_float(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 long param_9)

{
  if (*(float *)(param_9 + 0x30) == 0.0) {
    return;
  }
  outlet_float(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18))
  ;
  return;
}


