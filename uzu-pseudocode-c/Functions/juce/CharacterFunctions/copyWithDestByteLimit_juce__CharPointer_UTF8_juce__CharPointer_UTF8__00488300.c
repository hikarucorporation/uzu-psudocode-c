// Function : copyWithDestByteLimit<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
// Namespace: juce:CharacterFunctions
// Entry    : 00488300
// Prototype: long copyWithDestByteLimit<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(long * param_1, byte * param_2, long param_3)
// Body     : 00488300 - 00488562


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* unsigned long juce::CharacterFunctions::copyWithDestByteLimit<juce::CharPointer_UTF8,
   juce::CharPointer_UTF8>(juce::CharPointer_UTF8&, juce::CharPointer_UTF8, unsigned long) */

long __cdecl
juce::CharacterFunctions::copyWithDestByteLimit<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
          (long *param_1,byte *param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  sbyte sVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  
  lVar1 = *param_1;
  lVar10 = param_3 + -1;
  do {
    while( true ) {
      pbVar9 = param_2 + 1;
      bVar7 = *param_2;
      uVar12 = (uint)bVar7;
      if (-1 < (char)bVar7) {
        goto LAB_00488346;
      }
      if ((bVar7 & 0x40) != 0) break;
      uVar12 = uVar12 & 0x7f;
      if (((bVar7 & 0x7f) == 0) || (lVar10 < 1)) goto LAB_00488549;
LAB_00488322:
      lVar10 = lVar10 + -1;
      puVar2 = (undefined1 *)*param_1;
      *param_1 = (long)(puVar2 + 1);
      *puVar2 = (char)uVar12;
      param_2 = pbVar9;
    }
    if ((bVar7 & 0x20) == 0) {
      uVar6 = 0x3f;
      lVar11 = 0;
      bVar4 = false;
      bVar5 = false;
    }
    else {
      bVar4 = true;
      if ((bVar7 & 0x10) == 0) {
        uVar6 = 0x1f;
        lVar11 = 1;
        bVar5 = false;
      }
      else {
        uVar6 = 0xf;
        lVar11 = 2;
        bVar5 = true;
      }
    }
    uVar12 = uVar12 & uVar6;
    if ((param_2[1] & 0xffffffc0) != 0x80) {
LAB_00488530:
      if ((uVar12 != 0) && (-1 < lVar10 + -1)) goto LAB_00488322;
      goto LAB_00488549;
    }
    uVar12 = param_2[1] & 0x3f | uVar12 << 6;
    if (bVar4) {
      pbVar9 = param_2 + 2;
      if ((*pbVar9 & 0xc0) == 0x80) {
        uVar12 = *pbVar9 & 0x3f | uVar12 << 6;
        if (bVar5) {
          uVar6 = (uint)param_2[3];
          pbVar9 = param_2 + 3;
          if ((uVar6 & 0xffffffc0) != 0x80) goto LAB_00488346;
          uVar12 = uVar12 << 6 | uVar6 & 0x3f;
        }
        goto LAB_0048851d;
      }
    }
    else {
LAB_0048851d:
      pbVar9 = param_2 + lVar11 + 2;
    }
LAB_00488346:
    if (uVar12 < 0x80) goto LAB_00488530;
    lVar11 = (ulong)(uVar12 < 0x10000) - 4;
    if (uVar12 < 0x800) {
      lVar11 = -2;
    }
    lVar10 = lVar11 + lVar10;
    if (lVar10 < 0) {
LAB_00488549:
      *(undefined1 *)*param_1 = 0;
      return (long)((int)*param_1 - (int)lVar1) + 1;
    }
    uVar6 = 0xffff < uVar12 | 2;
    if (uVar12 < 0x800) {
      uVar6 = 1;
    }
    bVar7 = (byte)uVar6;
    sVar8 = bVar7 * '\x06';
    pbVar3 = (byte *)*param_1;
    *param_1 = (long)(pbVar3 + 1);
    *pbVar3 = (byte)(uVar12 >> sVar8) | (byte)(0xff << (bVar7 ^ 7));
    pbVar3 = (byte *)*param_1;
    *param_1 = (long)(pbVar3 + 1);
    *pbVar3 = (byte)(uVar12 >> ((bVar7 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
    param_2 = pbVar9;
    if (0x7ff < uVar12) {
      pbVar9 = (byte *)*param_1;
      *param_1 = (long)(pbVar9 + 1);
      *pbVar9 = (byte)(uVar12 >> (sVar8 - 0xcU & 0x1f)) & 0x3f | 0x80;
      if (1 < uVar6 - 1) {
        pbVar9 = (byte *)*param_1;
        *param_1 = (long)(pbVar9 + 1);
        *pbVar9 = (byte)(uVar12 >> (sVar8 - 0x12U & 0x1f)) & 0x3f | 0x80;
      }
    }
  } while( true );
}


