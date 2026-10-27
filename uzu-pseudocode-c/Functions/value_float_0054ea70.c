// Function : value_float
// Namespace: 
// Entry    : 0054ea70
// Prototype: undefined value_float(undefined4 param_1, long param_2)
// Body     : 0054ea70 - 0054ea78


void value_float(undefined4 param_1,long param_2)

{
  **(undefined4 **)(param_2 + 0x38) = param_1;
  return;
}


