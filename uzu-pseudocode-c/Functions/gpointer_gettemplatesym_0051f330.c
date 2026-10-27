// Function : gpointer_gettemplatesym
// Namespace: 
// Entry    : 0051f330
// Prototype: undefined8 gpointer_gettemplatesym(long * param_1)
// Body     : 0051f330 - 0051f357


undefined8 gpointer_gettemplatesym(long *param_1)

{
  if ((int)((long *)param_1[2])[1] != 1) {
    return *(undefined8 *)(*(long *)param_1[2] + 0x10);
  }
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(*param_1 + 0x10);
}


