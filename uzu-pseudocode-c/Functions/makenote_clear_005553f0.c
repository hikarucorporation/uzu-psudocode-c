// Function : makenote_clear
// Namespace: 
// Entry    : 005553f0
// Prototype: undefined makenote_clear(long param_1)
// Body     : 005553f0 - 0055542d


void makenote_clear(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x48);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x48) = puVar1[1];
    clock_free((double *)*puVar1);
    freebytes(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 0x48);
  }
  return;
}


