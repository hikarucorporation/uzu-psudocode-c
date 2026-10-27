// Function : findEndOfToken
// Namespace: juce:XmlIdentifierChars
// Entry    : 0048f410
// Prototype: byte * findEndOfToken(byte * param_1)
// Body     : 0048f410 - 0048f52c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlIdentifierChars::findEndOfToken(juce::CharPointer_UTF8) */

byte * __cdecl juce::XmlIdentifierChars::findEndOfToken(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  do {
    pbVar4 = param_1;
    bVar1 = *pbVar4;
    uVar2 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) != 0) {
        uVar3 = uVar2 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar3 = 0x3f;
        }
        uVar2 = uVar3 & uVar2;
        if (((((pbVar4[1] & 0xffffffc0) == 0x80) &&
             (uVar2 = pbVar4[1] & 0x3f | uVar2 << 6, (bVar1 & 0x20) != 0)) &&
            ((pbVar4[2] & 0xffffffc0) == 0x80)) &&
           ((uVar2 = pbVar4[2] & 0x3f | uVar2 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
            ((pbVar4[3] & 0xffffffc0) == 0x80)))) {
          uVar2 = uVar2 << 6 | pbVar4[3] & 0x3f;
        }
        goto LAB_0048f42a;
      }
      uVar2 = uVar2 & 0x7f;
LAB_0048f458:
      uVar2 = 1 << ((byte)uVar2 & 0x1f) &
              *(uint *)(isIdentifierChar(wchar_t)::legalChars + (ulong)(uVar2 >> 5) * 4);
    }
    else {
LAB_0048f42a:
      if (uVar2 < 0xa0) goto LAB_0048f458;
      uVar2 = iswalnum(uVar2);
    }
    if (uVar2 == 0) {
      return pbVar4;
    }
    bVar1 = *pbVar4;
    param_1 = pbVar4 + 1;
    if ((((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) &&
       (param_1 = pbVar4 + 2, (bVar1 & 0x20) != 0)) {
      param_1 = pbVar4 + (4 - (ulong)((bVar1 & 0x10) == 0));
    }
  } while( true );
}


