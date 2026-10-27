// Function : json_write_minified_value
// Namespace: 
// Entry    : 0018bd90
// Prototype: char * json_write_minified_value(undefined8 * param_1, char * param_2)
// Body     : 0018bd90 - 0018bdfd


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_minified_value(json_value_s const*, char*) */

char * __cdecl json_write_minified_value(undefined8 *param_1,char *param_2)

{
  char *pcVar1;
  
  switch(param_1[1]) {
  case 0:
    pcVar1 = json_write_string((long *)*param_1,param_2);
    return pcVar1;
  case 1:
    pcVar1 = json_write_number((long *)*param_1,param_2);
    return pcVar1;
  case 2:
    pcVar1 = json_write_minified_object((long *)*param_1,param_2);
    return pcVar1;
  case 3:
    pcVar1 = json_write_minified_array((long *)*param_1,param_2);
    return pcVar1;
  case 4:
    builtin_strncpy(param_2,"true",4);
    return param_2 + 4;
  case 5:
    builtin_strncpy(param_2,"false",5);
    return param_2 + 5;
  case 6:
    builtin_strncpy(param_2,"null",4);
    return param_2 + 4;
  default:
    return (char *)0x0;
  }
}


