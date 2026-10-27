// Function : indexOf<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
// Namespace: juce:CharacterFunctions
// Entry    : 00497470
// Prototype: int indexOf<juce::CharPointer_UTF8,juce::CharPointer_ASCII>(byte * param_1, byte * param_2)
// Body     : 00497470 - 004976e6


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* int juce::CharacterFunctions::indexOf<juce::CharPointer_UTF8,
   juce::CharPointer_ASCII>(juce::CharPointer_UTF8, juce::CharPointer_ASCII) */

int __cdecl
juce::CharacterFunctions::indexOf<juce::CharPointer_UTF8,juce::CharPointer_ASCII>
          (byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  size_t sVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  pbVar11 = param_2;
  sVar5 = strlen((char *)param_2);
  iVar4 = 0;
  while( true ) {
    sVar6 = sVar5;
    pbVar15 = param_1;
    pbVar12 = param_2;
    do {
      if ((int)sVar6 < 1) {
        return iVar4;
      }
      pbVar14 = pbVar15 + 1;
      bVar1 = *pbVar15;
      uVar13 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        if ((bVar1 & 0x40) == 0) {
          uVar13 = uVar13 & 0x7f;
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            uVar10 = 0x3f;
            lVar9 = 0;
            bVar2 = false;
            bVar3 = false;
          }
          else {
            bVar2 = true;
            if ((bVar1 & 0x10) == 0) {
              uVar10 = 0x1f;
              lVar9 = 1;
              bVar3 = false;
            }
            else {
              uVar10 = 0xf;
              lVar9 = 2;
              bVar3 = true;
            }
          }
          uVar13 = uVar13 & uVar10;
          if ((pbVar15[1] & 0xffffffc0) == 0x80) {
            pbVar14 = pbVar15 + lVar9 + 2;
            uVar13 = pbVar15[1] & 0x3f | uVar13 << 6;
            if (bVar2) {
              uVar10 = (uint)pbVar15[2];
              if ((uVar10 & 0xffffffc0) == 0x80) {
                uVar13 = uVar10 & 0x3f | uVar13 << 6;
                if (bVar3) {
                  uVar10 = (uint)pbVar15[3];
                  if ((uVar10 & 0xffffffc0) == 0x80) {
                    uVar13 = uVar13 << 6 | uVar10 & 0x3f;
                  }
                  else {
                    pbVar14 = pbVar15 + 3;
                  }
                }
              }
              else {
                pbVar14 = pbVar15 + 2;
              }
            }
          }
        }
      }
      pbVar15 = pbVar14;
      bVar1 = *pbVar12;
      pbVar12 = pbVar12 + 1;
      iVar8 = uVar13 - bVar1;
      pbVar11 = (byte *)((ulong)pbVar11 & 0xffffffff);
      if (iVar8 != 0) {
        pbVar11 = (byte *)(ulong)(iVar8 >> 0x1f | 1);
      }
      cVar7 = (uVar13 == 0) * '\x03';
      if (iVar8 != 0) {
        cVar7 = '\x01';
      }
      sVar6 = (size_t)((int)sVar6 - 1);
    } while (cVar7 == '\0');
    if (cVar7 != '\x01') {
      return iVar4;
    }
    if ((int)pbVar11 == 0) {
      return iVar4;
    }
    pbVar15 = param_1 + 1;
    bVar1 = *param_1;
    uVar13 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      if ((bVar1 & 0x40) == 0) {
        uVar13 = bVar1 & 0x7f;
      }
      else {
        if ((bVar1 & 0x20) == 0) {
          uVar13 = 0x3f;
          lVar9 = 0;
          bVar2 = false;
          bVar3 = false;
        }
        else {
          bVar2 = true;
          if ((bVar1 & 0x10) == 0) {
            uVar13 = 0x1f;
            lVar9 = 1;
            bVar3 = false;
          }
          else {
            uVar13 = 0xf;
            lVar9 = 2;
            bVar3 = true;
          }
        }
        uVar13 = bVar1 & uVar13;
        bVar1 = param_1[1];
        pbVar11 = (byte *)(ulong)bVar1;
        if ((bVar1 & 0xc0) == 0x80) {
          pbVar12 = param_1 + lVar9 + 2;
          pbVar11 = (byte *)(ulong)(bVar1 & 0x3f);
          uVar13 = bVar1 & 0x3f | uVar13 << 6;
          pbVar15 = pbVar12;
          if (bVar2) {
            pbVar15 = param_1 + 2;
            uVar10 = *pbVar15 & 0xffffffc0;
            pbVar11 = (byte *)(ulong)uVar10;
            if (uVar10 == 0x80) {
              pbVar11 = (byte *)(ulong)(uVar13 << 6);
              uVar13 = *pbVar15 & 0x3f | uVar13 << 6;
              pbVar15 = pbVar12;
              if (bVar3) {
                pbVar15 = param_1 + 3;
                bVar1 = *pbVar15;
                pbVar11 = (byte *)(ulong)bVar1;
                if ((bVar1 & 0xffffffc0) == 0x80) {
                  uVar10 = bVar1 & 0x3f;
                  pbVar11 = (byte *)(ulong)uVar10;
                  uVar13 = uVar13 << 6 | uVar10;
                  pbVar15 = pbVar12;
                }
              }
            }
          }
        }
      }
    }
    if (uVar13 == 0) break;
    iVar4 = iVar4 + 1;
    param_1 = pbVar15;
  }
  return -1;
}


