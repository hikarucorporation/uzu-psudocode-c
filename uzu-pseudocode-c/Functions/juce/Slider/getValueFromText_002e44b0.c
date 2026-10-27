// Function : getValueFromText
// Namespace: juce:Slider
// Entry    : 002e44b0
// Prototype: undefined8 getValueFromText(long param_1, undefined8 * param_2)
// Body     : 002e44b0 - 002e4b8c


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Slider::getValueFromText(juce::String const&) */

undefined8 __cdecl juce::Slider::getValueFromText(long param_1,undefined8 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  undefined4 *puVar16;
  ulong uVar17;
  char *pcVar18;
  byte *pbVar19;
  byte *pbVar20;
  int *piVar21;
  byte *pbVar22;
  size_t sVar23;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  undefined4 *local_38;
  
  juce::String::trimStart(&local_50,param_2);
  pcVar18 = *(char **)(*(long *)(param_1 + 0x1a0) + 0x210);
  if (pcVar18 + -0x10 == (char *)&emptyString) {
    uVar7 = juce::String::endsWith((String *)&local_50,pcVar18);
    cVar4 = (char)uVar7;
    pbVar19 = local_50;
  }
  else {
    LOCK();
    *(int *)(pcVar18 + -0x10) = *(int *)(pcVar18 + -0x10) + 1;
    UNLOCK();
    uVar7 = juce::String::endsWith((String *)&local_50,pcVar18);
    cVar4 = (char)uVar7;
    LOCK();
    piVar21 = (int *)(pcVar18 + -0x10);
    iVar8 = *piVar21;
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    pbVar19 = local_50;
    if (iVar8 == 0) {
      operator_delete__(pcVar18 + -0x10);
      pbVar19 = local_50;
    }
  }
  local_50 = pbVar19;
  if (cVar4 != '\0') {
    iVar8 = 0;
    pbVar20 = pbVar19;
    do {
      bVar5 = *pbVar20;
      if ((char)bVar5 < '\0') {
        do {
          pbVar14 = pbVar20 + 1;
          pbVar20 = pbVar20 + 1;
        } while ((*pbVar14 & 0xc0) == 0x80);
      }
      else {
        pbVar20 = pbVar20 + 1;
        if (bVar5 == 0) goto LAB_002e4582;
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  goto LAB_002e46c5;
LAB_002e4582:
  pcVar18 = *(char **)(*(long *)(param_1 + 0x1a0) + 0x210);
  piVar21 = (int *)(pcVar18 + -0x10);
  if (piVar21 != &emptyString) {
    LOCK();
    *piVar21 = *piVar21 + 1;
    UNLOCK();
  }
  iVar10 = 0;
  iVar6 = iVar8;
  do {
    cVar4 = *pcVar18;
    if (cVar4 < '\0') {
      do {
        pbVar20 = (byte *)(pcVar18 + 1);
        pcVar18 = pcVar18 + 1;
      } while ((*pbVar20 & 0xc0) == 0x80);
    }
    else {
      pcVar18 = pcVar18 + 1;
      if (cVar4 == '\0') goto LAB_002e45e2;
    }
    iVar10 = iVar10 + 1;
    iVar6 = iVar6 + -1;
  } while( true );
LAB_002e487f:
  piVar21 = local_38 + -4;
  if (piVar21 != &emptyString) {
LAB_002e4891:
    LOCK();
    iVar8 = *piVar21;
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar21);
    }
  }
  goto LAB_002e4750;
LAB_002e45e2:
  pbVar20 = &DAT_0061ac58;
  if (iVar10 < iVar8) {
    pbVar14 = pbVar19;
    do {
      bVar5 = *pbVar14;
      if (bVar5 == 0) {
        if (pbVar19 != &DAT_0061ac58) {
          LOCK();
          *(int *)(pbVar19 + -0x10) = *(int *)(pbVar19 + -0x10) + 1;
          UNLOCK();
        }
        pbVar20 = pbVar19;
        local_50 = pbVar19;
        goto LAB_002e4692;
      }
      pbVar15 = pbVar14 + 1;
      if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
        if ((bVar5 & 0x20) == 0) {
          pbVar15 = pbVar14 + 2;
        }
        else {
          pbVar15 = pbVar14 + (4 - (ulong)((bVar5 & 0x10) == 0));
        }
      }
      iVar6 = iVar6 + -1;
      pbVar14 = pbVar15;
    } while (iVar6 != 0);
    if ((pbVar19 != (byte *)0x0) && (*pbVar19 != 0)) {
      sVar23 = (long)pbVar15 - (long)pbVar19;
      uVar17 = sVar23 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002e4668 to 002e466c has its CatchHandler @ 002e4b8d */
      puVar16 = operator_new__(uVar17 + 0x17);
      LOCK();
      *puVar16 = 0;
      UNLOCK();
      *(ulong *)(puVar16 + 2) = uVar17;
      memcpy(puVar16 + 4,pbVar19,sVar23);
      *(undefined1 *)((long)puVar16 + sVar23 + 0x10) = 0;
      pbVar20 = (byte *)(puVar16 + 4);
    }
  }
LAB_002e4692:
  pbVar19 = local_50 + -0x10;
  local_50 = pbVar20;
  if (pbVar19 != (byte *)&emptyString) {
    LOCK();
    iVar8 = *(int *)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(pbVar19);
    }
  }
  if (piVar21 != &emptyString) {
    LOCK();
    iVar8 = *piVar21;
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(piVar21);
      lVar12 = *(long *)(param_1 + 0x170);
      goto joined_r0x002e4739;
    }
  }
LAB_002e46c5:
  lVar12 = *(long *)(param_1 + 0x170);
joined_r0x002e4739:
  if (lVar12 == 0) {
LAB_002e4750:
    while( true ) {
      pbVar19 = local_50;
      bVar5 = *local_50;
      uVar11 = (uint)bVar5;
      if ((char)bVar5 < '\0') {
        if ((bVar5 & 0x40) == 0) {
          uVar11 = uVar11 & 0x7f;
        }
        else {
          uVar11 = uVar11 & 0x10 ^ 0x1f;
          if ((bVar5 & 0x20) == 0) {
            uVar11 = 0x3f;
          }
          uVar11 = uVar11 & bVar5;
          if (((((local_50[1] & 0xffffffc0) == 0x80) &&
               (uVar11 = local_50[1] & 0x3f | uVar11 << 6, (bVar5 & 0x20) != 0)) &&
              ((local_50[2] & 0xffffffc0) == 0x80)) &&
             ((uVar11 = local_50[2] & 0x3f | uVar11 << 6, (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0 &&
              ((local_50[3] & 0xffffffc0) == 0x80)))) {
            uVar11 = uVar11 << 6 | local_50[3] & 0x3f;
          }
        }
      }
      if (uVar11 != 0x2b) break;
      puVar16 = (undefined4 *)&DAT_0061ac58;
      if (bVar5 != 0) {
        pbVar20 = local_50 + 1;
        if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
          if ((bVar5 & 0x20) == 0) {
            pbVar20 = local_50 + 2;
          }
          else {
            pbVar20 = local_50 + (4 - (ulong)((bVar5 & 0x10) == 0));
          }
        }
                    /* try { // try from 002e4840 to 002e4844 has its CatchHandler @ 002e4bac */
        puVar16 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar20);
      }
      local_38 = puVar16;
                    /* try { // try from 002e484d to 002e4857 has its CatchHandler @ 002e4bb1 */
      juce::String::trimStart(&local_48,&local_38);
      local_50 = local_48;
      local_48 = pbVar19;
      pbVar19 = pbVar19 + -0x10;
      if (pbVar19 == (byte *)&emptyString) goto LAB_002e487f;
      LOCK();
      iVar8 = *(int *)pbVar19;
      *(int *)pbVar19 = *(int *)pbVar19 + -1;
      UNLOCK();
      if (iVar8 != 0) goto LAB_002e487f;
      operator_delete__(pbVar19);
      piVar21 = local_38 + -4;
      if (piVar21 != &emptyString) goto LAB_002e4891;
    }
    if (bVar5 != 0) {
      pbVar20 = local_50;
      do {
        pbVar14 = &DAT_005e38c3;
        uVar11 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          if ((bVar5 & 0x40) == 0) {
            uVar11 = bVar5 & 0x7f;
          }
          else {
            uVar11 = bVar5 & 0x10 ^ 0x1f;
            if ((bVar5 & 0x20) == 0) {
              uVar11 = 0x3f;
            }
            uVar11 = uVar11 & bVar5;
            if ((((pbVar20[1] & 0xffffffc0) == 0x80) &&
                (uVar11 = pbVar20[1] & 0x3f | uVar11 << 6, (bVar5 & 0x20) != 0)) &&
               (((pbVar20[2] & 0xffffffc0) == 0x80 &&
                ((uVar11 = pbVar20[2] & 0x3f | uVar11 << 6, (bVar5 >> 5 & (bVar5 & 0x10) == 0) == 0
                 && ((pbVar20[3] & 0xffffffc0) == 0x80)))))) {
              uVar11 = uVar11 << 6 | pbVar20[3] & 0x3f;
            }
          }
        }
        uVar13 = 0x30;
        while( true ) {
          pbVar15 = pbVar14 + 1;
          if ((char)uVar13 < '\0') {
            if ((uVar13 & 0x40) == 0) {
              uVar13 = uVar13 & 0x7f;
            }
            else {
              if ((uVar13 & 0x20) == 0) {
                uVar9 = 0x3f;
                lVar12 = 0;
                bVar2 = false;
                bVar3 = false;
              }
              else {
                bVar2 = true;
                if ((uVar13 & 0x10) == 0) {
                  uVar9 = 0x1f;
                  lVar12 = 1;
                  bVar3 = false;
                }
                else {
                  uVar9 = 0xf;
                  lVar12 = 2;
                  bVar3 = true;
                }
              }
              uVar13 = uVar13 & uVar9;
              if ((pbVar14[1] & 0xc0) == 0x80) {
                pbVar22 = pbVar14 + lVar12 + 2;
                uVar13 = pbVar14[1] & 0x3f | uVar13 << 6;
                pbVar15 = pbVar22;
                if (bVar2) {
                  uVar9 = (uint)pbVar14[2];
                  pbVar15 = pbVar14 + 2;
                  if ((uVar9 & 0xffffffc0) == 0x80) {
                    uVar13 = uVar9 & 0x3f | uVar13 << 6;
                    pbVar15 = pbVar22;
                    if (bVar3) {
                      bVar1 = pbVar14[3];
                      pbVar15 = pbVar14 + 3;
                      if ((bVar1 & 0xc0) == 0x80) {
                        uVar13 = uVar13 << 6 | bVar1 & 0x3f;
                        pbVar15 = pbVar22;
                      }
                    }
                  }
                }
              }
            }
          }
          pbVar14 = pbVar15;
          if (uVar13 == uVar11) break;
          uVar13 = (uint)*pbVar14;
          if (*pbVar14 == 0) {
            sVar23 = (long)pbVar20 - (long)local_50;
            uVar17 = sVar23 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002e4b16 to 002e4b1a has its CatchHandler @ 002e4ba8 */
            puVar16 = operator_new__(uVar17 + 0x17);
            LOCK();
            *puVar16 = 0;
            UNLOCK();
            *(ulong *)(puVar16 + 2) = uVar17;
            pbVar20 = (byte *)(puVar16 + 4);
            memcpy(pbVar20,pbVar19,sVar23);
            *(undefined1 *)((long)puVar16 + sVar23 + 0x10) = 0;
            goto LAB_002e4b45;
          }
        }
        if (((char)bVar5 < '\0') && ((bVar5 & 0x40) != 0)) {
          if ((bVar5 & 0x20) == 0) {
            pbVar20 = pbVar20 + 2;
          }
          else {
            pbVar20 = pbVar20 + (4 - (ulong)((bVar5 & 0x10) == 0));
          }
          bVar5 = *pbVar20;
        }
        else {
          bVar5 = pbVar20[1];
          pbVar20 = pbVar20 + 1;
        }
      } while (bVar5 != 0);
    }
    pbVar19 = local_50 + -0x10;
    pbVar20 = local_50;
    if (pbVar19 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar19 = *(int *)pbVar19 + 1;
      UNLOCK();
    }
LAB_002e4b45:
    local_48 = pbVar20;
    local_40 = CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_48);
    pbVar20 = pbVar20 + -0x10;
    if (pbVar20 != (byte *)&emptyString) {
      LOCK();
      iVar8 = *(int *)pbVar20;
      *(int *)pbVar20 = *(int *)pbVar20 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        operator_delete__(pbVar20);
      }
    }
  }
  else {
                    /* try { // try from 002e46d6 to 002e46e1 has its CatchHandler @ 002e4baa */
    local_40 = (**(code **)(param_1 + 0x178))(param_1 + 0x160,&local_50);
  }
  pbVar19 = local_50 + -0x10;
  if (pbVar19 != (byte *)&emptyString) {
    LOCK();
    iVar8 = *(int *)pbVar19;
    *(int *)pbVar19 = *(int *)pbVar19 + -1;
    UNLOCK();
    if (iVar8 == 0) {
      operator_delete__(pbVar19);
    }
  }
  return local_40;
}


