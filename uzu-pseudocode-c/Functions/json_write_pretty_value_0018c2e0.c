// Function : json_write_pretty_value
// Namespace: 
// Entry    : 0018c2e0
// Prototype: char * json_write_pretty_value(undefined8 * param_1, long param_2, char * param_3, char * param_4, char * param_5)
// Body     : 0018c2e0 - 0018c358


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_pretty_value(json_value_s const*, unsigned long, char const*, char const*, char*) */

char * __cdecl
json_write_pretty_value(undefined8 *param_1,long param_2,char *param_3,char *param_4,char *param_5)

{
  char *pcVar1;
  
  switch(param_1[1]) {
  case 0:
    pcVar1 = json_write_string((long *)*param_1,param_5);
    return pcVar1;
  case 1:
    pcVar1 = json_write_number((long *)*param_1,param_5);
    return pcVar1;
  case 2:
    pcVar1 = json_write_pretty_object((long *)*param_1,param_2,param_3,param_4,param_5);
    return pcVar1;
  case 3:
    pcVar1 = json_write_pretty_array((long *)*param_1,param_2,param_3,param_4,param_5);
    return pcVar1;
  case 4:
    builtin_strncpy(param_5,"true",4);
    return param_5 + 4;
  case 5:
    builtin_strncpy(param_5,"false",5);
    return param_5 + 5;
  case 6:
    builtin_strncpy(param_5,"null",4);
    return param_5 + 4;
  default:
    return (char *)0x0;
  }
}


