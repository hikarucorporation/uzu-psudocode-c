// Function : class_setdrawcommand
// Namespace: 
// Entry    : 00536a10
// Prototype: undefined class_setdrawcommand(long param_1)
// Body     : 00536a10 - 00536a1c


void class_setdrawcommand(long param_1)

{
  if (param_1 != 0) {
    *(byte *)(param_1 + 0x94) = *(byte *)(param_1 + 0x94) | 8;
  }
  return;
}


