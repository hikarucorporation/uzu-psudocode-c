// Function : class_isdrawcommand
// Namespace: 
// Entry    : 00536a20
// Prototype: uint class_isdrawcommand(long param_1)
// Body     : 00536a20 - 00536a34


uint class_isdrawcommand(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 0x94) >> 3 & 1;
}


