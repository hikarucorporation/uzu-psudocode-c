// Function : subtag_matches
// Namespace: 
// Entry    : 0043b930
// Prototype: bool subtag_matches(char * param_1, char * param_2, char * param_3)
// Body     : 0043b930 - 0043b989


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* subtag_matches(char const*, char const*, char const*, unsigned int) */

bool __cdecl subtag_matches(char *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  char *pcVar2;
  
  if ((uint)((int)param_2 - (int)param_1) < 3) {
    bVar1 = false;
  }
  else {
    do {
      pcVar2 = strstr(param_1,param_3);
      bVar1 = pcVar2 < param_2 && pcVar2 != (char *)0x0;
      if (pcVar2 >= param_2 || pcVar2 == (char *)0x0) {
        return bVar1;
      }
      param_1 = pcVar2 + 3;
    } while (((byte)(pcVar2[3] - 0x30U) < 10) || ((byte)((pcVar2[3] & 0xdfU) + 0xbf) < 0x1a));
  }
  return bVar1;
}


