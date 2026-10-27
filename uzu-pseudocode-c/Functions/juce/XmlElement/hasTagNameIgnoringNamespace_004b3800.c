// Function : hasTagNameIgnoringNamespace
// Namespace: juce:XmlElement
// Entry    : 004b3800
// Prototype: ulong hasTagNameIgnoringNamespace(XmlElement * this, byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, uint param_5)
// Body     : 004b3800 - 004b3944


/* juce::XmlElement::hasTagNameIgnoringNamespace(juce::StringRef) const */

ulong __thiscall
juce::XmlElement::hasTagNameIgnoringNamespace
          (XmlElement *this,byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          uint param_5)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 extraout_RDX;
  undefined8 unaff_RBX;
  char *pcVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  String *this_00;
  
  uVar3 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)(this + 0x18),param_1);
  if (uVar3 == 0) {
    uVar8 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    goto LAB_004b393d;
  }
  this_00 = (String *)(this + 0x18);
  pcVar7 = ":";
  iVar4 = juce::String::lastIndexOf(this_00,&DAT_005e5e94,extraout_RDX,param_3,param_4,param_5);
  if (-1 < iVar4) {
    iVar6 = 0;
    iVar5 = iVar4;
    do {
      iVar5 = iVar5 + 1;
      if (*pcVar7 < '\0') {
        do {
          pbVar10 = (byte *)(pcVar7 + 1);
          pcVar7 = pcVar7 + 1;
          pcVar2 = pcVar7;
        } while ((*pbVar10 & 0xc0) == 0x80);
      }
      else {
        pcVar2 = pcVar7 + 1;
        if (*pcVar7 == '\0') goto LAB_004b3872;
      }
      pcVar7 = pcVar2;
      iVar6 = iVar6 + 1;
    } while( true );
  }
  pbVar10 = *(byte **)this_00;
  if (pbVar10 != &DAT_0061ac58) {
    LOCK();
    *(int *)(pbVar10 + -0x10) = *(int *)(pbVar10 + -0x10) + 1;
    UNLOCK();
  }
  goto LAB_004b3907;
LAB_004b3872:
  pbVar10 = *(byte **)this_00;
  if (iVar4 + iVar6 == 0 || SCARRY4(iVar4,iVar6) != iVar4 + iVar6 < 0) {
    if (pbVar10 != &DAT_0061ac58) {
      LOCK();
      *(int *)(pbVar10 + -0x10) = *(int *)(pbVar10 + -0x10) + 1;
      UNLOCK();
    }
  }
  else {
    pbVar9 = pbVar10;
    do {
      bVar1 = *pbVar9;
      pbVar10 = &DAT_0061ac58;
      if (bVar1 == 0) goto LAB_004b3907;
      pbVar10 = pbVar9 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar10 = pbVar9 + 2;
        }
        else {
          pbVar10 = pbVar9 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      iVar5 = iVar5 + -1;
      pbVar9 = pbVar10;
    } while (1 < iVar5);
    pbVar10 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar10);
  }
LAB_004b3907:
  uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (pbVar10,param_1);
  uVar8 = CONCAT71((int7)((ulong)pcVar7 >> 8),uVar3 == 0);
  pbVar10 = pbVar10 + -0x10;
  if (pbVar10 != (byte *)&emptyString) {
    LOCK();
    iVar4 = *(int *)pbVar10;
    *(int *)pbVar10 = *(int *)pbVar10 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(pbVar10);
    }
  }
LAB_004b393d:
  return uVar8 & 0xffffffff;
}


