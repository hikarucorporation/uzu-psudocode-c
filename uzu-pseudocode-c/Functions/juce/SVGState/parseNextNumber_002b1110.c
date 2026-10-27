// Function : parseNextNumber
// Namespace: juce:SVGState
// Entry    : 002b1110
// Prototype: undefined8 parseNextNumber(undefined8 * param_1, long * param_2, char param_3)
// Body     : 002b1110 - 002b1b2f


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::SVGState::parseNextNumber(juce::CharPointer_UTF8&, juce::String&, bool) */

undefined8 __cdecl juce::SVGState::parseNextNumber(undefined8 *param_1,long *param_2,char param_3)

{
  long lVar1;
  int iVar2;
  byte *__src;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 *puVar3;
  byte *pbVar4;
  byte *pbVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 *__dest;
  byte *pbVar14;
  size_t __n;
  bool bVar15;
  
  pbVar4 = (byte *)*param_1;
LAB_002b1140:
  __src = pbVar4;
  bVar12 = *__src;
  uVar7 = (uint)bVar12;
  if (-1 < (char)bVar12) {
LAB_002b1200:
    iVar2 = iswspace(uVar7);
    uVar7 = (uint)*__src;
    if (iVar2 == 0) goto LAB_002b1240;
LAB_002b120d:
    pbVar4 = __src + 1;
    if ((-1 < (char)uVar7) || ((uVar7 & 0x40) == 0)) goto LAB_002b1140;
LAB_002b1310:
    pbVar4 = __src + 2;
    if ((uVar7 & 0x20) != 0) {
      pbVar4 = __src + (4 - (ulong)((uVar7 & 0x10) == 0));
    }
    goto LAB_002b1140;
  }
  uVar9 = (uint)bVar12;
  if ((bVar12 & 0x40) == 0) {
    iVar2 = iswspace(uVar9 & 0x7f);
    bVar12 = *__src;
  }
  else {
    uVar7 = uVar9 & 0x10 ^ 0x1f;
    if ((bVar12 & 0x20) == 0) {
      uVar7 = 0x3f;
    }
    uVar7 = uVar7 & uVar9;
    if ((__src[1] & 0xffffffc0) != 0x80) goto LAB_002b1200;
    uVar7 = __src[1] & 0x3f | uVar7 << 6;
    if (((bVar12 & 0x20) == 0) || ((__src[2] & 0xffffffc0) != 0x80)) {
      iVar2 = iswspace(uVar7);
      bVar12 = *__src;
    }
    else {
      uVar7 = __src[2] & 0x3f | uVar7 << 6;
      if (((bVar12 >> 5 & (bVar12 & 0x10) == 0) != 0) || ((__src[3] & 0xffffffc0) != 0x80))
      goto LAB_002b1200;
      iVar2 = iswspace(uVar7 << 6 | __src[3] & 0x3f);
      bVar12 = *__src;
    }
  }
  uVar7 = (uint)bVar12;
  if (iVar2 != 0) goto LAB_002b120d;
LAB_002b1240:
  bVar12 = (byte)uVar7;
  if (-1 < (char)bVar12) {
    uVar9 = uVar7;
    if (bVar12 != 0x2c) goto LAB_002b1380;
    pbVar4 = __src + 1;
    goto LAB_002b1140;
  }
  if ((uVar7 & 0x40) == 0) {
    uVar9 = uVar7 & 0x7f;
    if (uVar9 != 0x2c) goto LAB_002b1380;
    pbVar4 = __src + 1;
    goto LAB_002b1140;
  }
  uVar9 = uVar7 & 0x10 ^ 0x1f;
  if ((uVar7 & 0x20) == 0) {
    uVar9 = 0x3f;
  }
  uVar9 = uVar9 & uVar7;
  if ((__src[1] & 0xffffffc0) != 0x80) {
    if (uVar9 != 0x2c) goto LAB_002b1380;
    goto LAB_002b1310;
  }
  bVar12 = bVar12 >> 5 & (uVar7 & 0x10) == 0;
  uVar8 = __src[1] & 0x3f;
  uVar13 = uVar8 + uVar9 * 0x40;
  if (((((uVar7 & 0x20) != 0) && ((__src[2] & 0xc0) == 0x80)) &&
      (uVar13 = __src[2] & 0x3f | uVar13 * 0x40, bVar12 == 0)) && ((__src[3] & 0xc0) == 0x80)) {
    uVar13 = uVar13 << 6 | __src[3] & 0x3f;
  }
  if (uVar13 == 0x2c) goto LAB_002b1310;
  uVar9 = uVar8 | uVar9 * 0x40;
  if ((((uVar7 & 0x20) != 0) && ((__src[2] & 0xc0) == 0x80)) &&
     ((uVar9 = __src[2] & 0x3f | uVar9 << 6, bVar12 == 0 && ((__src[3] & 0xffffffc0) == 0x80)))) {
    uVar9 = uVar9 << 6 | __src[3] & 0x3f;
  }
LAB_002b1380:
  iVar2 = iswdigit(uVar9);
  if (((iVar2 != 0) || (uVar9 == 0x2d)) || (pbVar4 = __src, uVar9 == 0x2b)) {
    bVar12 = *__src;
    pbVar4 = __src + 1;
    if (((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) {
      if ((bVar12 & 0x20) == 0) {
        pbVar4 = __src + 2;
      }
      else {
        pbVar4 = __src + (4 - (ulong)((bVar12 & 0x10) == 0));
      }
    }
  }
  pbVar4 = pbVar4 + -1;
  do {
    pbVar14 = pbVar4;
    bVar12 = pbVar14[1];
    pbVar4 = pbVar14 + 1;
  } while ((byte)(bVar12 - 0x30) < 10);
  uVar9 = (uint)bVar12;
  pbVar5 = pbVar14 + 2;
  uVar7 = uVar9;
  if ((char)bVar12 < '\0') {
    if ((bVar12 & 0x40) == 0) {
      uVar7 = uVar9 & 0x7f;
    }
    else {
      uVar7 = 0x3f;
      if ((bVar12 & 0x20) != 0) {
        uVar7 = bVar12 & 0x10 ^ 0x1f;
      }
      uVar7 = uVar7 & uVar9;
      if (((((*pbVar5 & 0xc0) == 0x80) &&
           (uVar7 = *pbVar5 & 0x3f | uVar7 << 6, (bVar12 & 0x20) != 0)) &&
          ((pbVar14[3] & 0xc0) == 0x80)) &&
         ((uVar7 = pbVar14[3] & 0x3f | uVar7 << 6, (bVar12 >> 5 & (bVar12 & 0x10) == 0) == 0 &&
          ((pbVar14[4] & 0xc0) == 0x80)))) {
        uVar7 = uVar7 << 6 | pbVar14[4] & 0x3f;
      }
    }
  }
  if (uVar7 == 0x2e) {
    if (((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) {
      if ((bVar12 & 0x20) == 0) {
        pbVar5 = pbVar14 + 3;
      }
      else {
        pbVar5 = pbVar4 + (4 - (ulong)((bVar12 & 0x10) == 0));
      }
    }
    pbVar4 = pbVar5 + -1;
    do {
      bVar12 = pbVar4[1];
      pbVar4 = pbVar4 + 1;
    } while ((byte)(bVar12 - 0x30) < 10);
    uVar9 = (uint)bVar12;
  }
  uVar6 = 0;
  if ((char)bVar12 < '\0') {
    if ((uVar9 & 0x40) == 0) {
      uVar7 = uVar9 & 0x7f;
      if ((uVar9 & 0x7f) != 0x65) goto LAB_002b1753;
      goto LAB_002b14ea;
    }
    uVar7 = 0x3f;
    if ((uVar9 & 0x20) != 0) {
      uVar7 = uVar9 & 0x10 ^ 0x1f;
    }
    if ((pbVar4[1] & 0xc0) != 0x80) goto LAB_002b1785;
    uVar8 = (uVar7 & uVar9) * 0x40;
    uVar7 = pbVar4[1] & 0x3f;
    uVar13 = uVar7 + uVar8;
    if ((uVar9 & 0x20) == 0) {
      if (uVar13 != 0x65) {
        uVar7 = uVar7 | uVar8;
        goto LAB_002b1753;
      }
LAB_002b1772:
      if ((uVar9 & 0x20) == 0) {
        pbVar14 = pbVar4 + 2;
      }
      else {
        pbVar14 = pbVar4 + (4 - (ulong)((uVar9 & 0x10) == 0));
      }
    }
    else {
      bVar11 = (byte)uVar9 >> 5 & (uVar9 & 0x10) == 0;
      if ((((pbVar4[2] & 0xffffffc0) == 0x80) &&
          (uVar13 = pbVar4[2] & 0x3f | uVar13 * 0x40, bVar11 == 0)) && ((pbVar4[3] & 0xc0) == 0x80))
      {
        uVar13 = uVar13 << 6 | pbVar4[3] & 0x3f;
      }
      if (uVar13 == 0x65) goto LAB_002b1772;
      uVar7 = uVar7 | uVar8;
      if ((uVar9 & 0x20) != 0) {
        if ((pbVar4[2] & 0xc0) == 0x80) {
          uVar7 = pbVar4[2] & 0x3f | uVar7 << 6;
          if (bVar11 == 0) {
            if ((pbVar4[3] & 0xc0) == 0x80) {
              uVar7 = pbVar4[3] & 0x3f | uVar7 << 6;
            }
          }
        }
      }
LAB_002b1753:
      if (uVar7 != 0x45) goto LAB_002b1785;
      pbVar14 = pbVar4 + 1;
      if (-1 < (char)bVar12) goto LAB_002b14ea;
      if ((uVar9 & 0x40) != 0) goto LAB_002b1772;
    }
  }
  else {
    uVar7 = uVar9;
    if (bVar12 != 0x65) goto LAB_002b1753;
LAB_002b14ea:
    pbVar14 = pbVar4 + 1;
  }
  pbVar5 = pbVar4 + 1;
  bVar12 = *pbVar14;
  uVar7 = (uint)bVar12;
  if ((char)bVar12 < '\0') {
    uVar7 = (uint)bVar12;
    if ((bVar12 & 0x40) == 0) {
      uVar7 = uVar7 & 0x7f;
      iVar2 = iswdigit(uVar7);
      uVar6 = CONCAT44(extraout_var,iVar2);
    }
    else {
      uVar9 = 0x3f;
      if ((bVar12 & 0x20) != 0) {
        uVar9 = uVar7 & 0x10 ^ 0x1f;
      }
      uVar7 = uVar9 & uVar7;
      if ((pbVar14[1] & 0xffffffc0) != 0x80) goto LAB_002b1602;
      uVar7 = pbVar14[1] & 0x3f | uVar7 << 6;
      if (((bVar12 & 0x20) == 0) || ((pbVar14[2] & 0xffffffc0) != 0x80)) {
        iVar2 = iswdigit(uVar7);
        uVar6 = CONCAT44(extraout_var_02,iVar2);
      }
      else {
        uVar7 = pbVar14[2] & 0x3f | uVar7 << 6;
        if (((bVar12 >> 5 & (bVar12 & 0x10) == 0) != 0) || ((pbVar14[3] & 0xffffffc0) != 0x80))
        goto LAB_002b1602;
        uVar7 = uVar7 << 6 | pbVar14[3] & 0x3f;
        iVar2 = iswdigit(uVar7);
        uVar6 = CONCAT44(extraout_var_00,iVar2);
      }
    }
  }
  else {
LAB_002b1602:
    iVar2 = iswdigit(uVar7);
    uVar6 = CONCAT44(extraout_var_01,iVar2);
  }
  if (((iVar2 == 0) && (uVar7 != 0x2d)) && (uVar7 != 0x2b)) goto LAB_002b1785;
  bVar12 = *pbVar4;
  if (((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) {
    if ((bVar12 & 0x20) == 0) {
      pbVar5 = pbVar4 + 2;
      goto LAB_002b1624;
    }
    bVar15 = (bVar12 & 0x10) == 0;
    pbVar14 = pbVar5 + (3 - (ulong)bVar15);
    pbVar4 = pbVar5 + (4 - (ulong)bVar15);
    bVar12 = *pbVar14;
  }
  else {
LAB_002b1624:
    pbVar4 = pbVar5 + 1;
    bVar12 = *pbVar5;
    pbVar14 = pbVar5;
  }
  if (((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) {
    if ((bVar12 & 0x20) == 0) {
      pbVar4 = pbVar14 + 2;
    }
    else {
      pbVar4 = pbVar14 + (4 - (ulong)((bVar12 & 0x10) == 0));
    }
  }
  pbVar4 = pbVar4 + -1;
  do {
    pbVar14 = pbVar4 + 1;
    pbVar4 = pbVar4 + 1;
    uVar6 = 0;
  } while ((byte)(*pbVar14 - 0x30) < 10);
LAB_002b1785:
  pbVar14 = pbVar4;
  if (param_3 != '\0') {
LAB_002b17a0:
    pbVar4 = pbVar14;
    bVar12 = *pbVar4;
    uVar7 = (uint)bVar12;
    if ((char)bVar12 < '\0') {
      uVar9 = (uint)bVar12;
      if ((bVar12 & 0x40) == 0) {
        iVar2 = iswalpha(uVar9 & 0x7f);
        uVar6 = CONCAT44(extraout_var_03,iVar2);
      }
      else {
        uVar7 = uVar9 & 0x10 ^ 0x1f;
        if ((bVar12 & 0x20) == 0) {
          uVar7 = 0x3f;
        }
        uVar7 = uVar7 & uVar9;
        if ((pbVar4[1] & 0xffffffc0) != 0x80) goto LAB_002b1860;
        uVar7 = pbVar4[1] & 0x3f | uVar7 << 6;
        if (((bVar12 & 0x20) == 0) || ((pbVar4[2] & 0xffffffc0) != 0x80)) {
          iVar2 = iswalpha(uVar7);
          uVar6 = CONCAT44(extraout_var_06,iVar2);
        }
        else {
          uVar7 = pbVar4[2] & 0x3f | uVar7 << 6;
          if (((bVar12 >> 5 & (bVar12 & 0x10) == 0) != 0) || ((pbVar4[3] & 0xffffffc0) != 0x80))
          goto LAB_002b1860;
          iVar2 = iswalpha(uVar7 << 6 | pbVar4[3] & 0x3f);
          uVar6 = CONCAT44(extraout_var_04,iVar2);
        }
      }
    }
    else {
LAB_002b1860:
      iVar2 = iswalpha(uVar7);
      uVar6 = CONCAT44(extraout_var_05,iVar2);
    }
    if (iVar2 != 0) {
      bVar12 = *pbVar4;
      pbVar14 = pbVar4 + 1;
      if ((((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) &&
         (pbVar14 = pbVar4 + 2, (bVar12 & 0x20) != 0)) {
        pbVar14 = pbVar4 + (4 - (ulong)((bVar12 & 0x10) == 0));
      }
      goto LAB_002b17a0;
    }
  }
  __n = (long)pbVar4 - (long)__src;
  pbVar14 = __src;
  if (__n == 0) {
LAB_002b1afd:
    *param_1 = pbVar14;
    return CONCAT71((int7)(uVar6 >> 8),pbVar4 != __src);
  }
  if (*__src == 0) {
    __dest = (undefined4 *)&DAT_0061ac58;
  }
  else {
    uVar6 = __n + 4 & 0xfffffffffffffffc;
    puVar3 = operator_new__(uVar6 + 0x17);
    LOCK();
    *puVar3 = 0;
    UNLOCK();
    *(ulong *)(puVar3 + 2) = uVar6;
    __dest = puVar3 + 4;
    memcpy(__dest,__src,__n);
    *(undefined1 *)((long)puVar3 + __n + 0x10) = 0;
  }
  lVar1 = *param_2;
  *param_2 = (long)__dest;
  piVar10 = (int *)(lVar1 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar2 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar10);
    }
  }
  pbVar5 = pbVar4;
LAB_002b1940:
  pbVar14 = pbVar5;
  bVar12 = *pbVar14;
  uVar7 = (uint)bVar12;
  if ((char)bVar12 < '\0') {
    uVar9 = (uint)bVar12;
    if ((bVar12 & 0x40) == 0) {
      iVar2 = iswspace(uVar9 & 0x7f);
      bVar12 = *pbVar14;
    }
    else {
      uVar7 = uVar9 & 0x10 ^ 0x1f;
      if ((bVar12 & 0x20) == 0) {
        uVar7 = 0x3f;
      }
      uVar7 = uVar7 & uVar9;
      if ((pbVar14[1] & 0xffffffc0) != 0x80) goto LAB_002b1a00;
      uVar7 = pbVar14[1] & 0x3f | uVar7 << 6;
      if (((bVar12 & 0x20) == 0) || ((pbVar14[2] & 0xffffffc0) != 0x80)) {
        iVar2 = iswspace(uVar7);
        bVar12 = *pbVar14;
      }
      else {
        uVar7 = pbVar14[2] & 0x3f | uVar7 << 6;
        if (((bVar12 >> 5 & (bVar12 & 0x10) == 0) != 0) || ((pbVar14[3] & 0xffffffc0) != 0x80))
        goto LAB_002b1a00;
        iVar2 = iswspace(uVar7 << 6 | pbVar14[3] & 0x3f);
        bVar12 = *pbVar14;
      }
    }
  }
  else {
LAB_002b1a00:
    iVar2 = iswspace(uVar7);
    bVar12 = *pbVar14;
  }
  if (iVar2 == 0) {
    uVar6 = (ulong)bVar12;
    uVar7 = (uint)bVar12;
    if ((char)bVar12 < '\0') {
      if ((bVar12 & 0x40) == 0) {
        uVar6 = (ulong)(uVar7 & 0x7f);
      }
      else {
        uVar9 = uVar7 & 0x10 ^ 0x1f;
        if ((bVar12 & 0x20) == 0) {
          uVar9 = 0x3f;
        }
        uVar6 = (ulong)(uVar9 & uVar7);
        if ((pbVar14[1] & 0xffffffc0) == 0x80) {
          uVar7 = pbVar14[1] & 0x3f | (uVar9 & uVar7) << 6;
          uVar6 = (ulong)uVar7;
          if (((bVar12 & 0x20) != 0) && ((pbVar14[2] & 0xffffffc0) == 0x80)) {
            uVar7 = pbVar14[2] & 0x3f | uVar7 << 6;
            uVar6 = (ulong)uVar7;
            if (((bVar12 >> 5 & (bVar12 & 0x10) == 0) == 0) && ((pbVar14[3] & 0xffffffc0) == 0x80))
            {
              uVar6 = (ulong)(uVar7 << 6 | pbVar14[3] & 0x3f);
            }
          }
        }
      }
    }
    if ((int)uVar6 != 0x2c) goto LAB_002b1afd;
  }
  pbVar5 = pbVar14 + 1;
  if ((((char)bVar12 < '\0') && ((bVar12 & 0x40) != 0)) &&
     (pbVar5 = pbVar14 + 2, (bVar12 & 0x20) != 0)) {
    pbVar5 = pbVar14 + (4 - (ulong)((bVar12 & 0x10) == 0));
  }
  goto LAB_002b1940;
}


