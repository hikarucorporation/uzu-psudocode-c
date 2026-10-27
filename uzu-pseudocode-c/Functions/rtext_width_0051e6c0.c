// Function : rtext_width
// Namespace: 
// Entry    : 0051e6c0
// Prototype: uint rtext_width(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long * param_9)
// Body     : 0051e6c0 - 0051e6f2


uint rtext_width(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long *param_9)

{
  byte *in_R9;
  uint local_c [3];
  
  local_c[0] = 0;
  local_c[1] = 0;
  rtext_senditup(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0,local_c,
                 local_c + 1,(int *)(local_c + 2),in_R9);
  return local_c[0];
}


