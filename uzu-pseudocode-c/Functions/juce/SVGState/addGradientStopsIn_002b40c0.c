// Function : addGradientStopsIn
// Namespace: juce:SVGState
// Entry    : 002b40c0
// Prototype: ulong addGradientStopsIn(SVGState * this, ColourGradient * param_1, long * param_2, undefined8 param_3, undefined8 param_4, byte * param_5)
// Body     : 002b40c0 - 002b4d4b


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::SVGState::addGradientStopsIn(juce::ColourGradient&, juce::SVGState::XmlPath const&) const
    */

ulong __thiscall
juce::SVGState::addGradientStopsIn
          (SVGState *this,ColourGradient *param_1,long *param_2,undefined8 param_3,
          undefined8 param_4,byte *param_5)

{
  byte bVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  wint_t wVar7;
  byte *pbVar8;
  int *piVar9;
  ulong extraout_RAX;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  char cVar13;
  uint uVar14;
  wint_t wVar15;
  long *plVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong unaff_R14;
  float fVar24;
  float fVar25;
  int iVar26;
  long *local_78;
  long *local_70;
  long *local_68;
  long *local_60;
  SVGState *local_58;
  long *local_50;
  ColourGradient *local_48;
  byte *local_40;
  int *local_38;
  
  if (*param_2 == 0) {
    uVar10 = 0;
  }
  else {
    local_58 = this;
    local_48 = param_1;
    for (plVar16 = *(long **)(*param_2 + 8); plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
      uVar5 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar16[3],(byte *)0x65afb5);
      if (uVar5 == 0) goto LAB_002b411a;
    }
    plVar16 = (long *)0x0;
LAB_002b411a:
    local_40 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                 ((byte *)0x65afb5);
    pbVar8 = local_40 + -0x10;
    if (pbVar8 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar8 = *(int *)pbVar8 + 1;
      UNLOCK();
    }
    plVar17 = plVar16;
    if (plVar16 != (long *)0x0) {
      local_68 = plVar16;
      local_60 = param_2;
      do {
        plVar17 = local_60;
                    /* try { // try from 002b4187 to 002b419c has its CatchHandler @ 002b4d69 */
        local_78 = plVar16;
        local_70 = local_60;
        uVar5 = parseColour(local_58,(long *)&local_78,(byte *)"stop-color",
                            _ZN4juce7ColoursL5blackE_14,param_4,param_5);
        local_78 = plVar16;
        local_70 = plVar17;
                    /* try { // try from 002b41aa to 002b41b3 has its CatchHandler @ 002b4d67 */
        piVar9 = operator_new__(0x1b);
        LOCK();
        *piVar9 = 0;
        UNLOCK();
        piVar9[2] = 4;
        piVar9[3] = 0;
        local_38 = piVar9 + 4;
        *(undefined2 *)(piVar9 + 4) = 0x31;
                    /* try { // try from 002b41d6 to 002b41f5 has its CatchHandler @ 002b4d4c */
        getStyleAttribute((SVGState *)&local_50,(long)local_58,(long *)&local_78,
                          (byte *)"stop-opacity",(byte *)&local_38,param_5);
        LOCK();
        iVar26 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar26 == 0) {
          operator_delete__(piVar9);
        }
        local_78 = local_50;
        dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>
                                  ((long *)&local_78);
        fVar24 = (float)dVar2;
        fVar25 = (float)(~-(uint)NAN(fVar24) &
                        ~-(uint)(DAT_005d94c8 <= (float)((uint)fVar24 & _DAT_005d91c0)) &
                        (uint)fVar24);
        fVar24 = DAT_005d9038;
        if (fVar25 <= DAT_005d9038) {
          fVar24 = fVar25;
        }
        iVar26 = SUB84((double)((float)(uVar5 >> 0x18) *
                               (float)(~-(uint)(fVar25 < DAT_005d9058) & (uint)fVar24)) +
                       DAT_005d9098,0);
        uVar19 = 0xff;
        if (0xfe < iVar26) {
          iVar26 = 0xff;
        }
        for (puVar21 = (undefined8 *)plVar16[2]; puVar21 != (undefined8 *)0x0;
            puVar21 = (undefined8 *)*puVar21) {
          pbVar12 = (byte *)puVar21[1];
          pbVar11 = (byte *)0x65adc5;
          do {
            pbVar23 = pbVar12 + 1;
            bVar1 = *pbVar12;
            uVar18 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar18 = uVar18 & 0x7f;
                goto LAB_002b431c;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar14 = 0x3f;
                lVar20 = 0;
                bVar4 = false;
                bVar3 = false;
              }
              else {
                bVar4 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar14 = 0x1f;
                  lVar20 = 1;
                  bVar3 = false;
                }
                else {
                  uVar14 = 0xf;
                  lVar20 = 2;
                  bVar3 = true;
                }
              }
              uVar18 = uVar18 & uVar14;
              if ((pbVar12[1] & 0xc0) == 0x80) {
                pbVar22 = pbVar12 + lVar20 + 2;
                uVar18 = pbVar12[1] & 0x3f | uVar18 << 6;
                if (bVar4) {
                  pbVar23 = pbVar12 + 2;
                  if ((*pbVar23 & 0xffffffc0) != 0x80) goto LAB_002b444d;
                  uVar18 = *pbVar23 & 0x3f | uVar18 << 6;
                  if (!bVar3) goto LAB_002b42b8;
                  bVar1 = pbVar12[3];
                  pbVar12 = pbVar12 + 3;
                  if ((bVar1 & 0xc0) != 0x80) goto LAB_002b42d0;
                  uVar18 = uVar18 << 6 | bVar1 & 0x3f;
                  bVar1 = *pbVar11;
                  pbVar12 = pbVar22;
                }
                else {
LAB_002b42b8:
                  pbVar12 = pbVar22;
LAB_002b42d0:
                  bVar1 = *pbVar11;
                }
              }
              else {
LAB_002b444d:
                bVar1 = *pbVar11;
                pbVar12 = pbVar23;
              }
            }
            else {
LAB_002b431c:
              bVar1 = *pbVar11;
              pbVar12 = pbVar23;
            }
            uVar14 = (uint)bVar1;
            pbVar23 = pbVar11 + 1;
            if ((char)bVar1 < '\0') {
              pbVar23 = pbVar11 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar14 = bVar1 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar14 = 0x3f;
                  lVar20 = 0;
                  bVar4 = false;
                  bVar3 = false;
                }
                else {
                  bVar4 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar14 = 0x1f;
                    lVar20 = 1;
                    bVar3 = false;
                  }
                  else {
                    uVar14 = 0xf;
                    lVar20 = 2;
                    bVar3 = true;
                  }
                }
                uVar14 = bVar1 & uVar14;
                if ((pbVar11[1] & 0xffffffc0) == 0x80) {
                  pbVar22 = pbVar11 + lVar20 + 2;
                  uVar14 = pbVar11[1] & 0x3f | uVar14 << 6;
                  pbVar23 = pbVar22;
                  if (bVar4) {
                    pbVar23 = pbVar11 + 2;
                    if ((*pbVar23 & 0xc0) == 0x80) {
                      uVar14 = *pbVar23 & 0x3f | uVar14 << 6;
                      pbVar23 = pbVar22;
                      if (bVar3) {
                        pbVar23 = pbVar11 + 3;
                        if ((*pbVar23 & 0xc0) == 0x80) {
                          uVar14 = uVar14 << 6 | *pbVar23 & 0x3f;
                          pbVar23 = pbVar22;
                        }
                      }
                    }
                  }
                }
              }
            }
            cVar13 = (uVar18 == 0) * '\x02';
            if (uVar18 - uVar14 != 0) {
              cVar13 = '\x01';
              uVar19 = (int)(uVar18 - uVar14) >> 0x1f | 1;
            }
            pbVar11 = pbVar23;
          } while (cVar13 == '\0');
          if ((cVar13 != '\x01') || (uVar19 == 0)) {
            puVar21 = puVar21 + 2;
            goto LAB_002b45b8;
          }
        }
        puVar21 = &getEmptyStringRef()::empty;
        if (getEmptyStringRef()::empty == '\0') {
          iVar6 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
          puVar21 = &getEmptyStringRef()::empty;
          if (iVar6 != 0) {
            getEmptyStringRef()::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
            __cxa_guard_release(&getEmptyStringRef()::empty);
            puVar21 = &getEmptyStringRef()::empty;
          }
        }
LAB_002b45b8:
        uVar5 = uVar5 & 0xffffff;
        local_78 = (long *)*puVar21;
        dVar2 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>
                                  ((long *)&local_78);
        uVar10 = extraout_RAX;
        for (puVar21 = (undefined8 *)plVar16[2]; puVar21 != (undefined8 *)0x0;
            puVar21 = (undefined8 *)*puVar21) {
          pbVar12 = (byte *)puVar21[1];
          pbVar11 = (byte *)0x65adc5;
          do {
            pbVar23 = pbVar12 + 1;
            bVar1 = *pbVar12;
            uVar19 = (uint)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                uVar19 = uVar19 & 0x7f;
                goto LAB_002b464c;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar18 = 0x3f;
                lVar20 = 0;
                bVar4 = false;
                bVar3 = false;
              }
              else {
                bVar4 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar18 = 0x1f;
                  lVar20 = 1;
                  bVar3 = false;
                }
                else {
                  uVar18 = 0xf;
                  lVar20 = 2;
                  bVar3 = true;
                }
              }
              uVar19 = uVar19 & uVar18;
              if ((pbVar12[1] & 0xc0) == 0x80) {
                pbVar22 = pbVar12 + lVar20 + 2;
                uVar19 = pbVar12[1] & 0x3f | uVar19 << 6;
                if (bVar4) {
                  pbVar23 = pbVar12 + 2;
                  if ((*pbVar23 & 0xffffffc0) != 0x80) goto LAB_002b477d;
                  uVar19 = *pbVar23 & 0x3f | uVar19 << 6;
                  if (!bVar3) goto LAB_002b45f6;
                  bVar1 = pbVar12[3];
                  pbVar12 = pbVar12 + 3;
                  if ((bVar1 & 0xc0) != 0x80) goto LAB_002b4600;
                  uVar19 = uVar19 << 6 | bVar1 & 0x3f;
                  bVar1 = *pbVar11;
                  pbVar12 = pbVar22;
                }
                else {
LAB_002b45f6:
                  pbVar12 = pbVar22;
LAB_002b4600:
                  bVar1 = *pbVar11;
                }
              }
              else {
LAB_002b477d:
                bVar1 = *pbVar11;
                pbVar12 = pbVar23;
              }
            }
            else {
LAB_002b464c:
              bVar1 = *pbVar11;
              pbVar12 = pbVar23;
            }
            uVar18 = (uint)bVar1;
            pbVar23 = pbVar11 + 1;
            if ((char)bVar1 < '\0') {
              pbVar23 = pbVar11 + 1;
              if ((bVar1 & 0x40) == 0) {
                uVar18 = bVar1 & 0x7f;
              }
              else {
                if ((bVar1 & 0x20) == 0) {
                  uVar18 = 0x3f;
                  lVar20 = 0;
                  bVar4 = false;
                  bVar3 = false;
                }
                else {
                  bVar4 = true;
                  if ((bVar1 & 0x10) == 0) {
                    uVar18 = 0x1f;
                    lVar20 = 1;
                    bVar3 = false;
                  }
                  else {
                    uVar18 = 0xf;
                    lVar20 = 2;
                    bVar3 = true;
                  }
                }
                uVar18 = bVar1 & uVar18;
                if ((pbVar11[1] & 0xffffffc0) == 0x80) {
                  pbVar22 = pbVar11 + lVar20 + 2;
                  uVar18 = pbVar11[1] & 0x3f | uVar18 << 6;
                  pbVar23 = pbVar22;
                  if (bVar4) {
                    pbVar23 = pbVar11 + 2;
                    if ((*pbVar23 & 0xc0) == 0x80) {
                      uVar18 = *pbVar23 & 0x3f | uVar18 << 6;
                      pbVar23 = pbVar22;
                      if (bVar3) {
                        pbVar23 = pbVar11 + 3;
                        if ((*pbVar23 & 0xc0) == 0x80) {
                          uVar18 = uVar18 << 6 | *pbVar23 & 0x3f;
                          pbVar23 = pbVar22;
                        }
                      }
                    }
                  }
                }
              }
            }
            param_5 = (byte *)0x1;
            cVar13 = (uVar19 == 0) * '\x02';
            uVar10 = uVar10 & 0xffffffff;
            if (uVar19 - uVar18 != 0) {
              uVar10 = (ulong)((int)(uVar19 - uVar18) >> 0x1f | 1);
              cVar13 = '\x01';
            }
            pbVar11 = pbVar23;
          } while (cVar13 == '\0');
          if ((cVar13 != '\x01') || ((int)uVar10 == 0)) {
            puVar21 = puVar21 + 2;
            goto LAB_002b48f8;
          }
        }
        param_5 = (byte *)0x1;
        puVar21 = &getEmptyStringRef()::empty;
        if (getEmptyStringRef()::empty == '\0') {
          iVar6 = __cxa_guard_acquire();
          puVar21 = &getEmptyStringRef()::empty;
          if (iVar6 != 0) {
            getEmptyStringRef()::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
            __cxa_guard_release();
            puVar21 = &getEmptyStringRef()::empty;
          }
        }
LAB_002b48f8:
        uVar19 = iVar26 << 0x18 | uVar5;
        unaff_R14 = (ulong)uVar19;
        fVar24 = (float)dVar2;
        fVar24 = (float)(~-(uint)NAN(fVar24) &
                        ~-(uint)(DAT_005d94c8 <= (float)((uint)fVar24 & _DAT_005d91c0)) &
                        (uint)fVar24);
        pbVar12 = (byte *)*puVar21;
        do {
          while( true ) {
            bVar1 = *pbVar12;
            if (bVar1 == 0) goto LAB_002b4a28;
            pbVar11 = pbVar12 + 1;
            uVar18 = (uint)bVar1;
            if ((char)bVar1 < '\0') break;
LAB_002b4a03:
            pbVar12 = pbVar11;
            if (uVar18 == 0x25) goto LAB_002b4a20;
          }
          if ((bVar1 & 0x40) == 0) {
            uVar18 = bVar1 & 0x7f;
            goto LAB_002b4a03;
          }
          if ((bVar1 & 0x20) == 0) {
            uVar18 = 0x3f;
            lVar20 = 0;
            bVar4 = false;
            bVar3 = false;
          }
          else {
            bVar4 = true;
            if ((bVar1 & 0x10) == 0) {
              uVar18 = 0x1f;
              lVar20 = 1;
              bVar3 = false;
            }
            else {
              uVar18 = 0xf;
              lVar20 = 2;
              bVar3 = true;
            }
          }
          uVar18 = bVar1 & uVar18;
          if ((pbVar12[1] & 0xc0) != 0x80) goto LAB_002b4a03;
          pbVar23 = pbVar12 + lVar20 + 2;
          uVar18 = pbVar12[1] & 0x3f | uVar18 << 6;
          pbVar11 = pbVar23;
          if (!bVar4) goto LAB_002b4a03;
          bVar1 = pbVar12[2];
          if ((bVar1 & 0xc0) == 0x80) {
            uVar18 = bVar1 & 0x3f | uVar18 << 6;
            if (bVar3) {
              pbVar11 = pbVar12 + 3;
              if ((*pbVar11 & 0xffffffc0) == 0x80) {
                uVar18 = uVar18 << 6 | *pbVar11 & 0x3f;
                pbVar11 = pbVar23;
              }
            }
            goto LAB_002b4a03;
          }
          pbVar12 = pbVar12 + 2;
        } while (uVar18 != 0x25);
LAB_002b4a20:
        fVar24 = fVar24 * DAT_00652618;
LAB_002b4a28:
        fVar25 = DAT_005d9038;
        if (fVar24 <= DAT_005d9038) {
          fVar25 = fVar24;
        }
        ColourGradient::addColour
                  ((double)(float)(~-(uint)(fVar24 < DAT_005d9058) & (uint)fVar25),local_48,uVar19);
        plVar17 = local_50 + -2;
        if (plVar17 != (long *)&emptyString) {
          LOCK();
          lVar20 = *plVar17;
          *(int *)plVar17 = (int)*plVar17 + -1;
          UNLOCK();
          if ((int)lVar20 == 0) {
            operator_delete__(plVar17);
          }
        }
        do {
          plVar16 = (long *)*plVar16;
          plVar17 = local_68;
          if (plVar16 == (long *)0x0) goto LAB_002b4ce9;
          pbVar12 = (byte *)plVar16[3];
          pbVar11 = local_40;
          do {
            pbVar23 = pbVar12 + 1;
            bVar1 = *pbVar12;
            unaff_R14 = (ulong)bVar1;
            if ((char)bVar1 < '\0') {
              if ((bVar1 & 0x40) == 0) {
                unaff_R14 = (ulong)(bVar1 & 0x7f);
                goto LAB_002b4b90;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar19 = 0x3f;
                lVar20 = 0;
                bVar4 = false;
                bVar3 = false;
              }
              else {
                bVar4 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar19 = 0x1f;
                  lVar20 = 1;
                  bVar3 = false;
                }
                else {
                  uVar19 = 0xf;
                  lVar20 = 2;
                  bVar3 = true;
                }
              }
              uVar19 = bVar1 & uVar19;
              unaff_R14 = (ulong)uVar19;
              if ((pbVar12[1] & 0xffffffc0) != 0x80) goto LAB_002b4b90;
              pbVar23 = pbVar12 + lVar20 + 2;
              uVar19 = pbVar12[1] & 0x3f | uVar19 << 6;
              unaff_R14 = (ulong)uVar19;
              if (!bVar4) goto LAB_002b4b90;
              pbVar22 = pbVar12 + 2;
              if ((*pbVar22 & 0xffffffc0) == 0x80) {
                uVar19 = *pbVar22 & 0x3f | uVar19 << 6;
                unaff_R14 = (ulong)uVar19;
                if (!bVar3) goto LAB_002b4b90;
                pbVar22 = pbVar12 + 3;
                if ((*pbVar22 & 0xffffffc0) == 0x80) {
                  unaff_R14 = (ulong)(uVar19 << 6 | *pbVar22 & 0x3f);
                  goto LAB_002b4b90;
                }
                goto LAB_002b4b93;
              }
              pbVar12 = pbVar11 + 1;
              bVar1 = *pbVar11;
              wVar15 = (wint_t)bVar1;
              if ((char)bVar1 < '\0') goto LAB_002b4ba4;
LAB_002b4c70:
              pbVar23 = pbVar12;
LAB_002b4c73:
              uVar19 = 0;
              if ((uint)unaff_R14 != wVar15) {
LAB_002b4c7e:
                wVar7 = towupper((wint_t)unaff_R14);
                wVar15 = towupper(wVar15);
                uVar19 = (int)(wVar7 - wVar15) >> 0x1f | 1;
                if (wVar7 - wVar15 == 0) {
                  uVar19 = 0;
                }
              }
            }
            else {
LAB_002b4b90:
              pbVar22 = pbVar23;
LAB_002b4b93:
              pbVar12 = pbVar11 + 1;
              bVar1 = *pbVar11;
              wVar15 = (wint_t)bVar1;
              if (-1 < (char)bVar1) goto LAB_002b4c70;
LAB_002b4ba4:
              pbVar12 = pbVar11 + 1;
              if ((bVar1 & 0x40) == 0) {
                wVar15 = bVar1 & 0x7f;
                goto LAB_002b4c70;
              }
              if ((bVar1 & 0x20) == 0) {
                uVar19 = 0x3f;
                lVar20 = 0;
                bVar4 = false;
                bVar3 = false;
              }
              else {
                bVar4 = true;
                if ((bVar1 & 0x10) == 0) {
                  uVar19 = 0x1f;
                  lVar20 = 1;
                  bVar3 = false;
                }
                else {
                  uVar19 = 0xf;
                  lVar20 = 2;
                  bVar3 = true;
                }
              }
              wVar15 = bVar1 & uVar19;
              if ((pbVar11[1] & 0xffffffc0) != 0x80) goto LAB_002b4c70;
              pbVar12 = pbVar11 + lVar20 + 2;
              wVar15 = pbVar11[1] & 0x3f | wVar15 << 6;
              if (!bVar4) goto LAB_002b4c70;
              pbVar23 = pbVar11 + 2;
              if ((*pbVar23 & 0xffffffc0) == 0x80) {
                wVar15 = *pbVar23 & 0x3f | wVar15 << 6;
                if (!bVar3) goto LAB_002b4c70;
                pbVar23 = pbVar11 + 3;
                if ((*pbVar23 & 0xffffffc0) == 0x80) {
                  wVar15 = wVar15 << 6 | *pbVar23 & 0x3f;
                  goto LAB_002b4c70;
                }
                goto LAB_002b4c73;
              }
              uVar19 = 0;
              if ((uint)unaff_R14 != wVar15) goto LAB_002b4c7e;
            }
            param_4 = 1;
            cVar13 = ((int)unaff_R14 == 0) * '\x02';
            if (uVar19 != 0) {
              cVar13 = '\x01';
              uVar5 = uVar19;
            }
            pbVar12 = pbVar22;
            pbVar11 = pbVar23;
          } while (cVar13 == '\0');
        } while ((cVar13 == '\x01') && (uVar5 != 0));
        plVar17 = local_68;
      } while (plVar16 != (long *)0x0);
    }
LAB_002b4ce9:
    uVar10 = CONCAT71((int7)(unaff_R14 >> 8),plVar17 != (long *)0x0);
    if (pbVar8 != (byte *)&emptyString) {
      LOCK();
      iVar26 = *(int *)pbVar8;
      *(int *)pbVar8 = *(int *)pbVar8 + -1;
      UNLOCK();
      if (iVar26 == 0) {
        operator_delete__(pbVar8);
        LOCK();
        iVar26 = *(int *)pbVar8;
        *(int *)pbVar8 = *(int *)pbVar8 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        iVar26 = *(int *)pbVar8;
        *(int *)pbVar8 = *(int *)pbVar8 + -1;
        UNLOCK();
      }
      if (iVar26 == 0) {
        operator_delete__(pbVar8);
      }
    }
  }
  return uVar10 & 0xffffffff;
}


