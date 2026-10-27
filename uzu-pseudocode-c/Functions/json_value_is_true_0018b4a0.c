// Function : json_value_is_true
// Namespace: 
// Entry    : 0018b4a0
// Prototype: bool json_value_is_true(long param_1)
// Body     : 0018b4a0 - 0018b4aa


bool json_value_is_true(long param_1)

{
  return *(long *)(param_1 + 8) == 4;
}


