// Function : bitwise_getbitmask
// Namespace: 
// Entry    : 00586270
// Prototype: int bitwise_getbitmask(uint param_1, int * param_2)
// Body     : 00586270 - 00586314


int bitwise_getbitmask(uint param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  
  uVar3 = 0x20;
  if ((int)param_1 < 0x20) {
    uVar3 = param_1;
  }
  if (uVar3 == 0) {
    return 0;
  }
  if (uVar3 == 1) {
    iVar1 = 0;
    bVar4 = 1;
  }
  else {
    uVar2 = uVar3 & 0xfffffffe;
    iVar1 = 0;
    uVar5 = uVar3;
    do {
      if ((*param_2 == 1) && ((int)(float)param_2[2] != 0)) {
        iVar1 = iVar1 + (1 << ((char)uVar5 - 1U & 0x1f));
      }
      uVar5 = uVar5 - 2;
      bVar4 = (byte)uVar5;
      if ((param_2[4] == 1) && ((int)(float)param_2[6] != 0)) {
        iVar1 = iVar1 + (1 << (bVar4 & 0x1f));
      }
      param_2 = param_2 + 8;
      uVar2 = uVar2 - 2;
    } while (uVar2 != 0);
  }
  if ((((uVar3 & 1) != 0) && (*param_2 == 1)) && ((int)(float)param_2[2] != 0)) {
    iVar1 = iVar1 + (1 << (bVar4 - 1 & 0x1f));
  }
  return iVar1;
}


