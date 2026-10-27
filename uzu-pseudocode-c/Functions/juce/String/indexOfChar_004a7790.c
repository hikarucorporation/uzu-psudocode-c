// Function : indexOfChar
// Namespace: juce:String
// Entry    : 004a7790
// Prototype: int indexOfChar(String * this, int param_1, uint param_2)
// Body     : 004a7790 - 004a78e7


/* juce::String::indexOfChar(int, wchar_t) const */

int __thiscall juce::String::indexOfChar(String *this,int param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  bVar3 = **(byte **)this;
  if (bVar3 != 0) {
    iVar6 = 0;
    pbVar9 = *(byte **)this;
    do {
      pbVar10 = pbVar9 + 1;
      if (iVar6 < param_1) {
        if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
          if ((bVar3 & 0x20) == 0) {
            pbVar10 = pbVar9 + 2;
          }
          else {
            pbVar10 = pbVar9 + (4 - (ulong)((bVar3 & 0x10) == 0));
          }
        }
      }
      else {
        uVar8 = (uint)bVar3;
        if ((char)bVar3 < '\0') {
          if ((bVar3 & 0x40) == 0) {
            uVar8 = uVar8 & 0x7f;
          }
          else {
            if ((bVar3 & 0x20) == 0) {
              uVar5 = 0x3f;
              lVar4 = 0;
              bVar1 = false;
              bVar2 = false;
            }
            else {
              bVar1 = true;
              if ((bVar3 & 0x10) == 0) {
                uVar5 = 0x1f;
                lVar4 = 1;
                bVar2 = false;
              }
              else {
                uVar5 = 0xf;
                lVar4 = 2;
                bVar2 = true;
              }
            }
            uVar8 = uVar8 & uVar5;
            if ((pbVar9[1] & 0xffffffc0) == 0x80) {
              pbVar7 = pbVar9 + lVar4 + 2;
              uVar8 = pbVar9[1] & 0x3f | uVar8 << 6;
              pbVar10 = pbVar7;
              if (bVar1) {
                pbVar10 = pbVar9 + 2;
                if ((*pbVar10 & 0xffffffc0) == 0x80) {
                  uVar8 = *pbVar10 & 0x3f | uVar8 << 6;
                  pbVar10 = pbVar7;
                  if (bVar2) {
                    pbVar10 = pbVar9 + 3;
                    if ((*pbVar10 & 0xc0) == 0x80) {
                      uVar8 = uVar8 << 6 | *pbVar10 & 0x3f;
                      pbVar10 = pbVar7;
                    }
                  }
                }
              }
            }
          }
        }
        if (uVar8 == param_2) {
          return iVar6;
        }
      }
      iVar6 = iVar6 + 1;
      bVar3 = *pbVar10;
      pbVar9 = pbVar10;
    } while (bVar3 != 0);
  }
  return -1;
}


