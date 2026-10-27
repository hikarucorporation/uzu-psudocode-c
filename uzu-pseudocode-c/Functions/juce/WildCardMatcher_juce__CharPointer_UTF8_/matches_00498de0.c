// Function : matches
// Namespace: juce:WildCardMatcher_juce__CharPointer_UTF8_
// Entry    : 00498de0
// Prototype: undefined8 matches(byte * param_1, byte * param_2)
// Body     : 00498de0 - 00499030


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::WildCardMatcher<juce::CharPointer_UTF8>::matches(juce::CharPointer_UTF8,
   juce::CharPointer_UTF8, bool) */

undefined8 __cdecl
juce::WildCardMatcher<juce::CharPointer_UTF8>::matches(byte *param_1,byte *param_2)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  long lVar10;
  
  do {
    pbVar4 = param_1 + 1;
    bVar8 = *param_1;
    uVar6 = (uint)bVar8;
    pbVar3 = pbVar4;
    if ((char)bVar8 < '\0') {
      if ((bVar8 & 0x40) == 0) {
        uVar6 = bVar8 & 0x7f;
      }
      else {
        if ((bVar8 & 0x20) == 0) {
          uVar6 = 0x3f;
          lVar10 = 0;
          bVar1 = false;
          bVar2 = false;
        }
        else {
          bVar1 = true;
          if ((bVar8 & 0x10) == 0) {
            uVar6 = 0x1f;
            lVar10 = 1;
            bVar2 = false;
          }
          else {
            uVar6 = 0xf;
            lVar10 = 2;
            bVar2 = true;
          }
        }
        uVar6 = bVar8 & uVar6;
        if ((param_1[1] & 0xffffffc0) == 0x80) {
          pbVar4 = param_1 + lVar10 + 2;
          uVar6 = param_1[1] & 0x3f | uVar6 << 6;
          pbVar3 = pbVar4;
          if (bVar1) {
            bVar8 = param_1[2];
            pbVar3 = param_1 + 2;
            if ((bVar8 & 0xc0) == 0x80) {
              uVar6 = bVar8 & 0x3f | uVar6 << 6;
              pbVar3 = pbVar4;
              if (bVar2) {
                uVar7 = (uint)param_1[3];
                pbVar3 = param_1 + 3;
                if ((uVar7 & 0xffffffc0) == 0x80) {
                  uVar6 = uVar6 << 6 | uVar7 & 0x3f;
                  pbVar3 = pbVar4;
                }
              }
            }
          }
        }
      }
    }
    param_1 = pbVar3;
    if (uVar6 == 0x2a) {
      if (*param_1 != 0) {
        bVar8 = *param_2;
        if (bVar8 == 0) {
          return 0;
        }
        do {
          uVar5 = matches(param_1,param_2);
          if ((char)uVar5 != '\0') {
            return uVar5;
          }
          pbVar4 = param_2 + 1;
          if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
            if ((bVar8 & 0x20) == 0) {
              pbVar4 = param_2 + 2;
            }
            else {
              pbVar4 = param_2 + (4 - (ulong)((bVar8 & 0x10) == 0));
            }
          }
          bVar8 = *pbVar4;
          param_2 = pbVar4;
        } while (bVar8 != 0);
        return uVar5;
      }
      break;
    }
    pbVar4 = param_2 + 1;
    bVar8 = *param_2;
    uVar7 = (uint)bVar8;
    pbVar3 = pbVar4;
    if ((char)bVar8 < '\0') {
      if ((bVar8 & 0x40) == 0) {
        uVar7 = bVar8 & 0x7f;
      }
      else {
        if ((bVar8 & 0x20) == 0) {
          uVar7 = 0x3f;
          lVar10 = 0;
          bVar1 = false;
          bVar2 = false;
        }
        else {
          bVar1 = true;
          if ((bVar8 & 0x10) == 0) {
            uVar7 = 0x1f;
            lVar10 = 1;
            bVar2 = false;
          }
          else {
            uVar7 = 0xf;
            lVar10 = 2;
            bVar2 = true;
          }
        }
        uVar7 = bVar8 & uVar7;
        if ((param_2[1] & 0xc0) == 0x80) {
          pbVar4 = param_2 + lVar10 + 2;
          uVar7 = param_2[1] & 0x3f | uVar7 << 6;
          pbVar3 = pbVar4;
          if (bVar1) {
            uVar9 = (uint)param_2[2];
            pbVar3 = param_2 + 2;
            if ((uVar9 & 0xffffffc0) == 0x80) {
              uVar7 = uVar9 & 0x3f | uVar7 << 6;
              pbVar3 = pbVar4;
              if (bVar2) {
                uVar9 = (uint)param_2[3];
                pbVar3 = param_2 + 3;
                if ((uVar9 & 0xffffffc0) == 0x80) {
                  uVar7 = uVar7 << 6 | uVar9 & 0x3f;
                  pbVar3 = pbVar4;
                }
              }
            }
          }
        }
      }
    }
    param_2 = pbVar3;
    if (uVar6 != uVar7) {
      pbVar4 = (byte *)0x0;
      if (uVar6 != 0x3f) {
        return 0;
      }
      if (uVar7 == 0) {
        return 0;
      }
    }
  } while (uVar6 != 0);
  return CONCAT71((int7)((ulong)pbVar4 >> 8),1);
}


