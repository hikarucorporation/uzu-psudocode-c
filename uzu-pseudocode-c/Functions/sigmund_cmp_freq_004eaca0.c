// Function : sigmund_cmp_freq
// Namespace: 
// Entry    : 004eaca0
// Prototype: int sigmund_cmp_freq(undefined8 * param_1, undefined8 * param_2)
// Body     : 004eaca0 - 004eacbe


int sigmund_cmp_freq(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(float *)*param_1 <= *(float *)*param_2) {
    iVar1 = -(uint)(*(float *)*param_1 < *(float *)*param_2);
  }
  return iVar1;
}


