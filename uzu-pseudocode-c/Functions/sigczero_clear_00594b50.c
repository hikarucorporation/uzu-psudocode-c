// Function : sigczero_clear
// Namespace: 
// Entry    : 00594b50
// Prototype: undefined sigczero_clear(long param_1)
// Body     : 00594b50 - 00594b58


void sigczero_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x34) = 0;
  return;
}


