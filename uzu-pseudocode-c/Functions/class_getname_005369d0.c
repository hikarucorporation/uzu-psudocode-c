// Function : class_getname
// Namespace: 
// Entry    : 005369d0
// Prototype: undefined8 class_getname(undefined8 * param_1)
// Body     : 005369d0 - 005369de


undefined8 class_getname(undefined8 *param_1)

{
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  return *(undefined8 *)*param_1;
}


