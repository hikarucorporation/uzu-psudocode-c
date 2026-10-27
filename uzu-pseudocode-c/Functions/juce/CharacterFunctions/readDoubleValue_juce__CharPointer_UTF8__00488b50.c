// Function : readDoubleValue<juce::CharPointer_UTF8>
// Namespace: juce:CharacterFunctions
// Entry    : 00488b50
// Prototype: undefined8 readDoubleValue<juce::CharPointer_UTF8>(long * param_1)
// Body     : 00488b50 - 00489eab


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Unknown calling convention: __cdecl */
/* double juce::CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(juce::CharPointer_UTF8&)
    */

undefined8 __cdecl juce::CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>(long *param_1)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  bool bVar18;
  byte *pbVar19;
  undefined8 *puVar20;
  char *pcVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_5c;
  undefined1 local_58 [8];
  undefined2 uStack_50;
  undefined6 local_4e;
  undefined2 uStack_48;
  undefined8 uStack_46;
  
  uStack_48 = 0;
  uStack_46 = 0;
  local_58 = (undefined1  [8])0x0;
  uStack_50 = 0;
  local_4e = 0;
  pbVar19 = (byte *)*param_1;
LAB_00488b80:
  pbVar7 = pbVar19;
  bVar8 = *pbVar7;
  uVar14 = (uint)bVar8;
  if ((char)bVar8 < '\0') {
    uVar15 = (uint)bVar8;
    if ((bVar8 & 0x40) == 0) {
      iVar5 = iswspace(uVar15 & 0x7f);
    }
    else {
      uVar14 = uVar15 & 0x10 ^ 0x1f;
      if ((bVar8 & 0x20) == 0) {
        uVar14 = 0x3f;
      }
      uVar14 = uVar14 & uVar15;
      if ((pbVar7[1] & 0xffffffc0) != 0x80) goto LAB_00488c40;
      uVar14 = pbVar7[1] & 0x3f | uVar14 << 6;
      if (((bVar8 & 0x20) == 0) || ((pbVar7[2] & 0xffffffc0) != 0x80)) {
        iVar5 = iswspace(uVar14);
      }
      else {
        uVar14 = pbVar7[2] & 0x3f | uVar14 << 6;
        if (((bVar8 >> 5 & (bVar8 & 0x10) == 0) != 0) || ((pbVar7[3] & 0xffffffc0) != 0x80))
        goto LAB_00488c40;
        iVar5 = iswspace(uVar14 << 6 | pbVar7[3] & 0x3f);
      }
    }
  }
  else {
LAB_00488c40:
    iVar5 = iswspace(uVar14);
  }
  if (iVar5 != 0) {
    bVar8 = *pbVar7;
    pbVar19 = pbVar7 + 1;
    if ((((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) &&
       (pbVar19 = pbVar7 + 2, (bVar8 & 0x20) != 0)) {
      pbVar19 = pbVar7 + (4 - (ulong)((bVar8 & 0x10) == 0));
    }
    goto LAB_00488b80;
  }
  *param_1 = (long)pbVar7;
  bVar8 = *pbVar7;
  uVar14 = (uint)bVar8;
  if ((char)bVar8 < '\0') {
    if ((bVar8 & 0x40) == 0) {
      uVar14 = bVar8 & 0x7f;
    }
    else {
      uVar15 = 0x3f;
      if ((bVar8 & 0x20) != 0) {
        uVar15 = uVar14 & 0x10 ^ 0x1f;
      }
      uVar14 = uVar14 & uVar15;
      if ((((pbVar7[1] & 0xffffffc0) == 0x80) &&
          (uVar14 = pbVar7[1] & 0x3f | uVar14 << 6, (bVar8 & 0x20) != 0)) &&
         (((pbVar7[2] & 0xffffffc0) == 0x80 &&
          ((uVar14 = pbVar7[2] & 0x3f | uVar14 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0 &&
           ((pbVar7[3] & 0xffffffc0) == 0x80)))))) {
        uVar14 = pbVar7[3] & 0x3f | uVar14 << 6;
      }
    }
  }
  puVar20 = (undefined8 *)local_58;
  bVar4 = false;
  bVar18 = false;
  if (uVar14 == 0x2b) {
LAB_00488d5b:
    bVar4 = bVar18;
    pbVar19 = pbVar7 + 1;
    *param_1 = (long)pbVar19;
    bVar8 = *pbVar7;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      lVar11 = 2;
      if ((bVar8 & 0x20) != 0) {
        lVar11 = 4 - (ulong)((bVar8 & 0x10) == 0);
      }
      pbVar19 = pbVar7 + lVar11;
      *param_1 = (long)pbVar19;
    }
    bVar8 = *pbVar19;
    uVar14 = (uint)bVar8;
    if ((char)bVar8 < '\0') {
      if ((bVar8 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
      }
      else {
        uVar15 = 0x3f;
        if ((bVar8 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = uVar14 & uVar15;
        if (((((pbVar19[1] & 0xffffffc0) == 0x80) &&
             (uVar14 = pbVar19[1] & 0x3f | uVar14 << 6, (bVar8 & 0x20) != 0)) &&
            ((pbVar19[2] & 0xffffffc0) == 0x80)) &&
           ((uVar14 = pbVar19[2] & 0x3f | uVar14 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0 &&
            ((pbVar19[3] & 0xffffffc0) == 0x80)))) {
          uVar14 = pbVar19[3] & 0x3f | uVar14 << 6;
        }
      }
    }
  }
  else {
    pbVar19 = pbVar7;
    if (uVar14 == 0x2d) {
      puVar20 = (undefined8 *)((long)local_58 + 1);
      local_58._1_7_ = SUB87((ulong)local_58 >> 8,0);
      local_58[0] = 0x2d;
      bVar18 = true;
      goto LAB_00488d5b;
    }
  }
  switch(uVar14) {
  case 0x49:
  case 0x69:
    pbVar17 = pbVar19 + 1;
    pbVar12 = pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar12 = pbVar19 + 2;
        goto LAB_00488e6a;
      }
      pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
      bVar1 = *pbVar12;
      uVar14 = (uint)bVar1;
      if ((char)bVar1 < '\0') goto LAB_00488e76;
joined_r0x004891c7:
      if (uVar14 != 0x6e) goto LAB_00489292;
    }
    else {
LAB_00488e6a:
      bVar1 = *pbVar12;
      uVar14 = (uint)bVar1;
      if (-1 < (char)bVar1) goto joined_r0x004891c7;
LAB_00488e76:
      uVar14 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
        goto joined_r0x004891c7;
      }
      if ((pbVar12[1] & 0xc0) == 0x80) {
        uVar15 = 0x3f;
        if ((bVar1 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = pbVar12[1] & 0x3f | (uVar15 & uVar14) << 6;
        if (((((bVar1 & 0x20) != 0) && ((pbVar12[2] & 0xc0) == 0x80)) &&
            (uVar14 = pbVar12[2] & 0x3f | uVar14 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0)) &&
           ((pbVar12[3] & 0xffffffc0) == 0x80)) {
          uVar14 = uVar14 << 6 | pbVar12[3] & 0x3f;
        }
        goto joined_r0x004891c7;
      }
LAB_00489292:
      pbVar12 = pbVar17;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        if ((bVar8 & 0x20) == 0) {
          pbVar12 = pbVar19 + 2;
        }
        else {
          pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
        }
      }
      bVar1 = *pbVar12;
      uVar14 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar14 = (uint)bVar1;
        if ((bVar1 & 0x40) == 0) {
          uVar14 = uVar14 & 0x7f;
        }
        else {
          if ((pbVar12[1] & 0xc0) != 0x80) goto LAB_00489a46;
          uVar15 = 0x3f;
          if ((bVar1 & 0x20) != 0) {
            uVar15 = uVar14 & 0x10 ^ 0x1f;
          }
          uVar14 = pbVar12[1] & 0x3f | (uVar15 & uVar14) << 6;
          if ((((bVar1 & 0x20) != 0) && ((pbVar12[2] & 0xc0) == 0x80)) &&
             ((uVar14 = pbVar12[2] & 0x3f | uVar14 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar12[3] & 0xffffffc0) == 0x80)))) {
            uVar14 = uVar14 << 6 | pbVar12[3] & 0x3f;
          }
        }
      }
      if (uVar14 != 0x4e) goto LAB_00489a46;
    }
    pbVar12 = pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar12 = pbVar19 + 2;
      }
      else {
        pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
      }
    }
    pbVar6 = pbVar12 + 1;
    bVar1 = *pbVar12;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      if ((bVar1 & 0x20) == 0) {
        pbVar6 = pbVar12 + 2;
      }
      else {
        pbVar6 = pbVar12 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    bVar1 = *pbVar6;
    uVar14 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar14 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
        goto LAB_0048964b;
      }
      if ((pbVar6[1] & 0xc0) == 0x80) {
        uVar15 = 0x3f;
        if ((bVar1 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = pbVar6[1] & 0x3f | (uVar15 & uVar14) << 6;
        if (((((bVar1 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
            (uVar14 = pbVar6[2] & 0x3f | uVar14 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0)) &&
           ((pbVar6[3] & 0xffffffc0) == 0x80)) {
          uVar14 = uVar14 << 6 | pbVar6[3] & 0x3f;
        }
        goto LAB_0048964b;
      }
LAB_00489654:
      pbVar12 = pbVar17;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        if ((bVar8 & 0x20) == 0) {
          pbVar12 = pbVar19 + 2;
        }
        else {
          pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
        }
      }
      pbVar6 = pbVar12 + 1;
      bVar8 = *pbVar12;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        if ((bVar8 & 0x20) == 0) {
          pbVar6 = pbVar12 + 2;
        }
        else {
          pbVar6 = pbVar12 + (4 - (ulong)((bVar8 & 0x10) == 0));
        }
      }
      bVar8 = *pbVar6;
      uVar14 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        uVar14 = (uint)bVar8;
        if ((bVar8 & 0x40) == 0) {
          uVar14 = uVar14 & 0x7f;
        }
        else {
          if ((pbVar6[1] & 0xc0) != 0x80) goto LAB_00489a46;
          uVar15 = 0x3f;
          if ((bVar8 & 0x20) != 0) {
            uVar15 = uVar14 & 0x10 ^ 0x1f;
          }
          uVar14 = pbVar6[1] & 0x3f | (uVar15 & uVar14) << 6;
          if (((((bVar8 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
              (uVar14 = pbVar6[2] & 0x3f | uVar14 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0)) &&
             ((pbVar6[3] & 0xffffffc0) == 0x80)) {
            uVar14 = uVar14 << 6 | pbVar6[3] & 0x3f;
          }
        }
      }
      if (uVar14 != 0x46) goto LAB_00489a46;
    }
    else {
LAB_0048964b:
      if (uVar14 != 0x66) goto LAB_00489654;
    }
    *param_1 = (long)pbVar17;
    bVar8 = *pbVar19;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar17 = pbVar19 + 2;
      }
      else {
        pbVar17 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
      }
    }
    pbVar19 = pbVar17 + 1;
    *param_1 = (long)pbVar19;
    bVar8 = *pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar19 = pbVar17 + 2;
      }
      else {
        pbVar19 = pbVar17 + (4 - (ulong)((bVar8 & 0x10) == 0));
      }
    }
    *param_1 = (long)(pbVar19 + 1);
    bVar8 = *pbVar19;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      lVar11 = 2;
      if ((bVar8 & 0x20) != 0) {
        lVar11 = 4 - (ulong)((bVar8 & 0x10) == 0);
      }
      *param_1 = (long)(pbVar19 + lVar11);
    }
    break;
  default:
    bVar18 = false;
    pcVar21 = (char *)((long)puVar20 + 1);
    local_5c = 0;
    iVar5 = 0;
    bVar3 = false;
    bVar8 = *pbVar19;
joined_r0x00488eff:
    while ((byte)(bVar8 - 0x30) < 10) {
      pbVar17 = pbVar19 + 1;
      *param_1 = (long)pbVar17;
      bVar8 = *pbVar19;
      uVar14 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        if ((bVar8 & 0x40) == 0) {
          uVar14 = uVar14 & 0x7f;
        }
        else {
          uVar13 = uVar14 & 0x20;
          uVar16 = uVar14 & 0x10;
          uVar15 = uVar16 ^ 0x1f;
          if ((bVar8 & 0x20) == 0) {
            uVar15 = 0x3f;
          }
          uVar14 = uVar15 & uVar14;
          bVar1 = *pbVar17;
          if ((bVar1 & 0xffffffc0) == 0x80) {
            pbVar17 = pbVar19 + 2;
            uVar14 = bVar1 & 0x3f | uVar14 << 6;
            *param_1 = (long)pbVar17;
            if (((bVar8 & 0x20) != 0) && (bVar8 = *pbVar17, (bVar8 & 0xc0) == 0x80)) {
              pbVar17 = pbVar19 + 3;
              *param_1 = (long)pbVar17;
              uVar14 = bVar8 & 0x3f | uVar14 << 6;
              if (((byte)((byte)(uVar16 >> 4) & (byte)(uVar13 >> 5)) != 0) &&
                 (bVar8 = *pbVar17, (bVar8 & 0xffffffc0) == 0x80)) {
                pbVar17 = pbVar19 + 4;
                *param_1 = (long)pbVar17;
                uVar14 = uVar14 << 6 | bVar8 & 0x3f;
              }
            }
          }
        }
      }
      if (bVar3) {
        if (iVar5 < 0x12) {
LAB_004890e5:
          pcVar21[-1] = (char)uVar14;
          iVar5 = iVar5 + 1;
          goto LAB_00488fe8;
        }
      }
      else if (iVar5 < 0x12) {
        if ((iVar5 != 0) || (uVar14 != 0x30)) goto LAB_004890e5;
        iVar5 = 0;
        bVar18 = true;
      }
      else {
        local_5c = local_5c + 1;
      }
      pbVar19 = pbVar17;
      bVar8 = *pbVar17;
    }
    uVar14 = (uint)bVar8;
    if (!bVar3) {
      uVar15 = uVar14;
      if ((char)bVar8 < '\0') {
        if ((bVar8 & 0x40) == 0) {
          uVar15 = uVar14 & 0x7f;
        }
        else {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
          if ((bVar8 & 0x20) == 0) {
            uVar15 = 0x3f;
          }
          uVar15 = uVar15 & uVar14;
          if (((((pbVar19[1] & 0xc0) == 0x80) &&
               (uVar15 = pbVar19[1] & 0x3f | uVar15 << 6, (bVar8 & 0x20) != 0)) &&
              ((pbVar19[2] & 0xc0) == 0x80)) &&
             ((uVar15 = pbVar19[2] & 0x3f | uVar15 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0 &&
              ((pbVar19[3] & 0xffffffc0) == 0x80)))) {
            uVar15 = uVar15 << 6 | pbVar19[3] & 0x3f;
          }
        }
      }
      if (uVar15 != 0x2e) goto LAB_0048911a;
      *param_1 = (long)(pbVar19 + 1);
      bVar8 = *pbVar19;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        lVar11 = 4 - (ulong)((bVar8 & 0x10) == 0);
        if ((bVar8 & 0x20) == 0) {
          lVar11 = 2;
        }
        *param_1 = (long)(pbVar19 + lVar11);
      }
      pcVar21[-1] = '.';
      bVar3 = true;
LAB_00488fe8:
      pbVar19 = (byte *)*param_1;
      pcVar21 = pcVar21 + 1;
      bVar8 = *pbVar19;
      goto joined_r0x00488eff;
    }
LAB_0048911a:
    if ((!bVar18) && (iVar5 == 0)) {
LAB_00489a46:
      *param_1 = (long)pbVar7;
      uVar22 = 0;
      uVar23 = 0;
      goto LAB_00489a4c;
    }
    if ((char)bVar8 < '\0') {
      if ((bVar8 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
      }
      else {
        uVar15 = 0x3f;
        if ((bVar8 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = uVar15 & uVar14;
        if (((((pbVar19[1] & 0xffffffc0) == 0x80) &&
             (uVar14 = pbVar19[1] & 0x3f | uVar14 << 6, (bVar8 & 0x20) != 0)) &&
            ((pbVar19[2] & 0xffffffc0) == 0x80)) &&
           ((uVar14 = pbVar19[2] & 0x3f | uVar14 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0 &&
            ((pbVar19[3] & 0xffffffc0) == 0x80)))) {
          uVar14 = pbVar19[3] & 0x3f | uVar14 << 6;
        }
      }
    }
    if ((uVar14 & 0xffffffdf) != 0x45) {
      if (local_5c != 0) {
        pcVar21[-1] = 'e';
        *pcVar21 = (char)((ulong)local_5c / 100) + '0';
        iVar5 = (int)((ulong)local_5c / 100) * -100 + local_5c;
        cVar9 = (char)(iVar5 / 10);
        goto LAB_00489e16;
      }
LAB_00489e2b:
      if ((readDoubleValue<juce::CharPointer_UTF8>(juce::CharPointer_UTF8&)::locale == '\0') &&
         (iVar5 = __cxa_guard_acquire(&readDoubleValue<juce::CharPointer_UTF8>(juce::CharPointer_UTF8&)
                                       ::locale), iVar5 != 0)) {
        readDoubleValue<juce::CharPointer_UTF8>(juce::CharPointer_UTF8&)::locale =
             newlocale(0x1fbf,"C",(__locale_t)0x0);
        __cxa_guard_release(&readDoubleValue<juce::CharPointer_UTF8>(juce::CharPointer_UTF8&)::
                             locale);
      }
      dVar2 = strtod_l(local_58,(char **)0x0,
                       readDoubleValue<juce::CharPointer_UTF8>(juce::CharPointer_UTF8&)::locale);
      uVar22 = SUB84(dVar2,0);
      uVar23 = (undefined4)((ulong)dVar2 >> 0x20);
      goto LAB_00489a4c;
    }
    pcVar21[-1] = 'e';
    pbVar17 = (byte *)*param_1;
    pbVar7 = pbVar17 + 1;
    *param_1 = (long)pbVar7;
    bVar8 = *pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      lVar11 = 2;
      if ((bVar8 & 0x20) != 0) {
        lVar11 = 4 - (ulong)((bVar8 & 0x10) == 0);
      }
      pbVar7 = pbVar17 + lVar11;
      *param_1 = (long)pbVar7;
    }
    bVar8 = *pbVar7;
    uVar14 = (uint)bVar8;
    if ((char)bVar8 < '\0') {
      uVar14 = (uint)bVar8;
      if ((bVar8 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
      }
      else {
        uVar15 = 0x3f;
        if ((bVar8 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = uVar15 & uVar14;
        if (((((pbVar7[1] & 0xffffffc0) == 0x80) &&
             (uVar14 = pbVar7[1] & 0x3f | uVar14 << 6, (bVar8 & 0x20) != 0)) &&
            ((pbVar7[2] & 0xffffffc0) == 0x80)) &&
           ((uVar14 = pbVar7[2] & 0x3f | uVar14 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0 &&
            ((pbVar7[3] & 0xffffffc0) == 0x80)))) {
          uVar14 = uVar14 << 6 | pbVar7[3] & 0x3f;
        }
      }
    }
    bVar18 = true;
    if (uVar14 == 0x2b) {
LAB_00489c1f:
      pbVar17 = pbVar7 + 1;
      *param_1 = (long)pbVar17;
      bVar8 = *pbVar7;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        lVar11 = 2;
        if ((bVar8 & 0x20) != 0) {
          lVar11 = 4 - (ulong)((bVar8 & 0x10) == 0);
        }
        pbVar17 = pbVar7 + lVar11;
        *param_1 = (long)pbVar17;
      }
    }
    else {
      pbVar17 = pbVar7;
      if (uVar14 == 0x2d) {
        bVar18 = false;
        goto LAB_00489c1f;
      }
    }
    iVar5 = 0;
    if ((byte)(*pbVar17 - 0x30) < 10) {
      iVar5 = 0;
      pbVar7 = pbVar17;
      do {
        while( true ) {
          pbVar12 = pbVar7 + 1;
          *param_1 = (long)pbVar12;
          bVar8 = *pbVar7;
          uVar14 = (uint)bVar8;
          if ((char)bVar8 < '\0') break;
LAB_00489c7e:
          if (uVar14 != 0x30 || iVar5 != 0) goto LAB_00489d60;
LAB_00489c60:
          iVar5 = 0;
          pbVar7 = pbVar12;
          if (9 < (byte)(*pbVar12 - 0x30)) goto LAB_00489d88;
        }
        uVar15 = (uint)bVar8;
        if ((bVar8 & 0x40) == 0) {
          uVar14 = uVar15 & 0x7f;
          if (uVar14 != 0x30 || iVar5 != 0) goto LAB_00489d60;
          goto LAB_00489c60;
        }
        uVar14 = uVar15 & 0x10 ^ 0x1f;
        if ((bVar8 & 0x20) == 0) {
          uVar14 = 0x3f;
        }
        uVar14 = uVar14 & uVar15;
        bVar1 = *pbVar12;
        if ((bVar1 & 0xffffffc0) != 0x80) {
          if (uVar14 != 0x30 || iVar5 != 0) goto LAB_00489d60;
          goto LAB_00489c60;
        }
        pbVar12 = pbVar7 + 2;
        uVar14 = bVar1 & 0x3f | uVar14 << 6;
        *param_1 = (long)pbVar12;
        if (((bVar8 & 0x20) == 0) || (bVar8 = *pbVar12, (bVar8 & 0xc0) != 0x80)) goto LAB_00489c7e;
        pbVar12 = pbVar7 + 3;
        *param_1 = (long)pbVar12;
        uVar14 = bVar8 & 0x3f | uVar14 << 6;
        if (((byte)((byte)((uVar15 & 0x10) >> 4) & (byte)((uVar15 & 0x20) >> 5)) == 0) ||
           (bVar8 = *pbVar12, (bVar8 & 0xffffffc0) != 0x80)) {
          if (uVar14 != 0x30 || iVar5 != 0) goto LAB_00489d60;
          goto LAB_00489c60;
        }
        pbVar12 = pbVar7 + 4;
        *param_1 = (long)pbVar12;
        uVar14 = bVar8 & 0x3f | uVar14 << 6;
        if (uVar14 == 0x30 && iVar5 == 0) goto LAB_00489c60;
LAB_00489d60:
        iVar5 = uVar14 + iVar5 * 10 + -0x30;
        pbVar7 = pbVar12;
      } while ((byte)(*pbVar12 - 0x30) < 10);
LAB_00489d88:
      if (pbVar12 == pbVar17) goto LAB_00489d91;
    }
    else {
LAB_00489d91:
      *param_1 = (long)pbVar19;
    }
    iVar10 = -iVar5;
    if (bVar18) {
      iVar10 = iVar5;
    }
    local_5c = iVar10 + local_5c;
    if ((int)local_5c < 0) {
      if (local_5c < 0xfffffecc) {
        uVar22 = 0;
        uVar23 = 0;
        if (bVar4) {
          uVar22 = (undefined4)DAT_005de758;
          uVar23 = (undefined4)((ulong)DAT_005de758 >> 0x20);
        }
        goto LAB_00489a4c;
      }
      *pcVar21 = '-';
      pcVar21 = pcVar21 + 1;
      local_5c = -local_5c;
LAB_00489de2:
      uVar14 = (local_5c & 0xffff) / 100;
      *pcVar21 = (char)uVar14 + '0';
      iVar5 = uVar14 * -100 + local_5c;
      cVar9 = (char)((int)(short)iVar5 / 10);
LAB_00489e16:
      pcVar21[1] = cVar9 + '0';
      pcVar21[2] = (char)iVar5 + cVar9 * -10 + '0';
      goto LAB_00489e2b;
    }
    if (local_5c < 0x136) goto LAB_00489de2;
    break;
  case 0x4e:
  case 0x6e:
    pbVar17 = pbVar19 + 1;
    pbVar12 = pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar12 = pbVar19 + 2;
        goto LAB_00488eb1;
      }
      pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
      bVar1 = *pbVar12;
      uVar14 = (uint)bVar1;
      if ((char)bVar1 < '\0') goto LAB_00488ebd;
joined_r0x00489337:
      if (uVar14 != 0x61) goto LAB_004892e4;
    }
    else {
LAB_00488eb1:
      bVar1 = *pbVar12;
      uVar14 = (uint)bVar1;
      if (-1 < (char)bVar1) goto joined_r0x00489337;
LAB_00488ebd:
      uVar14 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
        goto joined_r0x00489337;
      }
      if ((pbVar12[1] & 0xc0) == 0x80) {
        uVar15 = 0x3f;
        if ((bVar1 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = pbVar12[1] & 0x3f | (uVar15 & uVar14) << 6;
        if (((((bVar1 & 0x20) != 0) && ((pbVar12[2] & 0xc0) == 0x80)) &&
            (uVar14 = pbVar12[2] & 0x3f | uVar14 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0)) &&
           ((pbVar12[3] & 0xffffffc0) == 0x80)) {
          uVar14 = uVar14 << 6 | pbVar12[3] & 0x3f;
        }
        goto joined_r0x00489337;
      }
LAB_004892e4:
      pbVar12 = pbVar17;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        if ((bVar8 & 0x20) == 0) {
          pbVar12 = pbVar19 + 2;
        }
        else {
          pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
        }
      }
      bVar1 = *pbVar12;
      uVar14 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar14 = (uint)bVar1;
        if ((bVar1 & 0x40) == 0) {
          uVar14 = uVar14 & 0x7f;
        }
        else {
          if ((pbVar12[1] & 0xc0) != 0x80) goto LAB_00489a46;
          uVar15 = 0x3f;
          if ((bVar1 & 0x20) != 0) {
            uVar15 = uVar14 & 0x10 ^ 0x1f;
          }
          uVar14 = pbVar12[1] & 0x3f | (uVar15 & uVar14) << 6;
          if ((((bVar1 & 0x20) != 0) && ((pbVar12[2] & 0xc0) == 0x80)) &&
             ((uVar14 = pbVar12[2] & 0x3f | uVar14 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0 &&
              ((pbVar12[3] & 0xffffffc0) == 0x80)))) {
            uVar14 = uVar14 << 6 | pbVar12[3] & 0x3f;
          }
        }
      }
      if (uVar14 != 0x41) goto LAB_00489a46;
    }
    pbVar12 = pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar12 = pbVar19 + 2;
      }
      else {
        pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
      }
    }
    pbVar6 = pbVar12 + 1;
    bVar1 = *pbVar12;
    if (((char)bVar1 < '\0') && ((bVar1 & 0x40) != 0)) {
      if ((bVar1 & 0x20) == 0) {
        pbVar6 = pbVar12 + 2;
      }
      else {
        pbVar6 = pbVar12 + (4 - (ulong)((bVar1 & 0x10) == 0));
      }
    }
    bVar1 = *pbVar6;
    uVar14 = (uint)bVar1;
    if ((char)bVar1 < '\0') {
      uVar14 = (uint)bVar1;
      if ((bVar1 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
        goto LAB_00489778;
      }
      if ((pbVar6[1] & 0xc0) == 0x80) {
        uVar15 = 0x3f;
        if ((bVar1 & 0x20) != 0) {
          uVar15 = uVar14 & 0x10 ^ 0x1f;
        }
        uVar14 = pbVar6[1] & 0x3f | (uVar15 & uVar14) << 6;
        if (((((bVar1 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
            (uVar14 = pbVar6[2] & 0x3f | uVar14 << 6, (bVar1 >> 5 & (bVar1 & 0x10) == 0) == 0)) &&
           ((pbVar6[3] & 0xffffffc0) == 0x80)) {
          uVar14 = uVar14 << 6 | pbVar6[3] & 0x3f;
        }
        goto LAB_00489778;
      }
LAB_00489781:
      pbVar12 = pbVar17;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        if ((bVar8 & 0x20) == 0) {
          pbVar12 = pbVar19 + 2;
        }
        else {
          pbVar12 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
        }
      }
      pbVar6 = pbVar12 + 1;
      bVar8 = *pbVar12;
      if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
        if ((bVar8 & 0x20) == 0) {
          pbVar6 = pbVar12 + 2;
        }
        else {
          pbVar6 = pbVar12 + (4 - (ulong)((bVar8 & 0x10) == 0));
        }
      }
      bVar8 = *pbVar6;
      uVar14 = (uint)bVar8;
      if ((char)bVar8 < '\0') {
        uVar14 = (uint)bVar8;
        if ((bVar8 & 0x40) == 0) {
          uVar14 = uVar14 & 0x7f;
        }
        else {
          if ((pbVar6[1] & 0xc0) != 0x80) goto LAB_00489a46;
          uVar15 = 0x3f;
          if ((bVar8 & 0x20) != 0) {
            uVar15 = uVar14 & 0x10 ^ 0x1f;
          }
          uVar14 = pbVar6[1] & 0x3f | (uVar15 & uVar14) << 6;
          if (((((bVar8 & 0x20) != 0) && ((pbVar6[2] & 0xc0) == 0x80)) &&
              (uVar14 = pbVar6[2] & 0x3f | uVar14 << 6, (bVar8 >> 5 & (bVar8 & 0x10) == 0) == 0)) &&
             ((pbVar6[3] & 0xffffffc0) == 0x80)) {
            uVar14 = uVar14 << 6 | pbVar6[3] & 0x3f;
          }
        }
      }
      if (uVar14 != 0x4e) goto LAB_00489a46;
    }
    else {
LAB_00489778:
      if (uVar14 != 0x6e) goto LAB_00489781;
    }
    *param_1 = (long)pbVar17;
    bVar8 = *pbVar19;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar17 = pbVar19 + 2;
      }
      else {
        pbVar17 = pbVar19 + (4 - (ulong)((bVar8 & 0x10) == 0));
      }
    }
    pbVar19 = pbVar17 + 1;
    *param_1 = (long)pbVar19;
    bVar8 = *pbVar17;
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      if ((bVar8 & 0x20) == 0) {
        pbVar19 = pbVar17 + 2;
      }
      else {
        pbVar19 = pbVar17 + (4 - (ulong)((bVar8 & 0x10) == 0));
      }
    }
    *param_1 = (long)(pbVar19 + 1);
    bVar8 = *pbVar19;
    uVar22 = (undefined4)DAT_005de750;
    uVar23 = (undefined4)((ulong)DAT_005de750 >> 0x20);
    if (((char)bVar8 < '\0') && ((bVar8 & 0x40) != 0)) {
      lVar11 = 2;
      if ((bVar8 & 0x20) != 0) {
        lVar11 = 4 - (ulong)((bVar8 & 0x10) == 0);
      }
      *param_1 = (long)(pbVar19 + lVar11);
    }
    goto LAB_00489a4c;
  }
  uVar22 = (undefined4)*(undefined8 *)(&DAT_005de280 + (ulong)!bVar4 * 8);
  uVar23 = (undefined4)((ulong)*(undefined8 *)(&DAT_005de280 + (ulong)!bVar4 * 8) >> 0x20);
LAB_00489a4c:
  return CONCAT44(uVar23,uVar22);
}


