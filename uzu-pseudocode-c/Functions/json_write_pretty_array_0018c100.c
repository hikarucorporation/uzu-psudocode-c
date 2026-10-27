// Function : json_write_pretty_array
// Namespace: 
// Entry    : 0018c100
// Prototype: char * json_write_pretty_array(long * param_1, long param_2, char * param_3, char * param_4, undefined1 * param_5)
// Body     : 0018c100 - 0018c2dc


/* WARNING: Removing unreachable block (ram,0x0018c17b) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* json_write_pretty_array(json_array_s const*, unsigned long, char const*, char const*, char*) */

char * __cdecl
json_write_pretty_array(long *param_1,long param_2,char *param_3,char *param_4,undefined1 *param_5)

{
  char *pcVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  undefined8 *puVar5;
  
  *param_5 = 0x5b;
  pcVar1 = param_5 + 1;
  if (param_1[1] != 0) {
    cVar2 = *param_4;
    if (cVar2 != '\0') {
      pcVar4 = param_4;
      do {
        pcVar4 = pcVar4 + 1;
        *pcVar1 = cVar2;
        pcVar1 = pcVar1 + 1;
        cVar2 = *pcVar4;
      } while (cVar2 != '\0');
    }
    puVar5 = (undefined8 *)*param_1;
    if (puVar5 != (undefined8 *)0x0) {
      while( true ) {
        if ((param_2 + 1 != 0) && (cVar2 = *param_3, cVar2 != '\0')) {
          lVar3 = 0;
          while( true ) {
            if (cVar2 != '\0') {
              pcVar4 = param_3;
              do {
                pcVar4 = pcVar4 + 1;
                *pcVar1 = cVar2;
                pcVar1 = pcVar1 + 1;
                cVar2 = *pcVar4;
              } while (cVar2 != '\0');
            }
            if (lVar3 == param_2) break;
            lVar3 = lVar3 + 1;
            cVar2 = *param_3;
          }
        }
        pcVar1 = json_write_pretty_value((undefined8 *)*puVar5,param_2 + 1,param_3,param_4,pcVar1);
        if (pcVar1 == (char *)0x0) {
          return (char *)0x0;
        }
        puVar5 = (undefined8 *)puVar5[1];
        if (puVar5 == (undefined8 *)0x0) break;
        if (puVar5 != (undefined8 *)*param_1) {
          *pcVar1 = ',';
          pcVar1 = pcVar1 + 1;
          cVar2 = *param_4;
          if (cVar2 != '\0') {
            pcVar4 = param_4;
            do {
              pcVar4 = pcVar4 + 1;
              *pcVar1 = cVar2;
              pcVar1 = pcVar1 + 1;
              cVar2 = *pcVar4;
            } while (cVar2 != '\0');
          }
        }
      }
    }
    cVar2 = *param_4;
    while (cVar2 != '\0') {
      param_4 = param_4 + 1;
      *pcVar1 = cVar2;
      pcVar1 = pcVar1 + 1;
      cVar2 = *param_4;
    }
    if ((param_2 != 0) && (cVar2 = *param_3, cVar2 != '\0')) {
      lVar3 = 0;
      while( true ) {
        if (cVar2 != '\0') {
          pcVar4 = param_3;
          do {
            pcVar4 = pcVar4 + 1;
            *pcVar1 = cVar2;
            pcVar1 = pcVar1 + 1;
            cVar2 = *pcVar4;
          } while (cVar2 != '\0');
        }
        lVar3 = lVar3 + 1;
        if (lVar3 == param_2) break;
        cVar2 = *param_3;
      }
    }
  }
  *pcVar1 = ']';
  return pcVar1 + 1;
}


