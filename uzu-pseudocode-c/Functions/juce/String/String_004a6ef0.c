// Function : String
// Namespace: juce:String
// Entry    : 004a6ef0
// Prototype: undefined String(String * this, ushort * param_1)
// Body     : 004a6ef0 - 004a70fa


/* juce::String::String(juce::CharPointer_UTF16) */

void __thiscall juce::String::String(String *this,ushort *param_1)

{
  ushort uVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  sbyte sVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  
  pbVar3 = &DAT_0061ac58;
  if ((param_1 != (ushort *)0x0) && (uVar1 = *param_1, uVar1 != 0)) {
    lVar11 = 0;
    puVar4 = param_1;
    while( true ) {
      uVar13 = (uint)uVar1;
      lVar10 = 1;
      if (((uVar1 & 0xfc00) == 0xd800) && ((puVar4[1] & 0xfc00) == 0xdc00)) {
        uVar13 = (puVar4[1] - 0xdc00 | (uint)uVar1 * 0x400 + 0xfca00000) + 0x10000;
        lVar10 = 2;
      }
      if (uVar13 == 0) break;
      lVar14 = 1;
      if ((0x7f < uVar13) && (lVar14 = 2, 0x7ff < uVar13)) {
        lVar14 = 4 - (ulong)(uVar13 < 0x10000);
      }
      puVar4 = puVar4 + lVar10;
      lVar11 = lVar11 + lVar14;
      uVar1 = *puVar4;
    }
    uVar12 = lVar11 + 4U & 0xfffffffffffffffc;
    puVar5 = operator_new__(uVar12 + 0x17);
    LOCK();
    *puVar5 = 0;
    UNLOCK();
    *(ulong *)(puVar5 + 2) = uVar12;
    pbVar3 = (byte *)(puVar5 + 4);
    pbVar2 = pbVar3;
    while( true ) {
      pbVar8 = pbVar2;
      uVar1 = *param_1;
      uVar13 = (uint)uVar1;
      lVar11 = 1;
      if (((uVar1 & 0xfc00) == 0xd800) && ((param_1[1] & 0xfc00) == 0xdc00)) {
        uVar13 = (param_1[1] - 0xdc00 | (uint)uVar1 * 0x400 + 0xfca00000) + 0x10000;
        lVar11 = 2;
      }
      if (uVar13 == 0) break;
      param_1 = param_1 + lVar11;
      if (uVar13 < 0x80) {
        *pbVar8 = (byte)uVar13;
        pbVar2 = pbVar8 + 1;
      }
      else {
        uVar9 = 0xffff < uVar13 | 2;
        if (uVar13 < 0x800) {
          uVar9 = 1;
        }
        bVar6 = (byte)uVar9;
        sVar7 = bVar6 * '\x06';
        *pbVar8 = (byte)(uVar13 >> sVar7) | (byte)(0xff << (bVar6 ^ 7));
        pbVar8[1] = (byte)(uVar13 >> ((bVar6 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
        pbVar2 = pbVar8 + 2;
        if (0x7ff < uVar13) {
          pbVar8[2] = (byte)(uVar13 >> (sVar7 - 0xcU & 0x1f)) & 0x3f | 0x80;
          pbVar2 = pbVar8 + 3;
          if (1 < uVar9 - 1) {
            pbVar8[3] = (byte)(uVar13 >> (sVar7 - 0x12U & 0x1f)) & 0x3f | 0x80;
            pbVar2 = pbVar8 + 4;
          }
        }
      }
    }
    *pbVar8 = 0;
  }
  *(byte **)this = pbVar3;
  return;
}


