// Function : line_set
// Namespace: 
// Entry    : 0055c650
// Prototype: undefined line_set(undefined4 param_1, long param_2)
// Body     : 0055c650 - 0055c67c


void line_set(undefined4 param_1,long param_2)

{
  clock_unset(*(double **)(param_2 + 0x30));
  *(undefined4 *)(param_2 + 0x50) = param_1;
  *(undefined4 *)(param_2 + 0x40) = param_1;
  return;
}


