// Function : json_value_as_string
// Namespace: 
// Entry    : 0018b460
// Prototype: undefined8 json_value_as_string(undefined8 * param_1)
// Body     : 0018b460 - 0018b46d


undefined8 json_value_as_string(undefined8 *param_1)

{
  if (param_1[1] == 0) {
    return *param_1;
  }
  return 0;
}


