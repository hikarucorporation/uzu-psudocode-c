// Function : loadbang_loadbang
// Namespace: 
// Entry    : 00580f40
// Prototype: undefined loadbang_loadbang(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00580f40 - 00580f51


void loadbang_loadbang(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                      long param_9)

{
  if ((float)param_1 == 0.0) {
    outlet_bang(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18)
               );
    return;
  }
  return;
}


