// Function : print_bang
// Namespace: 
// Entry    : 00597a70
// Prototype: undefined print_bang(long param_1)
// Body     : 00597a70 - 00597a77


void print_bang(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 1;
  return;
}


