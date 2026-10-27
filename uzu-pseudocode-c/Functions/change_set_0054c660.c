// Function : change_set
// Namespace: 
// Entry    : 0054c660
// Prototype: undefined change_set(undefined4 param_1, long param_2)
// Body     : 0054c660 - 0054c665


void change_set(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x30) = param_1;
  return;
}


