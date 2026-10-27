// Function : compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
// Namespace: juce:CharacterFunctions
// Entry    : 004928f0
// Prototype: uint compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>(byte * param_1, byte * param_2, int param_3)
// Body     : 004928f0 - 00492a85


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,
   juce::CharPointer_ASCII>(juce::CharPointer_UTF8, juce::CharPointer_ASCII, int) */

uint __cdecl
juce::CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
          (byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  wint_t wVar5;
  wint_t wVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  wint_t __wc;
  uint unaff_R14D;
  byte *pbVar10;
  
  do {
    if (param_3 < 1) {
      return 0;
    }
    pbVar8 = param_1 + 1;
    bVar1 = *param_1;
    __wc = (wint_t)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        __wc = bVar1 & 0x7f;
        goto LAB_00492a10;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar7 = 0x3f;
        lVar9 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar7 = 0x1f;
          lVar9 = 1;
          bVar3 = false;
        }
        else {
          uVar7 = 0xf;
          lVar9 = 2;
          bVar3 = true;
        }
      }
      __wc = bVar1 & uVar7;
      if ((param_1[1] & 0xffffffc0) != 0x80) goto LAB_00492a10;
      pbVar8 = param_1 + lVar9 + 2;
      __wc = param_1[1] & 0x3f | __wc << 6;
      if (!bVar2) goto LAB_00492a10;
      pbVar10 = param_1 + 2;
      if ((*pbVar10 & 0xffffffc0) == 0x80) {
        __wc = *pbVar10 & 0x3f | __wc << 6;
        if (bVar3) {
          pbVar10 = param_1 + 3;
          if ((*pbVar10 & 0xffffffc0) != 0x80) goto LAB_00492a13;
          __wc = __wc << 6 | *pbVar10 & 0x3f;
        }
        goto LAB_00492a10;
      }
    }
    else {
LAB_00492a10:
      pbVar10 = pbVar8;
    }
LAB_00492a13:
    bVar1 = *param_2;
    uVar7 = 0;
    if (__wc != bVar1) {
      wVar5 = towupper(__wc);
      wVar6 = towupper((uint)bVar1);
      uVar7 = (int)(wVar5 - wVar6) >> 0x1f | 1;
      if (wVar5 - wVar6 == 0) {
        uVar7 = 0;
      }
    }
    param_2 = param_2 + 1;
    if (uVar7 != 0) {
      unaff_R14D = uVar7;
    }
    cVar4 = (__wc == 0) * '\x03';
    if (uVar7 != 0) {
      cVar4 = '\x01';
    }
    param_3 = param_3 + -1;
    param_1 = pbVar10;
    if (cVar4 != '\0') {
      uVar7 = 0;
      if (cVar4 != '\x03') {
        uVar7 = unaff_R14D;
      }
      return uVar7;
    }
  } while( true );
}


