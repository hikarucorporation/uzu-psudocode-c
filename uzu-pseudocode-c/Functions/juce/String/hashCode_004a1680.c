// Function : hashCode
// Namespace: juce:String
// Entry    : 004a1680
// Prototype: int hashCode(String * this)
// Body     : 004a1680 - 004a1781


/* juce::String::hashCode() const */

int __thiscall juce::String::hashCode(String *this)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  
  pbVar7 = *(byte **)this;
  bVar5 = *pbVar7;
  iVar3 = 0;
  do {
    if (bVar5 == 0) {
      return iVar3;
    }
    pbVar8 = pbVar7 + 1;
    uVar6 = (uint)bVar5;
    if ((char)bVar5 < '\0') {
      if ((bVar5 & 0x40) == 0) {
        uVar6 = uVar6 & 0x7f;
        goto LAB_004a168d;
      }
      if ((bVar5 & 0x20) == 0) {
        uVar4 = 0x3f;
        lVar10 = 0;
        bVar1 = false;
        bVar2 = false;
      }
      else {
        bVar1 = true;
        if ((bVar5 & 0x10) == 0) {
          uVar4 = 0x1f;
          lVar10 = 1;
          bVar2 = false;
        }
        else {
          uVar4 = 0xf;
          lVar10 = 2;
          bVar2 = true;
        }
      }
      uVar6 = uVar4 & uVar6;
      bVar5 = pbVar7[1];
      if ((bVar5 & 0xc0) == 0x80) {
        pbVar9 = pbVar7 + lVar10 + 2;
        uVar6 = bVar5 & 0x3f | uVar6 << 6;
        pbVar8 = pbVar9;
        if (!bVar1) goto LAB_004a168d;
        pbVar8 = pbVar7 + 2;
        bVar5 = *pbVar8;
        if ((bVar5 & 0xc0) == 0x80) {
          uVar6 = bVar5 & 0x3f | uVar6 << 6;
          pbVar8 = pbVar9;
          if (bVar2) {
            pbVar8 = pbVar7 + 3;
            bVar5 = *pbVar8;
            if ((bVar5 & 0xc0) != 0x80) goto LAB_004a1691;
            uVar6 = uVar6 << 6 | bVar5 & 0x3f;
            pbVar8 = pbVar9;
          }
          goto LAB_004a168d;
        }
        goto LAB_004a1691;
      }
    }
    else {
LAB_004a168d:
      bVar5 = *pbVar8;
LAB_004a1691:
    }
    pbVar7 = pbVar8;
    iVar3 = uVar6 + iVar3 * 0x1f;
  } while( true );
}


