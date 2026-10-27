// Function : line_tilde_stop
// Namespace: 
// Entry    : 0058f7a0
// Prototype: undefined line_tilde_stop(long param_1)
// Body     : 0058f7a0 - 0058f7b2


void line_tilde_stop(long param_1)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


