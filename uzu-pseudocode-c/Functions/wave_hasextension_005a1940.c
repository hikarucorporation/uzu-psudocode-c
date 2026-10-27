// Function : wave_hasextension
// Namespace: 
// Entry    : 005a1940
// Prototype: undefined8 wave_hasextension(char * param_1, size_t param_2)
// Body     : 005a1940 - 005a19e2


undefined8 wave_hasextension(char *param_1,size_t param_2)

{
  int iVar1;
  size_t sVar2;
  uint uVar3;
  
  sVar2 = strnlen(param_1,param_2);
  uVar3 = (uint)sVar2;
  if (4 < (int)uVar3) {
    iVar1 = strncmp(param_1 + (uVar3 - 4),".wav",4);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strncmp(param_1 + (uVar3 - 4),".WAV",4);
    if (iVar1 == 0) {
      return 1;
    }
    if (5 < uVar3) {
      iVar1 = strncmp(param_1 + (uVar3 - 5),".wave",5);
      if (iVar1 == 0) {
        return 1;
      }
      iVar1 = strncmp(param_1 + (uVar3 - 5),".WAVE",5);
      if (iVar1 == 0) {
        return 1;
      }
    }
  }
  return 0;
}


