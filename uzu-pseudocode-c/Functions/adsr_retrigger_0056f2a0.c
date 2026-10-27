// Function : adsr_retrigger
// Namespace: 
// Entry    : 0056f2a0
// Prototype: undefined adsr_retrigger(long param_1)
// Body     : 0056f2a0 - 0056f2bd


void adsr_retrigger(long param_1)

{
  if (**(int **)(param_1 + 0xb8) != 0) {
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  return;
}


