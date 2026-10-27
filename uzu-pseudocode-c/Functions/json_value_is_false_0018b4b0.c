// Function : json_value_is_false
// Namespace: 
// Entry    : 0018b4b0
// Prototype: bool json_value_is_false(long param_1)
// Body     : 0018b4b0 - 0018b4ba


bool json_value_is_false(long param_1)

{
  return *(long *)(param_1 + 8) == 5;
}


