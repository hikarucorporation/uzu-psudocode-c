// Function : rtext_gettext
// Namespace: 
// Entry    : 0051d850
// Prototype: undefined rtext_gettext(undefined8 * param_1, undefined8 * param_2, undefined4 * param_3)
// Body     : 0051d850 - 0051d85b


void rtext_gettext(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  *param_2 = *param_1;
  *param_3 = *(undefined4 *)(param_1 + 1);
  return;
}


