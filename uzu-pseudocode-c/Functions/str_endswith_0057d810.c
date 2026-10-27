// Function : str_endswith
// Namespace: 
// Entry    : 0057d810
// Prototype: bool str_endswith(char * param_1, char * param_2)
// Body     : 0057d810 - 0057d854


bool str_endswith(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  
  sVar2 = strlen(param_1);
  sVar3 = strlen(param_2);
  bVar4 = false;
  if (sVar3 <= sVar2) {
    iVar1 = strcmp(param_1 + (sVar2 - sVar3),param_2);
    bVar4 = iVar1 == 0;
  }
  return bVar4;
}


