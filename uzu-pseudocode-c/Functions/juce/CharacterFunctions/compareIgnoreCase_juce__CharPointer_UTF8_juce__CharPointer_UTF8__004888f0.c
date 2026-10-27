// Function : compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
// Namespace: juce:CharacterFunctions
// Entry    : 004888f0
// Prototype: uint compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(byte * param_1, byte * param_2)
// Body     : 004888f0 - 00488b42


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,
   juce::CharPointer_UTF8>(juce::CharPointer_UTF8, juce::CharPointer_UTF8) */

uint __cdecl
juce::CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
          (byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  wint_t wVar4;
  uint uVar5;
  byte *pbVar6;
  char cVar7;
  wint_t wVar8;
  long lVar9;
  uint unaff_R12D;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  do {
    pbVar6 = param_1 + 1;
    bVar1 = *param_1;
    uVar10 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar10 = bVar1 & 0x7f;
        goto LAB_00488a00;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar10 = 0x3f;
        lVar9 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar10 = 0x1f;
          lVar9 = 1;
          bVar3 = false;
        }
        else {
          uVar10 = 0xf;
          lVar9 = 2;
          bVar3 = true;
        }
      }
      uVar10 = bVar1 & uVar10;
      if ((param_1[1] & 0xffffffc0) != 0x80) goto LAB_00488a00;
      pbVar6 = param_1 + lVar9 + 2;
      uVar10 = param_1[1] & 0x3f | uVar10 << 6;
      if (!bVar2) goto LAB_00488a00;
      pbVar12 = param_1 + 2;
      if ((*pbVar12 & 0xffffffc0) == 0x80) {
        uVar10 = *pbVar12 & 0x3f | uVar10 << 6;
        if (!bVar3) goto LAB_00488a00;
        pbVar12 = param_1 + 3;
        if ((*pbVar12 & 0xffffffc0) == 0x80) {
          uVar10 = uVar10 << 6 | *pbVar12 & 0x3f;
          goto LAB_00488a00;
        }
        goto LAB_00488a03;
      }
      pbVar6 = param_2 + 1;
      bVar1 = *param_2;
      wVar8 = (wint_t)bVar1;
      if ((char)bVar1 < '\0') goto LAB_00488a13;
LAB_00488ae0:
      pbVar11 = pbVar6;
LAB_00488ae3:
      uVar5 = 0;
      if (uVar10 != wVar8) {
LAB_00488aee:
        wVar4 = towupper(uVar10);
        wVar8 = towupper(wVar8);
        uVar5 = (int)(wVar4 - wVar8) >> 0x1f | 1;
        if (wVar4 - wVar8 == 0) {
          uVar5 = 0;
        }
      }
    }
    else {
LAB_00488a00:
      pbVar12 = pbVar6;
LAB_00488a03:
      pbVar6 = param_2 + 1;
      bVar1 = *param_2;
      wVar8 = (wint_t)bVar1;
      if (-1 < (char)bVar1) goto LAB_00488ae0;
LAB_00488a13:
      pbVar6 = param_2 + 1;
      if ((bVar1 & 0x40) == 0) {
        wVar8 = bVar1 & 0x7f;
        goto LAB_00488ae0;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar5 = 0x3f;
        lVar9 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar5 = 0x1f;
          lVar9 = 1;
          bVar3 = false;
        }
        else {
          uVar5 = 0xf;
          lVar9 = 2;
          bVar3 = true;
        }
      }
      wVar8 = bVar1 & uVar5;
      if ((param_2[1] & 0xffffffc0) != 0x80) goto LAB_00488ae0;
      pbVar6 = param_2 + lVar9 + 2;
      wVar8 = param_2[1] & 0x3f | wVar8 << 6;
      if (!bVar2) goto LAB_00488ae0;
      pbVar11 = param_2 + 2;
      if ((*pbVar11 & 0xffffffc0) == 0x80) {
        wVar8 = *pbVar11 & 0x3f | wVar8 << 6;
        if (!bVar3) goto LAB_00488ae0;
        pbVar11 = param_2 + 3;
        if ((*pbVar11 & 0xffffffc0) == 0x80) {
          wVar8 = wVar8 << 6 | *pbVar11 & 0x3f;
          goto LAB_00488ae0;
        }
        goto LAB_00488ae3;
      }
      uVar5 = 0;
      if (uVar10 != wVar8) goto LAB_00488aee;
    }
    cVar7 = (uVar10 == 0) * '\x02';
    if (uVar5 != 0) {
      cVar7 = '\x01';
      unaff_R12D = uVar5;
    }
    param_2 = pbVar11;
    param_1 = pbVar12;
    if (cVar7 != '\0') {
      if (cVar7 != '\x01') {
        unaff_R12D = 0;
      }
      return unaff_R12D;
    }
  } while( true );
}


