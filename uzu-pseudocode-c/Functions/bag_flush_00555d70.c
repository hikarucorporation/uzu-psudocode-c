// Function : bag_flush
// Namespace: 
// Entry    : 00555d70
// Prototype: undefined bag_flush(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00555d70 - 00555db2


void bag_flush(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
              long param_9)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_9 + 0x38);
  while (puVar1 != (undefined8 *)0x0) {
    outlet_float((ulong)*(uint *)(puVar1 + 1),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x18));
    *(undefined8 *)(param_9 + 0x38) = *puVar1;
    freebytes(puVar1);
    puVar1 = *(undefined8 **)(param_9 + 0x38);
  }
  return;
}


