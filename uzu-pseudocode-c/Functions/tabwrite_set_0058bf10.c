// Function : tabwrite_set
// Namespace: 
// Entry    : 0058bf10
// Prototype: undefined tabwrite_set(long param_1, undefined8 param_2)
// Body     : 0058bf10 - 0058bf14


void tabwrite_set(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x30) = param_2;
  return;
}


