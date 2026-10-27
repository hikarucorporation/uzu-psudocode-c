// Function : createFromCharPointer<juce::CharPointer_UTF8>
// Namespace: juce:StringHolderUtils
// Entry    : 00492c20
// Prototype: byte * createFromCharPointer<juce::CharPointer_UTF8>(byte * param_1, long param_2)
// Body     : 00492c20 - 00492fc0


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::CharPointer_UTF8
   juce::StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(juce::CharPointer_UTF8,
   unsigned long) */

byte * __cdecl
juce::StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(byte *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  byte *pbVar3;
  long lVar4;
  undefined4 *puVar5;
  byte bVar6;
  sbyte sVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  
  pbVar3 = &DAT_0061ac58;
  if (((param_1 != (byte *)0x0) && (param_2 != 0)) && (bVar6 = *param_1, bVar6 != 0)) {
    lVar10 = 1;
    lVar17 = 0;
    pbVar3 = param_1;
    do {
      pbVar13 = pbVar3 + 1;
      uVar14 = (uint)bVar6;
      if ((char)bVar6 < '\0') {
        lVar4 = 1;
        if ((bVar6 & 0x40) != 0) {
          if ((bVar6 & 0x20) == 0) {
            uVar9 = 0x3f;
            lVar15 = 0;
            bVar1 = false;
            bVar2 = false;
          }
          else {
            bVar1 = true;
            if ((bVar6 & 0x10) == 0) {
              uVar9 = 0x1f;
              lVar15 = 1;
              bVar2 = false;
            }
            else {
              uVar9 = 0xf;
              lVar15 = 2;
              bVar2 = true;
            }
          }
          if ((pbVar3[1] & 0xffffffc0) == 0x80) {
            pbVar12 = pbVar3 + lVar15 + 2;
            uVar14 = pbVar3[1] & 0x3f | (uVar9 & uVar14) << 6;
            pbVar13 = pbVar12;
            if (bVar1) {
              pbVar13 = pbVar3 + 2;
              if ((*pbVar13 & 0xc0) == 0x80) {
                uVar14 = *pbVar13 & 0x3f | uVar14 << 6;
                pbVar13 = pbVar12;
                if (bVar2) {
                  pbVar13 = pbVar3 + 3;
                  if ((*pbVar13 & 0xffffffc0) == 0x80) {
                    uVar14 = uVar14 << 6 | *pbVar13 & 0x3f;
                    pbVar13 = pbVar12;
                  }
                }
              }
            }
            goto LAB_00492c6b;
          }
        }
      }
      else {
LAB_00492c6b:
        lVar4 = 1;
        if (0x7f < uVar14) {
          lVar4 = 2;
          if (0x7ff < uVar14) {
            lVar4 = 4 - (ulong)(uVar14 < 0x10000);
          }
        }
      }
      pbVar3 = pbVar13;
      lVar10 = lVar10 + lVar4;
      if (param_2 + -1 == lVar17) {
        lVar17 = param_2;
        break;
      }
      bVar6 = *pbVar3;
      lVar17 = lVar17 + 1;
    } while (bVar6 != 0);
    uVar11 = lVar10 + 3U & 0xfffffffffffffffc;
    puVar5 = operator_new__(uVar11 + 0x17);
    LOCK();
    *puVar5 = 0;
    UNLOCK();
    *(ulong *)(puVar5 + 2) = uVar11;
    pbVar3 = (byte *)(puVar5 + 4);
    pbVar13 = pbVar3;
    if (0 < (int)lVar17) {
      iVar16 = (int)lVar17 + 2;
      do {
        pbVar12 = param_1 + 1;
        bVar6 = *param_1;
        uVar14 = (uint)bVar6;
        if ((char)bVar6 < '\0') {
          if ((bVar6 & 0x40) == 0) {
            uVar14 = bVar6 & 0x7f;
          }
          else {
            if ((bVar6 & 0x20) == 0) {
              uVar14 = 0x3f;
              lVar17 = 0;
              bVar1 = false;
              bVar2 = false;
            }
            else {
              bVar1 = true;
              if ((bVar6 & 0x10) == 0) {
                uVar14 = 0x1f;
                lVar17 = 1;
                bVar2 = false;
              }
              else {
                uVar14 = 0xf;
                lVar17 = 2;
                bVar2 = true;
              }
            }
            uVar14 = bVar6 & uVar14;
            if ((param_1[1] & 0xffffffc0) == 0x80) {
              pbVar8 = param_1 + lVar17 + 2;
              uVar14 = param_1[1] & 0x3f | uVar14 << 6;
              pbVar12 = pbVar8;
              if (bVar1) {
                bVar6 = param_1[2];
                pbVar12 = param_1 + 2;
                if ((bVar6 & 0xc0) == 0x80) {
                  uVar14 = bVar6 & 0x3f | uVar14 << 6;
                  pbVar12 = pbVar8;
                  if (bVar2) {
                    bVar6 = param_1[3];
                    pbVar12 = param_1 + 3;
                    if ((bVar6 & 0xc0) == 0x80) {
                      uVar14 = uVar14 << 6 | bVar6 & 0x3f;
                      pbVar12 = pbVar8;
                    }
                  }
                }
              }
            }
          }
        }
        param_1 = pbVar12;
        if (uVar14 == 0) break;
        if (uVar14 < 0x80) {
          *pbVar13 = (byte)uVar14;
          pbVar13 = pbVar13 + 1;
        }
        else {
          uVar9 = 0xffff < uVar14 | 2;
          if (uVar14 < 0x800) {
            uVar9 = 1;
          }
          bVar6 = (byte)uVar9;
          sVar7 = bVar6 * '\x06';
          *pbVar13 = (byte)(uVar14 >> sVar7) | (byte)(0xff << (bVar6 ^ 7));
          pbVar13[1] = (byte)(uVar14 >> ((bVar6 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
          if (uVar14 < 0x800) {
            pbVar13 = pbVar13 + 2;
          }
          else {
            pbVar13[2] = (byte)(uVar14 >> (sVar7 - 0xcU & 0x1f)) & 0x3f | 0x80;
            if (uVar9 - 1 < 2) {
              pbVar13 = pbVar13 + 3;
            }
            else {
              pbVar13[3] = (byte)(uVar14 >> (sVar7 - 0x12U & 0x1f)) & 0x3f | 0x80;
              pbVar13 = pbVar13 + 4;
            }
          }
        }
        iVar16 = iVar16 + -1;
      } while (2 < iVar16);
    }
    *pbVar13 = 0;
  }
  return pbVar3;
}


