// Function : indexOf
// Namespace: juce:String
// Entry    : 00496a40
// Prototype: int indexOf(String * this, int param_1, byte * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5)
// Body     : 00496a40 - 00496c1e


/* juce::String::indexOf(int, juce::StringRef) const */

int __thiscall
juce::String::indexOf
          (String *this,int param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  int iVar11;
  
  bVar2 = *param_2;
  if (bVar2 == 0) {
    return -1;
  }
  pbVar8 = *(byte **)this;
  if (0 < param_1) {
    iVar5 = param_1 + 1;
    do {
      bVar1 = *pbVar8;
      if (bVar1 == 0) {
        return -1;
      }
      pbVar9 = pbVar8 + 1;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar9 = pbVar8 + 2;
        }
        else {
          pbVar9 = pbVar8 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      pbVar8 = pbVar9;
      iVar5 = iVar5 + -1;
    } while (1 < iVar5);
  }
  iVar5 = 0;
  pbVar9 = param_2;
  do {
    pbVar6 = pbVar9 + 1;
    if ((char)bVar2 < '\0') {
      do {
        bVar2 = pbVar9[1];
        pbVar6 = pbVar9 + 1;
        pbVar9 = pbVar6;
      } while ((bVar2 & 0xc0) == 0x80);
    }
    else {
      if (bVar2 == 0) break;
      bVar2 = *pbVar6;
    }
    iVar5 = iVar5 + 1;
    pbVar9 = pbVar6;
  } while( true );
  iVar11 = 0;
  do {
    uVar3 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar8,param_2,iVar5,pbVar9,param_4,(uint)param_5);
    if (uVar3 == 0) {
LAB_00496c10:
      return iVar11 + param_1;
    }
    pbVar6 = pbVar8 + 1;
    bVar2 = *pbVar8;
    pbVar9 = (byte *)(ulong)bVar2;
    if (-1 < (char)bVar2) goto LAB_00496bf0;
    if ((bVar2 & 0x40) == 0) {
      pbVar9 = (byte *)(ulong)(bVar2 & 0x7f);
      if ((bVar2 & 0x7f) == 0) goto LAB_00496c07;
    }
    else {
      if ((bVar2 & 0x20) == 0) {
        uVar3 = 0x3f;
        lVar10 = 0;
        param_5 = 0;
        param_4 = 0;
      }
      else {
        param_5 = CONCAT71((int7)((ulong)param_5 >> 8),1);
        if ((bVar2 & 0x10) == 0) {
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
      uVar3 = bVar2 & uVar3;
      pbVar9 = (byte *)(ulong)uVar3;
      if ((pbVar8[1] & 0xc0) == 0x80) {
        pbVar4 = pbVar8 + lVar10 + 2;
        uVar3 = pbVar8[1] & 0x3f | uVar3 << 6;
        pbVar9 = (byte *)(ulong)uVar3;
        pbVar6 = pbVar4;
        if ((char)param_5 == '\0') goto LAB_00496bf0;
        pbVar6 = pbVar8 + 2;
        if ((*pbVar6 & 0xffffffc0) != 0x80) goto LAB_00496bf0;
        uVar3 = *pbVar6 & 0x3f | uVar3 << 6;
        pbVar9 = (byte *)(ulong)uVar3;
        pbVar6 = pbVar4;
        if ((char)param_4 == '\0') goto LAB_00496bf0;
        uVar7 = (uint)pbVar8[3];
        pbVar6 = pbVar8 + 3;
        if ((uVar7 & 0xffffffc0) == 0x80) {
          uVar3 = uVar3 << 6 | uVar7 & 0x3f;
          pbVar9 = (byte *)(ulong)uVar3;
          pbVar6 = pbVar4;
        }
      }
      else {
LAB_00496bf0:
        uVar3 = (uint)pbVar9;
      }
      if (uVar3 == 0) {
LAB_00496c07:
        param_1 = 0;
        iVar11 = -1;
        goto LAB_00496c10;
      }
    }
    iVar11 = iVar11 + 1;
    pbVar8 = pbVar6;
  } while( true );
}


