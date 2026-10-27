// Function : parseSVGElement
// Namespace: juce:SVGState
// Entry    : 0029f4f0
// Prototype: Drawable * parseSVGElement(SVGState * this, long * param_1, undefined8 param_2, char * param_3, SVGState * * param_4, byte * param_5)
// Body     : 0029f4f0 - 002a00b5


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::SVGState::parseSVGElement(juce::SVGState::XmlPath const&) */

Drawable * __thiscall
juce::SVGState::parseSVGElement
          (SVGState *this,long *param_1,undefined8 param_2,char *param_3,SVGState **param_4,
          byte *param_5)

{
  undefined8 *puVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  Drawable *this_00;
  int *piVar5;
  ulong uVar6;
  undefined8 extraout_RDX;
  undefined1 auVar7 [8];
  long *plVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  undefined4 extraout_XMM0_Da;
  float fVar12;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  float extraout_XMM0_Da_02;
  float extraout_XMM0_Da_03;
  float extraout_XMM0_Da_04;
  float extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  undefined8 local_b8;
  long *local_b0;
  undefined1 local_a8 [8];
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined8 local_50;
  long local_48;
  float local_40;
  float local_3c;
  long local_38;
  
  this_00 = operator_new(400);
                    /* try { // try from 0029f514 to 0029f51b has its CatchHandler @ 002a00e6 */
  Drawable::Drawable(this_00);
  *(undefined ***)this_00 = &PTR__DrawableComposite_00707d08;
  *(undefined1 (*) [16])(this_00 + 0x160) = ZEXT416((uint)DAT_005d94c4) << 0x40;
  *(undefined8 *)(this_00 + 0x170) = DAT_005dd020;
  *(undefined8 *)(this_00 + 0x178) = 0;
  *(undefined8 *)(this_00 + 0x180) = 0;
  this_00[0x188] = (Drawable)0x0;
  *(undefined8 *)(this_00 + 0x180) = DAT_005dcf50;
  setCommonAttributes((long *)this_00,param_1);
  local_88 = *(long *)this;
  piVar5 = (int *)(local_88 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_50 = *(undefined8 *)(this + 0x38);
  local_80 = *(undefined8 *)(this + 8);
  uStack_78 = *(undefined8 *)(this + 0x10);
  fVar16 = *(float *)(this + 0x18);
  fVar12 = *(float *)(this + 0x1c);
  fStack_68 = *(float *)(this + 0x20);
  fStack_64 = *(float *)(this + 0x24);
  fVar19 = *(float *)(this + 0x28);
  fVar20 = *(float *)(this + 0x2c);
  fStack_58 = *(float *)(this + 0x30);
  fStack_54 = *(float *)(this + 0x34);
  local_48 = *(long *)(this + 0x40);
  piVar5 = (int *)(local_48 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  lVar9 = *param_1;
  plVar10 = *(long **)(lVar9 + 0x10);
  local_b0 = param_1;
  local_70 = fVar16;
  fStack_6c = fVar12;
  local_60 = fVar19;
  fStack_5c = fVar20;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10;
    do {
      uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar8[1],(byte *)"transform");
      if (uVar3 == 0) {
                    /* try { // try from 0029f61c to 0029f628 has its CatchHandler @ 002a00b8 */
        addTransform(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),CONCAT44(fVar12,fVar16),
                     CONCAT44(fVar20,fVar19),(SVGState *)&local_88,plVar10,extraout_RDX,param_3,
                     param_4,param_5);
        lVar9 = *local_b0;
        break;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
                    /* try { // try from 0029f63e to 0029f645 has its CatchHandler @ 002a00e4 */
  juce::String::String(local_70,(String *)&local_b8);
  for (puVar1 = *(undefined8 **)(lVar9 + 0x10); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar1[1],(byte *)0x5e4656);
    if (uVar3 == 0) {
      auVar7 = (undefined1  [8])puVar1[2];
      local_a8 = auVar7;
      piVar5 = (int *)((long)auVar7 + -0x10);
      if (piVar5 != &emptyString) goto LAB_0029f68f;
      goto LAB_0029f698;
    }
  }
  local_a8 = (undefined1  [8])local_b8;
  piVar5 = (int *)(local_b8 + -0x10);
  auVar7 = (undefined1  [8])local_b8;
  if (piVar5 != &emptyString) {
LAB_0029f68f:
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    auVar7 = local_a8;
  }
LAB_0029f698:
  uVar6 = getCoordLength(*(float *)(this + 0x20),CONCAT44(fVar12,fVar16),CONCAT44(fVar20,fVar19),
                         (String *)local_a8);
  plVar10 = local_b0;
  local_70 = (float)uVar6;
  piVar5 = (int *)((long)auVar7 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(local_b8 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  lVar9 = *plVar10;
                    /* try { // try from 0029f6fa to 0029f701 has its CatchHandler @ 002a00e2 */
  juce::String::String(fStack_6c,(String *)&local_b8);
  for (puVar1 = *(undefined8 **)(lVar9 + 0x10); puVar1 != (undefined8 *)0x0;
      puVar1 = (undefined8 *)*puVar1) {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar1[1],(byte *)0x5e467b);
    if (uVar3 == 0) {
      auVar7 = (undefined1  [8])puVar1[2];
      local_a8 = auVar7;
      piVar5 = (int *)((long)auVar7 + -0x10);
      if (piVar5 != &emptyString) goto LAB_0029f74f;
      goto LAB_0029f758;
    }
  }
  local_a8 = (undefined1  [8])local_b8;
  piVar5 = (int *)(local_b8 + -0x10);
  auVar7 = (undefined1  [8])local_b8;
  if (piVar5 != &emptyString) {
LAB_0029f74f:
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    auVar7 = local_a8;
  }
LAB_0029f758:
  uVar6 = getCoordLength(*(float *)(this + 0x24),CONCAT44(fVar12,fVar16),CONCAT44(fVar20,fVar19),
                         (String *)local_a8);
  plVar10 = local_b0;
  fStack_6c = (float)uVar6;
  piVar5 = (int *)((long)auVar7 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(local_b8 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  local_40 = local_70;
  if (local_70 <= 0.0) {
    local_70 = 100.0;
    local_40 = DAT_005d94c4;
  }
  fVar16 = fStack_6c;
  if (fStack_6c <= 0.0) {
    fStack_6c = 100.0;
    fVar16 = DAT_005d94c4;
  }
  uVar17 = 0;
  local_b8 = 0;
  plVar10 = *(long **)(*plVar10 + 0x10);
  local_3c = fVar16;
  if (plVar10 != (long *)0x0) {
    plVar8 = plVar10;
    do {
      uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)plVar8[1],(byte *)"viewBox");
      if (uVar3 == 0) goto LAB_0029f8d0;
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  fVar16 = *(float *)(this + 0x20);
  fVar12 = (float)(_DAT_005d91c0 & (uint)fVar16);
  if (fVar12 == DAT_005d94c8) {
    if ((fVar16 == 0.0) && (!NAN(fVar16))) goto LAB_0029f961;
  }
  else if ((fVar12 <= DAT_005d94cc) || (fVar12 <= DAT_005d94d0 * fVar12)) {
LAB_0029f961:
    fStack_68 = local_40;
  }
  fVar16 = *(float *)(this + 0x24);
  uVar17 = 0;
  fVar12 = (float)(_DAT_005d91c0 & (uint)fVar16);
  uVar14 = 0;
  plVar10 = local_b0;
  if (fVar12 == DAT_005d94c8) {
    fVar12 = 0.0;
    uVar14 = 0;
    if ((fVar16 != 0.0) || (NAN(fVar16))) goto LAB_0029fd9f;
  }
  else {
    fVar16 = DAT_005d94cc;
    if (DAT_005d94cc < fVar12) {
      uVar17 = 0;
      fVar16 = DAT_005d94d0 * fVar12;
      if (fVar16 < fVar12) goto LAB_0029fd9f;
    }
  }
  uVar17 = 0;
  uVar14 = 0;
  fStack_64 = local_3c;
  fVar12 = local_3c;
  goto LAB_0029fd9f;
  while (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0) {
LAB_0029f8d0:
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)plVar10[1],(byte *)"viewBox");
    uVar13 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
    if (uVar3 == 0) {
      plVar10 = plVar10 + 2;
      goto LAB_0029f9ed;
    }
  }
  plVar10 = (long *)&getEmptyStringRef()::empty;
  uVar13 = CONCAT44(extraout_XMM0_Db_00,extraout_XMM0_Da_00);
  if (getEmptyStringRef()::empty == '\0') {
    iVar4 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
    uVar13 = CONCAT44(extraout_XMM0_Db_01,extraout_XMM0_Da_01);
    if (iVar4 != 0) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      plVar10 = (long *)&getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      uVar13 = __cxa_guard_release(&getEmptyStringRef()::empty);
    }
  }
LAB_0029f9ed:
  lVar9 = *plVar10;
  piVar5 = (int *)(lVar9 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  local_a8 = (undefined1  [8])lVar9;
  local_90 = 0;
                    /* try { // try from 0029fa15 to 0029fa4d has its CatchHandler @ 002a00ba */
  uVar6 = parseCoords(uVar13,CONCAT44(uVar17,fVar16),CONCAT44(fVar20,fVar19),this,
                      (undefined8 *)local_a8,(undefined4 *)&local_b8,'\x01');
  plVar10 = local_b0;
  fVar12 = extraout_XMM0_Da_02;
  uVar14 = extraout_XMM0_Db_02;
  if ((char)uVar6 != '\0') {
    uVar6 = parseCoords(CONCAT44(extraout_XMM0_Db_02,extraout_XMM0_Da_02),CONCAT44(uVar17,fVar16),
                        CONCAT44(fVar20,fVar19),this,(undefined8 *)local_a8,(undefined4 *)&local_90,
                        '\x01');
    uVar14 = 0;
    fVar16 = 0.0;
    uVar17 = 0;
    fVar12 = (float)local_90;
    if (((byte)uVar6 & 0.0 < (float)local_90) == 1) {
      fVar20 = 0.0;
      fVar19 = local_90._4_4_;
      if (0.0 < local_90._4_4_) {
        fStack_68 = (float)local_90;
        fStack_64 = local_90._4_4_;
        for (puVar1 = *(undefined8 **)(*plVar10 + 0x10); puVar1 != (undefined8 *)0x0;
            puVar1 = (undefined8 *)*puVar1) {
          uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)puVar1[1],(byte *)"preserveAspectRatio");
          if (uVar3 == 0) {
            plVar8 = puVar1 + 2;
            goto LAB_0029fb16;
          }
        }
        plVar8 = (long *)&getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar4 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar4 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          plVar8 = (long *)&getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_0029fb16:
                    /* try { // try from 0029fb16 to 0029fb25 has its CatchHandler @ 002a00b6 */
        juce::String::trim(&local_38,plVar8);
        uVar3 = parsePlacementFlags((String *)&local_38);
        piVar11 = (int *)(local_38 + -0x10);
        fVar12 = extraout_XMM0_Da_03;
        uVar14 = extraout_XMM0_Db_03;
        if (piVar11 != &emptyString) {
          LOCK();
          iVar4 = *piVar11;
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            operator_delete__(piVar11);
            fVar12 = extraout_XMM0_Da_04;
            uVar14 = extraout_XMM0_Db_04;
          }
        }
        if (uVar3 != 0) {
          fVar16 = (float)local_90;
          fVar12 = (float)(local_90 >> 0x20);
          fVar28 = 0.0;
          uVar13 = _DAT_005dcc70;
          if (fVar16 <= 0.0) {
            fVar23 = 0.0;
            fVar21 = 0.0;
            fVar24 = 0.0;
          }
          else {
            fVar19 = 0.0;
            fVar23 = 0.0;
            fVar21 = 0.0;
            fVar24 = 0.0;
            if (0.0 < fVar12) {
              auVar25._4_4_ = fStack_6c;
              auVar25._0_4_ = local_70;
              auVar25._8_8_ = 0;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = local_90;
              auVar26 = divps(auVar25,auVar26);
              uVar13 = auVar26._0_8_;
              if ((uVar3 & 0x40) == 0) {
                fVar20 = auVar26._4_4_;
                uVar22 = CONCAT44(fVar20,fVar20);
                if ((uVar3 & 0x80) == 0) {
                  if (auVar26._0_4_ <= fVar20) {
                    uVar22 = uVar13;
                  }
                }
                else if (fVar20 <= auVar26._0_4_) {
                  uVar22 = uVar13;
                }
                fVar20 = (float)uVar22;
                if ((uVar3 & 0x100) == 0) {
                  fVar28 = fVar20;
                  if ((uVar3 & 0x200) == 0) goto LAB_0029fc01;
LAB_0029fc36:
                  fVar20 = DAT_005d9038;
                  if (DAT_005d9038 <= fVar28) {
                    fVar20 = fVar28;
                  }
                  if ((uVar3 & 2) != 0) goto LAB_0029fc42;
LAB_0029fc06:
                  fVar23 = 0.0;
                  if ((uVar3 & 1) == 0) {
                    fVar23 = (local_70 - fVar16 * fVar20) * DAT_005d9044;
                    goto LAB_0029fc4d;
                  }
                }
                else {
                  fVar28 = DAT_005d9038;
                  if (fVar20 <= DAT_005d9038) {
                    fVar28 = fVar20;
                  }
                  fVar20 = fVar28;
                  if ((uVar3 & 0x200) != 0) goto LAB_0029fc36;
LAB_0029fc01:
                  if ((uVar3 & 2) == 0) goto LAB_0029fc06;
LAB_0029fc42:
                  fVar23 = local_70 - fVar16 * fVar20;
LAB_0029fc4d:
                  fVar23 = fVar23 + 0.0;
                }
                if ((uVar3 & 0x10) == 0) {
                  uVar13 = CONCAT44(fVar20,fVar20);
                  if ((uVar3 & 8) == 0) {
                    fVar19 = (fStack_6c - fVar12 * fVar20) * DAT_005d9044 + 0.0;
                  }
                }
                else {
                  fVar19 = (fStack_6c - fVar12 * fVar20) + 0.0;
                  uVar13 = CONCAT44(fVar20,fVar20);
                }
              }
              else {
                fVar23 = 0.0;
              }
              fVar28 = (float)uVar13 * 0.0;
              fVar16 = (float)((ulong)uVar13 >> 0x20);
              fVar21 = fVar16 * 0.0;
              fVar23 = fVar23 - (float)local_b8 * (float)uVar13;
              fVar24 = fVar19 - (float)((ulong)local_b8 >> 0x20) * fVar16;
            }
          }
          fVar27 = (float)((ulong)uVar13 >> 0x20);
          uVar17 = 0;
          fVar20 = 0.0;
          fVar16 = local_60 * fVar23 + fStack_5c * fVar24 + fStack_58;
          fVar19 = local_60 * fVar28 + fStack_5c * fVar27;
          uVar14 = 0;
          fVar15 = fVar21 * (float)local_50;
          fVar12 = fStack_54 * fVar23 + fVar24 * (float)local_50 + local_50._4_4_;
          local_50 = CONCAT44(fVar12,fVar28 * fStack_54 + fVar27 * (float)local_50);
          local_60 = local_60 * (float)uVar13 + fStack_5c * fVar21;
          fStack_5c = fVar19;
          fStack_58 = fVar16;
          fStack_54 = (float)uVar13 * fStack_54 + fVar15;
        }
      }
    }
  }
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
      fVar12 = extraout_XMM0_Da_05;
      uVar14 = extraout_XMM0_Db_05;
    }
  }
LAB_0029fd9f:
                    /* try { // try from 0029fd9f to 002a0060 has its CatchHandler @ 002a00f9 */
  parseSubElements(CONCAT44(uVar14,fVar12),CONCAT44(uVar17,fVar16),CONCAT44(fVar20,fVar19),
                   (SVGState *)&local_88,plVar10,(Component *)this_00,(char *)0x1,param_4,param_5);
  *(float *)(this_00 + 0x178) = (float)local_b8;
  *(float *)(this_00 + 0x17c) = local_b8._4_4_;
  *(float *)(this_00 + 0x180) = fStack_68;
  *(float *)(this_00 + 0x184) = fStack_64;
  fVar16 = fStack_68 + (float)local_b8;
  fVar12 = fStack_64 + local_b8._4_4_;
  if ((*(float *)(this_00 + 0x160) == (float)local_b8) &&
     (!NAN(*(float *)(this_00 + 0x160)) && !NAN((float)local_b8))) {
    if ((*(float *)(this_00 + 0x164) == local_b8._4_4_) &&
       (!NAN(*(float *)(this_00 + 0x164)) && !NAN(local_b8._4_4_))) {
      if ((*(float *)(this_00 + 0x168) == fVar16) &&
         (!NAN(*(float *)(this_00 + 0x168)) && !NAN(fVar16))) {
        if ((*(float *)(this_00 + 0x16c) == local_b8._4_4_) &&
           (!NAN(*(float *)(this_00 + 0x16c)) && !NAN(local_b8._4_4_))) {
          if ((*(float *)(this_00 + 0x170) == (float)local_b8) &&
             (!NAN(*(float *)(this_00 + 0x170)) && !NAN((float)local_b8))) {
            if ((*(float *)(this_00 + 0x174) == fVar12) &&
               (!NAN(*(float *)(this_00 + 0x174)) && !NAN(fVar12))) goto LAB_002a0061;
          }
        }
      }
    }
  }
  *(float *)(this_00 + 0x160) = (float)local_b8;
  *(float *)(this_00 + 0x164) = local_b8._4_4_;
  *(float *)(this_00 + 0x168) = fVar16;
  *(float *)(this_00 + 0x16c) = local_b8._4_4_;
  *(ulong *)(this_00 + 0x170) = CONCAT44(fVar12,(float)local_b8);
  fVar16 = fVar16 - (float)local_b8;
  fVar20 = (float)local_b8 - (float)local_b8;
  fVar28 = local_b8._4_4_ - local_b8._4_4_;
  fVar12 = fVar12 - local_b8._4_4_;
  fVar19 = fVar16 * fVar12 - fVar28 * fVar20;
  dVar2 = (double)fVar19;
  uVar3 = _DAT_005d91b0 & SUB84(dVar2,0);
  uVar18 = _UNK_005d91b4 & (uint)((ulong)dVar2 >> 0x20);
  if ((double)CONCAT44(uVar18,uVar3) == DAT_005d94e0) {
    if ((fVar19 == 0.0) && (!NAN(fVar19))) goto LAB_0029ff84;
LAB_0029fef1:
    dVar2 = _DAT_005d9000 / dVar2;
    fVar15 = (float)((double)(float)((uint)fVar28 ^ _DAT_006524b0) * dVar2);
    fVar23 = (float)((double)(float)(_DAT_006524b0 ^ (uint)fVar20) * dVar2);
    fVar19 = (float)((double)fVar12 * dVar2);
    fVar24 = (float)((double)fVar16 * dVar2);
    fVar21 = (float)(_DAT_006524b0 ^ (uint)(float)local_b8) * (float)((double)fVar12 * dVar2) -
             local_b8._4_4_ * fVar23;
    fVar27 = (float)(_DAT_006524b0 ^ (uint)(float)local_b8) * fVar15 -
             local_b8._4_4_ * (float)((double)fVar16 * dVar2);
  }
  else {
    if ((DAT_005db368 < (double)CONCAT44(uVar18,uVar3)) &&
       (DAT_005db370 * (double)CONCAT44(uVar18,uVar3) < (double)CONCAT44(uVar18,uVar3)))
    goto LAB_0029fef1;
LAB_0029ff84:
    fVar19 = fVar16;
    fVar24 = fVar12;
    fVar23 = fVar20;
    fVar21 = (float)local_b8;
    fVar15 = fVar28;
    fVar27 = local_b8._4_4_;
  }
  local_a8._0_4_ = fVar16 * fVar19 + fVar20 * fVar15;
  local_a8._4_4_ = fVar16 * fVar23 + fVar20 * fVar24;
  uStack_a0._4_4_ = fVar19 * fVar28 + fVar15 * fVar12;
  fVar19 = fVar23 * fVar28 + fVar24 * fVar12;
  uStack_a0._0_4_ = fVar16 * fVar21 + fVar20 * fVar27 + (float)local_b8;
  local_98 = CONCAT44(fVar28 * fVar21 + fVar12 * fVar27 + local_b8._4_4_,fVar19);
  fVar16 = fVar19 * (float)local_a8._0_4_ - uStack_a0._4_4_ * (float)local_a8._4_4_;
  if ((fVar16 == 0.0) && (!NAN(fVar16))) {
    _local_a8 = ZEXT416((uint)DAT_005d9038);
    local_98 = 0x3f800000;
  }
  Component::setTransform((Component *)this_00,(float *)local_a8);
LAB_002a0061:
  piVar5 = (int *)(local_48 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  piVar5 = (int *)(local_88 + -0x10);
  if (piVar5 != &emptyString) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      operator_delete__(piVar5);
    }
  }
  return this_00;
}


