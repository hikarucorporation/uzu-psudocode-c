// Function : u8_offset
// Namespace: 
// Entry    : 00548800
// Prototype: int u8_offset(byte * param_1, int param_2)
// Body     : 00548800 - 0054886d


int u8_offset(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1;
  if (0 < param_2) {
    iVar2 = param_2 + 1;
    pbVar1 = param_1;
    do {
      if (*pbVar1 == 0) {
        return (int)pbVar1 - iVar3;
      }
      param_1 = pbVar1 + 1;
      if (((char)*pbVar1 < '\0') && ((*param_1 & 0xc0) == 0x80)) {
        if ((pbVar1[2] & 0xc0) == 0x80) {
          if ((pbVar1[3] & 0xc0) == 0x80) {
            param_1 = pbVar1 + 4;
          }
          else {
            param_1 = pbVar1 + 3;
          }
        }
        else {
          param_1 = pbVar1 + 2;
        }
      }
      iVar2 = iVar2 + -1;
      pbVar1 = param_1;
    } while (1 < iVar2);
  }
  return (int)param_1 - iVar3;
}


