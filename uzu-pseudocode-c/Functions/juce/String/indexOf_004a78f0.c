// Function : indexOf
// Namespace: juce:String
// Entry    : 004a78f0
// Prototype: int indexOf(String * this, byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 004a78f0 - 004a7a6f


/* juce::String::indexOf(juce::StringRef) const */

int __thiscall
juce::String::indexOf
          (String *this,byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  String SVar1;
  byte bVar2;
  uint uVar3;
  String *pSVar4;
  String *pSVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  
  bVar2 = *param_1;
  if (bVar2 == 0) {
    return 0;
  }
  iVar9 = 0;
  pbVar7 = param_1;
  do {
    pbVar6 = pbVar7 + 1;
    if ((char)bVar2 < '\0') {
      do {
        bVar2 = pbVar7[1];
        pbVar6 = pbVar7 + 1;
        pbVar7 = pbVar6;
      } while ((bVar2 & 0xc0) == 0x80);
    }
    else {
      if (bVar2 == 0) break;
      bVar2 = *pbVar6;
    }
    iVar9 = iVar9 + 1;
    pbVar7 = pbVar6;
  } while( true );
  iVar11 = 0;
  do {
    uVar3 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)this,param_1,iVar9,pbVar7,param_4,(uint)param_5);
    if (uVar3 == 0) {
      return iVar11;
    }
    pSVar5 = this + 1;
    SVar1 = *this;
    pbVar7 = (byte *)(ulong)(byte)SVar1;
    if (-1 < (char)SVar1) goto LAB_004a7a40;
    if (((byte)SVar1 & 0x40) == 0) {
      pbVar7 = (byte *)(ulong)((byte)SVar1 & 0x7f);
      if (((byte)SVar1 & 0x7f) == 0) {
        return -1;
      }
    }
    else {
      if (((byte)SVar1 & 0x20) == 0) {
        uVar3 = 0x3f;
        lVar10 = 0;
        param_5 = 0;
        param_4 = 0;
      }
      else {
        param_5 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        if (((byte)SVar1 & 0x10) == 0) {
          uVar3 = 0x1f;
          lVar10 = 1;
          param_4 = 0;
        }
        else {
          uVar3 = 0xf;
          lVar10 = 2;
          param_4 = CONCAT71((int7)((ulong)param_4 >> 8),1);
        }
      }
      uVar3 = (byte)SVar1 & uVar3;
      pbVar7 = (byte *)(ulong)uVar3;
      if (((byte)this[1] & 0xc0) == 0x80) {
        pSVar4 = this + lVar10 + 2;
        uVar3 = (byte)this[1] & 0x3f | uVar3 << 6;
        pbVar7 = (byte *)(ulong)uVar3;
        pSVar5 = pSVar4;
        if ((char)param_5 == '\0') goto LAB_004a7a40;
        pSVar5 = this + 2;
        if (((byte)*pSVar5 & 0xffffffc0) != 0x80) goto LAB_004a7a40;
        uVar3 = (byte)*pSVar5 & 0x3f | uVar3 << 6;
        pbVar7 = (byte *)(ulong)uVar3;
        pSVar5 = pSVar4;
        if ((char)param_4 == '\0') goto LAB_004a7a40;
        uVar8 = (uint)(byte)this[3];
        pSVar5 = this + 3;
        if ((uVar8 & 0xffffffc0) == 0x80) {
          uVar3 = uVar3 << 6 | uVar8 & 0x3f;
          pbVar7 = (byte *)(ulong)uVar3;
          pSVar5 = pSVar4;
        }
      }
      else {
LAB_004a7a40:
        uVar3 = (uint)pbVar7;
      }
      if (uVar3 == 0) {
        return -1;
      }
    }
    iVar11 = iVar11 + 1;
    this = pSVar5;
  } while( true );
}


