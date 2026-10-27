// Function : wave_isheader
// Namespace: 
// Entry    : 005a1270
// Prototype: bool wave_isheader(char * param_1, ulong param_2)
// Body     : 005a1270 - 005a1297


bool wave_isheader(char *param_1,ulong param_2)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (3 < param_2) {
    iVar1 = strncmp(param_1,"RIFF",4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}


