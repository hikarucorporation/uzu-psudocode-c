// Function : sigbp_clear
// Namespace: 
// Entry    : 00593d50
// Prototype: undefined sigbp_clear(long param_1)
// Body     : 00593d50 - 00593d58


void sigbp_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x3c) = 0;
  return;
}


