// Function : parseImage
// Namespace: juce:SVGState
// Entry    : 002aa650
// Prototype: Drawable * parseImage(SVGState * this, long * param_1, int param_3_00, float * param_3, undefined8 param_4, undefined8 param_5)
// Body     : 002aa650 - 002ac83e


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::SVGState::parseImage(juce::SVGState::XmlPath const&, bool, juce::AffineTransform*) const */

Drawable * __thiscall
juce::SVGState::parseImage
          (SVGState *this,long *param_1,int param_3_00,float *param_3,undefined8 param_4,
          undefined8 param_5)

{
  String *pSVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  String SVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  String *pSVar12;
  FileInputStream *this_00;
  undefined4 *puVar13;
  undefined8 uVar14;
  Drawable *pDVar15;
  undefined4 *puVar16;
  long lVar17;
  float *pfVar18;
  String *pSVar19;
  String *pSVar20;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 *puVar21;
  size_t sVar22;
  int *piVar23;
  Drawable *pDVar24;
  long *plVar25;
  byte *pbVar26;
  long lVar27;
  String *pSVar28;
  int iVar29;
  ulong uVar30;
  bool bVar31;
  uint uVar32;
  float fVar33;
  uint uVar35;
  undefined8 uVar34;
  undefined4 uVar36;
  uint extraout_XMM0_Dc;
  uint uVar37;
  uint extraout_XMM0_Dd;
  uint uVar38;
  float fVar39;
  uint uVar40;
  uint uVar41;
  float fVar42;
  float fVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  undefined1 auVar54 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  float fVar56;
  float fVar57;
  String *local_1d8;
  String *local_1d0;
  float local_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  String *local_1b8;
  float local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 local_1a4;
  float local_1a0;
  undefined4 local_19c;
  undefined1 local_198 [16];
  long local_180;
  float local_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_16c;
  undefined1 local_168 [4];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  __dev_t local_140;
  __off_t _Stack_138;
  __blksize_t local_130;
  long local_128;
  SVGState *local_d0;
  undefined1 *local_c8;
  Drawable *local_c0;
  void *local_b8;
  Drawable local_a8 [16];
  ulong local_98;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  uint uStack_70;
  uint uStack_6c;
  SVGState *local_68;
  float *local_60;
  double local_58;
  double local_50;
  float local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  
  lVar27 = *param_1;
  if (param_3_00 != 0) {
    pfVar18 = param_3;
    for (puVar21 = *(undefined8 **)(lVar27 + 0x10); puVar21 != (undefined8 *)0x0;
        puVar21 = (undefined8 *)*puVar21) {
      uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)puVar21[1],(byte *)"transform");
      if (uVar9 == 0) {
        lVar27 = *(long *)this;
        local_168 = SUB84(lVar27,0);
        fStack_164 = (float)((ulong)lVar27 >> 0x20);
        piVar23 = (int *)(lVar27 + -0x10);
        if (piVar23 != &emptyString) {
          LOCK();
          *piVar23 = *piVar23 + 1;
          UNLOCK();
        }
        local_130 = *(__blksize_t *)(this + 0x38);
        uVar14 = *(undefined8 *)(this + 8);
        local_150 = *(ulong *)(this + 0x18);
        auStack_148 = *(undefined1 (*) [8])(this + 0x20);
        local_140 = *(__dev_t *)(this + 0x28);
        _Stack_138 = *(__off_t *)(this + 0x30);
        fStack_160 = (float)uVar14;
        fStack_15c = (float)((ulong)uVar14 >> 0x20);
        fStack_158 = (float)*(undefined8 *)(this + 0x10);
        fStack_154 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
        local_128 = *(long *)(this + 0x40);
        piVar23 = (int *)(local_128 + -0x10);
        if (piVar23 != &emptyString) {
          LOCK();
          *piVar23 = *piVar23 + 1;
          UNLOCK();
        }
                    /* try { // try from 002aa894 to 002aa8af has its CatchHandler @ 002acadb */
        addTransform(uVar14,local_150,local_140,(SVGState *)local_168,*(long **)(*param_1 + 0x10),
                     extraout_RDX,(char *)pfVar18,param_4,param_5);
        pDVar15 = parseImage((SVGState *)local_168,param_1,0,param_3,param_4,param_5);
        piVar23 = (int *)(local_128 + -0x10);
        if (piVar23 != &emptyString) {
          LOCK();
          iVar10 = *piVar23;
          *piVar23 = *piVar23 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            operator_delete__(piVar23);
          }
        }
        pSVar19 = (String *)(CONCAT44(fStack_164,local_168) + -0x10);
        if (pSVar19 == (String *)&emptyString) {
          return pDVar15;
        }
        LOCK();
        iVar10 = *(int *)pSVar19;
        *(int *)pSVar19 = *(int *)pSVar19 + -1;
        UNLOCK();
        if (iVar10 != 0) {
          return pDVar15;
        }
        goto LAB_002ab1ff;
      }
    }
  }
  uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (*(byte **)(lVar27 + 0x18),(byte *)0x65adb7);
  if (uVar9 != 0) {
    uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)(*param_1 + 0x18),(byte *)0x5e4330);
    if (uVar9 != 0) {
      return (Drawable *)0x0;
    }
    local_60 = param_3;
    for (puVar21 = *(undefined8 **)(*param_1 + 0x10); puVar21 != (undefined8 *)0x0;
        puVar21 = (undefined8 *)*puVar21) {
      uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        ((byte *)puVar21[1],(byte *)"xlink:href");
      if (uVar9 == 0) {
        puVar21 = puVar21 + 2;
        goto LAB_002aaae7;
      }
    }
    puVar21 = &getEmptyStringRef()::empty;
    if ((getEmptyStringRef()::empty == '\0') &&
       (iVar10 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar10 != 0)) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      puVar21 = &getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      __cxa_guard_release(&getEmptyStringRef()::empty);
    }
LAB_002aaae7:
    pSVar28 = (String *)*puVar21;
    pSVar19 = pSVar28 + -0x10;
    if (pSVar19 != (String *)&emptyString) {
      LOCK();
      *(int *)pSVar19 = *(int *)pSVar19 + 1;
      UNLOCK();
    }
                    /* try { // try from 002aaaff to 002aab15 has its CatchHandler @ 002acaa3 */
    local_198._0_8_ = pSVar19;
    MemoryOutputStream::MemoryOutputStream((MemoryOutputStream *)&local_d0,0x100);
    iVar10 = 0;
    pSVar12 = (String *)&DAT_005e3c17;
    do {
      if ((char)*pSVar12 < '\0') {
        do {
          pSVar1 = pSVar12 + 1;
          pSVar12 = pSVar12 + 1;
          pSVar20 = pSVar12;
        } while (((byte)*pSVar1 & 0xc0) == 0x80);
      }
      else {
        pSVar20 = pSVar12 + 1;
        if (*pSVar12 == (String)0x0) goto LAB_002aab62;
      }
      iVar10 = iVar10 + 1;
      pSVar12 = pSVar20;
    } while( true );
  }
  for (puVar21 = *(undefined8 **)(*param_1 + 0x10); puVar21 != (undefined8 *)0x0;
      puVar21 = (undefined8 *)*puVar21) {
    uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar21[1],&DAT_005db3a7);
    if (uVar9 == 0) {
      puVar21 = puVar21 + 2;
      goto LAB_002aa902;
    }
  }
  puVar21 = &getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar10 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar10 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    puVar21 = &getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002aa902:
  local_d0 = (SVGState *)*puVar21;
  dVar4 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_d0);
  fVar39 = (float)dVar4;
  local_198 = ZEXT416(~-(uint)NAN(fVar39) &
                      ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar39)) & (uint)fVar39
                     );
  for (puVar21 = *(undefined8 **)(*param_1 + 0x10); puVar21 != (undefined8 *)0x0;
      puVar21 = (undefined8 *)*puVar21) {
    uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar21[1],&DAT_006558e1);
    if (uVar9 == 0) {
      puVar21 = puVar21 + 2;
      goto LAB_002aa9d6;
    }
  }
  puVar21 = &getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar10 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar10 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    puVar21 = &getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002aa9d6:
  local_d0 = (SVGState *)*puVar21;
  dVar4 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_d0);
  fVar39 = (float)dVar4;
  fStack_154 = (float)(~-(uint)NAN(fVar39) &
                      ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar39)) & (uint)fVar39
                      );
  local_168 = (undefined1  [4])0x3f800000;
  fStack_164 = 0.0;
  fStack_160 = (float)local_198._0_4_;
  fStack_15c = 0.0;
  fStack_158 = 1.0;
  local_c8 = local_168;
  local_c0 = (Drawable *)0x0;
  local_d0 = this;
  getLinkedID((SVGState *)&local_1b0,*(long **)(*param_1 + 0x10));
  pcVar5 = (char *)CONCAT44(uStack_1ac,local_1b0);
  if (*pcVar5 == '\0') {
    pDVar15 = (Drawable *)0x0;
  }
  else {
                    /* try { // try from 002aaa81 to 002aaa95 has its CatchHandler @ 002acaab */
    XmlPath::applyOperationToChildWithID<juce::SVGState::UseImageOp>
              ((XmlPath *)(this + 8),(undefined8 *)&local_1b0,&local_d0);
    pDVar15 = local_c0;
  }
  if (pcVar5 == "") {
    return pDVar15;
  }
  pSVar19 = (String *)(pcVar5 + -0x10);
  LOCK();
  iVar10 = *(int *)pSVar19;
  *(int *)pSVar19 = *(int *)pSVar19 + -1;
  UNLOCK();
  if (iVar10 != 0) {
    return pDVar15;
  }
  goto LAB_002ab1ff;
LAB_002aab62:
  uVar9 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)pSVar28,&DAT_005e3c17,iVar10,pSVar12,param_4,(uint)param_5);
  local_68 = this;
  if (uVar9 == 0) {
    iVar10 = juce::String::indexOf(pSVar28,&DAT_005e5e2e,extraout_RDX_00,pSVar12,param_4,param_5);
    if (iVar10 < 6) {
LAB_002aaddc:
      puVar16 = (undefined4 *)&DAT_0061ac58;
    }
    else {
      SVar8 = *pSVar28;
      pSVar12 = (String *)(ulong)(byte)SVar8;
      if (SVar8 == (String)0x0) goto LAB_002aaddc;
      pSVar19 = pSVar28 + 1;
      if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
        if (((byte)SVar8 & 0x20) == 0) {
          pSVar19 = pSVar28 + 2;
        }
        else {
          pSVar12 = (String *)(ulong)((byte)SVar8 & 0x10);
          pSVar19 = pSVar28 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
        }
      }
      SVar8 = *pSVar19;
      if (SVar8 == (String)0x0) goto LAB_002aaddc;
      pSVar12 = pSVar19 + 1;
      if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
        if (((byte)SVar8 & 0x20) == 0) {
          pSVar12 = pSVar19 + 2;
        }
        else {
          pSVar12 = pSVar19 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
        }
      }
      SVar8 = *pSVar12;
      if (SVar8 == (String)0x0) goto LAB_002aaddc;
      pSVar19 = pSVar12 + 1;
      if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
        if (((byte)SVar8 & 0x20) == 0) {
          pSVar19 = pSVar12 + 2;
        }
        else {
          pSVar19 = pSVar12 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
        }
        pSVar12 = pSVar19;
      }
      SVar8 = *pSVar19;
      if (SVar8 == (String)0x0) goto LAB_002aaddc;
      pSVar12 = pSVar19 + 1;
      if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
        if (((byte)SVar8 & 0x20) == 0) {
          pSVar12 = pSVar19 + 2;
        }
        else {
          pSVar12 = pSVar19 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
        }
      }
      SVar8 = *pSVar12;
      if (SVar8 == (String)0x0) goto LAB_002aaddc;
      pSVar19 = pSVar12 + 1;
      if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
        if (((byte)SVar8 & 0x20) == 0) {
          pSVar19 = pSVar12 + 2;
        }
        else {
          pSVar19 = pSVar12 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
        }
      }
      iVar29 = iVar10 + -5;
      pSVar12 = pSVar19;
      do {
        SVar8 = *pSVar12;
        if (SVar8 == (String)0x0) break;
        pSVar20 = pSVar12 + 1;
        if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
          if (((byte)SVar8 & 0x20) == 0) {
            pSVar20 = pSVar12 + 2;
          }
          else {
            pSVar20 = pSVar12 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
          }
        }
        pSVar12 = pSVar20;
        iVar29 = iVar29 + -1;
      } while (iVar29 != 0);
      if (*pSVar19 == (String)0x0) goto LAB_002aaddc;
      sVar22 = (long)pSVar12 - (long)pSVar19;
      uVar30 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002aada8 to 002aadb1 has its CatchHandler @ 002ac83f */
      local_1c8 = SUB84(pSVar19,0);
      uStack_1c4 = (uint)((ulong)pSVar19 >> 0x20);
      puVar13 = operator_new__(uVar30 + 0x17);
      LOCK();
      *puVar13 = 0;
      UNLOCK();
      *(ulong *)(puVar13 + 2) = uVar30;
      puVar16 = puVar13 + 4;
      memcpy(puVar16,(void *)CONCAT44(uStack_1c4,local_1c8),sVar22);
      *(undefined1 *)((long)puVar13 + sVar22 + 0x10) = 0;
    }
    local_1b0 = SUB84(puVar16,0);
    uStack_1ac = (undefined4)((ulong)puVar16 >> 0x20);
                    /* try { // try from 002aade8 to 002aadf6 has its CatchHandler @ 002aca40 */
    juce::String::trim((long *)local_168,(long *)&local_1b0);
    piVar23 = puVar16 + -4;
    uVar14 = extraout_RDX_01;
    if (piVar23 != &emptyString) {
      LOCK();
      iVar29 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar29 == 0) {
        operator_delete__(piVar23);
        uVar14 = extraout_RDX_02;
      }
    }
    pSVar19 = (String *)CONCAT44(fStack_164,local_168);
    iVar29 = juce::String::indexOf(pSVar19,(byte *)0x656033,uVar14,pSVar12,param_4,param_5);
    if (iVar29 < 0) {
      pSVar12 = pSVar19 + -0x10;
      local_1d8 = pSVar19;
      if (pSVar12 != (String *)&emptyString) {
        LOCK();
        *(int *)pSVar12 = *(int *)pSVar12 + 1;
        UNLOCK();
      }
    }
    else {
      iVar11 = iVar29 + 2;
      do {
        SVar8 = *pSVar19;
        if (SVar8 == (String)0x0) {
          local_1d8 = (String *)&DAT_0061ac58;
          goto LAB_002aaea7;
        }
        pSVar12 = pSVar19 + 1;
        if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
          if (((byte)SVar8 & 0x20) == 0) {
            pSVar12 = pSVar19 + 2;
          }
          else {
            pSVar12 = pSVar19 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
          }
        }
        iVar11 = iVar11 + -1;
        pSVar19 = pSVar12;
      } while (1 < iVar11);
                    /* try { // try from 002aae9f to 002aaea6 has its CatchHandler @ 002ac9e5 */
      local_1d8 = (String *)
                  StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>((byte *)pSVar12);
LAB_002aaea7:
    }
                    /* try { // try from 002aaeab to 002aaeb7 has its CatchHandler @ 002aca34 */
    juce::String::trim((long *)&local_1b0,(long *)&local_1d8);
    pbVar26 = (byte *)CONCAT44(uStack_1ac,local_1b0);
    uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar26,(byte *)"base64");
    pbVar26 = pbVar26 + -0x10;
    if (pbVar26 != (byte *)&emptyString) {
      LOCK();
      iVar11 = *(int *)pbVar26;
      *(int *)pbVar26 = *(int *)pbVar26 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        operator_delete__(pbVar26);
      }
    }
    pSVar19 = local_1d8 + -0x10;
    if (pSVar19 != (String *)&emptyString) {
      LOCK();
      iVar11 = *(int *)pSVar19;
      *(int *)pSVar19 = *(int *)pSVar19 + -1;
      UNLOCK();
      if (iVar11 == 0) {
        operator_delete__(pSVar19);
      }
    }
    if (uVar9 == 0) {
      if (iVar29 < 1) {
        local_1d8 = (String *)&DAT_0061ac58;
      }
      else {
        pSVar19 = (String *)CONCAT44(fStack_164,local_168);
        pSVar12 = pSVar19;
        do {
          SVar8 = *pSVar12;
          if (SVar8 == (String)0x0) {
            pSVar12 = pSVar19 + -0x10;
            local_1d8 = pSVar19;
            if (pSVar12 != (String *)&emptyString) {
              LOCK();
              *(int *)pSVar12 = *(int *)pSVar12 + 1;
              UNLOCK();
            }
            goto LAB_002ab2e0;
          }
          pSVar20 = pSVar12 + 1;
          if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
            if (((byte)SVar8 & 0x20) == 0) {
              pSVar20 = pSVar12 + 2;
            }
            else {
              pSVar20 = pSVar12 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
            }
          }
          iVar29 = iVar29 + -1;
          pSVar12 = pSVar20;
        } while (iVar29 != 0);
        pSVar12 = (String *)&DAT_0061ac58;
        if ((pSVar19 != (String *)0x0) && (*pSVar19 != (String)0x0)) {
          sVar22 = (long)pSVar20 - (long)pSVar19;
          uVar30 = sVar22 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002ab2b1 to 002ab2b5 has its CatchHandler @ 002ac847 */
          puVar16 = operator_new__(uVar30 + 0x17);
          LOCK();
          *puVar16 = 0;
          UNLOCK();
          *(ulong *)(puVar16 + 2) = uVar30;
          pSVar12 = (String *)(puVar16 + 4);
          memcpy(pSVar12,pSVar19,sVar22);
          *(undefined1 *)((long)puVar16 + sVar22 + 0x10) = 0;
        }
        local_1d8 = pSVar12;
      }
LAB_002ab2e0:
                    /* try { // try from 002ab2e0 to 002ab2f1 has its CatchHandler @ 002aca09 */
      pSVar19 = (String *)local_198._0_8_;
      juce::String::trim((long *)&local_1b0,(long *)&local_1d8);
      pSVar12 = local_1d8 + -0x10;
      if (pSVar12 != (String *)&emptyString) {
        LOCK();
        iVar29 = *(int *)pSVar12;
        *(int *)pSVar12 = *(int *)pSVar12 + -1;
        UNLOCK();
        if (iVar29 == 0) {
          operator_delete__(pSVar12);
        }
      }
      pbVar26 = (byte *)CONCAT44(uStack_1ac,local_1b0);
      uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar26,(byte *)"image/png");
      if ((uVar9 == 0) ||
         (uVar9 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            (pbVar26,(byte *)"image/jpeg"), uVar9 == 0)) {
        if (iVar10 < 0) {
          local_1b8 = pSVar28;
          if (pSVar19 != (String *)&emptyString) {
            LOCK();
            *(int *)pSVar19 = *(int *)pSVar19 + 1;
            UNLOCK();
          }
        }
        else {
          iVar10 = iVar10 + 2;
          do {
            SVar8 = *pSVar28;
            if (SVar8 == (String)0x0) {
              local_1b8 = (String *)&DAT_0061ac58;
              goto LAB_002ab3bd;
            }
            pSVar19 = pSVar28 + 1;
            if (((char)SVar8 < '\0') && (((byte)SVar8 & 0x40) != 0)) {
              if (((byte)SVar8 & 0x20) == 0) {
                pSVar19 = pSVar28 + 2;
              }
              else {
                pSVar19 = pSVar28 + (4 - (ulong)(((byte)SVar8 & 0x10) == 0));
              }
            }
            iVar10 = iVar10 + -1;
            pSVar28 = pSVar19;
          } while (1 < iVar10);
                    /* try { // try from 002ab3b5 to 002ab3bc has its CatchHandler @ 002ac84f */
          local_1b8 = (String *)
                      StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                ((byte *)pSVar19);
LAB_002ab3bd:
        }
                    /* try { // try from 002ab3c2 to 002ab3d5 has its CatchHandler @ 002ac986 */
        juce::String::removeCharacters(&local_1d8,&local_1b8,&DAT_005e3c39);
        pSVar19 = local_1b8 + -0x10;
        if (pSVar19 != (String *)&emptyString) {
          LOCK();
          iVar10 = *(int *)pSVar19;
          *(int *)pSVar19 = *(int *)pSVar19 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            operator_delete__(pSVar19);
          }
        }
        SVar8 = *local_1d8;
        local_1c8 = SUB84(local_1d8,0);
        uStack_1c4 = (uint)((ulong)local_1d8 >> 0x20);
        pSVar28 = local_1d8;
        if (SVar8 != (String)0x0) {
          this_00 = (FileInputStream *)0x0;
          pSVar19 = local_1d8;
          do {
            pSVar12 = pSVar19 + 1;
            uVar9 = (uint)(byte)SVar8;
            if ((char)SVar8 < '\0') {
              if (((byte)SVar8 & 0x40) == 0) {
                uVar9 = uVar9 & 0x7f;
              }
              else {
                if (((byte)SVar8 & 0x20) == 0) {
                  uVar44 = 0x3f;
                  lVar27 = 0;
                  bVar31 = false;
                  bVar6 = false;
                }
                else {
                  bVar31 = true;
                  if (((byte)SVar8 & 0x10) == 0) {
                    uVar44 = 0x1f;
                    lVar27 = 1;
                    bVar6 = false;
                  }
                  else {
                    uVar44 = 0xf;
                    lVar27 = 2;
                    bVar6 = true;
                  }
                }
                uVar9 = uVar9 & uVar44;
                if (((byte)pSVar19[1] & 0xffffffc0) == 0x80) {
                  pSVar20 = pSVar19 + lVar27 + 2;
                  uVar9 = (byte)pSVar19[1] & 0x3f | uVar9 << 6;
                  pSVar12 = pSVar20;
                  if (bVar31) {
                    pSVar12 = pSVar19 + 2;
                    if (((byte)*pSVar12 & 0xffffffc0) == 0x80) {
                      uVar9 = (byte)*pSVar12 & 0x3f | uVar9 << 6;
                      pSVar12 = pSVar20;
                      if (bVar6) {
                        pSVar12 = pSVar19 + 3;
                        if (((byte)*pSVar12 & 0xffffffc0) == 0x80) {
                          uVar9 = (byte)*pSVar12 & 0x3f | uVar9 << 6;
                          pSVar12 = pSVar20;
                        }
                      }
                    }
                  }
                }
              }
            }
            if ((((0x19 < uVar9 - 0x41) && (0x19 < uVar9 - 0x61)) && (9 < uVar9 - 0x30)) &&
               ((uVar9 != 0x2b && (uVar9 != 0x2f)))) goto LAB_002ab9c8;
            pSVar19 = pSVar12 + 1;
            SVar8 = *pSVar12;
            uVar9 = (uint)(byte)SVar8;
            if ((char)SVar8 < '\0') {
              if (((byte)SVar8 & 0x40) == 0) {
                uVar9 = (byte)SVar8 & 0x7f;
              }
              else {
                if (((byte)SVar8 & 0x20) == 0) {
                  uVar9 = 0x3f;
                  lVar27 = 0;
                  bVar31 = false;
                  bVar6 = false;
                }
                else {
                  bVar31 = true;
                  if (((byte)SVar8 & 0x10) == 0) {
                    uVar9 = 0x1f;
                    lVar27 = 1;
                    bVar6 = false;
                  }
                  else {
                    uVar9 = 0xf;
                    lVar27 = 2;
                    bVar6 = true;
                  }
                }
                uVar9 = (byte)SVar8 & uVar9;
                if (((byte)pSVar12[1] & 0xffffffc0) == 0x80) {
                  pSVar20 = pSVar12 + lVar27 + 2;
                  uVar9 = (byte)pSVar12[1] & 0x3f | uVar9 << 6;
                  pSVar19 = pSVar20;
                  if (bVar31) {
                    pSVar19 = pSVar12 + 2;
                    if (((byte)*pSVar19 & 0xffffffc0) == 0x80) {
                      uVar9 = (byte)*pSVar19 & 0x3f | uVar9 << 6;
                      pSVar19 = pSVar20;
                      if (bVar6) {
                        pSVar19 = pSVar12 + 3;
                        if (((byte)*pSVar19 & 0xffffffc0) == 0x80) {
                          uVar9 = (byte)*pSVar19 & 0x3f | uVar9 << 6;
                          pSVar19 = pSVar20;
                        }
                      }
                    }
                  }
                }
              }
            }
            if (((0x19 < uVar9 - 0x41) && (0x19 < uVar9 - 0x61)) &&
               ((9 < uVar9 - 0x30 && ((uVar9 != 0x2b && (uVar9 != 0x2f)))))) goto LAB_002ab9c8;
            pSVar12 = pSVar19 + 1;
            SVar8 = *pSVar19;
            uVar9 = (uint)(byte)SVar8;
            if ((char)SVar8 < '\0') {
              if (((byte)SVar8 & 0x40) == 0) {
                uVar9 = (byte)SVar8 & 0x7f;
              }
              else {
                if (((byte)SVar8 & 0x20) == 0) {
                  uVar9 = 0x3f;
                  lVar27 = 0;
                  bVar31 = false;
                  bVar6 = false;
                }
                else {
                  bVar31 = true;
                  if (((byte)SVar8 & 0x10) == 0) {
                    uVar9 = 0x1f;
                    lVar27 = 1;
                    bVar6 = false;
                  }
                  else {
                    uVar9 = 0xf;
                    lVar27 = 2;
                    bVar6 = true;
                  }
                }
                uVar9 = (byte)SVar8 & uVar9;
                if (((byte)pSVar19[1] & 0xc0) == 0x80) {
                  pSVar20 = pSVar19 + lVar27 + 2;
                  uVar9 = (byte)pSVar19[1] & 0x3f | uVar9 << 6;
                  pSVar12 = pSVar20;
                  if (bVar31) {
                    pSVar12 = pSVar19 + 2;
                    if (((byte)*pSVar12 & 0xffffffc0) == 0x80) {
                      uVar9 = (byte)*pSVar12 & 0x3f | uVar9 << 6;
                      pSVar12 = pSVar20;
                      if (bVar6) {
                        pSVar12 = pSVar19 + 3;
                        if (((byte)*pSVar12 & 0xffffffc0) == 0x80) {
                          uVar9 = (byte)*pSVar12 & 0x3f | uVar9 << 6;
                          pSVar12 = pSVar20;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar44 = uVar9 - 0x41;
            if (0x19 < uVar44) {
              if (uVar9 - 0x61 < 0x1a) {
                uVar44 = uVar9 - 0x47;
              }
              else if (uVar9 - 0x30 < 10) {
                uVar44 = uVar9 + 4;
              }
              else if (uVar9 == 0x2b) {
                uVar44 = 0x3e;
              }
              else if (uVar9 == 0x2f) {
                uVar44 = 0x3f;
              }
              else {
                if (uVar9 != 0x3d) goto LAB_002ab9c8;
                uVar44 = 0x40;
              }
            }
            pSVar19 = pSVar12 + 1;
            SVar8 = *pSVar12;
            uVar9 = (uint)(byte)SVar8;
            if ((char)SVar8 < '\0') {
              if (((byte)SVar8 & 0x40) == 0) {
                uVar9 = (byte)SVar8 & 0x7f;
              }
              else {
                if (((byte)SVar8 & 0x20) == 0) {
                  uVar9 = 0x3f;
                  lVar27 = 0;
                  bVar31 = false;
                  bVar6 = false;
                }
                else {
                  bVar31 = true;
                  if (((byte)SVar8 & 0x10) == 0) {
                    uVar9 = 0x1f;
                    lVar27 = 1;
                    bVar6 = false;
                  }
                  else {
                    uVar9 = 0xf;
                    lVar27 = 2;
                    bVar6 = true;
                  }
                }
                uVar9 = (byte)SVar8 & uVar9;
                if (((byte)pSVar12[1] & 0xffffffc0) == 0x80) {
                  pSVar28 = pSVar12 + lVar27 + 2;
                  uVar9 = (byte)pSVar12[1] & 0x3f | uVar9 << 6;
                  pSVar19 = pSVar28;
                  if (bVar31) {
                    pSVar19 = pSVar12 + 2;
                    if (((byte)*pSVar19 & 0xc0) == 0x80) {
                      uVar9 = (byte)*pSVar19 & 0x3f | uVar9 << 6;
                      pSVar19 = pSVar28;
                      if (bVar6) {
                        pSVar19 = pSVar12 + 3;
                        if (((byte)*pSVar19 & 0xffffffc0) == 0x80) {
                          uVar9 = (byte)*pSVar19 & 0x3f | uVar9 << 6;
                          pSVar19 = pSVar28;
                        }
                      }
                    }
                  }
                }
              }
            }
            uVar45 = uVar9 - 0x41;
            if (0x19 < uVar45) {
              if (uVar9 - 0x61 < 0x1a) {
                uVar45 = uVar9 - 0x47;
              }
              else if (uVar9 - 0x30 < 10) {
                uVar45 = uVar9 + 4;
              }
              else if (uVar9 == 0x2b) {
                uVar45 = 0x3e;
              }
              else if (uVar9 == 0x2f) {
                uVar45 = 0x3f;
              }
              else {
                if (uVar9 != 0x3d) {
                  pSVar28 = (String *)(CONCAT44(uStack_1c4,local_1c8) + -0x10);
                  pSVar19 = (String *)local_198._0_8_;
                  if (pSVar28 == (String *)&emptyString) goto LAB_002ab9ee;
                  goto LAB_002ab9d8;
                }
                uVar45 = 0x40;
              }
            }
                    /* try { // try from 002ab8ba to 002ab916 has its CatchHandler @ 002acb29 */
            (**(code **)(local_d0 + 0x30))();
            if (((byte)uVar44 < 0x40) && ((**(code **)(local_d0 + 0x30))(), (byte)uVar45 < 0x40)) {
              (**(code **)(local_d0 + 0x30))();
            }
            SVar8 = *pSVar19;
            pSVar28 = (String *)CONCAT44(uStack_1c4,local_1c8);
          } while (SVar8 != (String)0x0);
        }
                    /* try { // try from 002ab950 to 002ab959 has its CatchHandler @ 002ac8d6 */
        this_00 = operator_new(0x30);
        if (local_c0 == (Drawable *)0x0) {
          pDVar15 = local_a8;
        }
        else {
          pDVar15 = local_c0;
          if (local_98 < *(ulong *)(local_c0 + 8)) {
            *(undefined1 *)(*(long *)local_c0 + local_98) = 0;
          }
        }
        lVar27 = *(long *)pDVar15;
        *(undefined ***)this_00 = &PTR__MemoryInputStream_007132a0;
        *(long *)(this_00 + 8) = lVar27;
        *(ulong *)(this_00 + 0x10) = local_98;
        *(long *)(this_00 + 0x18) = 0;
        *(long *)(this_00 + 0x20) = 0;
        *(long *)(this_00 + 0x28) = 0;
LAB_002ab9c8:
        pSVar28 = pSVar28 + -0x10;
        pSVar19 = (String *)local_198._0_8_;
        if (pSVar28 != (String *)&emptyString) {
LAB_002ab9d8:
          LOCK();
          iVar10 = *(int *)pSVar28;
          *(int *)pSVar28 = *(int *)pSVar28 + -1;
          UNLOCK();
          if (iVar10 == 0) {
            operator_delete__(pSVar28);
          }
        }
LAB_002ab9ee:
        pbVar26 = (byte *)CONCAT44(uStack_1ac,local_1b0);
      }
      else {
        this_00 = (FileInputStream *)0x0;
      }
      pbVar26 = pbVar26 + -0x10;
      if (pbVar26 != (byte *)&emptyString) {
        LOCK();
        iVar10 = *(int *)pbVar26;
        *(int *)pbVar26 = *(int *)pbVar26 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          operator_delete__(pbVar26);
        }
      }
    }
    else {
      this_00 = (FileInputStream *)0x0;
      pSVar19 = (String *)local_198._0_8_;
    }
    piVar23 = (int *)(CONCAT44(fStack_164,local_168) + -0x10);
    if (piVar23 != &emptyString) {
      LOCK();
      iVar10 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar10 == 0) goto LAB_002aaf4e;
    }
  }
  else {
                    /* try { // try from 002aab81 to 002aab90 has its CatchHandler @ 002aca96 */
    File::getSiblingFile((File *)&local_1b0,(undefined8 *)this,(byte *)pSVar28);
    pcVar5 = (char *)CONCAT44(uStack_1ac,local_1b0);
    if (*pcVar5 == '\0') {
LAB_002aac00:
      this_00 = (FileInputStream *)0x0;
    }
    else {
      this_00 = (FileInputStream *)0x0;
      iVar10 = access(pcVar5,0);
      if (iVar10 == 0) {
        if (((*pcVar5 == '\0') || (iVar10 = stat64(pcVar5,(stat64 *)local_168), iVar10 != 0)) ||
           ((local_150 & 0x4000) == 0)) {
                    /* try { // try from 002aabd2 to 002aabdb has its CatchHandler @ 002ac9b4 */
          this_00 = operator_new(0x28);
                    /* try { // try from 002aabdf to 002aabeb has its CatchHandler @ 002ac9a7 */
          FileInputStream::FileInputStream(this_00,(long *)&local_1b0);
          if (**(char **)(this_00 + 0x20) == '\0') goto LAB_002aac03;
          (**(code **)(*(long *)this_00 + 8))(this_00);
        }
        goto LAB_002aac00;
      }
    }
LAB_002aac03:
    piVar23 = (int *)(pcVar5 + -0x10);
    if (piVar23 != &emptyString) {
      LOCK();
      iVar10 = *piVar23;
      *piVar23 = *piVar23 + -1;
      UNLOCK();
      if (iVar10 == 0) {
LAB_002aaf4e:
        operator_delete__(piVar23);
      }
    }
  }
  if (this_00 != (FileInputStream *)0x0) {
                    /* try { // try from 002aaf5c to 002aaf64 has its CatchHandler @ 002aca9e */
    uVar14 = (**(code **)(*(long *)this_00 + 0xb0))(this_00);
    if ((DefaultImageFormats::get()::formats == '\0') &&
       (iVar10 = __cxa_guard_acquire(&DefaultImageFormats::get()::formats), iVar10 != 0)) {
      DefaultImageFormats::get()::formats = &PTR__PNGImageFormat_00711938;
      _DAT_0071ccd0 = &PTR__JPEGImageFormat_007118f0;
      _DAT_0071ccd8 = 0xbf800000;
      _DAT_0071cce0 = &PTR__GIFImageFormat_007118a8;
      DAT_0071cce8 = (long *)&DefaultImageFormats::get()::formats;
      DAT_0071ccf0 = &DAT_0071ccd0;
      _DAT_0071ccf8 = &DAT_0071cce0;
      _DAT_0071cd00 = 0;
      __cxa_guard_release(&DefaultImageFormats::get()::formats);
    }
    if (DAT_0071cce8 != (long *)0x0) {
      puVar21 = &DAT_0071ccf0;
      plVar25 = DAT_0071cce8;
      do {
                    /* try { // try from 002aaf93 to 002aafaa has its CatchHandler @ 002acbb3 */
        cVar7 = (**(code **)(*plVar25 + 0x18))(plVar25,this_00);
        (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar14);
        if (cVar7 != '\0') {
          plVar25 = (long *)puVar21[-1];
          if (plVar25 != (long *)0x0) {
                    /* try { // try from 002ab04f to 002ab059 has its CatchHandler @ 002aca9e */
            (**(code **)(*plVar25 + 0x28))(&local_1d0,plVar25,this_00);
            if (local_1d0 == (String *)0x0) goto LAB_002ab173;
                    /* try { // try from 002ab066 to 002ab06f has its CatchHandler @ 002aca0b */
            pDVar15 = operator_new(0x188);
                    /* try { // try from 002ab073 to 002ab07a has its CatchHandler @ 002ac976 */
            Drawable::Drawable(pDVar15);
            *(undefined ***)pDVar15 = &PTR__DrawableImage_00707ed0;
            *(undefined8 *)(pDVar15 + 0x160) = 0;
            *(undefined4 *)(pDVar15 + 0x168) = 0x3f800000;
            *(undefined8 *)(pDVar15 + 0x16c) = 0;
            *(undefined4 *)(pDVar15 + 0x174) = 0;
            uVar36 = (undefined4)DAT_005d9960;
            uVar30 = (ulong)DAT_005d9960 >> 0x20;
            *(float *)(pDVar15 + 0x178) = DAT_005d9038;
            *(undefined4 *)(pDVar15 + 0x17c) = 0;
            *(undefined4 *)(pDVar15 + 0x180) = uVar36;
            *(int *)(pDVar15 + 0x184) = (int)uVar30;
                    /* try { // try from 002ab0c9 to 002ab0d3 has its CatchHandler @ 002aca0b */
            setCommonAttributes((long *)pDVar15,param_1);
            puVar21 = *(undefined8 **)(*param_1 + 0x10);
            goto joined_r0x002ab0df;
          }
          break;
        }
        plVar25 = (long *)*puVar21;
        puVar21 = puVar21 + 1;
      } while (plVar25 != (long *)0x0);
    }
    local_1d0 = (String *)0x0;
LAB_002ab173:
    pDVar15 = (Drawable *)0x0;
    goto LAB_002ab176;
  }
  local_d0 = (SVGState *)&PTR__MemoryOutputStream_00713378;
                    /* try { // try from 002aafd4 to 002aafe0 has its CatchHandler @ 002aca32 */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_d0);
  free(local_b8);
  local_d0 = (SVGState *)&PTR__OutputStream_00713440;
  piVar23 = (int *)(local_c8 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar10 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar23);
    }
  }
  pDVar15 = (Drawable *)0x0;
  if (pSVar19 == (String *)&emptyString) {
    return (Drawable *)0x0;
  }
  goto LAB_002ab1ee;
joined_r0x002ab0df:
  if (puVar21 == (undefined8 *)0x0) goto LAB_002ab105;
  uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    ((byte *)puVar21[1],&DAT_005db3a7);
  if (uVar9 == 0) {
    puVar21 = puVar21 + 2;
    goto LAB_002aba2a;
  }
  puVar21 = (undefined8 *)*puVar21;
  goto joined_r0x002ab0df;
LAB_002ab105:
  puVar21 = &getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar10 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar10 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    puVar21 = &getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002aba2a:
  local_168 = SUB84(*puVar21,0);
  fStack_164 = (float)((ulong)*puVar21 >> 0x20);
  local_50 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)local_168);
  for (puVar21 = *(undefined8 **)(*param_1 + 0x10); puVar21 != (undefined8 *)0x0;
      puVar21 = (undefined8 *)*puVar21) {
    uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar21[1],&DAT_006558e1);
    if (uVar9 == 0) {
      puVar21 = puVar21 + 2;
      goto LAB_002abad1;
    }
  }
  puVar21 = &getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar10 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar10 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    puVar21 = &getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002abad1:
  local_168 = SUB84(*puVar21,0);
  fStack_164 = (float)((ulong)*puVar21 >> 0x20);
  local_58 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)local_168);
  if (local_1d0 == (String *)0x0) {
    uVar9 = 0;
LAB_002abb42:
    pbVar26 = (byte *)((long)&local_150 + 7);
    do {
      pbVar26[-1] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      pbVar26 = pbVar26 + -1;
      bVar31 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar31);
  }
  else {
    uVar9 = *(uint *)(local_1d0 + 0x10);
    if (-1 < (int)uVar9) goto LAB_002abb42;
    pbVar26 = (byte *)((long)&local_150 + 6);
    uVar9 = -uVar9;
    do {
      *pbVar26 = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      pbVar26 = pbVar26 + -1;
      bVar31 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar31);
    *pbVar26 = 0x2d;
  }
  local_150 = local_150 & 0xffffffffffffff;
  lVar27 = *param_1;
                    /* try { // try from 002abb99 to 002abb9d has its CatchHandler @ 002ac971 */
  lVar17 = StringHolderUtils::createFromFixedLength(pbVar26,(long)(auStack_148 + ~(ulong)pbVar26));
  for (puVar21 = *(undefined8 **)(lVar27 + 0x10); puVar21 != (undefined8 *)0x0;
      puVar21 = (undefined8 *)*puVar21) {
    uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar21[1],(byte *)0x5e4656);
    if (uVar9 == 0) {
      lVar27 = puVar21[2];
      piVar23 = (int *)(lVar27 + -0x10);
      if (piVar23 == &emptyString) goto LAB_002abbeb;
      goto LAB_002abbe7;
    }
  }
  piVar23 = (int *)(lVar17 + -0x10);
  lVar27 = lVar17;
LAB_002abbe7:
  LOCK();
  *piVar23 = *piVar23 + 1;
  UNLOCK();
LAB_002abbeb:
  local_168 = SUB84(lVar27,0);
  fStack_164 = (float)((ulong)lVar27 >> 0x20);
  uVar14 = CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)local_168);
  local_88._0_8_ = lVar27;
  local_1c8 = (float)uVar14;
  uStack_1c4 = (uint)((ulong)uVar14 >> 0x20);
  if (local_1d0 == (String *)0x0) {
    uVar9 = 0;
LAB_002abc62:
    pbVar26 = (byte *)((long)&local_150 + 7);
    do {
      pbVar26[-1] = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      pbVar26 = pbVar26 + -1;
      bVar31 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar31);
  }
  else {
    uVar9 = *(uint *)(local_1d0 + 0x14);
    if (-1 < (int)uVar9) goto LAB_002abc62;
    pbVar26 = (byte *)((long)&local_150 + 6);
    uVar9 = -uVar9;
    do {
      *pbVar26 = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
      pbVar26 = pbVar26 + -1;
      bVar31 = 9 < uVar9;
      uVar9 = uVar9 / 10;
    } while (bVar31);
    *pbVar26 = 0x2d;
  }
  local_150 = local_150 & 0xffffffffffffff;
  lVar27 = *param_1;
  local_180 = lVar17;
                    /* try { // try from 002abcb9 to 002abcbd has its CatchHandler @ 002ac917 */
  lVar17 = StringHolderUtils::createFromFixedLength(pbVar26,(long)(auStack_148 + ~(ulong)pbVar26));
  for (puVar21 = *(undefined8 **)(lVar27 + 0x10); puVar21 != (undefined8 *)0x0;
      puVar21 = (undefined8 *)*puVar21) {
    uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)puVar21[1],(byte *)0x5e467b);
    if (uVar9 == 0) {
      lVar27 = puVar21[2];
      piVar23 = (int *)(lVar27 + -0x10);
      if (piVar23 == &emptyString) goto LAB_002abd0a;
      goto LAB_002abd06;
    }
  }
  piVar23 = (int *)(lVar17 + -0x10);
  lVar27 = lVar17;
LAB_002abd06:
  LOCK();
  *piVar23 = *piVar23 + 1;
  UNLOCK();
LAB_002abd0a:
  local_1c8 = (float)(double)CONCAT44(uStack_1c4,local_1c8);
  uStack_1c0 = 0;
  uStack_1bc = 0;
  local_168 = SUB84(lVar27,0);
  fStack_164 = (float)((ulong)lVar27 >> 0x20);
  dVar4 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)local_168);
  uStack_174 = (uint)((ulong)dVar4 >> 0x20);
  local_178 = (float)dVar4;
  piVar23 = (int *)(lVar27 + -0x10);
  uVar14 = local_88._0_8_;
  uStack_170 = extraout_XMM0_Dc;
  uStack_16c = extraout_XMM0_Dd;
  if (piVar23 != &emptyString) {
    LOCK();
    iVar10 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar23);
    }
  }
  fVar39 = DAT_005d94c8;
  fVar42 = (float)(_DAT_005d91c0 & (uint)local_1c8);
  uVar9 = _UNK_005d91c4 & uStack_1c4;
  uVar44 = _UNK_005d91c8 & uStack_1c0;
  uVar45 = _UNK_005d91cc & uStack_1bc;
  fVar46 = (float)(_DAT_005d91c0 & (uint)local_178);
  uVar49 = _UNK_005d91c4 & uStack_174;
  uVar50 = _UNK_005d91c8 & uStack_170;
  uVar51 = _UNK_005d91cc & uStack_16c;
  LOCK();
  piVar23 = (int *)(lVar17 + -0x10);
  iVar10 = *piVar23;
  *piVar23 = *piVar23 + -1;
  UNLOCK();
  if (iVar10 == 0) {
    local_78._4_4_ = uVar9;
    local_78._0_4_ = fVar42;
    uStack_70 = uVar44;
    uStack_6c = uVar45;
    local_48 = fVar46;
    uStack_44 = uVar49;
    uStack_40 = uVar50;
    uStack_3c = uVar51;
    operator_delete__((void *)(lVar17 + -0x10));
    fVar39 = DAT_005d94c8;
    fVar42 = (float)local_78._0_4_;
    fVar46 = local_48;
  }
  uVar49 = 0;
  uVar45 = 0;
  uVar44 = 0;
  uVar9 = -(uint)(fVar39 <= fVar42);
  uVar50 = -(uint)(fVar39 <= fVar46);
  piVar23 = (int *)(uVar14 + -0x10);
  uVar51 = uVar44;
  uVar40 = uVar45;
  uVar41 = uVar49;
  if (piVar23 != &emptyString) {
    LOCK();
    iVar10 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      local_88 = ZEXT416(uVar9);
      _local_78 = ZEXT416(uVar50);
      operator_delete__(piVar23);
      uVar9 = local_88._0_4_;
      uVar44 = local_88._4_4_;
      uVar45 = local_88._8_4_;
      uVar49 = local_88._12_4_;
      uVar50 = local_78._0_4_;
      uVar51 = local_78._4_4_;
      uVar40 = uStack_70;
      uVar41 = uStack_6c;
    }
  }
  uVar32 = ~uVar9 & (uint)local_1c8;
  local_1c8 = (float)-(uint)NAN(local_1c8);
  fVar39 = (float)(~uVar50 & (uint)local_178);
  local_178 = (float)-(uint)NAN(local_178);
  LOCK();
  piVar23 = (int *)(local_180 + -0x10);
  iVar10 = *piVar23;
  *piVar23 = *piVar23 + -1;
  UNLOCK();
  uVar35 = ~uVar44 & uStack_1c4;
  uVar37 = ~uVar45 & uStack_1c0;
  uVar38 = ~uVar49 & uStack_1bc;
  fVar42 = (float)(~uVar51 & uStack_174);
  uVar9 = ~uVar40 & uStack_170;
  uVar50 = ~uVar41 & uStack_16c;
  if (iVar10 == 0) {
    local_88._4_4_ = ~uVar44 & uStack_1c4;
    local_88._0_4_ = uVar32;
    local_88._8_4_ = ~uVar45 & uStack_1c0;
    local_88._12_4_ = ~uVar49 & uStack_1bc;
    local_78._4_4_ = ~uVar51 & uStack_174;
    local_78._0_4_ = fVar39;
    uStack_70 = ~uVar40 & uStack_170;
    uStack_6c = ~uVar41 & uStack_16c;
    operator_delete__((void *)(local_180 + -0x10));
    uVar32 = local_88._0_4_;
    uVar35 = local_88._4_4_;
    uVar37 = local_88._8_4_;
    uVar38 = local_88._12_4_;
    fVar39 = (float)local_78._0_4_;
    fVar42 = (float)local_78._4_4_;
    uVar9 = uStack_70;
    uVar50 = uStack_6c;
  }
  local_1c8 = (float)(~(uint)local_1c8 & uVar32);
  uStack_1c4 = ~uStack_1c4 & uVar35;
  uStack_1c0 = ~uStack_1c0 & uVar37;
  uStack_1bc = ~uStack_1bc & uVar38;
  local_178 = (float)(~(uint)local_178 & (uint)fVar39);
  uStack_174 = ~uStack_174 & (uint)fVar42;
  uStack_170 = ~uStack_170 & uVar9;
  uStack_16c = ~uStack_16c & uVar50;
  pSVar19 = (String *)local_198._0_8_;
  if (local_1d0 == (String *)0x0) {
    pSVar28 = *(String **)(pDVar15 + 0x160);
    if (pSVar28 != (String *)0x0) {
      *(undefined8 *)(pDVar15 + 0x160) = 0;
      local_180 = CONCAT71(local_180._1_7_,1);
      pSVar12 = (String *)0x0;
      goto LAB_002ac049;
    }
  }
  else {
    iVar10 = (int)local_1c8;
    iVar29 = (int)local_178;
    if ((*(int *)(local_1d0 + 0x10) == iVar10) && (*(int *)(local_1d0 + 0x14) == iVar29)) {
      LOCK();
      *(int *)(local_1d0 + 8) = *(int *)(local_1d0 + 8) + 1;
      UNLOCK();
      pSVar20 = local_1d0;
    }
    else {
                    /* try { // try from 002abec5 to 002abeca has its CatchHandler @ 002ac87b */
      (**(code **)(*(long *)local_1d0 + 0x20))(&local_1d8);
                    /* try { // try from 002abee4 to 002abef0 has its CatchHandler @ 002ac86a */
      (**(code **)(*(long *)local_1d8 + 0x10))
                (&local_1b8,local_1d8,*(int *)(local_1d0 + 0xc),iVar10,iVar29,
                 *(int *)(local_1d0 + 0xc) != 1);
      pSVar20 = local_1b8;
      local_1b8 = (String *)0x0;
                    /* try { // try from 002abf02 to 002abf0c has its CatchHandler @ 002ac85e */
      (**(code **)(*(long *)pSVar20 + 0x10))(local_168);
      fStack_160 = (float)local_168;
      fStack_15c = fStack_164;
      fStack_158 = (float)((uint)fStack_158 & 0xffffff00);
                    /* try { // try from 002abf22 to 002abf2c has its CatchHandler @ 002ac85c */
      (**(code **)(*(long *)CONCAT44(fStack_164,local_168) + 0xa0))();
      local_1b0 = (float)iVar10 / (float)*(int *)(local_1d0 + 0x10);
      fVar42 = 0.0;
      uVar9 = 0;
      uVar50 = 0;
      fVar39 = (float)*(int *)(local_1d0 + 0x14);
      local_1a0 = (float)iVar29 / fVar39;
      uStack_1ac = 0;
      uStack_1a8 = 0;
      local_1a4 = 0;
      local_19c = 0;
                    /* try { // try from 002abf86 to 002abfa4 has its CatchHandler @ 002ac885 */
      cVar7 = (**(code **)(*(long *)CONCAT44(fStack_15c,fStack_160) + 0x68))();
      if (cVar7 == '\0') {
        (**(code **)(*(long *)CONCAT44(fStack_15c,fStack_160) + 0xe0))
                  ((long *)CONCAT44(fStack_15c,fStack_160),&local_1d0,&local_1b0);
      }
      pSVar19 = (String *)local_198._0_8_;
      if ((long *)CONCAT44(fStack_164,local_168) != (long *)0x0) {
        (**(code **)(*(long *)CONCAT44(fStack_164,local_168) + 8))();
      }
      if (local_1d8 != (String *)0x0) {
        (**(code **)(*(long *)local_1d8 + 8))();
      }
    }
    pSVar28 = *(String **)(pDVar15 + 0x160);
    if (pSVar28 != pSVar20) {
      pDVar24 = pDVar15 + 0x160;
      local_180 = CONCAT71(local_180._1_7_,pSVar20 == (String *)0x0);
      pSVar12 = pSVar20;
      if (pSVar20 == (String *)0x0) {
        *(undefined8 *)pDVar24 = 0;
        if (pSVar28 != (String *)0x0) goto LAB_002ac049;
LAB_002ac062:
        uVar14 = 0;
        pSVar20 = pSVar12;
      }
      else {
        LOCK();
        *(int *)(pSVar20 + 8) = *(int *)(pSVar20 + 8) + 1;
        UNLOCK();
        pSVar28 = *(String **)pDVar24;
        *(String **)pDVar24 = pSVar20;
        if (pSVar28 != (String *)0x0) {
LAB_002ac049:
          LOCK();
          pSVar20 = pSVar28 + 8;
          *(int *)pSVar20 = *(int *)pSVar20 + -1;
          UNLOCK();
          if (*(int *)pSVar20 == 0) {
            (**(code **)(*(long *)pSVar28 + 8))();
          }
          pSVar20 = *(String **)(pDVar15 + 0x160);
          if (pSVar20 == (String *)0x0) goto LAB_002ac062;
        }
        uVar14 = *(undefined8 *)(pSVar20 + 0x10);
        pSVar20 = pSVar12;
      }
                    /* try { // try from 002ac074 to 002ac1ec has its CatchHandler @ 002ac9ed */
      Component::setBounds((Component *)pDVar15,0,0,(int)uVar14,(int)((ulong)uVar14 >> 0x20));
      lVar27 = *(long *)(pDVar15 + 0x160);
      if (lVar27 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(lVar27 + 0x10);
      }
      fVar46 = (float)(int)uVar14;
      fVar42 = 0.0;
      uVar9 = 0;
      uVar50 = 0;
      fVar39 = (float)(int)((ulong)uVar14 >> 0x20);
      if ((((((*(float *)(pDVar15 + 0x170) != 0.0) || (NAN(*(float *)(pDVar15 + 0x170)))) ||
            (*(float *)(pDVar15 + 0x174) != 0.0)) ||
           (((NAN(*(float *)(pDVar15 + 0x174)) || (*(float *)(pDVar15 + 0x178) != fVar46)) ||
            ((NAN(*(float *)(pDVar15 + 0x178)) || NAN(fVar46) ||
             ((*(float *)(pDVar15 + 0x17c) != 0.0 || (NAN(*(float *)(pDVar15 + 0x17c)))))))))) ||
          (*(float *)(pDVar15 + 0x180) != 0.0)) || (NAN(*(float *)(pDVar15 + 0x180)))) {
LAB_002ac10d:
        *(undefined8 *)(pDVar15 + 0x170) = 0;
        *(float *)(pDVar15 + 0x178) = fVar46;
        *(undefined4 *)(pDVar15 + 0x17c) = 0;
        *(undefined4 *)(pDVar15 + 0x180) = 0;
        *(float *)(pDVar15 + 0x184) = fVar39;
        if (lVar27 != 0) {
          local_168 = (undefined1  [4])(fVar46 / (float)*(int *)(lVar27 + 0x10) + 0.0);
          fStack_15c = 0.0 / (float)*(int *)(lVar27 + 0x10) + 0.0;
          fStack_164 = 0.0 / (float)*(int *)(lVar27 + 0x14) + 0.0;
          fStack_158 = fVar39 / (float)*(int *)(lVar27 + 0x14) + 0.0;
          fStack_154 = 0.0;
          fVar39 = fStack_158 * (float)local_168 - fStack_164 * fStack_15c;
          if ((fVar39 == 0.0) && (!NAN(fVar39))) {
            local_168 = (undefined1  [4])DAT_005d9038;
            fStack_164 = 0.0;
            fStack_15c = 0.0;
            fStack_158 = 1.0;
          }
          fStack_160 = 0.0;
          Component::setTransform((Component *)pDVar15,(float *)local_168);
        }
      }
      else if ((*(float *)(pDVar15 + 0x184) != fVar39) ||
              (NAN(*(float *)(pDVar15 + 0x184)) || NAN(fVar39))) goto LAB_002ac10d;
      Component::internalRepaintUnchecked((long)pDVar15,0,*(ulong *)(pDVar15 + 0x40),'\x01');
    }
    if (pSVar20 != (String *)0x0) {
      LOCK();
      pSVar28 = pSVar20 + 8;
      *(int *)pSVar28 = *(int *)pSVar28 + -1;
      UNLOCK();
      if (*(int *)pSVar28 == 0) {
        (**(code **)(*(long *)pSVar20 + 8))(pSVar20);
      }
    }
  }
  for (puVar21 = *(undefined8 **)(*param_1 + 0x10); puVar21 != (undefined8 *)0x0;
      puVar21 = (undefined8 *)*puVar21) {
    uVar44 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       ((byte *)puVar21[1],(byte *)"preserveAspectRatio");
    if (uVar44 == 0) {
      plVar25 = puVar21 + 2;
      goto LAB_002ac28d;
    }
  }
  plVar25 = (long *)&getEmptyStringRef()::empty;
  if ((getEmptyStringRef()::empty == '\0') &&
     (iVar10 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar10 != 0)) {
    getEmptyStringRef()::empty = &DAT_0061ac58;
    plVar25 = (long *)&getEmptyStringRef()::empty;
    __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
    __cxa_guard_release(&getEmptyStringRef()::empty);
  }
LAB_002ac28d:
                    /* try { // try from 002ac28d to 002ac299 has its CatchHandler @ 002ac912 */
  juce::String::trim((long *)&local_1b0,plVar25);
  uVar44 = parsePlacementFlags((String *)&local_1b0);
  if ((0.0 < local_1c8) && (0.0 < local_178)) {
                    /* try { // try from 002ac2c2 to 002ac4aa has its CatchHandler @ 002ac8db */
    uVar34 = (**(code **)(*(long *)pDVar15 + 0x1a8))(pDVar15);
    fStack_164 = 0.0;
    uVar14 = _DAT_005dcc70;
    if (fVar39 <= 0.0) {
      fStack_160 = 0.0;
      fStack_15c = 0.0;
      fStack_154 = 0.0;
    }
    else {
      fStack_160 = 0.0;
      fStack_15c = 0.0;
      fStack_154 = 0.0;
      if (0.0 < fVar42) {
        fVar47 = (float)local_50;
        fVar46 = (float)local_58;
        fStack_160 = (float)(~-(uint)NAN(fVar47) &
                            ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar47)) &
                            (uint)fVar47);
        fStack_154 = (float)(~-(uint)NAN(fVar46) &
                            ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar46)) &
                            (uint)fVar46);
        auVar53._4_4_ = uStack_1c4;
        auVar53._0_4_ = local_1c8;
        auVar53._8_4_ = uStack_1c4;
        auVar53._12_4_ = uStack_1bc;
        auVar52._8_8_ = auVar53._8_8_;
        auVar52._4_4_ = local_178;
        auVar52._0_4_ = local_1c8;
        auVar54._0_12_ = auVar52._0_12_;
        auVar54._12_4_ = uStack_174;
        auVar55._4_4_ = fVar42;
        auVar55._0_4_ = fVar39;
        auVar55._8_4_ = uVar9;
        auVar55._12_4_ = uVar50;
        auVar55 = divps(auVar54,auVar55);
        uVar14 = auVar55._0_8_;
        if ((uVar44 & 0x40) == 0) {
          fVar47 = auVar55._0_4_;
          fVar46 = auVar55._4_4_;
          if ((uVar44 & 0x80) == 0) {
            if (fVar47 <= fVar46) {
              fVar46 = fVar47;
            }
          }
          else if (fVar46 <= fVar47) {
            fVar46 = fVar47;
          }
          if ((uVar44 & 0x100) == 0) {
            if ((uVar44 & 0x200) == 0) goto LAB_002ac3b9;
LAB_002ac3e4:
            fVar47 = DAT_005d9038;
            if (DAT_005d9038 <= fVar46) {
              fVar47 = fVar46;
            }
            fVar46 = fVar47;
            if ((uVar44 & 2) == 0) goto LAB_002ac3bf;
LAB_002ac3f1:
            fVar39 = local_1c8 - fVar39 * fVar46;
LAB_002ac3fe:
            fStack_160 = fStack_160 + fVar39;
          }
          else {
            fVar47 = DAT_005d9038;
            if (fVar46 <= DAT_005d9038) {
              fVar47 = fVar46;
            }
            fVar46 = fVar47;
            if ((uVar44 & 0x200) != 0) goto LAB_002ac3e4;
LAB_002ac3b9:
            if ((uVar44 & 2) != 0) goto LAB_002ac3f1;
LAB_002ac3bf:
            if ((uVar44 & 1) == 0) {
              fVar39 = (local_1c8 - fVar39 * fVar46) * DAT_005d9044;
              goto LAB_002ac3fe;
            }
          }
          if ((uVar44 & 0x10) == 0) {
            uVar14 = CONCAT44(fVar46,fVar46);
            if ((uVar44 & 8) == 0) {
              fStack_154 = fStack_154 + (local_178 - fVar42 * fVar46) * DAT_005d9044;
            }
          }
          else {
            fStack_154 = fStack_154 + (local_178 - fVar42 * fVar46);
            uVar14 = CONCAT44(fVar46,fVar46);
          }
        }
        fStack_164 = (float)uVar14 * 0.0;
        fVar39 = (float)((ulong)uVar14 >> 0x20);
        fStack_15c = fVar39 * 0.0;
        fStack_160 = fStack_160 - (float)uVar34 * (float)uVar14;
        fStack_154 = fStack_154 - (float)((ulong)uVar34 >> 0x20) * fVar39;
      }
    }
    local_168 = SUB84(uVar14,0);
    fStack_158 = (float)((ulong)uVar14 >> 0x20);
    Component::setTransform((Component *)pDVar15,(float *)local_168);
  }
  piVar23 = (int *)(CONCAT44(uStack_1ac,local_1b0) + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar10 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar23);
    }
  }
  if (local_60 == (float *)0x0) {
    pfVar18 = *(float **)(pDVar15 + 0x50);
    if (pfVar18 == (float *)0x0) {
      fVar42 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar39 = 0.0;
      fVar48 = DAT_005d9038;
      fVar56 = DAT_005d9038;
    }
    else {
      fVar42 = pfVar18[1];
      fVar46 = pfVar18[2];
      fVar47 = pfVar18[3];
      fVar39 = pfVar18[5];
      fVar48 = *pfVar18;
      fVar56 = pfVar18[4];
    }
    fVar2 = *(float *)(local_68 + 0x28);
    fVar3 = *(float *)(local_68 + 0x2c);
    local_168 = (undefined1  [4])(fVar2 * fVar48 + fVar3 * fVar47);
    fStack_160 = fVar2 * fVar46 + fVar3 * fVar39 + *(float *)(local_68 + 0x30);
    fStack_164 = fVar2 * fVar42 + fVar3 * fVar56;
    fVar2 = *(float *)(local_68 + 0x34);
    fVar3 = *(float *)(local_68 + 0x38);
    fStack_15c = fVar48 * fVar2 + fVar47 * fVar3;
    fStack_158 = fVar42 * fVar2 + fVar56 * fVar3;
    fStack_154 = fVar46 * fVar2 + fVar39 * fVar3 + *(float *)(local_68 + 0x3c);
                    /* try { // try from 002ac75d to 002ac769 has its CatchHandler @ 002ac857 */
    Component::setTransform((Component *)pDVar15,(float *)local_168);
  }
  else {
    pfVar18 = *(float **)(pDVar15 + 0x50);
    if (pfVar18 == (float *)0x0) {
      fVar39 = 0.0;
      fVar42 = 0.0;
      fVar46 = 0.0;
      fVar47 = 0.0;
      fVar48 = DAT_005d9038;
      fVar56 = DAT_005d9038;
    }
    else {
      fVar42 = pfVar18[1];
      fVar46 = pfVar18[2];
      fVar47 = pfVar18[3];
      fVar39 = pfVar18[5];
      fVar48 = *pfVar18;
      fVar56 = pfVar18[4];
    }
    fVar2 = *(float *)(local_68 + 0x28);
    fVar3 = *(float *)(local_68 + 0x2c);
    fVar57 = fVar2 * fVar48 + fVar3 * fVar47;
    fVar43 = fVar2 * fVar42 + fVar3 * fVar56;
    fVar33 = fVar2 * fVar46 + fVar3 * fVar39 + *(float *)(local_68 + 0x30);
    fVar2 = *(float *)(local_68 + 0x34);
    fVar3 = *(float *)(local_68 + 0x38);
    fVar47 = fVar48 * fVar2 + fVar47 * fVar3;
    fVar48 = fVar42 * fVar2 + fVar56 * fVar3;
    fVar46 = fVar46 * fVar2 + fVar39 * fVar3 + *(float *)(local_68 + 0x3c);
    fVar39 = *local_60;
    fVar42 = local_60[1];
    local_168 = (undefined1  [4])(fVar39 * fVar57 + fVar42 * fVar47);
    fStack_160 = fVar39 * fVar33 + fVar42 * fVar46 + local_60[2];
    fStack_164 = fVar39 * fVar43 + fVar42 * fVar48;
    fVar39 = local_60[3];
    fVar42 = local_60[4];
    fStack_15c = fVar57 * fVar39 + fVar47 * fVar42;
    fStack_158 = fVar43 * fVar39 + fVar48 * fVar42;
    fStack_154 = fVar33 * fVar39 + fVar46 * fVar42 + local_60[5];
                    /* try { // try from 002ac673 to 002ac67f has its CatchHandler @ 002ac880 */
    Component::setTransform((Component *)pDVar15,(float *)local_168);
  }
  if (local_1d0 != (String *)0x0) {
    LOCK();
    pSVar28 = local_1d0 + 8;
    *(int *)pSVar28 = *(int *)pSVar28 + -1;
    UNLOCK();
    if (*(int *)pSVar28 == 0) {
      (**(code **)(*(long *)local_1d0 + 8))();
    }
  }
LAB_002ab176:
  local_d0 = (SVGState *)&PTR__MemoryOutputStream_00713378;
                    /* try { // try from 002ab185 to 002ab191 has its CatchHandler @ 002aca71 */
  MemoryOutputStream::trimExternalBlockSize((MemoryOutputStream *)&local_d0);
  free(local_b8);
  local_d0 = (SVGState *)&PTR__OutputStream_00713440;
  piVar23 = (int *)(local_c8 + -0x10);
  if (piVar23 != &emptyString) {
    LOCK();
    iVar10 = *piVar23;
    *piVar23 = *piVar23 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(piVar23);
    }
  }
  (**(code **)(*(long *)this_00 + 8))(this_00);
  if (pSVar19 == (String *)&emptyString) {
    return pDVar15;
  }
LAB_002ab1ee:
  LOCK();
  iVar10 = *(int *)pSVar19;
  *(int *)pSVar19 = *(int *)pSVar19 + -1;
  UNLOCK();
  if (iVar10 == 0) {
LAB_002ab1ff:
    operator_delete__(pSVar19);
  }
  return pDVar15;
}


