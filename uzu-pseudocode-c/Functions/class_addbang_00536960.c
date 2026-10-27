// Function : class_addbang
// Namespace: 
// Entry    : 00536960
// Prototype: undefined class_addbang(long param_1, undefined8 param_2)
// Body     : 00536960 - 00536969


void class_addbang(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
  }
  return;
}


