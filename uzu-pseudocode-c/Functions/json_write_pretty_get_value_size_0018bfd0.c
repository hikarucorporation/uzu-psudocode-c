// Function : json_write_pretty_get_value_size
// Namespace: 
// Entry    : 0018bfd0
// Prototype: undefined8 json_write_pretty_get_value_size(undefined8 * param_1, long param_2, long param_3, long param_4, long * param_5)
// Body     : 0018bfd0 - 0018c023


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_pretty_get_value_size(json_value_s const*, unsigned long, unsigned long, unsigned
   long, unsigned long*) */

undefined8 __cdecl
json_write_pretty_get_value_size
          (undefined8 *param_1,long param_2,long param_3,long param_4,long *param_5)

{
  undefined8 uVar1;
  
  switch(param_1[1]) {
  case 0:
    uVar1 = json_write_get_string_size((long *)*param_1,param_5);
    return uVar1;
  case 1:
    uVar1 = json_write_get_number_size((long *)*param_1,param_5);
    return uVar1;
  case 2:
    uVar1 = json_write_pretty_get_object_size((long *)*param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  case 3:
    uVar1 = json_write_pretty_get_array_size((long *)*param_1,param_2,param_3,param_4,param_5);
    return uVar1;
  case 4:
  case 6:
    *param_5 = *param_5 + 4;
    return 0;
  case 5:
    *param_5 = *param_5 + 5;
    return 0;
  default:
    return 1;
  }
}


