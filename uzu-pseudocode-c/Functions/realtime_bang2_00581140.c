// Function : realtime_bang2
// Namespace: 
// Entry    : 00581140
// Prototype: undefined realtime_bang2(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00581140 - 0058116f


void realtime_bang2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                   long param_9)

{
  long *plVar1;
  double dVar2;
  
  plVar1 = *(long **)(param_9 + 0x18);
  dVar2 = sys_getrealtime();
  dVar2 = (dVar2 - *(double *)(param_9 + 0x30)) * DAT_006544a0;
  outlet_float(CONCAT44((int)((ulong)dVar2 >> 0x20),(float)dVar2),param_2,param_3,param_4,param_5,
               param_6,param_7,param_8,plVar1);
  return;
}


