// Function : table_new
// Namespace: 
// Entry    : 00549600
// Prototype: undefined table_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 * param_9)
// Body     : 00549600 - 00549618


void table_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              undefined8 *param_9)

{
  table_donew(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
              (int)(float)param_1,0,0,500,300);
  return;
}


