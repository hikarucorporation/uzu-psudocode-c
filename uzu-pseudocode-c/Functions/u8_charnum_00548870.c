// Function : u8_charnum
// Namespace: 
// Entry    : 00548870
// Prototype: int u8_charnum(byte * param_1, int param_2)
// Body     : 00548870 - 005488dc


int u8_charnum(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_2 < 1) {
    return 0;
  }
  iVar1 = 0;
  pbVar2 = param_1;
  do {
    if (*pbVar2 == 0) {
      return iVar1;
    }
    pbVar3 = pbVar2 + 1;
    if (((char)*pbVar2 < '\0') && ((*pbVar3 & 0xc0) == 0x80)) {
      if ((pbVar2[2] & 0xc0) == 0x80) {
        if ((pbVar2[3] & 0xc0) == 0x80) {
          pbVar3 = pbVar2 + 4;
        }
        else {
          pbVar3 = pbVar2 + 3;
        }
      }
      else {
        pbVar3 = pbVar2 + 2;
      }
    }
    iVar1 = iVar1 + 1;
    pbVar2 = pbVar3;
  } while (pbVar3 < param_1 + param_2);
  return iVar1;
}


