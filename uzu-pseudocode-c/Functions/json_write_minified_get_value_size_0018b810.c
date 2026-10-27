// Function : json_write_minified_get_value_size
// Namespace: 
// Entry    : 0018b810
// Prototype: undefined8 json_write_minified_get_value_size(undefined8 * param_1, long * param_2)
// Body     : 0018b810 - 0018b85d


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_minified_get_value_size(json_value_s const*, unsigned long*) */

undefined8 __cdecl json_write_minified_get_value_size(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  switch(param_1[1]) {
  case 0:
    uVar1 = json_write_get_string_size((long *)*param_1,param_2);
    return uVar1;
  case 1:
    uVar1 = json_write_get_number_size((long *)*param_1,param_2);
    return uVar1;
  case 2:
    uVar1 = json_write_minified_get_object_size((undefined8 *)*param_1,param_2);
    return uVar1;
  case 3:
    uVar1 = json_write_minified_get_array_size((undefined8 *)*param_1,param_2);
    return uVar1;
  case 4:
  case 6:
    *param_2 = *param_2 + 4;
    return 0;
  case 5:
    *param_2 = *param_2 + 5;
    return 0;
  default:
    return 1;
  }
}


