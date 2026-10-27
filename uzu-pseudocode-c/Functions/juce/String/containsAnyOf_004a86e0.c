// Function : containsAnyOf
// Namespace: juce:String
// Entry    : 004a86e0
// Prototype: bool containsAnyOf(String * this, byte * param_1)
// Body     : 004a86e0 - 004a896f


/* juce::String::containsAnyOf(juce::StringRef) const */

bool __thiscall juce::String::containsAnyOf(String *this,byte *param_1)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  byte *pbVar14;
  
  pbVar10 = *(byte **)this;
  do {
    bVar2 = *pbVar10;
    if (bVar2 == 0) break;
    pbVar6 = pbVar10 + 1;
    if ((char)bVar2 < '\0') {
      if ((bVar2 & 0x40) == 0) {
        uVar12 = bVar2 & 0x7f;
LAB_004a8800:
        pbVar10 = pbVar6;
      }
      else {
        if ((bVar2 & 0x20) == 0) {
          uVar12 = 0x3f;
          lVar13 = 0;
          bVar3 = false;
          bVar4 = false;
        }
        else {
          bVar3 = true;
          if ((bVar2 & 0x10) == 0) {
            uVar12 = 0x1f;
            lVar13 = 1;
            bVar4 = false;
          }
          else {
            uVar12 = 0xf;
            lVar13 = 2;
            bVar4 = true;
          }
        }
        uVar12 = uVar12 & bVar2;
        if ((pbVar10[1] & 0xffffffc0) != 0x80) goto LAB_004a8800;
        pbVar6 = pbVar10 + lVar13 + 2;
        uVar12 = pbVar10[1] & 0x3f | uVar12 << 6;
        if (!bVar3) goto LAB_004a8800;
        bVar8 = pbVar10[2];
        if ((bVar8 & 0xc0) != 0x80) {
          bVar8 = *param_1;
          pbVar10 = pbVar10 + 2;
          goto joined_r0x004a880d;
        }
        uVar12 = bVar8 & 0x3f | uVar12 << 6;
        if (!bVar4) goto LAB_004a8800;
        pbVar10 = pbVar10 + 3;
        if ((*pbVar10 & 0xffffffc0) == 0x80) {
          uVar12 = uVar12 << 6 | *pbVar10 & 0x3f;
          goto LAB_004a8800;
        }
      }
      bVar8 = *param_1;
    }
    else {
      bVar8 = *param_1;
      pbVar10 = pbVar6;
      uVar12 = (uint)bVar2;
    }
joined_r0x004a880d:
    iVar11 = -1;
    if (bVar8 != 0) {
      iVar9 = 0;
      pbVar6 = param_1;
      do {
        pbVar1 = pbVar6 + 1;
        if ((char)bVar8 < '\0') {
          if ((bVar8 & 0x40) == 0) {
            uVar5 = bVar8 & 0x7f;
          }
          else {
            if ((bVar8 & 0x20) == 0) {
              uVar5 = 0x3f;
              lVar13 = 0;
              bVar3 = false;
              bVar4 = false;
            }
            else {
              bVar3 = true;
              if ((bVar8 & 0x10) == 0) {
                uVar5 = 0x1f;
                lVar13 = 1;
                bVar4 = false;
              }
              else {
                uVar5 = 0xf;
                lVar13 = 2;
                bVar4 = true;
              }
            }
            uVar5 = bVar8 & uVar5;
            if ((pbVar6[1] & 0xffffffc0) == 0x80) {
              pbVar14 = pbVar6 + lVar13 + 2;
              uVar5 = pbVar6[1] & 0x3f | uVar5 << 6;
              pbVar1 = pbVar14;
              if (bVar3) {
                uVar7 = (uint)pbVar6[2];
                pbVar1 = pbVar6 + 2;
                if (((uVar7 & 0xffffffc0) == 0x80) &&
                   (uVar5 = uVar7 & 0x3f | uVar5 << 6, pbVar1 = pbVar14, bVar4)) {
                  bVar8 = pbVar6[3];
                  pbVar1 = pbVar6 + 3;
                  if ((bVar8 & 0xc0) == 0x80) {
                    uVar5 = uVar5 << 6 | bVar8 & 0x3f;
                    pbVar1 = pbVar14;
                  }
                }
              }
            }
          }
        }
        else {
          uVar5 = (uint)bVar8;
        }
        pbVar6 = pbVar1;
        iVar11 = iVar9;
        if (uVar5 == uVar12) break;
        iVar9 = iVar9 + 1;
        bVar8 = *pbVar6;
        iVar11 = -1;
      } while (bVar8 != 0);
    }
  } while (iVar11 < 0);
  return bVar2 != 0;
}


