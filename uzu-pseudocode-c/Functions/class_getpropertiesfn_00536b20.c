// Function : class_getpropertiesfn
// Namespace: 
// Entry    : 00536b20
// Prototype: undefined8 class_getpropertiesfn(long param_1)
// Body     : 00536b20 - 00536b2f


undefined8 class_getpropertiesfn(long param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x80);
}


