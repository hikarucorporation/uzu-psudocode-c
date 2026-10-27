// Function : compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
// Namespace: juce:CharacterFunctions
// Entry    : 002a2380
// Prototype: uint compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(byte * param_1, byte * param_2, int param_3)
// Body     : 002a2380 - 002a262a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,
   juce::CharPointer_UTF8>(juce::CharPointer_UTF8, juce::CharPointer_UTF8, int) */

uint __cdecl
juce::CharacterFunctions::compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
          (byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  wint_t wVar5;
  uint uVar6;
  wint_t wVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  uint unaff_R14D;
  long lVar12;
  
  iVar10 = param_3 + 1;
  do {
    iVar10 = iVar10 + -1;
    if (iVar10 < 1) {
      return 0;
    }
    pbVar8 = param_1 + 1;
    bVar1 = *param_1;
    uVar9 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar9 = bVar1 & 0x7f;
        goto LAB_002a24a0;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar9 = 0x3f;
        lVar12 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar9 = 0x1f;
          lVar12 = 1;
          bVar3 = false;
        }
        else {
          uVar9 = 0xf;
          lVar12 = 2;
          bVar3 = true;
        }
      }
      uVar9 = bVar1 & uVar9;
      if ((param_1[1] & 0xffffffc0) != 0x80) goto LAB_002a24a0;
      pbVar8 = param_1 + lVar12 + 2;
      uVar9 = param_1[1] & 0x3f | uVar9 << 6;
      if (!bVar2) goto LAB_002a24a0;
      pbVar11 = param_1 + 2;
      if ((*pbVar11 & 0xffffffc0) == 0x80) {
        uVar9 = *pbVar11 & 0x3f | uVar9 << 6;
        if (!bVar3) goto LAB_002a24a0;
        pbVar11 = param_1 + 3;
        if ((*pbVar11 & 0xc0) == 0x80) {
          uVar9 = uVar9 << 6 | *pbVar11 & 0x3f;
          goto LAB_002a24a0;
        }
        goto LAB_002a24a3;
      }
      pbVar8 = param_2 + 1;
      bVar1 = *param_2;
      wVar7 = (wint_t)bVar1;
      if ((char)bVar1 < '\0') goto LAB_002a24af;
LAB_002a24b8:
      uVar6 = 0;
      if (uVar9 != wVar7) {
LAB_002a25b0:
        wVar5 = towupper(uVar9);
        wVar7 = towupper(wVar7);
        uVar6 = (int)(wVar5 - wVar7) >> 0x1f | 1;
        if (wVar5 - wVar7 == 0) {
          uVar6 = 0;
        }
      }
    }
    else {
LAB_002a24a0:
      pbVar11 = pbVar8;
LAB_002a24a3:
      pbVar8 = param_2 + 1;
      bVar1 = *param_2;
      wVar7 = (wint_t)bVar1;
      if (-1 < (char)bVar1) goto LAB_002a24b8;
LAB_002a24af:
      pbVar8 = param_2 + 1;
      if ((bVar1 & 0x40) == 0) {
        wVar7 = bVar1 & 0x7f;
        goto LAB_002a24b8;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar6 = 0x3f;
        lVar12 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar6 = 0x1f;
          lVar12 = 1;
          bVar3 = false;
        }
        else {
          uVar6 = 0xf;
          lVar12 = 2;
          bVar3 = true;
        }
      }
      wVar7 = bVar1 & uVar6;
      if ((param_2[1] & 0xc0) != 0x80) {
LAB_002a25a0:
        uVar6 = 0;
        if (uVar9 == wVar7) goto LAB_002a23a0;
        goto LAB_002a25b0;
      }
      wVar7 = param_2[1] & 0x3f | wVar7 << 6;
      if (bVar2) {
        pbVar8 = param_2 + 2;
        if ((*pbVar8 & 0xc0) != 0x80) goto LAB_002a24b8;
        wVar7 = *pbVar8 & 0x3f | wVar7 << 6;
        if (bVar3) {
          pbVar8 = param_2 + 3;
          if ((*pbVar8 & 0xc0) != 0x80) goto LAB_002a25a0;
          wVar7 = wVar7 << 6 | *pbVar8 & 0x3f;
        }
      }
      uVar6 = 0;
      pbVar8 = param_2 + lVar12 + 2;
      if (uVar9 != wVar7) goto LAB_002a25b0;
    }
LAB_002a23a0:
    if (uVar6 != 0) {
      unaff_R14D = uVar6;
    }
    cVar4 = (uVar9 == 0) * '\x03';
    if (uVar6 != 0) {
      cVar4 = '\x01';
    }
    param_2 = pbVar8;
    param_1 = pbVar11;
    if (cVar4 != '\0') {
      uVar9 = 0;
      if (cVar4 != '\x03') {
        uVar9 = unaff_R14D;
      }
      return uVar9;
    }
  } while( true );
}


