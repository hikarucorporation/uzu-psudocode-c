// Function : lastIndexOf
// Namespace: juce:String
// Entry    : 004a7a70
// Prototype: int lastIndexOf(String * this, byte * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, uint param_5)
// Body     : 004a7a70 - 004a7bda


/* juce::String::lastIndexOf(juce::StringRef) const */

int __thiscall
juce::String::lastIndexOf
          (String *this,byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          uint param_5)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  
  bVar7 = *param_1;
  if (bVar7 == 0) {
    return -1;
  }
  iVar3 = 1;
  iVar9 = 0;
  pbVar5 = param_1;
  do {
    if ((char)bVar7 < '\0') {
      do {
        bVar7 = pbVar5[1];
        pbVar5 = pbVar5 + 1;
      } while ((bVar7 & 0xc0) == 0x80);
    }
    else {
      if (bVar7 == 0) {
        pbVar5 = *(byte **)this;
        iVar8 = 0;
        pbVar6 = pbVar5;
        do {
          bVar7 = *pbVar6;
          if ((char)bVar7 < '\0') {
            do {
              pbVar1 = pbVar6 + 1;
              pbVar6 = pbVar6 + 1;
            } while ((*pbVar1 & 0xc0) == 0x80);
          }
          else {
            pbVar6 = pbVar6 + 1;
            if (bVar7 == 0) {
              iVar8 = iVar8 - iVar9;
              if (-1 < iVar8) {
                if (iVar8 == 0) {
                  pbVar6 = pbVar5;
                }
                else {
                  do {
                    bVar7 = *pbVar5;
                    pbVar6 = pbVar5 + 1;
                    if (((char)bVar7 < '\0') && ((bVar7 & 0x40) != 0)) {
                      if ((bVar7 & 0x20) == 0) {
                        pbVar6 = pbVar5 + 2;
                      }
                      else {
                        pbVar6 = pbVar5 + (4 - (ulong)((bVar7 & 0x10) == 0));
                      }
                    }
                    pbVar5 = pbVar6;
                    iVar3 = iVar3 + -1;
                    pbVar6 = pbVar5;
                  } while (1 < iVar3);
                }
                do {
                  uVar4 = CharacterFunctions::
                          compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                    (pbVar6,param_1,iVar9,pbVar5,param_4,param_5);
                  if (uVar4 == 0) {
                    return iVar8;
                  }
                  if ((pbVar6[-1] & 0xc0) == 0x80) {
                    if ((pbVar6[-2] & 0xc0) == 0x80) {
                      if ((pbVar6[-3] & 0xc0) == 0x80) {
                        pbVar6 = pbVar6 + -4;
                      }
                      else {
                        pbVar6 = pbVar6 + -3;
                      }
                    }
                    else {
                      pbVar6 = pbVar6 + -2;
                    }
                  }
                  else {
                    pbVar6 = pbVar6 + -1;
                  }
                  bVar2 = 0 < iVar8;
                  iVar8 = iVar8 + -1;
                } while (bVar2);
              }
              return -1;
            }
          }
          iVar8 = iVar8 + 1;
          iVar3 = iVar3 + 1;
        } while( true );
      }
      bVar7 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
    }
    iVar9 = iVar9 + 1;
    iVar3 = iVar3 + -1;
  } while( true );
}


