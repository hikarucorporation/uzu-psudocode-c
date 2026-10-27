// Function : class_getdspflags
// Namespace: 
// Entry    : 00537960
// Prototype: byte class_getdspflags(long param_1)
// Body     : 00537960 - 0053796a


byte class_getdspflags(long param_1)

{
  return *(byte *)(param_1 + 0x94) & 0x70;
}


