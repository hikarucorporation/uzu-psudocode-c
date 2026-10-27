// Function : abs_float
// Namespace: 
// Entry    : 005799d0
// Prototype: undefined abs_float(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005799d0 - 005799df


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void abs_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  outlet_float(CONCAT44((uint)(param_1 >> 0x20) & _UNK_005d91c4,(uint)param_1 & _DAT_005d91c0),
               param_2,param_3,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x18));
  return;
}


