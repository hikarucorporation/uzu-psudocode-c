// Function : caf_isheader
// Namespace: 
// Entry    : 005a0850
// Prototype: bool caf_isheader(char * param_1, ulong param_2)
// Body     : 005a0850 - 005a0877


bool caf_isheader(char *param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (3 < param_2) {
    iVar1 = strncmp(param_1,"caff",4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


