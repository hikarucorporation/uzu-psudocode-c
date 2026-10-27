// Function : vcommon_float
// Namespace: 
// Entry    : 0054eb60
// Prototype: undefined vcommon_float(undefined4 param_1, long param_2)
// Body     : 0054eb60 - 0054eb65


void vcommon_float(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xc) = param_1;
  return;
}


