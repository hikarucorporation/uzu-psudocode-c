// Function : u8_strlen
// Namespace: 
// Entry    : 00548920
// Prototype: int u8_strlen(long param_1)
// Body     : 00548920 - 0054897e


int u8_strlen(long param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  long lVar7;
  
  lVar7 = 0;
  iVar4 = 0;
  do {
    iVar2 = iVar4;
    lVar7 = (long)(int)lVar7;
    bVar3 = *(byte *)(param_1 + lVar7);
    iVar6 = 0;
    piVar1 = &offsetsFromUTF8;
    do {
      piVar5 = piVar1;
      lVar7 = lVar7 + 1;
      iVar6 = (uint)bVar3 + iVar6 * 0x40;
      bVar3 = *(byte *)(param_1 + lVar7);
      if (bVar3 == 0) break;
      piVar1 = piVar5 + 1;
    } while ((bVar3 & 0xc0) == 0x80);
    iVar4 = iVar4 + 1;
    if (iVar6 == *piVar5) {
      return iVar2;
    }
  } while( true );
}


