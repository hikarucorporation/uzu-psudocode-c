// Function : sigfiddle_print
// Namespace: 
// Entry    : 004e0f00
// Prototype: undefined sigfiddle_print(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 004e0f00 - 004e0fab


void sigfiddle_print(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    long param_9)

{
  undefined8 uVar1;
  double dVar2;
  
  post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,"npoints %d,");
  dVar2 = (double)*(float *)(param_9 + 0x318);
  post((double)*(float *)(param_9 + 0x314),dVar2,param_3,param_4,param_5,param_6,param_7,param_8,
       "amp-range %f %f,");
  post((double)*(float *)(param_9 + 0x324),dVar2,param_3,param_4,param_5,param_6,param_7,param_8,
       "reattack %d %f,");
  post((double)*(float *)(param_9 + 0x330),dVar2,param_3,param_4,param_5,param_6,param_7,param_8,
       "vibrato %d %f");
  uVar1 = post((double)*(float *)(param_9 + 0x334),dVar2,param_3,param_4,param_5,param_6,param_7,
               param_8,"npartial %f");
  post(uVar1,dVar2,param_3,param_4,param_5,param_6,param_7,param_8,"auto %d");
  return;
}


