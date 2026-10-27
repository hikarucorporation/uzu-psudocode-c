// Function : next_hasextension
// Namespace: 
// Entry    : 005a1150
// Prototype: undefined8 next_hasextension(char * param_1, size_t param_2)
// Body     : 005a1150 - 005a11f2


undefined8 next_hasextension(char *param_1,size_t param_2)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  
  sVar2 = strnlen(param_1,param_2);
  uVar3 = (uint)sVar2;
  if (3 < (int)uVar3) {
    iVar1 = strncmp(param_1 + (uVar3 - 3),".au",3);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strncmp(param_1 + (uVar3 - 3),".AU",3);
    if (iVar1 == 0) {
      return 1;
    }
    if (4 < uVar3) {
      iVar1 = strncmp(param_1 + (uVar3 - 4),".snd",4);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = strncmp(param_1 + (uVar3 - 4),".SND",4);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


