// Function : garray_getscalar
// Namespace: 
// Entry    : 004f9af0
// Prototype: undefined8 garray_getscalar(long param_1)
// Body     : 004f9af0 - 004f9af4


undefined8 garray_getscalar(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


