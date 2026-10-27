// Function : adsr_bang
// Namespace: 
// Entry    : 0056f1e0
// Prototype: undefined adsr_bang(long param_1)
// Body     : 0056f1e0 - 0056f1fe


void adsr_bang(long param_1)

{
  if (**(int **)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x34) = 1;
    return;
  }
  return;
}


