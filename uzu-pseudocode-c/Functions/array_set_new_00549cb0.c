// Function : array_set_new
// Namespace: 
// Entry    : 00549cb0
// Prototype: undefined array_set_new(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9, uint param_10, long param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00549cb0 - 00549cdf


void array_set_new(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,uint param_10,long param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  uint local_c;
  long local_8;
  
  local_c = param_10;
  local_8 = param_11;
  array_rangeop_new(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,array_set_class,
                    &local_c,&local_8,1,(char *)0x0,param_14);
  return;
}


