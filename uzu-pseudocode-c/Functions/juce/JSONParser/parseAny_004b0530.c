// Function : parseAny
// Namespace: juce:JSONParser
// Entry    : 004b0530
// Prototype: undefined parseAny(long * param_1, JSONParser * param_2)
// Body     : 004b0530 - 004b12a4


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::JSONParser::parseAny() */

void __cdecl juce::JSONParser::parseAny(long *param_1,JSONParser *param_2)

{
  JSONParser *pJVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  char cVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  long local_38;
  long local_30;
  
  pJVar1 = param_2 + 8;
  pbVar6 = *(byte **)(param_2 + 8);
LAB_004b0550:
  pbVar9 = pbVar6;
  bVar2 = *pbVar9;
  uVar5 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    uVar13 = (uint)bVar2;
    if ((bVar2 & 0x40) == 0) {
      iVar4 = iswspace(uVar13 & 0x7f);
    }
    else {
      uVar5 = uVar13 & 0x10 ^ 0x1f;
      if ((bVar2 & 0x20) == 0) {
        uVar5 = 0x3f;
      }
      uVar5 = uVar5 & uVar13;
      if ((pbVar9[1] & 0xffffffc0) != 0x80) goto LAB_004b0610;
      uVar5 = pbVar9[1] & 0x3f | uVar5 << 6;
      if (((bVar2 & 0x20) == 0) || ((pbVar9[2] & 0xffffffc0) != 0x80)) {
        iVar4 = iswspace(uVar5);
      }
      else {
        uVar5 = pbVar9[2] & 0x3f | uVar5 << 6;
        if (((bVar2 >> 5 & (bVar2 & 0x10) == 0) != 0) || ((pbVar9[3] & 0xffffffc0) != 0x80))
        goto LAB_004b0610;
        iVar4 = iswspace(uVar5 << 6 | pbVar9[3] & 0x3f);
      }
    }
  }
  else {
LAB_004b0610:
    iVar4 = iswspace(uVar5);
  }
  if (iVar4 != 0) {
    bVar2 = *pbVar9;
    pbVar6 = pbVar9 + 1;
    if ((((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) &&
       (pbVar6 = pbVar9 + 2, (bVar2 & 0x20) != 0)) {
      pbVar6 = pbVar9 + (4 - (ulong)((bVar2 & 0x10) == 0));
    }
    goto LAB_004b0550;
  }
  pbVar6 = pbVar9 + 1;
  *(byte **)pJVar1 = pbVar6;
  bVar2 = *pbVar9;
  uVar5 = (uint)bVar2;
  if ((char)bVar2 < '\0') {
    if ((bVar2 & 0x40) == 0) {
      uVar5 = uVar5 & 0x7f;
    }
    else {
      uVar12 = uVar5 & 0x20;
      uVar15 = uVar5 & 0x10;
      uVar13 = 0x3f;
      if ((bVar2 & 0x20) != 0) {
        uVar13 = uVar15 ^ 0x1f;
      }
      uVar5 = uVar13 & uVar5;
      bVar3 = *pbVar6;
      if ((bVar3 & 0xc0) == 0x80) {
        pbVar6 = pbVar9 + 2;
        uVar5 = bVar3 & 0x3f | uVar5 << 6;
        *(byte **)pJVar1 = pbVar6;
        if (((bVar2 & 0x20) != 0) && (bVar2 = *pbVar6, (bVar2 & 0xc0) == 0x80)) {
          pbVar6 = pbVar9 + 3;
          *(byte **)pJVar1 = pbVar6;
          uVar5 = bVar2 & 0x3f | uVar5 << 6;
          if (((byte)((byte)(uVar15 >> 4) & (byte)(uVar12 >> 5)) != 0) &&
             (bVar2 = *pbVar6, (bVar2 & 0xffffffc0) == 0x80)) {
            pbVar6 = pbVar9 + 4;
            *(byte **)pJVar1 = pbVar6;
            uVar5 = bVar2 & 0x3f | uVar5 << 6;
          }
        }
      }
    }
  }
  switch(uVar5) {
  case 0x22:
    uVar5 = 0x22;
    goto LAB_004b089a;
  case 0x27:
    uVar5 = 0x27;
LAB_004b089a:
    parseString(&local_38,param_2,uVar5);
    *param_1 = (long)&var::Instance::attributesString;
    param_1[1] = local_38;
    return;
  case 0x2d:
LAB_004b0760:
    pbVar9 = pbVar6;
    bVar2 = *pbVar9;
    uVar5 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar13 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        iVar4 = iswspace(uVar13 & 0x7f);
      }
      else {
        uVar5 = uVar13 & 0x10 ^ 0x1f;
        if ((bVar2 & 0x20) == 0) {
          uVar5 = 0x3f;
        }
        uVar5 = uVar5 & uVar13;
        if ((pbVar9[1] & 0xffffffc0) != 0x80) goto LAB_004b0820;
        uVar5 = pbVar9[1] & 0x3f | uVar5 << 6;
        if (((bVar2 & 0x20) == 0) || ((pbVar9[2] & 0xffffffc0) != 0x80)) {
          iVar4 = iswspace(uVar5);
        }
        else {
          uVar5 = pbVar9[2] & 0x3f | uVar5 << 6;
          if (((bVar2 >> 5 & (bVar2 & 0x10) == 0) != 0) || ((pbVar9[3] & 0xffffffc0) != 0x80))
          goto LAB_004b0820;
          iVar4 = iswspace(uVar5 << 6 | pbVar9[3] & 0x3f);
        }
      }
    }
    else {
LAB_004b0820:
      iVar4 = iswspace(uVar5);
    }
    if (iVar4 != 0) {
      bVar2 = *pbVar9;
      pbVar6 = pbVar9 + 1;
      if ((((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) &&
         (pbVar6 = pbVar9 + 2, (bVar2 & 0x20) != 0)) {
        pbVar6 = pbVar9 + (4 - (ulong)((bVar2 & 0x10) == 0));
      }
      goto LAB_004b0760;
    }
    *(byte **)(param_2 + 8) = pbVar9;
    cVar11 = '\x01';
    goto LAB_004b0744;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    *(byte **)(param_2 + 8) = pbVar9;
    cVar11 = '\0';
LAB_004b0744:
    parseNumber(param_1,param_2,cVar11);
    return;
  case 0x5b:
    parseArray(param_1,param_2);
    return;
  case 0x66:
    bVar2 = *pbVar6;
    uVar5 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar5 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
      }
      else {
        if ((pbVar6[1] & 0xc0) != 0x80) break;
        uVar13 = 0x3f;
        if ((bVar2 & 0x20) != 0) {
          uVar13 = uVar5 & 0x10 ^ 0x1f;
        }
        uVar5 = pbVar6[1] & 0x3f | (uVar13 & uVar5) << 6;
        if ((((bVar2 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
           ((uVar5 = pbVar6[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
            ((pbVar6[3] & 0xffffffc0) == 0x80)))) {
          uVar5 = uVar5 << 6 | pbVar6[3] & 0x3f;
        }
      }
    }
    if (uVar5 == 0x61) {
      pbVar10 = pbVar6 + 1;
      *(byte **)pJVar1 = pbVar10;
      bVar2 = *pbVar6;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        lVar7 = 2;
        if ((bVar2 & 0x20) != 0) {
          lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
        }
        pbVar10 = pbVar6 + lVar7;
        *(byte **)pJVar1 = pbVar10;
      }
      bVar2 = *pbVar10;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar5 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          uVar5 = uVar5 & 0x7f;
        }
        else {
          if ((pbVar10[1] & 0xc0) != 0x80) break;
          uVar13 = 0x3f;
          if ((bVar2 & 0x20) != 0) {
            uVar13 = uVar5 & 0x10 ^ 0x1f;
          }
          uVar5 = pbVar10[1] & 0x3f | (uVar13 & uVar5) << 6;
          if (((((bVar2 & 0x20) != 0) && ((pbVar10[2] & 0xc0) == 0x80)) &&
              (uVar5 = pbVar10[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0)) &&
             ((pbVar10[3] & 0xffffffc0) == 0x80)) {
            uVar5 = uVar5 << 6 | pbVar10[3] & 0x3f;
          }
        }
      }
      if (uVar5 == 0x6c) {
        pbVar6 = pbVar10 + 1;
        *(byte **)pJVar1 = pbVar6;
        bVar2 = *pbVar10;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar7 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar6 = pbVar10 + lVar7;
          *(byte **)pJVar1 = pbVar6;
        }
        bVar2 = *pbVar6;
        uVar5 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar5 = (uint)bVar2;
          if ((bVar2 & 0x40) == 0) {
            uVar5 = uVar5 & 0x7f;
          }
          else {
            if ((pbVar6[1] & 0xc0) != 0x80) break;
            uVar13 = 0x3f;
            if ((bVar2 & 0x20) != 0) {
              uVar13 = uVar5 & 0x10 ^ 0x1f;
            }
            uVar5 = pbVar6[1] & 0x3f | (uVar13 & uVar5) << 6;
            if ((((bVar2 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
               ((uVar5 = pbVar6[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
                ((pbVar6[3] & 0xffffffc0) == 0x80)))) {
              uVar5 = uVar5 << 6 | pbVar6[3] & 0x3f;
            }
          }
        }
        if (uVar5 == 0x73) {
          pbVar10 = pbVar6 + 1;
          *(byte **)pJVar1 = pbVar10;
          bVar2 = *pbVar6;
          if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
            lVar7 = 2;
            if ((bVar2 & 0x20) != 0) {
              lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
            }
            pbVar10 = pbVar6 + lVar7;
            *(byte **)pJVar1 = pbVar10;
          }
          bVar2 = *pbVar10;
          uVar5 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            uVar5 = (uint)bVar2;
            if ((bVar2 & 0x40) == 0) {
              uVar5 = uVar5 & 0x7f;
            }
            else {
              if ((pbVar10[1] & 0xc0) != 0x80) break;
              uVar13 = 0x3f;
              if ((bVar2 & 0x20) != 0) {
                uVar13 = uVar5 & 0x10 ^ 0x1f;
              }
              uVar5 = pbVar10[1] & 0x3f | (uVar13 & uVar5) << 6;
              if (((((bVar2 & 0x20) != 0) && ((pbVar10[2] & 0xc0) == 0x80)) &&
                  (uVar5 = pbVar10[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0))
                 && ((pbVar10[3] & 0xffffffc0) == 0x80)) {
                uVar5 = uVar5 << 6 | pbVar10[3] & 0x3f;
              }
            }
          }
          if (uVar5 == 0x65) {
            *(byte **)pJVar1 = pbVar10 + 1;
            bVar2 = *pbVar10;
            if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
              lVar7 = 2;
              if ((bVar2 & 0x20) != 0) {
                lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
              }
              *(byte **)pJVar1 = pbVar10 + lVar7;
            }
            *param_1 = (long)&var::Instance::attributesBool;
            *(undefined1 *)(param_1 + 1) = 0;
            return;
          }
        }
      }
    }
    break;
  case 0x6e:
    bVar2 = *pbVar6;
    uVar5 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar5 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
      }
      else {
        if ((pbVar6[1] & 0xc0) != 0x80) break;
        uVar13 = 0x3f;
        if ((bVar2 & 0x20) != 0) {
          uVar13 = uVar5 & 0x10 ^ 0x1f;
        }
        uVar5 = pbVar6[1] & 0x3f | (uVar13 & uVar5) << 6;
        if (((((bVar2 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
            (uVar5 = pbVar6[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0)) &&
           ((pbVar6[3] & 0xffffffc0) == 0x80)) {
          uVar5 = uVar5 << 6 | pbVar6[3] & 0x3f;
        }
      }
    }
    if (uVar5 == 0x75) {
      pbVar10 = pbVar6 + 1;
      *(byte **)pJVar1 = pbVar10;
      bVar2 = *pbVar6;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        lVar7 = 2;
        if ((bVar2 & 0x20) != 0) {
          lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
        }
        pbVar10 = pbVar6 + lVar7;
        *(byte **)pJVar1 = pbVar10;
      }
      bVar2 = *pbVar10;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar5 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          uVar5 = uVar5 & 0x7f;
        }
        else {
          if ((pbVar10[1] & 0xc0) != 0x80) break;
          uVar13 = 0x3f;
          if ((bVar2 & 0x20) != 0) {
            uVar13 = uVar5 & 0x10 ^ 0x1f;
          }
          uVar5 = pbVar10[1] & 0x3f | (uVar13 & uVar5) << 6;
          if ((((bVar2 & 0x20) != 0) && ((pbVar10[2] & 0xc0) == 0x80)) &&
             ((uVar5 = pbVar10[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
              ((pbVar10[3] & 0xffffffc0) == 0x80)))) {
            uVar5 = uVar5 << 6 | pbVar10[3] & 0x3f;
          }
        }
      }
      if (uVar5 == 0x6c) {
        pbVar6 = pbVar10 + 1;
        *(byte **)pJVar1 = pbVar6;
        bVar2 = *pbVar10;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar7 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar6 = pbVar10 + lVar7;
          *(byte **)pJVar1 = pbVar6;
        }
        bVar2 = *pbVar6;
        uVar5 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar5 = (uint)bVar2;
          if ((bVar2 & 0x40) == 0) {
            uVar5 = uVar5 & 0x7f;
          }
          else {
            if ((pbVar6[1] & 0xc0) != 0x80) break;
            uVar13 = 0x3f;
            if ((bVar2 & 0x20) != 0) {
              uVar13 = uVar5 & 0x10 ^ 0x1f;
            }
            uVar5 = pbVar6[1] & 0x3f | (uVar13 & uVar5) << 6;
            if (((((bVar2 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
                (uVar5 = pbVar6[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0)) &&
               ((pbVar6[3] & 0xffffffc0) == 0x80)) {
              uVar5 = uVar5 << 6 | pbVar6[3] & 0x3f;
            }
          }
        }
        if (uVar5 == 0x6c) {
          *(byte **)pJVar1 = pbVar6 + 1;
          bVar2 = *pbVar6;
          if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
            lVar7 = 2;
            if ((bVar2 & 0x20) != 0) {
              lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
            }
            *(byte **)pJVar1 = pbVar6 + lVar7;
          }
          *param_1 = (long)&var::Instance::attributesVoid;
          return;
        }
      }
    }
    break;
  case 0x74:
    bVar2 = *pbVar6;
    uVar5 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      uVar5 = (uint)bVar2;
      if ((bVar2 & 0x40) == 0) {
        uVar5 = uVar5 & 0x7f;
      }
      else {
        if ((pbVar6[1] & 0xc0) != 0x80) break;
        uVar13 = 0x3f;
        if ((bVar2 & 0x20) != 0) {
          uVar13 = uVar5 & 0x10 ^ 0x1f;
        }
        uVar5 = pbVar6[1] & 0x3f | (uVar13 & uVar5) << 6;
        if ((((bVar2 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
           ((uVar5 = pbVar6[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
            ((pbVar6[3] & 0xffffffc0) == 0x80)))) {
          uVar5 = uVar5 << 6 | pbVar6[3] & 0x3f;
        }
      }
    }
    if (uVar5 == 0x72) {
      pbVar10 = pbVar6 + 1;
      *(byte **)pJVar1 = pbVar10;
      bVar2 = *pbVar6;
      if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
        lVar7 = 2;
        if ((bVar2 & 0x20) != 0) {
          lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
        }
        pbVar10 = pbVar6 + lVar7;
        *(byte **)pJVar1 = pbVar10;
      }
      bVar2 = *pbVar10;
      uVar5 = (uint)bVar2;
      if ((char)bVar2 < '\0') {
        uVar5 = (uint)bVar2;
        if ((bVar2 & 0x40) == 0) {
          uVar5 = uVar5 & 0x7f;
        }
        else {
          if ((pbVar10[1] & 0xc0) != 0x80) break;
          uVar13 = 0x3f;
          if ((bVar2 & 0x20) != 0) {
            uVar13 = uVar5 & 0x10 ^ 0x1f;
          }
          uVar5 = pbVar10[1] & 0x3f | (uVar13 & uVar5) << 6;
          if (((((bVar2 & 0x20) != 0) && ((pbVar10[2] & 0xc0) == 0x80)) &&
              (uVar5 = pbVar10[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0)) &&
             ((pbVar10[3] & 0xffffffc0) == 0x80)) {
            uVar5 = uVar5 << 6 | pbVar10[3] & 0x3f;
          }
        }
      }
      if (uVar5 == 0x75) {
        pbVar6 = pbVar10 + 1;
        *(byte **)pJVar1 = pbVar6;
        bVar2 = *pbVar10;
        if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
          lVar7 = 2;
          if ((bVar2 & 0x20) != 0) {
            lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
          }
          pbVar6 = pbVar10 + lVar7;
          *(byte **)pJVar1 = pbVar6;
        }
        bVar2 = *pbVar6;
        uVar5 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          uVar5 = (uint)bVar2;
          if ((bVar2 & 0x40) == 0) {
            uVar5 = uVar5 & 0x7f;
          }
          else {
            if ((pbVar6[1] & 0xc0) != 0x80) break;
            uVar13 = 0x3f;
            if ((bVar2 & 0x20) != 0) {
              uVar13 = uVar5 & 0x10 ^ 0x1f;
            }
            uVar5 = pbVar6[1] & 0x3f | (uVar13 & uVar5) << 6;
            if ((((bVar2 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
               ((uVar5 = pbVar6[2] & 0x3f | uVar5 << 6, (bVar2 >> 5 & (bVar2 & 0x10) == 0) == 0 &&
                ((pbVar6[3] & 0xffffffc0) == 0x80)))) {
              uVar5 = uVar5 << 6 | pbVar6[3] & 0x3f;
            }
          }
        }
        if (uVar5 == 0x65) {
          *(byte **)pJVar1 = pbVar6 + 1;
          bVar2 = *pbVar6;
          if (((char)bVar2 < '\0') && ((bVar2 & 0x40) != 0)) {
            lVar7 = 2;
            if ((bVar2 & 0x20) != 0) {
              lVar7 = 4 - (ulong)((bVar2 & 0x10) == 0);
            }
            *(byte **)pJVar1 = pbVar6 + lVar7;
          }
          *param_1 = (long)&var::Instance::attributesBool;
          *(undefined1 *)(param_1 + 1) = 1;
          return;
        }
      }
    }
    break;
  case 0x7b:
    parseObject(param_1,param_2);
    return;
  }
  juce::String::String((String *)&local_30,(byte *)"Syntax error");
                    /* try { // try from 004b1265 to 004b1272 has its CatchHandler @ 004b1273 */
  uVar8 = throwError(param_2,(undefined8 *)&local_30,pbVar9);
                    /* catch() { ... } // from try @ 004b1265 with catch @ 004b1273 */
  piVar14 = (int *)(local_30 + -0x10);
  if (piVar14 != &emptyString) {
    LOCK();
    iVar4 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar14);
    }
  }
                    /* WARNING: Subroutine does not return */
  _Unwind_Resume(uVar8);
}


