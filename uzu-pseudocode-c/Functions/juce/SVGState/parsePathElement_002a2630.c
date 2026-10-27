// Function : parsePathElement
// Namespace: juce:SVGState
// Entry    : 002a2630
// Prototype: ulong parsePathElement(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3, SVGState * this, long * param_5, Path * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)
// Body     : 002a2630 - 002a5279


/* juce::SVGState::parsePathElement(juce::SVGState::XmlPath const&, juce::Path&) const */

ulong __thiscall
juce::SVGState::parsePathElement
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3,SVGState *this,
          long *param_5,Path *param_6,undefined8 param_7,undefined8 param_8,byte *param_9)

{
  float *pfVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  Path *pPVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  long lVar12;
  void *pvVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  long lVar19;
  char *pcVar20;
  long *plVar21;
  String *pSVar22;
  Path *pPVar23;
  String *pSVar24;
  undefined7 uVar27;
  undefined8 *puVar25;
  long *plVar26;
  uint uVar28;
  byte *pbVar29;
  byte *pbVar30;
  int *piVar31;
  SVGState *pSVar32;
  long *plVar33;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  float fVar34;
  undefined4 uVar35;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 uVar36;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  float fVar40;
  undefined4 uVar41;
  float fVar42;
  byte *local_210;
  undefined1 local_208 [16];
  SVGState *local_1f0;
  undefined1 *local_1e8 [2];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  long *local_1c0;
  Path *local_1b0;
  undefined1 local_1a8 [16];
  byte *local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  
  pSVar24 = (String *)(*param_5 + 0x18);
  pcVar20 = ":";
  local_1f0 = this;
  local_1c0 = param_5;
  local_1b0 = param_6;
  iVar9 = juce::String::lastIndexOf(pSVar24,&DAT_005e5e94,param_6,param_7,param_8,(uint)param_9);
  pPVar23 = local_1b0;
  if (-1 < iVar9) {
    iVar17 = 0;
    iVar15 = iVar9;
    do {
      iVar15 = iVar15 + 1;
      cVar2 = *pcVar20;
      if (cVar2 < '\0') {
        do {
          pbVar29 = (byte *)(pcVar20 + 1);
          pcVar20 = pcVar20 + 1;
        } while ((*pbVar29 & 0xc0) == 0x80);
      }
      else {
        pcVar20 = pcVar20 + 1;
        if (cVar2 == '\0') goto LAB_002a26b2;
      }
      iVar17 = iVar17 + 1;
    } while( true );
  }
  pbVar29 = *(byte **)pSVar24;
  if (pbVar29 != &DAT_0061ac58) {
    LOCK();
    *(int *)(pbVar29 + -0x10) = *(int *)(pbVar29 + -0x10) + 1;
    UNLOCK();
  }
  goto LAB_002a2754;
LAB_002a26b2:
  pbVar29 = *(byte **)pSVar24;
  if (iVar9 + iVar17 == 0 || SCARRY4(iVar9,iVar17) != iVar9 + iVar17 < 0) {
    if (pbVar29 != &DAT_0061ac58) {
      LOCK();
      *(int *)(pbVar29 + -0x10) = *(int *)(pbVar29 + -0x10) + 1;
      UNLOCK();
    }
  }
  else {
    pbVar30 = pbVar29;
    do {
      bVar3 = *pbVar30;
      pbVar29 = &DAT_0061ac58;
      if (bVar3 == 0) goto LAB_002a2754;
      pbVar29 = pbVar30 + 1;
      if (((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) {
        if ((bVar3 & 0x20) == 0) {
          pbVar29 = pbVar30 + 2;
        }
        else {
          pbVar29 = pbVar30 + (4 - (ulong)((bVar3 & 0x10) == 0));
        }
      }
      iVar15 = iVar15 + -1;
      pbVar30 = pbVar29;
    } while (1 < iVar15);
    pbVar29 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar29);
  }
LAB_002a2754:
  uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (pbVar29,(byte *)0x65690c);
  if (uVar10 != 0) {
    uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       (pbVar29,&DAT_005e3aa6);
    if (uVar10 != 0) {
      uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar29,(byte *)"circle");
      if (uVar10 == 0) {
        local_208._0_4_ = *(undefined4 *)(local_1f0 + 0x20);
        for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
            puVar25 = (undefined8 *)*puVar25) {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)puVar25[1],&DAT_005e3ad5);
          if (uVar10 == 0) {
            pSVar24 = (String *)(puVar25 + 2);
            goto LAB_002a4382;
          }
        }
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a4382:
        uVar14 = getCoordLength((float)local_208._0_4_,param_2_00,param_3,pSVar24);
        local_208._8_4_ = extraout_XMM0_Dc;
        local_208._0_8_ = uVar14;
        local_208._12_4_ = extraout_XMM0_Dd;
        local_1d8._0_4_ = *(undefined4 *)(local_1f0 + 0x24);
        for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
            puVar25 = (undefined8 *)*puVar25) {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)puVar25[1],&DAT_005e3ad8);
          if (uVar10 == 0) {
            pSVar24 = (String *)(puVar25 + 2);
            goto LAB_002a4437;
          }
        }
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a4437:
        uVar14 = getCoordLength((float)local_1d8._0_4_,param_2_00,param_3,pSVar24);
        local_1d8._8_4_ = extraout_XMM0_Dc_00;
        local_1d8._0_8_ = uVar14;
        local_1d8._12_4_ = extraout_XMM0_Dd_00;
        local_1f0 = (SVGState *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1f0 + 0x20));
        plVar21 = *(long **)(*local_1c0 + 0x10);
        if (plVar21 != (long *)0x0) {
          pSVar24 = (String *)0x655291;
          do {
            uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar21[1],(byte *)0x655291);
            if (uVar10 == 0) {
              pSVar22 = (String *)(plVar21 + 2);
              goto LAB_002a44f6;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        pSVar22 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar22 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a44f6:
        uVar14 = getCoordLength(local_1f0._0_4_,param_2_00,param_3,pSVar22);
        fVar37 = (float)uVar14;
        fVar40 = (float)local_208._0_4_ - fVar37;
        fVar42 = (float)local_1d8._0_4_ - fVar37;
        fVar37 = fVar37 + fVar37;
        fVar34 = fVar37;
      }
      else {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar29,(byte *)"ellipse");
        if (uVar10 != 0) {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             (pbVar29,(byte *)0x65a56d);
          if (uVar10 == 0) {
            local_208._0_4_ = *(undefined4 *)(local_1f0 + 0x20);
            for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
                puVar25 = (undefined8 *)*puVar25) {
              uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 ((byte *)puVar25[1],(byte *)0x5dbe9d);
              if (uVar10 == 0) {
                pSVar24 = (String *)(puVar25 + 2);
                goto LAB_002a4dd9;
              }
            }
            pSVar24 = (String *)&getEmptyStringRef()::empty;
            if ((getEmptyStringRef()::empty == '\0') &&
               (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
              getEmptyStringRef()::empty = &DAT_0061ac58;
              pSVar24 = (String *)&getEmptyStringRef()::empty;
              __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
              __cxa_guard_release(&getEmptyStringRef()::empty);
            }
LAB_002a4dd9:
            uVar14 = getCoordLength((float)local_208._0_4_,param_2_00,param_3,pSVar24);
            local_208._0_4_ = (int)uVar14;
            local_1d8._0_4_ = *(undefined4 *)(local_1f0 + 0x24);
            for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
                puVar25 = (undefined8 *)*puVar25) {
              uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 ((byte *)puVar25[1],&DAT_005e3adb);
              if (uVar10 == 0) {
                pSVar24 = (String *)(puVar25 + 2);
                goto LAB_002a4e97;
              }
            }
            pSVar24 = (String *)&getEmptyStringRef()::empty;
            if ((getEmptyStringRef()::empty == '\0') &&
               (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
              getEmptyStringRef()::empty = &DAT_0061ac58;
              pSVar24 = (String *)&getEmptyStringRef()::empty;
              __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
              __cxa_guard_release(&getEmptyStringRef()::empty);
            }
LAB_002a4e97:
            uVar14 = getCoordLength((float)local_1d8._0_4_,param_2_00,param_3,pSVar24);
            local_1d8._0_4_ = (int)uVar14;
            local_1a8._0_4_ = *(undefined4 *)(local_1f0 + 0x20);
            for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
                puVar25 = (undefined8 *)*puVar25) {
              uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 ((byte *)puVar25[1],&DAT_005e3ade);
              if (uVar10 == 0) {
                pSVar24 = (String *)(puVar25 + 2);
                goto LAB_002a4f57;
              }
            }
            pSVar24 = (String *)&getEmptyStringRef()::empty;
            if ((getEmptyStringRef()::empty == '\0') &&
               (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
              getEmptyStringRef()::empty = &DAT_0061ac58;
              pSVar24 = (String *)&getEmptyStringRef()::empty;
              __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
              __cxa_guard_release(&getEmptyStringRef()::empty);
            }
LAB_002a4f57:
            uVar14 = getCoordLength((float)local_1a8._0_4_,param_2_00,param_3,pSVar24);
            local_1a8._0_4_ = (int)uVar14;
            local_1f0 = (SVGState *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1f0 + 0x24));
            plVar21 = *(long **)(*local_1c0 + 0x10);
            if (plVar21 != (long *)0x0) {
              pSVar24 = (String *)&DAT_005e3ae1;
              do {
                uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   ((byte *)plVar21[1],&DAT_005e3ae1);
                if (uVar10 == 0) {
                  pSVar22 = (String *)(plVar21 + 2);
                  goto LAB_002a5016;
                }
                plVar21 = (long *)*plVar21;
              } while (plVar21 != (long *)0x0);
            }
            pSVar22 = (String *)&getEmptyStringRef()::empty;
            if ((getEmptyStringRef()::empty == '\0') &&
               (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
              getEmptyStringRef()::empty = &DAT_0061ac58;
              pSVar22 = (String *)&getEmptyStringRef()::empty;
              __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
              __cxa_guard_release(&getEmptyStringRef()::empty);
            }
LAB_002a5016:
            uVar14 = getCoordLength(local_1f0._0_4_,param_2_00,param_3,pSVar22);
            pPVar23 = local_1b0;
            local_1f0 = (SVGState *)CONCAT44(local_1f0._4_4_,(int)uVar14);
            Path::startNewSubPath((float)local_208._0_4_,(float)local_1d8._0_4_,local_1b0);
            Path::lineTo((float)local_1a8._0_4_,local_1f0._0_4_,pPVar23);
            uVar14 = CONCAT71((int7)((ulong)pSVar24 >> 8),1);
          }
          else {
            uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar29,(byte *)"polyline");
            uVar27 = (undefined7)((ulong)pSVar24 >> 8);
            if (uVar10 == 0) {
              uVar14 = CONCAT71(uVar27,1);
                    /* try { // try from 002a46ea to 002a50b5 has its CatchHandler @ 002a527f */
              parsePolygon(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2_00,param_3,local_1f0,
                           *(long **)(*local_1c0 + 0x10),'\x01',pPVar23);
            }
            else {
              uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 (pbVar29,(byte *)0x655861);
              if (uVar10 == 0) {
                uVar14 = CONCAT71(uVar27,1);
                parsePolygon(CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00),param_2_00,param_3,
                             local_1f0,*(long **)(*local_1c0 + 0x10),'\0',pPVar23);
              }
              else {
                uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   (pbVar29,(byte *)0x65adb7);
                if (uVar10 == 0) {
                  uVar14 = parseUsePath(local_1f0,*(long **)(*local_1c0 + 0x10),pPVar23);
                  uVar14 = uVar14 & 0xffffffff;
                }
                else {
                  uVar14 = 0;
                }
              }
            }
          }
          goto LAB_002a51b8;
        }
        local_208._0_4_ = *(undefined4 *)(local_1f0 + 0x20);
        for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
            puVar25 = (undefined8 *)*puVar25) {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)puVar25[1],&DAT_005e3ad5);
          if (uVar10 == 0) {
            pSVar24 = (String *)(puVar25 + 2);
            goto LAB_002a4705;
          }
        }
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a4705:
        uVar14 = getCoordLength((float)local_208._0_4_,param_2_00,param_3,pSVar24);
        local_208._8_4_ = extraout_XMM0_Dc_01;
        local_208._0_8_ = uVar14;
        local_208._12_4_ = extraout_XMM0_Dd_01;
        local_1d8._0_4_ = *(undefined4 *)(local_1f0 + 0x24);
        for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
            puVar25 = (undefined8 *)*puVar25) {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)puVar25[1],&DAT_005e3ad8);
          if (uVar10 == 0) {
            pSVar24 = (String *)(puVar25 + 2);
            goto LAB_002a47b7;
          }
        }
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a47b7:
        uVar14 = getCoordLength((float)local_1d8._0_4_,param_2_00,param_3,pSVar24);
        local_1d8._8_4_ = extraout_XMM0_Dc_02;
        local_1d8._0_8_ = uVar14;
        local_1d8._12_4_ = extraout_XMM0_Dd_02;
        local_1a8._0_4_ = *(undefined4 *)(local_1f0 + 0x20);
        for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
            puVar25 = (undefined8 *)*puVar25) {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)puVar25[1],(byte *)0x5e5294);
          if (uVar10 == 0) {
            pSVar24 = (String *)(puVar25 + 2);
            goto LAB_002a4877;
          }
        }
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a4877:
        uVar14 = getCoordLength((float)local_1a8._0_4_,param_2_00,param_3,pSVar24);
        local_1a8._8_4_ = extraout_XMM0_Dc_03;
        local_1a8._0_8_ = uVar14;
        local_1a8._12_4_ = extraout_XMM0_Dd_03;
        local_1f0 = (SVGState *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1f0 + 0x24));
        plVar21 = *(long **)(*local_1c0 + 0x10);
        if (plVar21 != (long *)0x0) {
          pSVar24 = (String *)0x657d2b;
          do {
            uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar21[1],(byte *)0x657d2b);
            if (uVar10 == 0) {
              pSVar22 = (String *)(plVar21 + 2);
              goto LAB_002a4936;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
        }
        pSVar22 = (String *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar22 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a4936:
        uVar14 = getCoordLength(local_1f0._0_4_,param_2_00,param_3,pSVar22);
        fVar34 = (float)uVar14;
        fVar40 = (float)local_208._0_4_ - (float)local_1a8._0_4_;
        fVar42 = (float)local_1d8._0_4_ - fVar34;
        fVar37 = (float)local_1a8._0_4_ + (float)local_1a8._0_4_;
        fVar34 = fVar34 + fVar34;
      }
      Path::addEllipse(CONCAT44(fVar42,fVar40),CONCAT44(fVar34,fVar37),local_1b0);
      uVar14 = CONCAT71((int7)((ulong)pSVar24 >> 8),1);
      goto LAB_002a51b8;
    }
    plVar21 = *(long **)(*local_1c0 + 0x10);
    if (plVar21 == (long *)0x0) {
      pSVar32 = local_1f0 + 0x20;
      fVar34 = *(float *)(local_1f0 + 0x20);
LAB_002a4050:
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if (getEmptyStringRef()::empty == '\0') {
        local_1d8._0_4_ = fVar34;
        iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
        if (iVar9 != 0) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a5220:
        fVar34 = (float)local_1d8._0_4_;
      }
      uVar14 = getCoordLength(fVar34,param_2_00,param_3,pSVar24);
      local_208._0_4_ = (int)uVar14;
      local_1d8._0_4_ = *(undefined4 *)(local_1f0 + 0x24);
      for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)*puVar25) {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar25[1],&DAT_006558e1);
        if (uVar10 == 0) {
          pSVar24 = (String *)(puVar25 + 2);
          goto LAB_002a4531;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a4531:
      uVar14 = getCoordLength((float)local_1d8._0_4_,param_2_00,param_3,pSVar24);
      local_1d8._0_4_ = (int)uVar14;
      local_1a8._0_4_ = *(undefined4 *)pSVar32;
      for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)*puVar25) {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar25[1],(byte *)0x5e4656);
        if (uVar10 == 0) {
          pSVar24 = (String *)(puVar25 + 2);
          goto LAB_002a45e7;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a45e7:
      uVar14 = getCoordLength((float)local_1a8._0_4_,param_2_00,param_3,pSVar24);
      local_1a8._0_4_ = (int)uVar14;
      local_1f0 = (SVGState *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1f0 + 0x24));
      plVar21 = *(long **)(*local_1c0 + 0x10);
      if (plVar21 != (long *)0x0) {
        pSVar24 = (String *)0x5e467b;
        do {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)plVar21[1],(byte *)0x5e467b);
          if (uVar10 == 0) {
            pSVar22 = (String *)(plVar21 + 2);
            goto LAB_002a46a6;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      pSVar22 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar22 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a46a6:
      uVar14 = getCoordLength(local_1f0._0_4_,param_2_00,param_3,pSVar22);
      Path::addRectangle((float)local_208._0_4_,(float)local_1d8._0_4_,(float)local_1a8._0_4_,
                         (float)uVar14,local_1b0);
      uVar14 = CONCAT71((int7)((ulong)pSVar24 >> 8),1);
    }
    else {
      plVar33 = (long *)0x0;
      plVar26 = plVar21;
      do {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)plVar26[1],(byte *)0x5e5294);
        if (uVar10 == 0) {
          plVar33 = plVar26 + 1;
          break;
        }
        plVar26 = (long *)*plVar26;
      } while (plVar26 != (long *)0x0);
      if (plVar21 == (long *)0x0) {
        pSVar32 = local_1f0 + 0x20;
        fVar34 = *(float *)(local_1f0 + 0x20);
        if (plVar33 == (long *)0x0) goto LAB_002a4050;
        auVar7._12_4_ = 0;
        auVar7._0_12_ = local_208._4_12_;
        local_208 = auVar7 << 0x20;
      }
      else {
        plVar26 = plVar21;
        do {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)plVar26[1],(byte *)0x657d2b);
          if (uVar10 == 0) {
            fVar34 = *(float *)(local_1f0 + 0x20);
            local_208._0_4_ = (int)CONCAT71((int7)((ulong)local_1f0 >> 8),1);
            goto joined_r0x002a42d9;
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
        pSVar32 = local_1f0 + 0x20;
        fVar34 = *(float *)(local_1f0 + 0x20);
        if (plVar33 == (long *)0x0) {
          if (plVar21 != (long *)0x0) {
            local_1d8._0_4_ = fVar34;
            do {
              uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 ((byte *)plVar21[1],&DAT_005db3a7);
              if (uVar10 == 0) {
                pSVar24 = (String *)(plVar21 + 2);
                goto LAB_002a5220;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
            fVar34 = (float)local_1d8._0_4_;
          }
          goto LAB_002a4050;
        }
        auVar6._12_4_ = 0;
        auVar6._0_12_ = local_208._4_12_;
        local_208 = auVar6 << 0x20;
joined_r0x002a42d9:
        pSVar32 = local_1f0 + 0x20;
        if (plVar21 != (long *)0x0) {
          pSVar32 = local_1f0 + 0x20;
          local_1d8._0_4_ = fVar34;
          do {
            uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)plVar21[1],(byte *)0x5e5294);
            if (uVar10 == 0) {
              pSVar24 = (String *)(plVar21 + 2);
              goto LAB_002a4975;
            }
            plVar21 = (long *)*plVar21;
          } while (plVar21 != (long *)0x0);
          fVar34 = (float)local_1d8._0_4_;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if (getEmptyStringRef()::empty == '\0') {
        local_1d8._0_4_ = fVar34;
        iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
        if (iVar9 != 0) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          pSVar24 = (String *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a4975:
        fVar34 = (float)local_1d8._0_4_;
      }
      uVar14 = getCoordLength(fVar34,param_2_00,param_3,pSVar24);
      local_1d8._0_4_ = (int)uVar14;
      local_1a8._0_4_ = *(undefined4 *)(local_1f0 + 0x24);
      for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)*puVar25) {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar25[1],(byte *)0x657d2b);
        if (uVar10 == 0) {
          pSVar24 = (String *)(puVar25 + 2);
          goto LAB_002a4a37;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a4a37:
      uVar14 = getCoordLength((float)local_1a8._0_4_,param_2_00,param_3,pSVar24);
      uVar35 = (undefined4)uVar14;
      uVar36 = (undefined4)(uVar14 >> 0x20);
      uVar38 = uVar35;
      uVar39 = uVar36;
      if (local_208[0] == '\0') {
        uVar39 = 0;
        uVar38 = local_1d8._0_4_;
      }
      uVar41 = uVar35;
      if (plVar33 != (long *)0x0) {
        uVar35 = local_1d8._0_4_;
        uVar41 = uVar38;
        uVar36 = uVar39;
      }
      local_1d8._0_4_ = uVar41;
      local_208._0_4_ = uVar35;
      local_1a8._0_4_ = *(undefined4 *)pSVar32;
      for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)*puVar25) {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar25[1],&DAT_005db3a7);
        if (uVar10 == 0) {
          pSVar24 = (String *)(puVar25 + 2);
          goto LAB_002a4b17;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a4b17:
      uVar14 = getCoordLength((float)local_1a8._0_4_,CONCAT44(uVar39,uVar38),CONCAT44(uVar36,uVar41)
                              ,pSVar24);
      local_1a8._0_4_ = (int)uVar14;
      local_178 = CONCAT44(local_178._4_4_,*(undefined4 *)(local_1f0 + 0x24));
      for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)*puVar25) {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar25[1],&DAT_006558e1);
        if (uVar10 == 0) {
          pSVar24 = (String *)(puVar25 + 2);
          goto LAB_002a4bd7;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a4bd7:
      uVar14 = getCoordLength((float)local_178,CONCAT44(uVar39,uVar38),CONCAT44(uVar36,uVar41),
                              pSVar24);
      local_178 = CONCAT44(local_178._4_4_,(int)uVar14);
      local_188 = (byte *)CONCAT44(local_188._4_4_,*(undefined4 *)pSVar32);
      for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); puVar25 != (undefined8 *)0x0;
          puVar25 = (undefined8 *)*puVar25) {
        uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           ((byte *)puVar25[1],(byte *)0x5e4656);
        if (uVar10 == 0) {
          pSVar24 = (String *)(puVar25 + 2);
          goto LAB_002a4c97;
        }
      }
      pSVar24 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar24 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a4c97:
      uVar14 = getCoordLength((float)local_188,CONCAT44(uVar39,uVar38),CONCAT44(uVar36,uVar41),
                              pSVar24);
      local_188 = (byte *)CONCAT44(local_188._4_4_,(int)uVar14);
      local_1f0 = (SVGState *)CONCAT44(local_1f0._4_4_,*(undefined4 *)(local_1f0 + 0x24));
      plVar21 = *(long **)(*local_1c0 + 0x10);
      if (plVar21 != (long *)0x0) {
        pSVar24 = (String *)0x5e467b;
        do {
          uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)plVar21[1],(byte *)0x5e467b);
          if (uVar10 == 0) {
            pSVar22 = (String *)(plVar21 + 2);
            goto LAB_002a4d56;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      pSVar22 = (String *)&getEmptyStringRef()::empty;
      if ((getEmptyStringRef()::empty == '\0') &&
         (iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar9 != 0)) {
        getEmptyStringRef()::empty = &DAT_0061ac58;
        pSVar22 = (String *)&getEmptyStringRef()::empty;
        __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
        __cxa_guard_release(&getEmptyStringRef()::empty);
      }
LAB_002a4d56:
      uVar14 = getCoordLength(local_1f0._0_4_,CONCAT44(uVar39,uVar38),CONCAT44(uVar36,uVar41),
                              pSVar22);
      Path::addRoundedRectangle
                ((float)local_1a8._0_4_,(float)local_178,(float)local_188,(float)uVar14,
                 (float)local_208._0_4_,(float)local_1d8._0_4_,local_1b0,1,'\x01','\x01','\x01');
      uVar14 = CONCAT71((int7)((ulong)pSVar24 >> 8),1);
    }
    goto LAB_002a51b8;
  }
  pPVar23 = local_1b0;
  for (puVar25 = *(undefined8 **)(*local_1c0 + 0x10); local_1b0 = pPVar23,
      puVar25 != (undefined8 *)0x0; puVar25 = (undefined8 *)*puVar25) {
    uVar10 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       ((byte *)puVar25[1],(byte *)0x654447);
    pPVar23 = local_1b0;
    if (uVar10 == 0) {
      puVar25 = puVar25 + 2;
      goto LAB_002a2a1b;
    }
  }
  puVar25 = &getEmptyStringRef()::empty;
  if (getEmptyStringRef()::empty == '\0') {
    iVar9 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
    if (iVar9 != 0) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      puVar25 = &getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      __cxa_guard_release(&getEmptyStringRef()::empty);
    }
  }
LAB_002a2a1b:
  pbVar30 = (byte *)*puVar25;
  while( true ) {
    pbVar11 = pbVar30;
    bVar3 = *pbVar11;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      uVar10 = (uint)bVar3;
      if ((bVar3 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
      }
      else {
        uVar16 = uVar10 & 0x10 ^ 0x1f;
        if ((bVar3 & 0x20) == 0) {
          uVar16 = 0x3f;
        }
        uVar10 = uVar16 & uVar10;
        if ((((pbVar11[1] & 0xffffffc0) == 0x80) &&
            (uVar10 = pbVar11[1] & 0x3f | uVar10 << 6, (bVar3 & 0x20) != 0)) &&
           ((pbVar11[2] & 0xffffffc0) == 0x80)) {
          uVar10 = pbVar11[2] & 0x3f | uVar10 << 6;
          pPVar23 = local_1b0;
          if (((bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0) && ((pbVar11[3] & 0xffffffc0) == 0x80)) {
            uVar10 = uVar10 << 6 | pbVar11[3] & 0x3f;
          }
        }
      }
    }
    iVar9 = iswspace(uVar10);
    pPVar8 = local_1b0;
    if (iVar9 == 0) break;
    bVar3 = *pbVar11;
    pbVar30 = pbVar11 + 1;
    if ((((char)bVar3 < '\0') && ((bVar3 & 0x40) != 0)) &&
       (pbVar30 = pbVar11 + 2, (bVar3 & 0x20) != 0)) {
      pbVar30 = pbVar11 + (4 - (ulong)((bVar3 & 0x10) == 0));
    }
  }
  local_1e8[0] = (undefined1 *)0x0;
  local_1c8 = 0;
  local_190 = 0;
  bVar3 = *pbVar11;
  local_210 = pbVar11;
  local_188 = pbVar29;
  if (bVar3 == 0) goto LAB_002a3f01;
  local_178 = 0;
  uStack_170 = 0;
  local_208 = ZEXT816(0);
  local_1d8 = ZEXT816(0);
  uVar10 = (uint)bVar3;
  if ((char)bVar3 < '\0') {
    if ((bVar3 & 0x40) == 0) {
      uVar10 = uVar10 & 0x7f;
    }
    else {
      uVar16 = uVar10 & 0x10 ^ 0x1f;
      if ((bVar3 & 0x20) == 0) {
        uVar16 = 0x3f;
      }
      uVar10 = uVar10 & uVar16;
      if ((((pbVar11[1] & 0xffffffc0) == 0x80) &&
          (uVar10 = pbVar11[1] & 0x3f | uVar10 << 6, (bVar3 & 0x20) != 0)) &&
         (((pbVar11[2] & 0xffffffc0) == 0x80 &&
          ((uVar10 = pbVar11[2] & 0x3f | uVar10 << 6, (bVar3 >> 5 & (bVar3 & 0x10) == 0) == 0 &&
           ((pbVar11[3] & 0xffffffc0) == 0x80)))))) {
        uVar10 = uVar10 << 6 | pbVar11[3] & 0x3f;
      }
    }
  }
  iVar9 = uVar10 * 0x1000000;
  if (0x60ffffff < iVar9) {
    if (iVar9 < 0x71000000) {
      if (iVar9 < 0x68000000) {
        if ((iVar9 == 0x61000000) || (iVar9 == 0x63000000)) goto LAB_002a2d60;
      }
      else if ((iVar9 == 0x68000000) || ((iVar9 == 0x6c000000 || (iVar9 == 0x6d000000))))
      goto LAB_002a2d60;
    }
    else if (iVar9 < 0x74000000) {
      if ((iVar9 == 0x71000000) || (iVar9 == 0x73000000)) goto LAB_002a2d60;
    }
    else if ((iVar9 == 0x74000000) || ((iVar9 == 0x7a000000 || (iVar9 == 0x76000000))))
    goto LAB_002a2d60;
    goto LAB_002a3f01;
  }
  if (iVar9 < 0x51000000) {
    if (iVar9 < 0x48000000) {
      if ((iVar9 == 0x41000000) || (iVar9 == 0x43000000)) goto LAB_002a2d60;
    }
    else if ((iVar9 == 0x48000000) || ((iVar9 == 0x4c000000 || (iVar9 == 0x4d000000))))
    goto LAB_002a2d60;
  }
  else if (iVar9 < 0x54000000) {
    if ((iVar9 == 0x51000000) || (iVar9 == 0x53000000)) goto LAB_002a2d60;
  }
  else if ((iVar9 == 0x54000000) || ((iVar9 == 0x56000000 || (iVar9 == 0x5a000000)))) {
LAB_002a2d60:
    local_210 = pbVar11 + 1;
    bVar3 = *pbVar11;
    uVar10 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      if ((bVar3 & 0x40) == 0) {
        uVar10 = uVar10 & 0x7f;
      }
      else {
        uVar18 = uVar10 & 0x20;
        uVar16 = uVar10 & 0x10;
        uVar28 = uVar16 ^ 0x1f;
        if ((bVar3 & 0x20) == 0) {
          uVar28 = 0x3f;
        }
        uVar10 = uVar28 & uVar10;
        bVar4 = *local_210;
        pPVar23 = local_1b0;
        if ((bVar4 & 0xffffffc0) == 0x80) {
          local_210 = pbVar11 + 2;
          uVar10 = bVar4 & 0x3f | uVar10 << 6;
          if (((bVar3 & 0x20) != 0) && (bVar3 = *local_210, (bVar3 & 0xffffffc0) == 0x80)) {
            local_210 = pbVar11 + 3;
            uVar10 = bVar3 & 0x3f | uVar10 << 6;
            if (((byte)((byte)(uVar16 >> 4) & (byte)(uVar18 >> 5)) != 0) &&
               (bVar3 = *local_210, (bVar3 & 0xffffffc0) == 0x80)) {
              local_210 = pbVar11 + 4;
              uVar10 = bVar3 & 0x3f | uVar10 << 6;
            }
          }
        }
      }
    }
    if (uVar10 - 0x41 < 0x3a) {
                    /* WARNING: Could not emulate address calculation at 0x002a2e68 */
                    /* WARNING: Treating indirect jump as call */
      uVar14 = (*(code *)(&DAT_005dea10 + *(int *)(&DAT_005dea10 + (ulong)(uVar10 - 0x41) * 4)))();
      return uVar14;
    }
  }
LAB_002a3f01:
  uStack_170 = 0;
  local_178 = 0;
  iVar9 = *(int *)(pPVar23 + 0xc);
  lVar12 = (long)iVar9;
  if (lVar12 != 0) {
    lVar5 = *(long *)pPVar23;
    fVar34 = *(float *)(lVar5 + -4 + lVar12 * 4);
    if ((fVar34 != DAT_005de41c) || (NAN(fVar34) || NAN(DAT_005de41c))) {
      lVar19 = lVar5 + lVar12 * 4 + -4;
      if (lVar19 != lVar5) goto LAB_002a3f86;
LAB_002a4133:
      fVar34 = 0.0;
      fVar37 = 0.0;
    }
    else {
      lVar19 = lVar5 + lVar12 * 4 + 4;
      lVar12 = lVar12 * -4 + 4;
      do {
        if (lVar12 == 0) goto LAB_002a4133;
        pfVar1 = (float *)(lVar19 + -0xc);
        lVar19 = lVar19 + -4;
        lVar12 = lVar12 + 4;
      } while ((*pfVar1 != DAT_005de3d0) || (NAN(*pfVar1) || NAN(DAT_005de3d0)));
      if (lVar19 == lVar5) goto LAB_002a4133;
LAB_002a3f86:
      fVar34 = (float)*(undefined8 *)(lVar19 + -4);
      fVar37 = (float)((ulong)*(undefined8 *)(lVar19 + -4) >> 0x20);
    }
    if ((((fVar34 == 0.0) && (!NAN(fVar34))) && (fVar37 == 0.0)) && (iVar9 != 0)) {
      if (0 < iVar9) {
        fVar34 = *(float *)(*(long *)pPVar23 + (ulong)(iVar9 - 1) * 4);
        if ((fVar34 == DAT_005de41c) && (!NAN(fVar34) && !NAN(DAT_005de41c))) goto LAB_002a50f3;
      }
      if ((int)*(uint *)(pPVar23 + 8) <= iVar9) {
        uVar10 = iVar9 + ((iVar9 - (iVar9 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
        if (*(uint *)(pPVar23 + 8) != uVar10) {
          if ((int)uVar10 < 1) {
            free(*(void **)local_1b0);
            *(long *)pPVar8 = 0;
          }
          else {
            pvVar13 = realloc(*(void **)local_1b0,(ulong)uVar10 << 2);
            *(void **)pPVar8 = pvVar13;
          }
        }
        *(uint *)(local_1b0 + 8) = uVar10;
        iVar9 = *(int *)(local_1b0 + 0xc);
        pPVar23 = local_1b0;
      }
      *(int *)(pPVar23 + 0xc) = iVar9 + 1;
      *(undefined4 *)(*(long *)pPVar23 + (long)iVar9 * 4) = 0x47c35280;
    }
  }
LAB_002a50f3:
  local_1e8[0] = &DAT_0061ac58;
                    /* try { // try from 002a50ff to 002a511e has its CatchHandler @ 002a52f9 */
  getStyleAttribute((SVGState *)&local_210,(long)local_1f0,local_1c0,(byte *)"fill-rule",
                    (byte *)local_1e8,param_9);
                    /* try { // try from 002a511f to 002a5130 has its CatchHandler @ 002a52cd */
  juce::String::trim((long *)&local_198,(long *)&local_210);
  uVar10 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (local_198,(byte *)"evenodd");
  local_198 = local_198 + -0x10;
  if (local_198 != (byte *)&emptyString) {
    LOCK();
    iVar9 = *(int *)local_198;
    *(int *)local_198 = *(int *)local_198 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(local_198);
    }
  }
  pbVar30 = local_210 + -0x10;
  uVar27 = (undefined7)((ulong)local_198 >> 8);
  if (pbVar30 == (byte *)&emptyString) {
LAB_002a518c:
    piVar31 = (int *)(local_1e8[0] + -0x10);
    if (piVar31 != &emptyString) {
LAB_002a519a:
      LOCK();
      iVar9 = *piVar31;
      *piVar31 = *piVar31 + -1;
      UNLOCK();
      if (iVar9 == 0) {
        operator_delete__(piVar31);
      }
    }
  }
  else {
    LOCK();
    iVar9 = *(int *)pbVar30;
    *(int *)pbVar30 = *(int *)pbVar30 + -1;
    UNLOCK();
    if (iVar9 != 0) goto LAB_002a518c;
    operator_delete__(pbVar30);
    piVar31 = (int *)(local_1e8[0] + -0x10);
    if (piVar31 != &emptyString) goto LAB_002a519a;
  }
  uVar14 = CONCAT71(uVar27,1);
  if (uVar10 == 0) {
    uVar14 = CONCAT71(uVar27,1);
    local_1b0[0x20] = (Path)0x0;
  }
LAB_002a51b8:
  pbVar29 = pbVar29 + -0x10;
  if (pbVar29 != (byte *)&emptyString) {
    LOCK();
    iVar9 = *(int *)pbVar29;
    *(int *)pbVar29 = *(int *)pbVar29 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      operator_delete__(pbVar29);
    }
  }
  return uVar14 & 0xffffffff;
}


