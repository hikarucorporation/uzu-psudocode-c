// Function : timer_bang2
// Namespace: 
// Entry    : 0055c980
// Prototype: undefined timer_bang2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 0055c980 - 0055c9b8


void timer_bang2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9)

{
  long *plVar1;
  double dVar2;
  double dVar3;
  
  plVar1 = *(long **)(param_9 + 0x18);
  dVar3 = (double)*(float *)(param_9 + 0x40);
  dVar2 = clock_gettimesincewithunits(*(double *)(param_9 + 0x30),dVar3,*(int *)(param_9 + 0x44));
  dVar2 = dVar2 + *(double *)(param_9 + 0x38);
  outlet_float(CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2),dVar3,param_3,param_4,param_5,
               param_6,param_7,param_8,plVar1);
  return;
}


