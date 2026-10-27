// Function : json_value_as_number
// Namespace: 
// Entry    : 0018b470
// Prototype: undefined8 json_value_as_number(undefined8 * param_1)
// Body     : 0018b470 - 0018b47d


undefined8 json_value_as_number(undefined8 *param_1)

{
  if (param_1[1] == 1) {
    return *param_1;
  }
  return 0;
}


