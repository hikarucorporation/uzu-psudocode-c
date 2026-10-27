// Function : sigcpole_clear
// Namespace: 
// Entry    : 00594920
// Prototype: undefined sigcpole_clear(long param_1)
// Body     : 00594920 - 00594928


void sigcpole_clear(long param_1)

{
  *(undefined8 *)(param_1 + 0x34) = 0;
  return;
}


