// Function : helmholtz_tick
// Namespace: 
// Entry    : 00572b90
// Prototype: undefined helmholtz_tick(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00572b90 - 00572bb0


/* WARNING: Unknown calling convention: __cdecl */
/* helmholtz_tick(t_helmholtz*) */

void __cdecl
helmholtz_tick(undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  outlet_float((ulong)*(uint *)(param_9 + 0x50),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x40));
  outlet_float((ulong)*(uint *)(param_9 + 0x54),param_2,param_3,param_4,param_5,param_6,param_7,
               param_8,*(long **)(param_9 + 0x48));
  return;
}


