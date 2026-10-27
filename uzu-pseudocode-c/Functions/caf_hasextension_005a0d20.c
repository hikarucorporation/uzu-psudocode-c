// Function : caf_hasextension
// Namespace: 
// Entry    : 005a0d20
// Prototype: undefined8 caf_hasextension(char * param_1, size_t param_2)
// Body     : 005a0d20 - 005a0d75


undefined8 caf_hasextension(char *param_1,size_t param_2)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strnlen(param_1,param_2);
  if (4 < (int)sVar2) {
    iVar1 = strncmp(param_1 + ((int)sVar2 - 4),".caf",4);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = strncmp(param_1 + ((int)sVar2 - 4),".CAF",4);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


