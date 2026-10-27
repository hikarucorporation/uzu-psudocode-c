// Function : soundfile_clear
// Namespace: 
// Entry    : 00599d50
// Prototype: undefined soundfile_clear(undefined8 * param_1)
// Body     : 00599d50 - 00599d72


void soundfile_clear(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  param_1[6] = 0x7fffffffffffffff;
  return;
}


