// Function : garray_setsaveit
// Namespace: 
// Entry    : 004fa5b0
// Prototype: undefined garray_setsaveit(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, int param_10)
// Body     : 004fa5b0 - 004fa5f3


void garray_setsaveit(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                     long param_9,int param_10)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_9 + 0x30);
  if ((param_10 == 0) && ((bVar1 & 2) != 0)) {
    post(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
         "warning: array %s: clearing save-in-patch flag");
    bVar1 = *(byte *)(param_9 + 0x30);
  }
  *(byte *)(param_9 + 0x30) = bVar1 & 0xfd | (char)param_10 * '\x02' & 2U;
  return;
}


