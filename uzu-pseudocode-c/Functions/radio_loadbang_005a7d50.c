// Function : radio_loadbang
// Namespace: 
// Entry    : 005a7d50
// Prototype: undefined radio_loadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005a7d50 - 005a7d66


void radio_loadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  if (((float)param_1 == 0.0) && ((*(byte *)(param_9 + 0x448) & 1) != 0)) {
    radio_bang(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    return;
  }
  return;
}


