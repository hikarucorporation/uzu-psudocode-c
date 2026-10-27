// Function : json_value_as_object
// Namespace: 
// Entry    : 0018b480
// Prototype: undefined8 json_value_as_object(undefined8 * param_1)
// Body     : 0018b480 - 0018b48d


undefined8 json_value_as_object(undefined8 *param_1)

{
  if (param_1[1] == 2) {
    return *param_1;
  }
  return 0;
}


