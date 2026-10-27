// Function : containsWholeWordIgnoreCase
// Namespace: juce:String
// Entry    : 004a7d60
// Prototype: undefined8 containsWholeWordIgnoreCase(String * this, byte * param_1)
// Body     : 004a7d60 - 004a814f


/* juce::String::containsWholeWordIgnoreCase(juce::StringRef) const */

undefined8 __thiscall juce::String::containsWholeWordIgnoreCase(String *this,byte *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined8 in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  pbVar7 = (byte *)CONCAT71((int7)((ulong)in_RAX >> 8),*param_1);
  if (*param_1 != 0) {
    iVar10 = 1;
    iVar11 = 0;
    iVar13 = 0;
    pbVar5 = param_1;
    do {
      if ((char)pbVar7 < '\0') {
        do {
          bVar1 = pbVar5[1];
          pbVar5 = pbVar5 + 1;
        } while ((bVar1 & 0xc0) == 0x80);
      }
      else {
        if ((char)pbVar7 == '\0') goto LAB_004a7dd4;
        bVar1 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      }
      pbVar7 = (byte *)(ulong)bVar1;
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + -1;
    } while( true );
  }
  goto LAB_004a8135;
LAB_004a7dd4:
  iVar8 = 0;
  pbVar5 = *(byte **)this;
  do {
    pbVar7 = pbVar5 + 1;
    bVar1 = *pbVar5;
    if ((char)bVar1 < '\0') {
      do {
        pbVar7 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
      } while ((*pbVar7 & 0xc0) == 0x80);
    }
    else {
      pbVar5 = pbVar7;
      if (bVar1 == 0) break;
    }
    iVar8 = iVar8 + 1;
  } while( true );
  iVar8 = iVar8 - iVar13;
  if (-1 < iVar8) {
    bVar2 = false;
    pbVar5 = *(byte **)this;
    iVar12 = 0;
    do {
      uVar3 = CharacterFunctions::
              compareIgnoreCaseUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar5,param_1,iVar13);
      if (uVar3 == 0) {
        if (iVar12 != 0) {
          bVar1 = pbVar5[-1];
          if ((bVar1 & 0xc0) == 0x80) {
            bVar1 = pbVar5[-2];
            if ((bVar1 & 0xc0) == 0x80) {
              bVar1 = pbVar5[-3];
              if ((bVar1 & 0xc0) == 0x80) {
                pbVar7 = pbVar5 + -4;
                bVar1 = pbVar5[-4];
              }
              else {
                pbVar7 = pbVar5 + -3;
              }
            }
            else {
              pbVar7 = pbVar5 + -2;
            }
          }
          else {
            pbVar7 = pbVar5 + -1;
          }
          uVar3 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            if ((bVar1 & 0x40) == 0) {
              uVar3 = uVar3 & 0x7f;
            }
            else {
              uVar9 = uVar3 & 0x10 ^ 0x1f;
              if ((bVar1 & 0x20) == 0) {
                uVar9 = 0x3f;
              }
              uVar3 = uVar3 & uVar9;
              if (((((pbVar7[1] & 0xffffffc0) == 0x80) &&
                   (uVar3 = pbVar7[1] & 0x3f | uVar3 << 6, (bVar1 & 0x20) != 0)) &&
                  ((pbVar7[2] & 0xc0) == 0x80)) &&
                 ((uVar3 = pbVar7[2] & 0x3f | uVar3 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
                  ((pbVar7[3] & 0xffffffc0) == 0x80)))) {
                uVar3 = uVar3 << 6 | pbVar7[3] & 0x3f;
              }
            }
          }
          iVar4 = iswalnum(uVar3);
          if (iVar4 != 0) goto LAB_004a80f9;
        }
        pbVar7 = pbVar5;
        iVar4 = iVar11;
        if (iVar13 < 0) {
          do {
            if ((pbVar7[-1] & 0xc0) == 0x80) {
              if ((pbVar7[-2] & 0xc0) == 0x80) {
                if ((pbVar7[-3] & 0xc0) == 0x80) {
                  pbVar7 = pbVar7 + -4;
                }
                else {
                  pbVar7 = pbVar7 + -3;
                }
              }
              else {
                pbVar7 = pbVar7 + -2;
              }
            }
            else {
              pbVar7 = pbVar7 + -1;
            }
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        else {
          pbVar6 = pbVar5;
          iVar4 = iVar10;
          if (iVar13 != 0) {
            do {
              pbVar7 = pbVar6 + 1;
              bVar1 = *pbVar6;
              if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
                if ((bVar1 & 0x20) == 0) {
                  pbVar7 = pbVar6 + 2;
                }
                else {
                  pbVar7 = pbVar6 + (4 - (ulong)((bVar1 & 0x10) == 0));
                }
              }
              iVar4 = iVar4 + -1;
              pbVar6 = pbVar7;
            } while (1 < iVar4);
          }
        }
        bVar1 = *pbVar7;
        uVar3 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          uVar9 = (uint)bVar1;
          if ((bVar1 & 0x40) == 0) {
            iVar4 = iswalnum(uVar9 & 0x7f);
            pbVar7 = (byte *)CONCAT44(extraout_var,iVar4);
          }
          else {
            uVar3 = uVar9 & 0x10 ^ 0x1f;
            if ((bVar1 & 0x20) == 0) {
              uVar3 = 0x3f;
            }
            uVar3 = uVar3 & uVar9;
            if ((pbVar7[1] & 0xc0) != 0x80) goto LAB_004a80f0;
            uVar3 = pbVar7[1] & 0x3f | uVar3 << 6;
            if (((bVar1 & 0x20) == 0) || ((pbVar7[2] & 0xc0) != 0x80)) {
              iVar4 = iswalnum(uVar3);
              pbVar7 = (byte *)CONCAT44(extraout_var_02,iVar4);
            }
            else {
              uVar3 = pbVar7[2] & 0x3f | uVar3 << 6;
              if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar7[3] & 0xffffffc0) != 0x80))
              goto LAB_004a80f0;
              iVar4 = iswalnum(uVar3 << 6 | pbVar7[3] & 0x3f);
              pbVar7 = (byte *)CONCAT44(extraout_var_00,iVar4);
            }
          }
        }
        else {
LAB_004a80f0:
          iVar4 = iswalnum(uVar3);
          pbVar7 = (byte *)CONCAT44(extraout_var_01,iVar4);
        }
        if (iVar4 == 0) {
          if (!bVar2) goto LAB_004a813b;
          break;
        }
      }
LAB_004a80f9:
      pbVar7 = pbVar5 + 1;
      bVar1 = *pbVar5;
      if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
        if ((bVar1 & 0x20) == 0) {
          pbVar7 = pbVar5 + 2;
        }
        else {
          pbVar7 = pbVar5 + (4 - (ulong)((bVar1 & 0x10) == 0));
        }
      }
      iVar4 = iVar12 + 1;
      bVar2 = iVar8 <= iVar12;
      pbVar5 = pbVar7;
      iVar12 = iVar4;
    } while (iVar4 != iVar8 + 1);
  }
LAB_004a8135:
  iVar12 = -1;
LAB_004a813b:
  return CONCAT71((int7)((ulong)pbVar7 >> 8),-1 < iVar12);
}


