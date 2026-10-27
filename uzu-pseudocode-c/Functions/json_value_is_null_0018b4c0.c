// Function : json_value_is_null
// Namespace: 
// Entry    : 0018b4c0
// Prototype: bool json_value_is_null(long param_1)
// Body     : 0018b4c0 - 0018b4ca


bool json_value_is_null(long param_1)

{
  return *(long *)(param_1 + 8) == 6;
}


