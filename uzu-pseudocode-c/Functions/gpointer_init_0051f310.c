// Function : gpointer_init
// Namespace: 
// Entry    : 0051f310
// Prototype: undefined gpointer_init(undefined8 * param_1)
// Body     : 0051f310 - 0051f326


void gpointer_init(undefined8 *param_1)

{
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


