// Function : skipNextWhiteSpace
// Namespace: juce:XmlDocument
// Entry    : 0048eb30
// Prototype: undefined skipNextWhiteSpace(XmlDocument * this)
// Body     : 0048eb30 - 0048f40d


/* WARNING: Type propagation algorithm not settling */
/* juce::XmlDocument::skipNextWhiteSpace() */

void __thiscall juce::XmlDocument::skipNextWhiteSpace(XmlDocument *this)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  pbVar5 = *(byte **)(this + 8);
  do {
    while( true ) {
      bVar1 = *pbVar5;
      uVar4 = (uint)bVar1;
      if (-1 < (char)bVar1) break;
      uVar7 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        iVar3 = iswspace(uVar7 & 0x7f);
        pbVar10 = *(byte **)(this + 8);
      }
      else {
        uVar4 = uVar7 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar4 = 0x3f;
        }
        uVar4 = uVar4 & uVar7;
        if ((pbVar5[1] & 0xc0) != 0x80) break;
        uVar4 = pbVar5[1] & 0x3f | uVar4 << 6;
        if (((bVar1 & 0x20) == 0) || ((pbVar5[2] & 0xc0) != 0x80)) {
          iVar3 = iswspace(uVar4);
          pbVar10 = *(byte **)(this + 8);
        }
        else {
          uVar4 = pbVar5[2] & 0x3f | uVar4 << 6;
          if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar5[3] & 0xffffffc0) != 0x80))
          break;
          iVar3 = iswspace(uVar4 << 6 | pbVar5[3] & 0x3f);
          pbVar10 = *(byte **)(this + 8);
        }
      }
      if (iVar3 == 0) goto LAB_0048ec90;
LAB_0048ec2e:
      pbVar5 = pbVar10 + 1;
      *(byte **)(this + 8) = pbVar5;
      bVar1 = *pbVar10;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        lVar6 = 4 - (ulong)((bVar1 & 0x10) == 0);
        if ((bVar1 & 0x20) == 0) {
          lVar6 = 2;
        }
        pbVar5 = pbVar10 + lVar6;
        *(byte **)(this + 8) = pbVar5;
      }
    }
    iVar3 = iswspace(uVar4);
    pbVar10 = *(byte **)(this + 8);
    if (iVar3 != 0) goto LAB_0048ec2e;
LAB_0048ec90:
    bVar1 = *pbVar10;
    uVar4 = (uint)bVar1;
    if (bVar1 == 0) {
LAB_0048f3f9:
      this[0x10] = (XmlDocument)0x1;
      return;
    }
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar4 = uVar7 & 0x7f;
      }
      else {
        uVar4 = uVar7 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar4 = 0x3f;
        }
        uVar4 = uVar4 & uVar7;
        if (((((pbVar10[1] & 0xffffffc0) == 0x80) &&
             (uVar4 = pbVar10[1] & 0x3f | uVar4 << 6, (bVar1 & 0x20) != 0)) &&
            ((pbVar10[2] & 0xffffffc0) == 0x80)) &&
           ((uVar4 = pbVar10[2] & 0x3f | uVar4 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
            ((pbVar10[3] & 0xffffffc0) == 0x80)))) {
          uVar4 = uVar4 << 6 | pbVar10[3] & 0x3f;
        }
      }
    }
    if (uVar4 != 0x3c) {
      return;
    }
    pbVar5 = pbVar10 + 1;
    bVar13 = -1 < (char)bVar1;
    bVar12 = (bVar1 & 0x40) == 0;
    pbVar9 = pbVar5;
    if (bVar12 || bVar13) {
LAB_0048ed5a:
      bVar2 = *pbVar9;
    }
    else {
      if ((bVar1 & 0x20) == 0) {
        pbVar9 = pbVar10 + 2;
        goto LAB_0048ed5a;
      }
      pbVar9 = pbVar10 + (4 - (ulong)((bVar1 & 0x10) == 0));
      bVar2 = *pbVar9;
    }
    uVar4 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar4 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        uVar4 = uVar4 & 0x7f;
      }
      else {
        uVar7 = uVar4 & 0x10 ^ 0x1f;
        if ((bVar2 & 0x20) == 0) {
          uVar7 = 0x3f;
        }
        uVar4 = uVar7 & uVar4;
        if ((((*(byte *)((long)pbVar9 + 1) & 0xffffffc0) == 0x80) &&
            (uVar4 = *(byte *)((long)pbVar9 + 1) & 0x3f | uVar4 << 6, (bVar2 & 0x20) != 0)) &&
           (((*(byte *)((long)pbVar9 + 2) & 0xc0) == 0x80 &&
            ((uVar4 = *(byte *)((long)pbVar9 + 2) & 0x3f | uVar4 << 6,
             (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
             ((*(byte *)((long)pbVar9 + 3) & 0xc0) == 0x80)))))) {
          uVar4 = uVar4 << 6 | *(byte *)((long)pbVar9 + 3) & 0x3f;
        }
      }
    }
    if (uVar4 == 0x21) {
      pbVar9 = pbVar5;
      if (bVar12 || bVar13) {
LAB_0048ee4a:
        pbVar8 = pbVar9 + 1;
        bVar2 = *pbVar9;
        if (-1 < (char)bVar2) goto LAB_0048ee8e;
LAB_0048ee56:
        if ((bVar2 & 0x40) == 0) goto LAB_0048ee8e;
        if ((bVar2 & 0x20) == 0) {
          pbVar8 = pbVar9 + 2;
        }
        else {
          pbVar8 = pbVar9 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
        bVar2 = *pbVar8;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          pbVar9 = pbVar10 + 2;
          goto LAB_0048ee4a;
        }
        bVar11 = (bVar1 & 0x10) == 0;
        pbVar9 = pbVar10 + (4 - (ulong)bVar11);
        pbVar8 = pbVar10 + (5 - (ulong)bVar11);
        bVar2 = *pbVar9;
        if ((char)bVar2 < '\0') goto LAB_0048ee56;
LAB_0048ee8e:
        bVar2 = *pbVar8;
      }
      uVar4 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar4 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          uVar4 = uVar4 & 0x7f;
        }
        else {
          uVar7 = uVar4 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar7 = 0x3f;
          }
          uVar4 = uVar7 & uVar4;
          if (((((pbVar8[1] & 0xc0) == 0x80) &&
               (uVar4 = pbVar8[1] & 0x3f | uVar4 << 6, (bVar2 & 0x20) != 0)) &&
              ((pbVar8[2] & 0xc0) == 0x80)) &&
             ((uVar4 = pbVar8[2] & 0x3f | uVar4 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
              ((pbVar8[3] & 0xc0) == 0x80)))) {
            uVar4 = uVar4 << 6 | pbVar8[3] & 0x3f;
          }
        }
      }
      if (uVar4 != 0x2d) goto LAB_0048f110;
      pbVar9 = pbVar5;
      if (bVar12 || bVar13) {
LAB_0048ef85:
        pbVar8 = pbVar9 + 1;
        bVar2 = *pbVar9;
        if (-1 < (char)bVar2) goto LAB_0048efc2;
LAB_0048ef91:
        if ((bVar2 & 0x40) == 0) goto LAB_0048efc2;
        if ((bVar2 & 0x20) == 0) {
          pbVar8 = pbVar9 + 2;
        }
        else {
          pbVar8 = pbVar9 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
        pbVar9 = pbVar8 + 1;
        bVar2 = *pbVar8;
        if ((char)bVar2 < '\0') goto LAB_0048efce;
LAB_0048f011:
        bVar2 = *pbVar9;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          pbVar9 = pbVar10 + 2;
          goto LAB_0048ef85;
        }
        bVar11 = (bVar1 & 0x10) == 0;
        pbVar9 = pbVar10 + (4 - (ulong)bVar11);
        pbVar8 = pbVar10 + (5 - (ulong)bVar11);
        bVar2 = *pbVar9;
        if ((char)bVar2 < '\0') goto LAB_0048ef91;
LAB_0048efc2:
        pbVar9 = pbVar8 + 1;
        bVar2 = *pbVar8;
        if (-1 < (char)bVar2) goto LAB_0048f011;
LAB_0048efce:
        if ((bVar2 & 0x40) == 0) goto LAB_0048f011;
        if ((bVar2 & 0x20) == 0) {
          pbVar9 = pbVar8 + 2;
        }
        else {
          pbVar9 = pbVar8 + (4 - (ulong)((bVar2 & 0x10) == 0));
        }
        bVar2 = *pbVar9;
      }
      uVar4 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar4 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          uVar4 = uVar4 & 0x7f;
        }
        else {
          uVar7 = uVar4 & 0x10 ^ 0x1f;
          if ((bVar2 & 0x20) == 0) {
            uVar7 = 0x3f;
          }
          uVar4 = uVar7 & uVar4;
          if ((((pbVar9[1] & 0xc0) == 0x80) &&
              (uVar4 = pbVar9[1] & 0x3f | uVar4 << 6, (bVar2 & 0x20) != 0)) &&
             (((pbVar9[2] & 0xc0) == 0x80 &&
              ((uVar4 = pbVar9[2] & 0x3f | uVar4 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
               ((pbVar9[3] & 0xc0) == 0x80)))))) {
            uVar4 = uVar4 << 6 | pbVar9[3] & 0x3f;
          }
        }
      }
      if (uVar4 != 0x2d) goto LAB_0048f110;
      *(byte **)(this + 8) = pbVar5;
      bVar1 = *pbVar10;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar5 = pbVar10 + 2;
        }
        else {
          pbVar5 = pbVar10 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar10 = pbVar5 + 1;
      *(byte **)(this + 8) = pbVar10;
      bVar1 = *pbVar5;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar10 = pbVar5 + 2;
        }
        else {
          pbVar10 = pbVar5 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar5 = pbVar10 + 1;
      *(byte **)(this + 8) = pbVar5;
      bVar1 = *pbVar10;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar5 = pbVar10 + 2;
        }
        else {
          pbVar5 = pbVar10 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar10 = pbVar5 + 1;
      *(byte **)(this + 8) = pbVar10;
      bVar1 = *pbVar5;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        lVar6 = 4 - (ulong)((bVar1 & 0x10) == 0);
        if ((bVar1 & 0x20) == 0) {
          lVar6 = 2;
        }
        pbVar10 = pbVar5 + lVar6;
        *(byte **)(this + 8) = pbVar10;
      }
      iVar3 = CharacterFunctions::indexOf<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                        (pbVar10,&DAT_005e5ea6);
      if (iVar3 < 0) goto LAB_0048f3f9;
      iVar3 = iVar3 + 4;
      do {
        pbVar5 = pbVar10 + 1;
        *(byte **)(this + 8) = pbVar5;
        bVar1 = *pbVar10;
        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
          lVar6 = 4 - (ulong)((bVar1 & 0x10) == 0);
          if ((bVar1 & 0x20) == 0) {
            lVar6 = 2;
          }
          pbVar5 = pbVar10 + lVar6;
          *(byte **)(this + 8) = pbVar5;
        }
        iVar3 = iVar3 + -1;
        pbVar10 = pbVar5;
      } while (1 < iVar3);
    }
    else {
LAB_0048f110:
      pbVar9 = pbVar5;
      if (bVar12 || bVar13) {
LAB_0048f121:
        bVar1 = *pbVar9;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          pbVar9 = pbVar10 + 2;
          goto LAB_0048f121;
        }
        pbVar9 = pbVar10 + (4 - (ulong)((bVar1 & 0x10) == 0));
        bVar1 = *pbVar9;
      }
      uVar4 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar4 = (uint)bVar1;
        if ((bVar1 & 0x40) == 0) {
          uVar4 = uVar4 & 0x7f;
        }
        else {
          uVar7 = uVar4 & 0x10 ^ 0x1f;
          if ((bVar1 & 0x20) == 0) {
            uVar7 = 0x3f;
          }
          uVar4 = uVar7 & uVar4;
          if (((((pbVar9[1] & 0xc0) == 0x80) &&
               (uVar4 = pbVar9[1] & 0x3f | uVar4 << 6, (bVar1 & 0x20) != 0)) &&
              ((pbVar9[2] & 0xc0) == 0x80)) &&
             ((uVar4 = pbVar9[2] & 0x3f | uVar4 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar9[3] & 0xc0) == 0x80)))) {
            uVar4 = uVar4 << 6 | pbVar9[3] & 0x3f;
          }
        }
      }
      if (uVar4 != 0x3f) {
        return;
      }
      *(byte **)(this + 8) = pbVar5;
      bVar1 = *pbVar10;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar5 = pbVar10 + 2;
        }
        else {
          pbVar5 = pbVar10 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar10 = pbVar5 + 1;
      *(byte **)(this + 8) = pbVar10;
      bVar1 = *pbVar5;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        lVar6 = 4 - (ulong)((bVar1 & 0x10) == 0);
        if ((bVar1 & 0x20) == 0) {
          lVar6 = 2;
        }
        pbVar10 = pbVar5 + lVar6;
        *(byte **)(this + 8) = pbVar10;
      }
      iVar3 = CharacterFunctions::indexOf<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
                        (pbVar10,&DAT_005e5fad);
      if (iVar3 < 0) goto LAB_0048f3f9;
      iVar3 = iVar3 + 3;
      do {
        pbVar5 = pbVar10 + 1;
        *(byte **)(this + 8) = pbVar5;
        bVar1 = *pbVar10;
        if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
          lVar6 = 4 - (ulong)((bVar1 & 0x10) == 0);
          if ((bVar1 & 0x20) == 0) {
            lVar6 = 2;
          }
          pbVar5 = pbVar10 + lVar6;
          *(byte **)(this + 8) = pbVar5;
        }
        iVar3 = iVar3 + -1;
        pbVar10 = pbVar5;
      } while (1 < iVar3);
    }
  } while( true );
}


