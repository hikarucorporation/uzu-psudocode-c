// Function : json_value_as_array
// Namespace: 
// Entry    : 0018b490
// Prototype: undefined8 json_value_as_array(undefined8 * param_1)
// Body     : 0018b490 - 0018b49d


undefined8 json_value_as_array(undefined8 *param_1)

{
  if (param_1[1] == 3) {
    return *param_1;
  }
  return 0;
}


