// Function : spigot_symbol
// Namespace: 
// Entry    : 0054e250
// Prototype: undefined spigot_symbol(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0054e250 - 0054e262


void spigot_symbol(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  if (*(float *)(param_9 + 0x30) == 0.0) {
    return;
  }
  outlet_symbol(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18)
               );
  return;
}


