// Function : compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
// Namespace: juce:CharacterFunctions
// Entry    : 00487750
// Prototype: uint compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>(byte * param_1, byte * param_2, int param_3, undefined8 param_4, undefined8 param_5, uint param_6)
// Body     : 00487750 - 004879a9


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,
   juce::CharPointer_UTF8>(juce::CharPointer_UTF8, juce::CharPointer_UTF8, int) */

uint __cdecl
juce::CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
          (byte *param_1,byte *param_2,int param_3,undefined8 param_4,undefined8 param_5,
          uint param_6)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  
  iVar6 = param_3 + 1;
  do {
    iVar6 = iVar6 + -1;
    if (iVar6 < 1) {
      return 0;
    }
    pbVar9 = param_1 + 1;
    bVar1 = *param_1;
    uVar10 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
        goto LAB_004877bf;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar5 = 0x3f;
        lVar11 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar5 = 0x1f;
          lVar11 = 1;
          bVar3 = false;
        }
        else {
          uVar5 = 0xf;
          lVar11 = 2;
          bVar3 = true;
        }
      }
      uVar10 = uVar10 & uVar5;
      if ((param_1[1] & 0xffffffc0) == 0x80) {
        uVar10 = param_1[1] & 0x3f | uVar10 << 6;
        if (bVar2) {
          uVar5 = (uint)param_1[2];
          if ((uVar5 & 0xffffffc0) != 0x80) {
            bVar1 = *param_2;
            param_1 = param_1 + 2;
            goto joined_r0x004877cb;
          }
          uVar10 = uVar5 & 0x3f | uVar10 << 6;
          if (bVar3) {
            pbVar9 = param_1 + 3;
            if ((*pbVar9 & 0xc0) != 0x80) goto LAB_004878a0;
            uVar10 = uVar10 << 6 | *pbVar9 & 0x3f;
          }
        }
        bVar1 = *param_2;
        param_1 = param_1 + lVar11 + 2;
      }
      else {
LAB_004878a0:
        bVar1 = *param_2;
        param_1 = pbVar9;
      }
    }
    else {
LAB_004877bf:
      bVar1 = *param_2;
      param_1 = pbVar9;
    }
joined_r0x004877cb:
    uVar5 = (uint)bVar1;
    pbVar9 = param_2 + 1;
    if ((char)bVar1 < '\0') {
      pbVar9 = param_2 + 1;
      if ((bVar1 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          uVar7 = 0x3f;
          lVar11 = 0;
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar7 = 0x1f;
            lVar11 = 1;
            bVar3 = false;
          }
          else {
            uVar7 = 0xf;
            lVar11 = 2;
            bVar3 = true;
          }
        }
        uVar5 = uVar5 & uVar7;
        if ((param_2[1] & 0xffffffc0) == 0x80) {
          pbVar9 = param_2 + lVar11 + 2;
          uVar5 = param_2[1] & 0x3f | uVar5 << 6;
          if (bVar2) {
            bVar1 = param_2[2];
            if ((bVar1 & 0xc0) == 0x80) {
              uVar5 = bVar1 & 0x3f | uVar5 << 6;
              if (bVar3) {
                uVar7 = (uint)param_2[3];
                if ((uVar7 & 0xffffffc0) == 0x80) {
                  uVar5 = uVar5 << 6 | uVar7 & 0x3f;
                }
                else {
                  pbVar9 = param_2 + 3;
                }
              }
            }
            else {
              pbVar9 = param_2 + 2;
            }
          }
        }
      }
    }
    param_2 = pbVar9;
    iVar8 = uVar10 - uVar5;
    if (iVar8 != 0) {
      param_6 = iVar8 >> 0x1f | 1;
    }
    cVar4 = (uVar10 == 0) * '\x03';
    if (iVar8 != 0) {
      cVar4 = '\x01';
    }
    if (cVar4 != '\0') {
      uVar10 = 0;
      if (cVar4 != '\x03') {
        uVar10 = param_6;
      }
      return uVar10;
    }
  } while( true );
}


