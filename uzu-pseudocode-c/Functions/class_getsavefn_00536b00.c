// Function : class_getsavefn
// Namespace: 
// Entry    : 00536b00
// Prototype: undefined8 class_getsavefn(long param_1)
// Body     : 00536b00 - 00536b0c


undefined8 class_getsavefn(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x78);
}


