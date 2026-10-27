// Function : next_isheader
// Namespace: 
// Entry    : 005a0e50
// Prototype: bool next_isheader(char * param_1, ulong param_2)
// Body     : 005a0e50 - 005a0e96


bool next_isheader(char *param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (3 < param_2) {
    iVar1 = strncmp(param_1,".snd",4);
    if (iVar1 == 0) {
      return true;
    }
    iVar1 = strncmp(param_1,"dns.",4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


