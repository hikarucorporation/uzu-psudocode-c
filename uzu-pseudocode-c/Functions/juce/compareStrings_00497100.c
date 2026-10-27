// Function : compareStrings
// Namespace: juce
// Entry    : 00497100
// Prototype: uint compareStrings(undefined8 * param_1, byte * param_2)
// Body     : 00497100 - 00497332


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::compareStrings(juce::StartEndString const&, juce::String const&) */

uint __cdecl juce::compareStrings(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint in_EAX;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  long lVar11;
  
  pbVar10 = (byte *)*param_1;
  do {
    uVar4 = 0;
    pbVar9 = pbVar10;
    if ((byte *)param_1[1] <= pbVar10) goto LAB_00497123;
    pbVar8 = pbVar10 + 1;
    bVar1 = *pbVar10;
    uVar4 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar4 = uVar4 & 0x7f;
        goto LAB_00497120;
      }
      if ((bVar1 & 0x20) == 0) {
        uVar6 = 0x3f;
        lVar11 = 0;
        bVar2 = false;
        bVar3 = false;
      }
      else {
        bVar2 = true;
        if ((bVar1 & 0x10) == 0) {
          uVar6 = 0x1f;
          lVar11 = 1;
          bVar3 = false;
        }
        else {
          uVar6 = 0xf;
          lVar11 = 2;
          bVar3 = true;
        }
      }
      uVar4 = uVar4 & uVar6;
      if ((pbVar10[1] & 0xffffffc0) != 0x80) goto LAB_00497120;
      pbVar8 = pbVar10 + lVar11 + 2;
      uVar4 = pbVar10[1] & 0x3f | uVar4 << 6;
      if (!bVar2) goto LAB_00497120;
      pbVar9 = pbVar10 + 2;
      if ((*pbVar9 & 0xffffffc0) == 0x80) {
        uVar4 = *pbVar9 & 0x3f | uVar4 << 6;
        if (bVar3) {
          bVar1 = pbVar10[3];
          pbVar9 = pbVar10 + 3;
          if ((bVar1 & 0xc0) != 0x80) goto LAB_00497123;
          uVar4 = uVar4 << 6 | bVar1 & 0x3f;
        }
        goto LAB_00497120;
      }
    }
    else {
LAB_00497120:
      pbVar9 = pbVar8;
    }
LAB_00497123:
    pbVar10 = param_2 + 1;
    bVar1 = *param_2;
    uVar6 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar6 = uVar6 & 0x7f;
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
        uVar6 = uVar6 & uVar7;
        if ((param_2[1] & 0xffffffc0) == 0x80) {
          pbVar10 = param_2 + lVar11 + 2;
          uVar6 = param_2[1] & 0x3f | uVar6 << 6;
          if (bVar2) {
            bVar1 = param_2[2];
            if ((bVar1 & 0xc0) == 0x80) {
              uVar6 = bVar1 & 0x3f | uVar6 << 6;
              if (bVar3) {
                uVar7 = (uint)param_2[3];
                if ((uVar7 & 0xffffffc0) == 0x80) {
                  uVar6 = uVar6 << 6 | uVar7 & 0x3f;
                }
                else {
                  pbVar10 = param_2 + 3;
                }
              }
            }
            else {
              pbVar10 = param_2 + 2;
            }
          }
        }
      }
    }
    param_2 = pbVar10;
    cVar5 = (uVar4 == 0) * '\x02';
    if (uVar4 - uVar6 != 0) {
      cVar5 = '\x01';
      in_EAX = (int)(uVar4 - uVar6) >> 0x1f | 1;
    }
    pbVar10 = pbVar9;
    if (cVar5 != '\0') {
      if (cVar5 == '\x02') {
        in_EAX = 0;
      }
      return in_EAX;
    }
  } while( true );
}


