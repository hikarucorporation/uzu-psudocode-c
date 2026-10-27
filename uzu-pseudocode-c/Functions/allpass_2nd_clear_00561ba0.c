// Function : allpass_2nd_clear
// Namespace: 
// Entry    : 00561ba0
// Prototype: undefined allpass_2nd_clear(long param_1)
// Body     : 00561ba0 - 00561bab


void allpass_2nd_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


