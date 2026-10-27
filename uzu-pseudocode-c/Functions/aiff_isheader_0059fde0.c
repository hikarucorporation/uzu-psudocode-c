// Function : aiff_isheader
// Namespace: 
// Entry    : 0059fde0
// Prototype: bool aiff_isheader(char * param_1, ulong param_2)
// Body     : 0059fde0 - 0059fe07


bool aiff_isheader(char *param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (3 < param_2) {
    iVar1 = strncmp(param_1,"FORM",4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


