// Function : fromHexString
// Namespace: Steinberg:Buffer
// Entry    : 00177490
// Prototype: ulong fromHexString(Buffer * this, char * param_1)
// Body     : 00177490 - 001775ad


/* Steinberg::Buffer::fromHexString(char const*) */

ulong __thiscall Steinberg::Buffer::fromHexString(Buffer *this,char *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined7 extraout_var;
  bool bVar4;
  char *pcVar5;
  byte bVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  
  *(undefined4 *)(this + 0x14) = 0;
  if (param_1 == (char *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar7 = 0xffffffff;
    lVar8 = -0x100000000;
    pcVar5 = param_1;
    do {
      lVar8 = lVar8 + 0x100000000;
      uVar7 = uVar7 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    uVar3 = 0;
    if ((uVar7 != 0) && ((uVar7 & 1) == 0)) {
      uVar10 = (int)uVar7 / 2;
      setSize(this,uVar10);
      if ((int)uVar7 < 1) {
        uVar3 = 0;
      }
      else {
        lVar2 = *(long *)(this + 8);
        uVar3 = CONCAT71(extraout_var,1);
        uVar9 = 0;
        bVar4 = true;
        do {
          cVar1 = param_1[uVar9];
          bVar6 = cVar1 - 0x30;
          if (9 < bVar6) {
            if ((byte)(cVar1 + 0xbfU) < 6) {
              bVar6 = cVar1 - 0x37;
            }
            else {
              if (5 < (byte)(cVar1 + 0x9fU)) goto LAB_001775a1;
              bVar6 = cVar1 + 0xa9;
            }
          }
          if (bVar4) {
            uVar3 = uVar9 >> 1 & 0x7fffffff;
            *(byte *)(lVar2 + uVar3) = bVar6 << 4;
          }
          else {
            uVar3 = uVar9 >> 1 & 0x7fffffff;
            pcVar5 = (char *)(lVar2 + uVar3);
            *pcVar5 = *pcVar5 + bVar6;
          }
          bVar4 = (bool)(bVar4 ^ 1);
          uVar9 = uVar9 + 1;
          uVar3 = CONCAT71((int7)(uVar3 >> 8),(long)uVar9 < lVar8 >> 0x20);
        } while (uVar7 != uVar9);
      }
      if (uVar10 <= *(uint *)(this + 0x10)) {
        *(uint *)(this + 0x14) = uVar10;
      }
LAB_001775a1:
      uVar3 = uVar3 ^ 1;
    }
  }
  return uVar3;
}


