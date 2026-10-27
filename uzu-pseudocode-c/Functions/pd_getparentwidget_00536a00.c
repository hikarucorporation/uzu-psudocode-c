// Function : pd_getparentwidget
// Namespace: 
// Entry    : 00536a00
// Prototype: undefined8 pd_getparentwidget(long * param_1)
// Body     : 00536a00 - 00536a07


undefined8 pd_getparentwidget(long *param_1)

{
  return *(undefined8 *)(*param_1 + 0x70);
}


