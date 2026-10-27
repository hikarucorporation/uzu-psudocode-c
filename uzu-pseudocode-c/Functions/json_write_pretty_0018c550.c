// Function : json_write_pretty
// Namespace: 
// Entry    : 0018c550
// Prototype: char * json_write_pretty(undefined8 * param_1, char * param_2, char * param_3, size_t * param_4)
// Body     : 0018c550 - 0018c641


char * json_write_pretty(undefined8 *param_1,char *param_2,char *param_3,size_t *param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *__ptr;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  size_t local_30;
  
  local_30 = 0;
  if (param_1 != (undefined8 *)0x0) {
    pcVar3 = "  ";
    if (param_2 != (char *)0x0) {
      pcVar3 = param_2;
    }
    lVar5 = -1;
    do {
      lVar4 = lVar5 + 1;
      lVar5 = lVar5 + 1;
    } while (pcVar3[lVar4] != '\0');
    pcVar6 = "\n";
    if (param_3 != (char *)0x0) {
      pcVar6 = param_3;
    }
    lVar4 = -1;
    do {
      lVar1 = lVar4 + 1;
      lVar4 = lVar4 + 1;
    } while (pcVar6[lVar1] != '\0');
    uVar2 = json_write_pretty_get_value_size(param_1,0,lVar5,lVar4,(long *)&local_30);
    if ((int)uVar2 != 0) {
      return (char *)0x0;
    }
    local_30 = local_30 + 1;
    __ptr = malloc(local_30);
    if (__ptr != (char *)0x0) {
      pcVar3 = json_write_pretty_value(param_1,0,pcVar3,pcVar6,__ptr);
      if (pcVar3 != (char *)0x0) {
        *pcVar3 = '\0';
        if (param_4 == (size_t *)0x0) {
          return __ptr;
        }
        *param_4 = local_30;
        return __ptr;
      }
      free(__ptr);
    }
  }
  return (char *)0x0;
}


