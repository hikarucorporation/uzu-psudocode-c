// Function : loop_pause
// Namespace: 
// Entry    : 00563c80
// Prototype: undefined loop_pause(long param_1)
// Body     : 00563c80 - 00563c8f


void loop_pause(long param_1)

{
  if (*(long *)(param_1 + 0x60) == 1) {
    *(undefined8 *)(param_1 + 0x60) = 2;
  }
  return;
}


