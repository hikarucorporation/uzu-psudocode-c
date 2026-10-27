// Function : compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
// Namespace: juce:CharacterFunctions
// Entry    : 001c2db0
// Prototype: uint compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(byte * param_1, byte * param_2)
// Body     : 001c2db0 - 001c2fe4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::CharacterFunctions::compare<juce::CharPointer_UTF8,
   juce::CharPointer_UTF8>(juce::CharPointer_UTF8, juce::CharPointer_UTF8) */

uint __cdecl
juce::CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
          (byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint in_EAX;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  
  do {
    pbVar8 = param_1 + 1;
    bVar1 = *param_1;
    uVar7 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar7 = uVar7 & 0x7f;
        goto LAB_001c2dfc;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar5 = 0x3f;
        lVar9 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar5 = 0x1f;
          lVar9 = 1;
          bVar3 = false;
        }
        else {
          uVar5 = 0xf;
          lVar9 = 2;
          bVar3 = true;
        }
      }
      uVar7 = uVar7 & uVar5;
      if ((param_1[1] & 0xffffffc0) == 0x80) {
        uVar7 = param_1[1] & 0x3f | uVar7 << 6;
        if (bVar2) {
          uVar5 = (uint)param_1[2];
          if ((uVar5 & 0xffffffc0) != 0x80) {
            bVar1 = *param_2;
            param_1 = param_1 + 2;
            goto joined_r0x001c2ec6;
          }
          uVar7 = uVar5 & 0x3f | uVar7 << 6;
          if (bVar3) {
            pbVar8 = param_1 + 3;
            if ((*pbVar8 & 0xc0) != 0x80) goto LAB_001c2ee0;
            uVar7 = uVar7 << 6 | *pbVar8 & 0x3f;
          }
        }
        bVar1 = *param_2;
        param_1 = param_1 + lVar9 + 2;
      }
      else {
LAB_001c2ee0:
        bVar1 = *param_2;
        param_1 = pbVar8;
      }
    }
    else {
LAB_001c2dfc:
      bVar1 = *param_2;
      param_1 = pbVar8;
    }
joined_r0x001c2ec6:
    uVar5 = (uint)bVar1;
    pbVar8 = param_2 + 1;
    if ((char)bVar1 < '\0') {
      pbVar8 = param_2 + 1;
      if ((bVar1 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          uVar6 = 0x3f;
          lVar9 = 0;
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar6 = 0x1f;
            lVar9 = 1;
            bVar3 = false;
          }
          else {
            uVar6 = 0xf;
            lVar9 = 2;
            bVar3 = true;
          }
        }
        uVar5 = uVar5 & uVar6;
        if ((param_2[1] & 0xffffffc0) == 0x80) {
          pbVar8 = param_2 + lVar9 + 2;
          uVar5 = param_2[1] & 0x3f | uVar5 << 6;
          if (bVar2) {
            uVar6 = (uint)param_2[2];
            if ((uVar6 & 0xffffffc0) == 0x80) {
              uVar5 = uVar6 & 0x3f | uVar5 << 6;
              if (bVar3) {
                uVar6 = (uint)param_2[3];
                if ((uVar6 & 0xffffffc0) == 0x80) {
                  uVar5 = uVar5 << 6 | uVar6 & 0x3f;
                }
                else {
                  pbVar8 = param_2 + 3;
                }
              }
            }
            else {
              pbVar8 = param_2 + 2;
            }
          }
        }
      }
    }
    param_2 = pbVar8;
    cVar4 = (uVar7 == 0) * '\x02';
    if (uVar7 - uVar5 != 0) {
      cVar4 = '\x01';
      in_EAX = (int)(uVar7 - uVar5) >> 0x1f | 1;
    }
    if (cVar4 != '\0') {
      if (cVar4 != '\x01') {
        in_EAX = 0;
      }
      return in_EAX;
    }
  } while( true );
}


