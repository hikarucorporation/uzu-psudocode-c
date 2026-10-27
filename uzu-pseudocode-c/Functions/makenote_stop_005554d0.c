// Function : makenote_stop
// Namespace: 
// Entry    : 005554d0
// Prototype: undefined makenote_stop(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 005554d0 - 00555527


void makenote_stop(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_9 + 0x48);
  while (puVar1 != (undefined8 *)0x0) {
    outlet_float(0,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 *(long **)(param_9 + 0x40));
    outlet_float((ulong)*(uint *)(puVar1 + 2),param_2,param_3,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x38));
    *(undefined8 *)(param_9 + 0x48) = puVar1[1];
    clock_free((double *)*puVar1);
    freebytes(puVar1);
    puVar1 = *(undefined8 **)(param_9 + 0x48);
  }
  return;
}


