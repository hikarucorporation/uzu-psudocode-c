// Function : parseNextFlag
// Namespace: juce:SVGState
// Entry    : 002b6050
// Prototype: undefined8 parseNextFlag(long * param_1, undefined8 param_2)
// Body     : 002b6050 - 002b6648


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::parseNextFlag(juce::CharPointer_UTF8&, bool&) */

undefined8 __cdecl juce::SVGState::parseNextFlag(long *param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  
  pbVar8 = (byte *)*param_1;
LAB_002b6080:
  bVar1 = *pbVar8;
  uVar5 = (uint)bVar1;
  if ((char)bVar1 < '\0') {
    uVar10 = (uint)bVar1;
    if ((bVar1 & 0x40) == 0) {
      iVar4 = iswspace(uVar10 & 0x7f);
      pbVar3 = (byte *)*param_1;
    }
    else {
      uVar5 = uVar10 & 0x10 ^ 0x1f;
      if ((bVar1 & 0x20) == 0) {
        uVar5 = 0x3f;
      }
      uVar5 = uVar5 & uVar10;
      if ((pbVar8[1] & 0xc0) != 0x80) goto LAB_002b6140;
      uVar5 = pbVar8[1] & 0x3f | uVar5 << 6;
      if (((bVar1 & 0x20) == 0) || ((pbVar8[2] & 0xc0) != 0x80)) {
        iVar4 = iswspace(uVar5);
        pbVar3 = (byte *)*param_1;
      }
      else {
        uVar5 = pbVar8[2] & 0x3f | uVar5 << 6;
        if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar8[3] & 0xffffffc0) != 0x80))
        goto LAB_002b6140;
        iVar4 = iswspace(uVar5 << 6 | pbVar8[3] & 0x3f);
        pbVar3 = (byte *)*param_1;
      }
    }
  }
  else {
LAB_002b6140:
    iVar4 = iswspace(uVar5);
    pbVar3 = (byte *)*param_1;
  }
  if (iVar4 == 0) {
    bVar1 = *pbVar3;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar5 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
        if (uVar5 != 0x2c) {
          if (uVar5 != 0x30) goto LAB_002b6346;
          goto LAB_002b634f;
        }
      }
      else {
        uVar10 = uVar5 & 0x10 ^ 0x1f;
        bVar11 = (bVar1 & 0x10) == 0 & bVar1 >> 5;
        if ((bVar1 & 0x20) == 0) {
          uVar10 = 0x3f;
        }
        uVar5 = uVar10 & uVar5;
        bVar2 = pbVar3[1];
        uVar10 = bVar2 & 0xffffffc0;
        if (uVar10 == 0x80) {
          uVar12 = (bVar2 & 0x3f) + uVar5 * 0x40;
          if (((((bVar1 & 0x20) != 0) && ((pbVar3[2] & 0xffffffc0) == 0x80)) &&
              (uVar12 = pbVar3[2] & 0x3f | uVar12 * 0x40, bVar11 == 0)) &&
             ((pbVar3[3] & 0xc0) == 0x80)) {
            uVar12 = uVar12 << 6 | pbVar3[3] & 0x3f;
          }
          if (uVar12 != 0x2c) {
            uVar12 = bVar2 & 0x3f | uVar5 * 0x40;
            if (((bVar1 & 0x20) == 0) || ((pbVar3[2] & 0xc0) != 0x80)) {
            }
            else {
              uVar12 = pbVar3[2] & 0x3f | uVar12 << 6;
              if (bVar11 == 0) {
                if ((pbVar3[3] & 0xc0) == 0x80) {
                  uVar12 = uVar12 << 6 | pbVar3[3] & 0x3f;
                }
              }
            }
            goto LAB_002b62e6;
          }
        }
        else if (uVar5 != 0x2c) {
          uVar12 = uVar5;
LAB_002b62e6:
          if (uVar12 == 0x30) goto LAB_002b634f;
          if (((uVar10 == 0x80) && (uVar5 = bVar2 & 0x3f | uVar5 << 6, (bVar1 & 0x20) != 0)) &&
             (((pbVar3[2] & 0xffffffc0) == 0x80 &&
              ((uVar5 = pbVar3[2] & 0x3f | uVar5 << 6, bVar11 == 0 &&
               ((pbVar3[3] & 0xffffffc0) == 0x80)))))) {
            uVar5 = uVar5 << 6 | pbVar3[3] & 0x3f;
          }
          goto LAB_002b6346;
        }
      }
    }
    else if (bVar1 != 0x2c) goto LAB_002b6271;
  }
  pbVar8 = pbVar3 + 1;
  *param_1 = (long)pbVar8;
  bVar1 = *pbVar3;
  if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
    lVar7 = 4 - (ulong)((bVar1 & 0x10) == 0);
    if ((bVar1 & 0x20) == 0) {
      lVar7 = 2;
    }
    pbVar8 = pbVar3 + lVar7;
    *param_1 = (long)pbVar8;
  }
  goto LAB_002b6080;
LAB_002b6271:
  if (bVar1 != 0x30) {
LAB_002b6346:
    if (uVar5 != 0x31) {
      return 0;
    }
  }
LAB_002b634f:
  pbVar8 = pbVar3 + 1;
  *param_1 = (long)pbVar8;
  bVar1 = *pbVar3;
  uVar5 = (uint)bVar1;
  pbVar9 = pbVar8;
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0x40) != 0) {
      lVar7 = 2;
      if ((bVar1 & 0x20) != 0) {
        lVar7 = 4 - (ulong)((bVar1 & 0x10) == 0);
      }
      pbVar9 = pbVar3 + lVar7;
      *param_1 = (long)pbVar9;
      bVar1 = *pbVar3;
      uVar5 = (uint)bVar1;
      if (-1 < (char)bVar1) goto LAB_002b6364;
    }
    uVar5 = (uint)bVar1;
    if ((bVar1 & 0x40) == 0) {
      uVar5 = uVar5 & 0x7f;
    }
    else {
      uVar10 = 0x3f;
      if ((bVar1 & 0x20) != 0) {
        uVar10 = uVar5 & 0x10 ^ 0x1f;
      }
      uVar5 = uVar10 & uVar5;
      if (((((*pbVar8 & 0xffffffc0) == 0x80) &&
           (uVar5 = *pbVar8 & 0x3f | uVar5 << 6, (bVar1 & 0x20) != 0)) &&
          ((pbVar3[2] & 0xffffffc0) == 0x80)) &&
         ((uVar5 = pbVar3[2] & 0x3f | uVar5 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
          ((pbVar3[3] & 0xffffffc0) == 0x80)))) {
        uVar5 = uVar5 << 6 | pbVar3[3] & 0x3f;
      }
    }
  }
LAB_002b6364:
  *(bool *)param_2 = uVar5 != 0x30;
  do {
    bVar1 = *pbVar9;
    uVar5 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar10 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        iVar4 = iswspace(uVar10 & 0x7f);
        pbVar8 = (byte *)*param_1;
      }
      else {
        uVar5 = uVar10 & 0x10 ^ 0x1f;
        if ((bVar1 & 0x20) == 0) {
          uVar5 = 0x3f;
        }
        uVar5 = uVar5 & uVar10;
        if ((pbVar9[1] & 0xc0) != 0x80) goto LAB_002b6440;
        uVar5 = pbVar9[1] & 0x3f | uVar5 << 6;
        if (((bVar1 & 0x20) == 0) || ((pbVar9[2] & 0xc0) != 0x80)) {
          iVar4 = iswspace(uVar5);
          pbVar8 = (byte *)*param_1;
        }
        else {
          uVar5 = pbVar9[2] & 0x3f | uVar5 << 6;
          if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) != 0) || ((pbVar9[3] & 0xffffffc0) != 0x80))
          goto LAB_002b6440;
          iVar4 = iswspace(uVar5 << 6 | pbVar9[3] & 0x3f);
          pbVar8 = (byte *)*param_1;
        }
      }
    }
    else {
LAB_002b6440:
      iVar4 = iswspace(uVar5);
      pbVar8 = (byte *)*param_1;
    }
    if (iVar4 == 0) {
      bVar1 = *pbVar8;
      uVar6 = (ulong)bVar1;
      if (-1 < (char)bVar1) goto LAB_002b6510;
      uVar5 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
        uVar6 = 0;
joined_r0x002b6465:
        if (uVar5 == 0x2c) goto LAB_002b6515;
        goto LAB_002b655d;
      }
      uVar10 = uVar5 & 0x10 ^ 0x1f;
      if ((bVar1 & 0x20) == 0) {
        uVar10 = 0x3f;
      }
      if ((pbVar8[1] & 0xc0) == 0x80) {
        uVar5 = pbVar8[1] & 0x3f | (uVar10 & uVar5) << 6;
        if (((bVar1 & 0x20) != 0) && ((pbVar8[2] & 0xc0) == 0x80)) {
          uVar5 = pbVar8[2] & 0x3f | uVar5 << 6;
          uVar6 = (ulong)uVar5;
          if (((bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0) && ((pbVar8[3] & 0xffffffc0) == 0x80)) {
            uVar5 = uVar5 << 6 | pbVar8[3] & 0x3f;
            uVar6 = (ulong)uVar5;
            goto joined_r0x002b6465;
          }
          goto LAB_002b6510;
        }
        uVar6 = (ulong)uVar5;
      }
      else {
        uVar6 = (ulong)(uVar10 & uVar5);
LAB_002b6510:
        uVar5 = (uint)uVar6;
      }
      if (uVar5 != 0x2c) {
LAB_002b655d:
        return CONCAT71((int7)(uVar6 >> 8),1);
      }
    }
LAB_002b6515:
    pbVar9 = pbVar8 + 1;
    *param_1 = (long)pbVar9;
    bVar1 = *pbVar8;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      lVar7 = 4 - (ulong)((bVar1 & 0x10) == 0);
      if ((bVar1 & 0x20) == 0) {
        lVar7 = 2;
      }
      pbVar9 = pbVar8 + lVar7;
      *param_1 = (long)pbVar9;
    }
  } while( true );
}


