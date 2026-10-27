// Function : parseColour
// Namespace: juce:SVGState
// Entry    : 002adcf0
// Prototype: uint parseColour(SVGState * this, long * param_1, byte * param_2, uint param_3, undefined8 param_4, byte * param_5)
// Body     : 002adcf0 - 002af4bf


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::SVGState::parseColour(juce::SVGState::XmlPath const&, juce::StringRef, juce::Colour) const
    */

uint __thiscall
juce::SVGState::parseColour
          (SVGState *this,long *param_1,byte *param_2,uint param_3,undefined8 param_4,byte *param_5)

{
  bool bVar1;
  double dVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  byte bVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  int *piVar19;
  byte **ppbVar20;
  byte *pbVar21;
  uint uVar22;
  byte bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  byte *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  byte *local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  float local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  auVar4 = local_78;
  local_78._4_4_ = 0;
  local_78._0_4_ = param_3;
  uVar7 = local_78._0_8_;
  local_a8 = &DAT_0061ac58;
  pbVar18 = (byte *)&local_a8;
  local_78 = auVar4;
  getStyleAttribute((SVGState *)&local_80,(long)this,param_1,param_2,pbVar18,param_5);
  pbVar14 = local_80;
  bVar23 = *local_80;
  uVar5 = (uint)bVar23;
  if ((char)bVar23 < '\0') {
    if ((bVar23 & 0x40) == 0) {
      uVar5 = bVar23 & 0x7f;
    }
    else {
      uVar16 = 0x3f;
      if ((bVar23 & 0x20) != 0) {
        uVar16 = uVar5 & 0x10 ^ 0x1f;
      }
      uVar5 = uVar5 & uVar16;
      if (((((local_80[1] & 0xffffffc0) == 0x80) &&
           (uVar5 = local_80[1] & 0x3f | uVar5 << 6, (bVar23 & 0x20) != 0)) &&
          ((local_80[2] & 0xffffffc0) == 0x80)) &&
         ((uVar5 = local_80[2] & 0x3f | uVar5 << 6, (bVar23 >> 5 & (bVar23 & 0x10) == 0) == 0 &&
          ((local_80[3] & 0xffffffc0) == 0x80)))) {
        uVar5 = uVar5 << 6 | local_80[3] & 0x3f;
      }
    }
  }
  if (uVar5 != 0x23) {
    iVar13 = 0;
    pcVar8 = "rgb";
    do {
      if (*pcVar8 < '\0') {
        do {
          pbVar21 = (byte *)(pcVar8 + 1);
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar8;
        } while ((*pbVar21 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = pcVar8 + 1;
        if (*pcVar8 == '\0') goto LAB_002adfd2;
      }
      iVar13 = iVar13 + 1;
      pcVar8 = pcVar9;
    } while( true );
  }
  local_98 = 0;
  local_a8 = (byte *)0x0;
  uStack_a0 = 0;
  uStack_90 = 0xf0000000f;
  uVar7 = 0;
  pbVar18 = local_80;
joined_r0x002ade07:
  pbVar14 = pbVar18 + 1;
  if (((char)bVar23 < '\0') && ((bVar23 & 0x40) != 0)) {
    if ((bVar23 & 0x20) == 0) {
      pbVar14 = pbVar18 + 2;
    }
    else {
      pbVar14 = pbVar18 + (4 - (ulong)((bVar23 & 0x10) == 0));
    }
  }
  bVar23 = *pbVar14;
  uVar5 = (uint)bVar23;
  if ((char)bVar23 < '\0') {
    uVar5 = (uint)bVar23;
    if ((bVar23 & 0x40) == 0) {
      uVar5 = uVar5 & 0x7f;
    }
    else {
      uVar16 = uVar5 & 0x10 ^ 0x1f;
      if ((bVar23 & 0x20) == 0) {
        uVar16 = 0x3f;
      }
      uVar5 = uVar16 & uVar5;
      if (((((pbVar14[1] & 0xffffffc0) == 0x80) &&
           (uVar5 = pbVar14[1] & 0x3f | uVar5 << 6, (bVar23 & 0x20) != 0)) &&
          ((pbVar14[2] & 0xffffffc0) == 0x80)) &&
         ((uVar5 = pbVar14[2] & 0x3f | uVar5 << 6, (bVar23 >> 5 & (bVar23 & 0x10) == 0) == 0 &&
          ((pbVar14[3] & 0xc0) == 0x80)))) {
        uVar5 = pbVar14[3] & 0x3f | uVar5 << 6;
      }
    }
  }
  uVar16 = uVar5 - 0x30;
  if (9 < uVar16) {
    if (uVar5 - 0x61 < 6) {
      uVar16 = uVar5 - 0x57;
    }
    else {
      if (5 < uVar5 - 0x41) {
        if ((uVar7 & 0xfffffffc) == 0) {
          local_a8._4_4_ = (int)((ulong)local_a8 >> 0x20);
          uVar16 = (int)local_a8 * 0x11;
          uVar5 = local_a8._4_4_ * 0x11;
          uVar15 = (int)uStack_a0 * 0x11;
          uVar22 = 0xff;
          goto LAB_002af1e9;
        }
LAB_002ae589:
        uVar16 = (int)local_a8 * 0x10 + local_a8._4_4_;
        uVar5 = (int)uStack_a0 * 0x10 + uStack_a0._4_4_;
        uVar15 = (int)local_98 * 0x10 + local_98._4_4_;
        uVar22 = (int)uStack_90 * 0x10 + uStack_90._4_4_;
        goto LAB_002af1e9;
      }
      uVar16 = uVar5 - 0x37;
    }
  }
  *(uint *)(local_78 + uVar7 * 4 + -0x30) = uVar16;
  if (uVar7 == 7) goto LAB_002ae589;
  bVar23 = *pbVar14;
  uVar7 = uVar7 + 1;
  pbVar18 = pbVar14;
  goto joined_r0x002ade07;
LAB_002adfd2:
  uVar5 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_80,&DAT_005e3b8c,iVar13,pcVar8,pbVar18,(uint)param_5);
  if (uVar5 != 0) {
    iVar13 = 0;
    pcVar8 = "hsl";
    do {
      if (*pcVar8 < '\0') {
        do {
          pbVar21 = (byte *)(pcVar8 + 1);
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar8;
        } while ((*pbVar21 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = pcVar8 + 1;
        if (*pcVar8 == '\0') goto LAB_002ae032;
      }
      iVar13 = iVar13 + 1;
      pcVar8 = pcVar9;
    } while( true );
  }
LAB_002ae191:
  iVar13 = -1;
  if (bVar23 != 0) {
    iVar6 = 0;
    do {
      pbVar21 = pbVar14 + 1;
      uVar5 = (uint)bVar23;
      if ((char)bVar23 < '\0') {
        if ((bVar23 & 0x40) == 0) {
          uVar5 = uVar5 & 0x7f;
        }
        else {
          if ((bVar23 & 0x20) == 0) {
            uVar16 = 0x3f;
            lVar10 = 0;
            param_5 = (byte *)0x0;
            pbVar18 = (byte *)0x0;
          }
          else {
            param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),1);
            if ((bVar23 & 0x10) == 0) {
              uVar16 = 0x1f;
              lVar10 = 1;
              pbVar18 = (byte *)0x0;
            }
            else {
              uVar16 = 0xf;
              lVar10 = 2;
              pbVar18 = (byte *)CONCAT71((int7)((ulong)pbVar18 >> 8),1);
            }
          }
          uVar5 = uVar5 & uVar16;
          if ((pbVar14[1] & 0xc0) == 0x80) {
            pbVar17 = pbVar14 + lVar10 + 2;
            uVar5 = pbVar14[1] & 0x3f | uVar5 << 6;
            pbVar21 = pbVar17;
            if ((char)param_5 != '\0') {
              uVar16 = (uint)pbVar14[2];
              pbVar21 = pbVar14 + 2;
              if ((uVar16 & 0xffffffc0) == 0x80) {
                uVar5 = uVar16 & 0x3f | uVar5 << 6;
                pbVar21 = pbVar17;
                if ((char)pbVar18 != '\0') {
                  uVar16 = (uint)pbVar14[3];
                  pbVar21 = pbVar14 + 3;
                  if ((uVar16 & 0xffffffc0) == 0x80) {
                    uVar5 = uVar5 << 6 | uVar16 & 0x3f;
                    pbVar21 = pbVar17;
                  }
                }
              }
            }
          }
        }
      }
      pbVar14 = pbVar21;
      if (uVar5 == 0x28) {
        iVar13 = iVar6;
        break;
      }
      iVar6 = iVar6 + 1;
      bVar23 = *pbVar14;
    } while (bVar23 != 0);
  }
  iVar6 = juce::String::indexOfChar((String *)&local_80,iVar13,0x29);
  uVar5 = (uint)param_5;
  local_a8 = (byte *)0x0;
  uStack_a0 = 0;
  if ((2 < iVar13) && (iVar13 < iVar6)) {
                    /* try { // try from 002ae2d6 to 002ae2e9 has its CatchHandler @ 002af4ed */
    juce::String::substring(&local_b0,&local_80,iVar13 + 1,iVar6);
    pbVar14 = local_b0;
                    /* try { // try from 002ae2ef to 002ae309 has its CatchHandler @ 002af4c2 */
    StringArray::addTokens((StringArray *)&local_a8,local_b0,&DAT_005e5e2e,&DAT_005e2ee7);
    pbVar14 = pbVar14 + -0x10;
    if (pbVar14 != (byte *)&emptyString) {
      LOCK();
      iVar13 = *(int *)pbVar14;
      *(int *)pbVar14 = *(int *)pbVar14 + -1;
      UNLOCK();
      if (iVar13 == 0) {
        operator_delete__(pbVar14);
      }
    }
    uVar5 = (uint)param_5;
    if ((long)(int)uStack_a0._4_4_ != 0) {
      lVar10 = (long)(int)uStack_a0._4_4_ << 3;
      pbVar14 = local_a8;
      do {
                    /* try { // try from 002ae35e to 002ae368 has its CatchHandler @ 002af522 */
        juce::String::trim((long *)&local_b0,(long *)pbVar14);
        pbVar21 = *(byte **)pbVar14;
        *(byte **)pbVar14 = local_b0;
        pbVar17 = pbVar21 + -0x10;
        local_b0 = pbVar21;
        if (pbVar17 != (byte *)&emptyString) {
          LOCK();
          iVar13 = *(int *)pbVar17;
          *(int *)pbVar17 = *(int *)pbVar17 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            operator_delete__(pbVar17);
          }
        }
        uVar5 = (uint)param_5;
        pbVar14 = pbVar14 + 8;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    StringArray::removeEmptyStrings((Array<juce::String,juce::DummyCriticalSection,0> *)&local_a8);
  }
  pbVar14 = local_80;
  iVar13 = 0;
  pcVar8 = "rgba";
  do {
    if (*pcVar8 < '\0') {
      do {
        pbVar21 = (byte *)(pcVar8 + 1);
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar8;
      } while ((*pbVar21 & 0xc0) == 0x80);
    }
    else {
      pcVar9 = pcVar8 + 1;
      if (*pcVar8 == '\0') goto LAB_002ae4a2;
    }
    iVar13 = iVar13 + 1;
    pcVar8 = pcVar9;
  } while( true );
LAB_002ae032:
  uVar5 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (pbVar14,&DAT_0065596f,iVar13,pcVar8,pbVar18,(uint)param_5);
  if (uVar5 == 0) goto LAB_002ae191;
  local_78 = CONCAT88(local_78._8_8_,uVar7);
  uVar5 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (pbVar14,(byte *)"inherit");
  if (uVar5 == 0) {
    do {
      param_1 = (long *)param_1[1];
      if (param_1 == (long *)0x0) goto LAB_002ae065;
      local_b0 = &DAT_0061ac58;
                    /* try { // try from 002ae603 to 002ae618 has its CatchHandler @ 002af51d */
      ppbVar20 = &local_b0;
      getStyleAttribute((SVGState *)&local_a8,(long)this,param_1,param_2,(byte *)&local_b0,param_5);
      bVar23 = *local_a8;
      pbVar18 = local_a8 + -0x10;
      if (pbVar18 != (byte *)&emptyString) {
        LOCK();
        iVar13 = *(int *)pbVar18;
        *(int *)pbVar18 = *(int *)pbVar18 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(pbVar18);
        }
      }
      pbVar18 = local_b0 + -0x10;
      if (pbVar18 != (byte *)&emptyString) {
        LOCK();
        iVar13 = *(int *)pbVar18;
        *(int *)pbVar18 = *(int *)pbVar18 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(pbVar18);
        }
      }
    } while (bVar23 == 0);
                    /* try { // try from 002aecba to 002aeccc has its CatchHandler @ 002af4c0 */
    uVar5 = parseColour(this,param_1,param_2,local_78._0_4_,ppbVar20,param_5);
    uVar7 = (ulong)uVar5;
  }
  else {
LAB_002ae065:
                    /* try { // try from 002ae065 to 002ae073 has its CatchHandler @ 002af51b */
    juce::String::trim((long *)&local_b0,(long *)&local_80);
                    /* try { // try from 002ae074 to 002ae082 has its CatchHandler @ 002af4ef */
    juce::String::toLowerCase(&local_a8,&local_b0);
    bVar23 = *local_a8;
    iVar13 = 0;
    if (bVar23 != 0) {
      pbVar18 = local_a8;
      do {
        pbVar14 = pbVar18 + 1;
        uVar5 = (uint)bVar23;
        if ((char)bVar23 < '\0') {
          if ((bVar23 & 0x40) == 0) {
            uVar5 = uVar5 & 0x7f;
            goto LAB_002ae09c;
          }
          if ((bVar23 & 0x20) == 0) {
            uVar16 = 0x3f;
            lVar10 = 0;
            bVar1 = false;
            bVar3 = false;
          }
          else {
            bVar1 = true;
            if ((bVar23 & 0x10) == 0) {
              uVar16 = 0x1f;
              lVar10 = 1;
              bVar3 = false;
            }
            else {
              uVar16 = 0xf;
              lVar10 = 2;
              bVar3 = true;
            }
          }
          uVar5 = uVar16 & uVar5;
          bVar23 = pbVar18[1];
          if ((bVar23 & 0xc0) == 0x80) {
            pbVar21 = pbVar18 + lVar10 + 2;
            uVar5 = bVar23 & 0x3f | uVar5 << 6;
            pbVar14 = pbVar21;
            if (!bVar1) goto LAB_002ae09c;
            pbVar14 = pbVar18 + 2;
            bVar23 = *pbVar14;
            if ((bVar23 & 0xc0) == 0x80) {
              uVar5 = bVar23 & 0x3f | uVar5 << 6;
              pbVar14 = pbVar21;
              if (bVar3) {
                pbVar14 = pbVar18 + 3;
                bVar23 = *pbVar14;
                if ((bVar23 & 0xc0) != 0x80) goto LAB_002ae0a0;
                uVar5 = uVar5 << 6 | bVar23 & 0x3f;
                pbVar14 = pbVar21;
              }
              goto LAB_002ae09c;
            }
            goto LAB_002ae0a0;
          }
        }
        else {
LAB_002ae09c:
          bVar23 = *pbVar14;
LAB_002ae0a0:
        }
        pbVar18 = pbVar14;
        iVar13 = uVar5 + iVar13 * 0x1f;
      } while (bVar23 != 0);
    }
    pbVar18 = local_a8 + -0x10;
    if (pbVar18 != (byte *)&emptyString) {
      LOCK();
      iVar6 = *(int *)pbVar18;
      *(int *)pbVar18 = *(int *)pbVar18 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(pbVar18);
      }
    }
    pbVar18 = local_b0 + -0x10;
    if (pbVar18 != (byte *)&emptyString) {
      LOCK();
      iVar6 = *(int *)pbVar18;
      *(int *)pbVar18 = *(int *)pbVar18 + -1;
      UNLOCK();
      if (iVar6 == 0) {
        operator_delete__(pbVar18);
      }
    }
    lVar10 = 0;
    iVar6 = Colours::findColourForName(juce::String_const&,juce::Colour)::presets;
    while (iVar6 != iVar13) {
      if (*(int *)((long)&DAT_005eaa38 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa38 + lVar10;
LAB_002aee18:
        uVar7 = (ulong)*(uint *)(lVar10 + 4);
        goto LAB_002aee1b;
      }
      if (*(int *)((long)&DAT_005eaa40 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa40 + lVar10;
        goto LAB_002aee18;
      }
      if (*(int *)((long)&DAT_005eaa48 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa48 + lVar10;
        goto LAB_002aee18;
      }
      uVar7 = local_78._0_8_;
      if (lVar10 == 0x480) goto LAB_002aee1b;
      if (*(int *)((long)&DAT_005eaa50 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa50 + lVar10;
        goto LAB_002aee18;
      }
      if (*(int *)((long)&DAT_005eaa58 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa58 + lVar10;
        goto LAB_002aee18;
      }
      if (*(int *)((long)&DAT_005eaa60 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa60 + lVar10;
        goto LAB_002aee18;
      }
      if (*(int *)((long)&DAT_005eaa68 + lVar10) == iVar13) {
        lVar10 = (long)&DAT_005eaa68 + lVar10;
        goto LAB_002aee18;
      }
      iVar6 = *(int *)((long)&DAT_005eaa70 + lVar10);
      lVar10 = lVar10 + 0x40;
    }
    uVar7 = (ulong)*(uint *)((long)&DAT_005eaa34 + lVar10);
  }
LAB_002aee1b:
  uVar15 = (uint)uVar7;
  uVar5 = (uint)(uVar7 >> 8) & 0xffffff;
  uVar16 = (uint)(uVar7 >> 0x10) & 0xffff;
  uVar22 = uVar15 >> 0x18;
  goto LAB_002af1e9;
LAB_002ae4a2:
  uVar16 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (local_80,&DAT_005e3b98,iVar13,pcVar8,pbVar18,uVar5);
  if (uVar16 != 0) {
    iVar13 = 0;
    pcVar8 = "hsla";
    do {
      if (*pcVar8 < '\0') {
        do {
          pbVar21 = (byte *)(pcVar8 + 1);
          pcVar8 = pcVar8 + 1;
          pcVar9 = pcVar8;
        } while ((*pbVar21 & 0xc0) == 0x80);
      }
      else {
        pcVar9 = pcVar8 + 1;
        if (*pcVar8 == '\0') goto LAB_002ae502;
      }
      iVar13 = iVar13 + 1;
      pcVar8 = pcVar9;
    } while( true );
  }
  if (uStack_a0._4_4_ != 4) {
    fVar24 = DAT_005d9038;
    goto LAB_002ae667;
  }
LAB_002ae538:
  local_b0 = *(byte **)(local_a8 + 0x18);
  dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_b0);
  fVar24 = (float)dVar2;
  fVar24 = (float)(~-(uint)NAN(fVar24) &
                  ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar24)) & (uint)fVar24);
LAB_002ae667:
  iVar13 = 0;
  pcVar8 = "hsl";
  do {
    if (*pcVar8 < '\0') {
      do {
        pbVar21 = (byte *)(pcVar8 + 1);
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar8;
      } while ((*pbVar21 & 0xc0) == 0x80);
    }
    else {
      pcVar9 = pcVar8 + 1;
      if (*pcVar8 == '\0') goto LAB_002ae6b2;
    }
    iVar13 = iVar13 + 1;
    pcVar8 = pcVar9;
  } while( true );
LAB_002ae502:
  uVar16 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (pbVar14,&DAT_005e3b9d,iVar13,pcVar8,pbVar18,uVar5);
  fVar24 = DAT_005d9038;
  if ((uVar16 != 0) || (uStack_a0._4_4_ != 4)) goto LAB_002ae667;
  goto LAB_002ae538;
LAB_002ae6b2:
  local_78 = ZEXT416((uint)fVar24);
  uVar5 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (pbVar14,&DAT_0065596f,iVar13,pcVar8,pbVar18,uVar5);
  if (uStack_a0._4_4_ == 0) {
    pbVar18 = (byte *)&StringArray::operator[](int)::empty;
    if ((StringArray::operator[](int)::empty == '\0') &&
       (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
      StringArray::operator[](int)::empty = &DAT_0061ac58;
      pbVar18 = (byte *)&StringArray::operator[](int)::empty;
      __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
      __cxa_guard_release(&StringArray::operator[](int)::empty);
    }
  }
  else {
    pbVar18 = local_a8;
  }
  pbVar18 = *(byte **)pbVar18;
  if (uVar5 == 0) {
    local_b0 = pbVar18;
    local_68 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>
                                 ((long *)&local_b0);
    if (uStack_a0._4_4_ < 2) {
      pbVar18 = (byte *)&StringArray::operator[](int)::empty;
      if ((StringArray::operator[](int)::empty == '\0') &&
         (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
      }
    }
    else {
      pbVar18 = local_a8 + 8;
    }
    local_b0 = *(byte **)pbVar18;
    dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_b0);
    fVar24 = (float)dVar2;
    bVar1 = (float)(_DAT_005d91c0 & (uint)fVar24) < DAT_005d94c8;
    local_58 = ZEXT416((uint)fVar24);
    if (uStack_a0._4_4_ < 3) {
      pbVar18 = (byte *)&StringArray::operator[](int)::empty;
      if ((StringArray::operator[](int)::empty == '\0') &&
         (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
      }
    }
    else {
      pbVar18 = local_a8 + 0x10;
    }
    local_b0 = *(byte **)pbVar18;
    dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_b0);
    fVar25 = (float)dVar2;
    fVar26 = 0.0;
    uVar27 = 0;
    uVar28 = 0;
    uVar29 = 0;
    if (bVar1 && !NAN(fVar24)) {
      fVar26 = (float)local_58._0_4_ / DAT_005d94c4;
      uVar27 = local_58._4_4_;
      uVar28 = local_58._8_4_;
      uVar29 = local_58._12_4_;
    }
    fVar24 = (float)(~-(uint)NAN(fVar25) &
                    ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar25)) &
                    (uint)(fVar25 / DAT_005d94c4));
    uVar22 = 0;
    if ((0.0 < (float)local_78._0_4_) && (uVar22 = 0xff000000, (float)local_78._0_4_ < DAT_005d9038)
       ) {
      uVar22 = SUB84((double)((float)local_78._0_4_ * DAT_005de3b0) + DAT_005d9098,0) << 0x18;
    }
    if (DAT_005d9044 <= fVar24) {
      fVar25 = (fVar26 + fVar24) - fVar24 * fVar26;
    }
    else {
      fVar25 = (fVar26 + DAT_005d9038) * fVar24;
    }
    fVar26 = (float)(_DAT_005d91c0 & (uint)fVar25);
    bVar23 = 0;
    if (fVar26 == DAT_005d94c8) {
      bVar12 = 0;
      bVar11 = 0;
      if ((fVar25 != 0.0) || (NAN(fVar25))) {
LAB_002aeb8a:
        fVar26 = (float)local_68;
        fVar26 = (float)(~-(uint)NAN(fVar26) &
                        ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar26)) &
                        (uint)(fVar26 / _DAT_005de4f0));
        local_78 = ZEXT416((uint)fVar26);
        fVar24 = (fVar24 + fVar24) - fVar25;
        local_58 = ZEXT416((uint)fVar24);
        local_48 = (fVar25 - fVar24) / fVar25;
        local_68 = (double)CONCAT44(uVar27,fVar25);
        uStack_60 = uVar28;
        uStack_5c = uVar29;
        uStack_44 = uVar27;
        uStack_40 = uVar28;
        uStack_3c = uVar29;
        fVar24 = floorf(fVar26);
        local_78._0_4_ = (((float)local_78._0_4_ - fVar24) * _DAT_005de4f0) / _DAT_005de520;
        fVar24 = floorf((float)local_78._0_4_);
        fVar25 = local_48 * (float)local_68 * ((float)local_78._0_4_ - fVar24);
        fVar24 = (float)local_58._0_4_ + fVar25;
        if (DAT_005d9038 <= (float)local_78._0_4_) {
          fVar25 = (float)local_68 - fVar25;
          if ((float)local_78._0_4_ < DAT_005d9078) {
            fVar24 = (float)local_68;
            if (fVar25 <= 0.0) {
              bVar23 = 0;
            }
            else {
              bVar23 = 0xff;
              if (fVar25 < DAT_005d9038) {
                bVar23 = SUB81((double)(fVar25 * DAT_005de3b0) + DAT_005d9098,0);
              }
            }
            goto joined_r0x002aeec0;
          }
          if (DAT_0065449c <= (float)local_78._0_4_) {
            if (DAT_005d94d4 <= (float)local_78._0_4_) {
              if (DAT_00652628 <= (float)local_78._0_4_) {
                bVar23 = 0;
                bVar12 = 0;
                bVar11 = 0;
                if ((float)local_78._0_4_ < DAT_005d98e4) {
                  if ((float)local_68 <= 0.0) {
                    bVar23 = 0;
                  }
                  else {
                    bVar23 = 0xff;
                    if ((float)local_68 < DAT_005d9038) {
                      bVar23 = SUB81((double)((float)local_68 * DAT_005de3b0) + DAT_005d9098,0);
                    }
                  }
                  bVar11 = 0;
                  bVar12 = 0;
                  if ((0.0 < (float)local_58._0_4_) &&
                     (bVar12 = 0xff, (float)local_58._0_4_ < DAT_005d9038)) {
                    bVar12 = SUB81((double)((float)local_58._0_4_ * DAT_005de3b0) + DAT_005d9098,0);
                  }
                  if ((0.0 < fVar25) && (bVar11 = 0xff, fVar25 < DAT_005d9038)) {
                    dVar2 = (double)(fVar25 * DAT_005de3b0);
                    goto LAB_002aef16;
                  }
                }
                goto LAB_002af15e;
              }
              fVar25 = (float)local_58._0_4_;
              if (fVar24 <= 0.0) {
                bVar23 = 0;
              }
              else {
                bVar23 = 0xff;
                if (fVar24 < DAT_005d9038) {
                  bVar23 = SUB81((double)(fVar24 * DAT_005de3b0) + DAT_005d9098,0);
                }
              }
            }
            else if ((float)local_58._0_4_ <= 0.0) {
              bVar23 = 0;
            }
            else {
              bVar23 = 0xff;
              if ((float)local_58._0_4_ < DAT_005d9038) {
                bVar23 = SUB81((double)((float)local_58._0_4_ * DAT_005de3b0) + DAT_005d9098,0);
              }
            }
            bVar12 = 0;
            if ((0.0 < fVar25) && (bVar12 = 0xff, fVar25 < DAT_005d9038)) {
              bVar12 = SUB81((double)(fVar25 * DAT_005de3b0) + DAT_005d9098,0);
            }
            bVar11 = 0;
            if ((0.0 < (float)local_68) && (bVar11 = 0xff, (float)local_68 < DAT_005d9038)) {
              dVar2 = (double)((float)local_68 * DAT_005de3b0);
              goto LAB_002aef16;
            }
            goto LAB_002af15e;
          }
          if ((float)local_58._0_4_ <= 0.0) {
            bVar23 = 0;
          }
          else {
            bVar23 = 0xff;
            if ((float)local_58._0_4_ < DAT_005d9038) {
              bVar23 = SUB81((double)((float)local_58._0_4_ * DAT_005de3b0) + DAT_005d9098,0);
            }
          }
          bVar11 = 0;
          bVar12 = 0;
          if ((0.0 < (float)local_68) && (bVar12 = 0xff, (float)local_68 < DAT_005d9038)) {
            bVar12 = SUB81((double)((float)local_68 * DAT_005de3b0) + DAT_005d9098,0);
          }
          if ((fVar24 <= 0.0) || (bVar11 = 0xff, DAT_005d9038 <= fVar24)) goto LAB_002af15e;
          dVar2 = (double)(fVar24 * DAT_005de3b0);
        }
        else {
          if ((float)local_68 <= 0.0) {
            bVar23 = 0;
          }
          else {
            bVar23 = 0xff;
            if ((float)local_68 < DAT_005d9038) {
              bVar23 = SUB81((double)((float)local_68 * DAT_005de3b0) + DAT_005d9098,0);
            }
          }
joined_r0x002aeec0:
          bVar12 = 0;
          if ((0.0 < fVar24) && (bVar12 = 0xff, fVar24 < DAT_005d9038)) {
            bVar12 = SUB81((double)(fVar24 * DAT_005de3b0) + DAT_005d9098,0);
          }
          bVar11 = 0;
          if (((float)local_58._0_4_ <= 0.0) ||
             (bVar11 = 0xff, DAT_005d9038 <= (float)local_58._0_4_)) goto LAB_002af15e;
          dVar2 = (double)((float)local_58._0_4_ * DAT_005de3b0);
        }
LAB_002aef16:
        bVar11 = SUB81(dVar2 + DAT_005d9098,0);
      }
    }
    else if (fVar26 <= DAT_005d94cc) {
      bVar12 = 0;
      bVar11 = 0;
    }
    else {
      bVar12 = 0;
      bVar11 = 0;
      if (DAT_005d94d0 * fVar26 < fVar26) goto LAB_002aeb8a;
    }
LAB_002af15e:
    uVar16 = (uint)bVar23;
    uVar5 = (uint)bVar12;
    uVar15 = (uint)bVar11;
    uVar22 = uVar22 >> 0x18;
  }
  else {
    bVar23 = *pbVar18;
    iVar13 = -1;
    if (bVar23 != 0) {
      iVar6 = 0;
      do {
        pbVar14 = pbVar18 + 1;
        uVar5 = (uint)bVar23;
        if ((char)bVar23 < '\0') {
          if ((bVar23 & 0x40) == 0) {
            uVar5 = uVar5 & 0x7f;
          }
          else {
            if ((bVar23 & 0x20) == 0) {
              uVar16 = 0x3f;
              lVar10 = 0;
              bVar1 = false;
              bVar3 = false;
            }
            else {
              bVar1 = true;
              if ((bVar23 & 0x10) == 0) {
                uVar16 = 0x1f;
                lVar10 = 1;
                bVar3 = false;
              }
              else {
                uVar16 = 0xf;
                lVar10 = 2;
                bVar3 = true;
              }
            }
            uVar5 = uVar5 & uVar16;
            if ((pbVar18[1] & 0xffffffc0) == 0x80) {
              pbVar21 = pbVar18 + lVar10 + 2;
              uVar5 = pbVar18[1] & 0x3f | uVar5 << 6;
              pbVar14 = pbVar21;
              if (bVar1) {
                uVar16 = (uint)pbVar18[2];
                pbVar14 = pbVar18 + 2;
                if ((uVar16 & 0xffffffc0) == 0x80) {
                  uVar5 = uVar16 & 0x3f | uVar5 << 6;
                  pbVar14 = pbVar21;
                  if (bVar3) {
                    uVar16 = (uint)pbVar18[3];
                    pbVar14 = pbVar18 + 3;
                    if ((uVar16 & 0xffffffc0) == 0x80) {
                      uVar5 = uVar5 << 6 | uVar16 & 0x3f;
                      pbVar14 = pbVar21;
                    }
                  }
                }
              }
            }
          }
        }
        pbVar18 = pbVar14;
        if (uVar5 == 0x25) {
          iVar13 = iVar6;
          break;
        }
        iVar6 = iVar6 + 1;
        bVar23 = *pbVar18;
      } while (bVar23 != 0);
    }
    if (uStack_a0._4_4_ == 0) {
      pbVar18 = (byte *)&StringArray::operator[](int)::empty;
      if ((StringArray::operator[](int)::empty == '\0') &&
         (iVar6 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar6 != 0)) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
      }
    }
    else {
      pbVar18 = local_a8;
    }
    if (iVar13 < 0) {
      lVar10 = strtol((char *)*(byte **)pbVar18,(char **)0x0,10);
      uVar16 = (uint)lVar10;
      if (uStack_a0._4_4_ < 2) {
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        if ((StringArray::operator[](int)::empty == '\0') &&
           (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          pbVar18 = (byte *)&StringArray::operator[](int)::empty;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
        }
      }
      else {
        pbVar18 = local_a8 + 8;
      }
      lVar10 = strtol(*(char **)pbVar18,(char **)0x0,10);
      uVar5 = (uint)lVar10;
      if (uStack_a0._4_4_ < 3) {
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        if ((StringArray::operator[](int)::empty == '\0') &&
           (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          pbVar18 = (byte *)&StringArray::operator[](int)::empty;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
        }
      }
      else {
        pbVar18 = local_a8 + 0x10;
      }
      uVar22 = 0;
      lVar10 = strtol(*(char **)pbVar18,(char **)0x0,10);
      uVar15 = (uint)lVar10;
      if ((0.0 < (float)local_78._0_4_) && (uVar22 = 0xff, (float)local_78._0_4_ < DAT_005d9038))
      goto LAB_002aed58;
    }
    else {
      local_b0 = *(byte **)pbVar18;
      dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_b0)
      ;
      fVar24 = (float)dVar2;
      uVar16 = SUB84((double)(DAT_005de51c * fVar24) + DAT_005d9098,0);
      if (DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar24)) {
        uVar16 = 0;
      }
      if (NAN(fVar24)) {
        uVar16 = 0;
      }
      if (uStack_a0._4_4_ < 2) {
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        if ((StringArray::operator[](int)::empty == '\0') &&
           (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          pbVar18 = (byte *)&StringArray::operator[](int)::empty;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
        }
      }
      else {
        pbVar18 = local_a8 + 8;
      }
      local_b0 = *(byte **)pbVar18;
      dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_b0)
      ;
      fVar24 = (float)dVar2;
      bVar1 = DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar24);
      uVar5 = SUB84((double)(fVar24 * DAT_005de51c) + DAT_005d9098,0);
      if (uStack_a0._4_4_ < 3) {
        pbVar18 = (byte *)&StringArray::operator[](int)::empty;
        if ((StringArray::operator[](int)::empty == '\0') &&
           (iVar13 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar13 != 0)) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          pbVar18 = (byte *)&StringArray::operator[](int)::empty;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
        }
      }
      else {
        pbVar18 = local_a8 + 0x10;
      }
      local_b0 = *(byte **)pbVar18;
      dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_b0)
      ;
      fVar25 = (float)dVar2;
      uVar22 = 0;
      if (bVar1 || NAN(fVar24)) {
        uVar5 = 0;
      }
      uVar15 = SUB84((double)(DAT_005de51c * fVar25) + DAT_005d9098,0);
      if (DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar25)) {
        uVar15 = 0;
      }
      if (NAN(fVar25)) {
        uVar15 = 0;
      }
      if ((0.0 < (float)local_78._0_4_) && (uVar22 = 0xff, (float)local_78._0_4_ < DAT_005d9038)) {
LAB_002aed58:
        uVar22 = SUB84((double)((float)local_78._0_4_ * DAT_005de3b0) + DAT_005d9098,0);
      }
    }
  }
  if (0 < (int)uStack_a0._4_4_) {
    lVar10 = 0;
    do {
      piVar19 = (int *)(*(long *)(local_a8 + lVar10 * 8) + -0x10);
      if (piVar19 != &emptyString) {
        LOCK();
        iVar13 = *piVar19;
        *piVar19 = *piVar19 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(piVar19);
        }
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < (int)uStack_a0._4_4_);
  }
  uStack_a0 = uStack_a0 & 0xffffffff;
  free(local_a8);
LAB_002af1e9:
  local_80 = local_80 + -0x10;
  if (local_80 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)local_80;
    *(int *)local_80 = *(int *)local_80 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(local_80);
    }
  }
  return uVar15 & 0xff | (uVar5 & 0xff) << 8 | (uVar16 & 0xff) << 0x10 | uVar22 << 0x18;
}


