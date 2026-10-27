// Function : ascii_hasextension
// Namespace: 
// Entry    : 0059b520
// Prototype: undefined8 ascii_hasextension(char * param_1)
// Body     : 0059b520 - 0059b55b


undefined8 ascii_hasextension(char *param_1)

{
  int iVar1;
  size_t sVar2;
  
  sVar2 = strnlen(param_1,1000);
  if (4 < (int)sVar2) {
    iVar1 = strncmp(param_1 + ((int)sVar2 - 4),".txt",4);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


