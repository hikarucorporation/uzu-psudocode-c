// Function : u8_nextchar
// Namespace: 
// Entry    : 005488e0
// Prototype: int u8_nextchar(long param_1, int * param_2)
// Body     : 005488e0 - 0054891c


int u8_nextchar(long param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  
  lVar3 = (long)*param_2;
  iVar2 = 0;
  piVar1 = &offsetsFromUTF8;
  do {
    piVar4 = piVar1;
    lVar3 = lVar3 + 1;
    *param_2 = (int)lVar3;
    iVar2 = (uint)*(byte *)(param_1 + -1 + lVar3) + iVar2 * 0x40;
    if (*(byte *)(param_1 + lVar3) == 0) break;
    piVar1 = piVar4 + 1;
  } while ((*(byte *)(param_1 + lVar3) & 0xc0) == 0x80);
  return iVar2 - *piVar4;
}


