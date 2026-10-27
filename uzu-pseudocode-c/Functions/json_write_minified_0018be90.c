// Function : json_write_minified
// Namespace: 
// Entry    : 0018be90
// Prototype: char * json_write_minified(undefined8 * param_1, size_t * param_2)
// Body     : 0018be90 - 0018bf11


char * json_write_minified(undefined8 *param_1,size_t *param_2)

{
  undefined8 uVar1;
  char *__ptr;
  char *pcVar2;
  size_t local_20;
  
  local_20 = 0;
  if ((param_1 != (undefined8 *)0x0) &&
     (uVar1 = json_write_minified_get_value_size(param_1,(long *)&local_20), (int)uVar1 == 0)) {
    local_20 = local_20 + 1;
    __ptr = malloc(local_20);
    if (__ptr != (char *)0x0) {
      pcVar2 = json_write_minified_value(param_1,__ptr);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
        if (param_2 == (size_t *)0x0) {
          return __ptr;
        }
        *param_2 = local_20;
        return __ptr;
      }
      free(__ptr);
    }
  }
  return (char *)0x0;
}


