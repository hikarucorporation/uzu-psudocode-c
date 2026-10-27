// Function : highpass_clear
// Namespace: 
// Entry    : 005631b0
// Prototype: undefined highpass_clear(long param_1)
// Body     : 005631b0 - 005631bb


void highpass_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}


