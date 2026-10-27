// Function : aiff_hasextension
// Namespace: 
// Entry    : 005a0700
// Prototype: undefined8 aiff_hasextension(char * param_1, size_t param_2)
// Body     : 005a0700 - 005a07da


undefined8 aiff_hasextension(char *param_1,size_t param_2)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  char *__s1;
  
  sVar2 = strnlen(param_1,param_2);
  uVar3 = (uint)sVar2;
  if (4 < (int)uVar3) {
    iVar1 = strncmp(param_1 + (uVar3 - 4),".aif",4);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strncmp(param_1 + (uVar3 - 4),".AIF",4);
    if (iVar1 == 0) {
      return 1;
    }
    if (5 < uVar3) {
      __s1 = param_1 + (uVar3 - 5);
      iVar1 = strncmp(__s1,".aiff",5);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = strncmp(__s1,".aifc",5);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = strncmp(__s1,".AIFF",5);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = strncmp(__s1,".AIFC",5);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


