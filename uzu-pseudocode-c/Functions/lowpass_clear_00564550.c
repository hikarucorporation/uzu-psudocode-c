// Function : lowpass_clear
// Namespace: 
// Entry    : 00564550
// Prototype: undefined lowpass_clear(long param_1)
// Body     : 00564550 - 0056455b


void lowpass_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


