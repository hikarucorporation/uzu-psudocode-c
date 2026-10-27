// Function : numbertocolor
// Namespace: 
// Entry    : 00526990
// Prototype: uint numbertocolor(uint param_1)
// Body     : 00526990 - 00526a29


uint numbertocolor(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar2 = 0;
  if (-1 < (int)param_1) {
    uVar2 = (ulong)param_1;
  }
  uVar3 = (uint)(uVar2 * 0x51eb851f >> 0x20) & 0xffffffe0;
  iVar5 = (int)(uVar2 / 10);
  iVar4 = (int)uVar2 + iVar5 * -10;
  iVar5 = iVar5 + (int)((uVar2 / 10) / 10) * -10;
  if ((int)uVar2 - 900U < 100) {
    uVar3 = 0x100;
  }
  if (0xfe < uVar3) {
    uVar3 = 0xff;
  }
  uVar6 = iVar5 * 0x20;
  if (iVar5 == 9) {
    uVar6 = 0x100;
  }
  if (0xfe < uVar6) {
    uVar6 = 0xff;
  }
  uVar1 = iVar4 * 0x20;
  if (iVar4 == 9) {
    uVar1 = 0x100;
  }
  if (0xfe < uVar1) {
    uVar1 = 0xff;
  }
  return uVar1 | uVar3 << 0x10 | uVar6 << 8;
}


