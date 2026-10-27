// Function : class_addlist
// Namespace: 
// Entry    : 00536990
// Prototype: undefined class_addlist(long param_1, undefined8 param_2)
// Body     : 00536990 - 00536999


void class_addlist(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x58) = param_2;
  }
  return;
}


