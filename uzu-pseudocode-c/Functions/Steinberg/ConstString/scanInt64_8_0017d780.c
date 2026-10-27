// Function : scanInt64_8
// Namespace: Steinberg:ConstString
// Entry    : 0017d780
// Prototype: bool scanInt64_8(char * param_1, undefined8 param_2, char param_3)
// Body     : 0017d780 - 0017d803


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::ConstString::scanInt64_8(char const*, long&, bool) */

bool __cdecl Steinberg::ConstString::scanInt64_8(char *param_1,undefined8 param_2,char param_3)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 != (char *)0x0) {
    if (param_3 == '\0') {
      if (*param_1 != '\0') {
        iVar2 = __isoc99_sscanf(param_1,&DAT_005db39c,param_2);
        return iVar2 == 1;
      }
    }
    else if (*param_1 != '\0') {
      do {
        iVar2 = __isoc99_sscanf(param_1,&DAT_005db39c,param_2);
        if (iVar2 == 1) {
          return true;
        }
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
      return false;
    }
  }
  return false;
}


