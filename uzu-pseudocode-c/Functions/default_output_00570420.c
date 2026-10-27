// Function : default_output
// Namespace: 
// Entry    : 00570420
// Prototype: undefined default_output(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, double param_5, double param_6, double param_7, undefined8 param_8, long param_9)
// Body     : 00570420 - 00570440


void default_output(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,double param_6,double param_7,undefined8 param_8,long param_9)

{
  uint *in_R8;
  uint *in_R9;
  
  if (*(undefined8 **)(param_9 + 0x60) == (undefined8 *)0x0) {
    outlet_bang(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                *(long **)(param_9 + 0x18));
    return;
  }
  outlet_anything(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                  *(long **)(param_9 + 0x18),*(undefined8 **)(param_9 + 0x60),
                  *(uint *)(param_9 + 0x40),*(int **)(param_9 + 0x48),in_R8,in_R9);
  return;
}


