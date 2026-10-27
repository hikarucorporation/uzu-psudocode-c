// Function : u8_ucs2toutf8
// Namespace: 
// Entry    : 005484f0
// Prototype: undefined u8_ucs2toutf8()
// Body     : 005484f0 - 00548654


ulong u8_ucs2toutf8(byte *param_1,int param_2,ushort *param_3,uint param_4)

{
  byte *pbVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  byte bVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  lVar3 = (long)param_2;
  pbVar1 = param_1 + lVar3;
  pbVar7 = param_1 + lVar3 + -2;
  pbVar8 = param_1 + lVar3 + -1;
  if ((int)param_4 < 0) {
    uVar5 = 0;
    uVar2 = *param_3;
    while (uVar2 != 0) {
      bVar6 = (byte)uVar2;
      if (uVar2 < 0x80) {
        if (pbVar1 <= param_1) {
          return uVar5;
        }
        *param_1 = bVar6;
        param_1 = param_1 + 1;
      }
      else if (uVar2 < 0x800) {
        if (pbVar8 <= param_1) {
          return uVar5;
        }
        *param_1 = (byte)(uVar2 >> 6) | 0xc0;
        param_1[1] = bVar6 & 0x3f | 0x80;
        param_1 = param_1 + 2;
      }
      else {
        if (pbVar7 <= param_1) {
          return uVar5;
        }
        *param_1 = (byte)(uVar2 >> 0xc) | 0xe0;
        param_1[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_1[2] = bVar6 & 0x3f | 0x80;
        param_1 = param_1 + 3;
      }
      lVar3 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      uVar2 = param_3[lVar3];
    }
  }
  else if (param_4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (ulong)param_4;
    uVar4 = 0;
    do {
      uVar2 = param_3[uVar4];
      bVar6 = (byte)uVar2;
      if (uVar2 < 0x80) {
        if (pbVar1 <= param_1) {
          return uVar4;
        }
        *param_1 = bVar6;
        param_1 = param_1 + 1;
      }
      else if (uVar2 < 0x800) {
        if (pbVar8 <= param_1) {
          return uVar4;
        }
        *param_1 = (byte)(uVar2 >> 6) | 0xc0;
        param_1[1] = bVar6 & 0x3f | 0x80;
        param_1 = param_1 + 2;
      }
      else {
        if (pbVar7 <= param_1) {
          return uVar4;
        }
        *param_1 = (byte)(uVar2 >> 0xc) | 0xe0;
        param_1[1] = (byte)(uVar2 >> 6) & 0x3f | 0x80;
        param_1[2] = bVar6 & 0x3f | 0x80;
        param_1 = param_1 + 3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar5 != uVar4);
  }
  if (param_1 < pbVar1) {
    *param_1 = 0;
  }
  return uVar5;
}


