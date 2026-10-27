// Function : resample_free
// Namespace: 
// Entry    : 00573cb0
// Prototype: undefined resample_free(long param_1)
// Body     : 00573cb0 - 00573d24


void resample_free(long param_1)

{
  if (*(int *)(param_1 + 0x18) != 0) {
    freebytes(*(void **)(param_1 + 0x10));
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    freebytes(*(void **)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    freebytes(*(void **)(param_1 + 0x30));
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


