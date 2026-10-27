// Function : hashString8
// Namespace: Steinberg
// Entry    : 001834b0
// Prototype: uint hashString8(char * param_1, uint param_2)
// Body     : 001834b0 - 001834eb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::hashString8(char const*, unsigned int) */

uint __cdecl Steinberg::hashString8(char *param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((param_1 != (char *)0x0) && (cVar1 = *param_1, cVar1 != '\0')) {
    uVar2 = 0;
    do {
      param_1 = param_1 + 1;
      uVar2 = (uVar2 * 0x40 + (int)cVar1) % param_2;
      cVar1 = *param_1;
    } while (cVar1 != '\0');
  }
  return uVar2;
}


