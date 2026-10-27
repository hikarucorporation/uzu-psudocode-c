// Function : sys_get_midi_apis
// Namespace: 
// Entry    : 0055d700
// Prototype: undefined sys_get_midi_apis(undefined2 * param_1)
// Body     : 0055d700 - 0055d709


void sys_get_midi_apis(undefined2 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x7d7b;
  return;
}


