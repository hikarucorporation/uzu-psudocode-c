// Function : parseText
// Namespace: juce:SVGState
// Entry    : 002a6e20
// Prototype: Drawable * parseText(undefined8 param_1_00, undefined8 param_2, undefined8 param_3_00, SVGState * this, long * param_5, int param_6, float * param_7, Drawable * param_8, undefined8 param_9)
// Body     : 002a6e20 - 002aa09d


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::SVGState::parseText(juce::SVGState::XmlPath const&, bool, juce::AffineTransform*,
   juce::SVGState::StringLayoutState*) const */

Drawable * __thiscall
juce::SVGState::parseText
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3_00,SVGState *this,
          long *param_5,int param_6,float *param_7,Drawable *param_8,byte *param_9)

{
  byte *pbVar1;
  pthread_mutex_t *__mutex;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  Drawable DVar6;
  long *plVar7;
  void *pvVar8;
  undefined1 auVar9 [12];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  Drawable *pDVar16;
  long *plVar17;
  size_t sVar18;
  undefined4 *puVar19;
  Drawable *pDVar20;
  Drawable *pDVar21;
  char *pcVar22;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined1 auVar23 [8];
  undefined8 extraout_RDX_06;
  undefined8 extraout_RDX_07;
  undefined8 extraout_RDX_08;
  undefined8 extraout_RDX_09;
  Drawable *pDVar24;
  undefined8 extraout_RDX_10;
  undefined8 extraout_RDX_11;
  undefined8 extraout_RDX_12;
  undefined8 extraout_RDX_13;
  undefined8 extraout_RDX_14;
  undefined8 extraout_RDX_15;
  undefined8 extraout_RDX_16;
  undefined8 extraout_RDX_17;
  int iVar25;
  int iVar26;
  undefined8 *puVar27;
  long lVar28;
  Drawable *pDVar29;
  ulong uVar30;
  byte *pbVar31;
  XmlElement *this_00;
  int iVar32;
  int iVar33;
  long *plVar34;
  StringLayoutState *this_01;
  ulong uVar35;
  Drawable *pDVar36;
  long lVar37;
  uint uVar38;
  int *piVar39;
  Drawable *pDVar40;
  Drawable *pDVar41;
  SharedFontInternal *pSVar42;
  int iVar43;
  int iVar44;
  Font *this_02;
  float fVar45;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 uVar46;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 extraout_var [12];
  undefined4 extraout_XMM0_Dc_00;
  undefined8 extraout_XMM0_Qb;
  undefined4 extraout_XMM0_Dd_00;
  undefined1 extraout_var_00 [12];
  undefined4 extraout_XMM0_Dc_01;
  undefined8 extraout_XMM0_Qb_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined1 extraout_var_01 [12];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 auVar48 [16];
  double dVar47;
  undefined8 extraout_XMM0_Qb_02;
  undefined1 extraout_var_02 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 extraout_var_03 [12];
  undefined8 extraout_XMM0_Qb_03;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  float fVar56;
  undefined8 uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auVar70 [16];
  Drawable *local_408;
  Drawable *local_400;
  undefined1 local_3f8 [8];
  undefined8 uStack_3f0;
  undefined1 local_3e8 [8];
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  float fStack_3d0;
  float fStack_3cc;
  long *local_3c8;
  Drawable *local_3c0;
  undefined1 local_3b8 [8];
  float fStack_3b0;
  float fStack_3ac;
  SVGState *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  Drawable *local_380;
  undefined8 local_378;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  undefined1 local_360 [16];
  undefined8 local_350;
  void *pvStack_348;
  undefined8 uStack_340;
  long local_338;
  undefined4 local_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined2 uStack_324;
  undefined2 uStack_322;
  undefined6 uStack_320;
  undefined8 uStack_31a;
  XmlElement *local_310;
  Drawable *local_308;
  Drawable *pDStack_300;
  Drawable *local_2f8;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  Drawable *local_2d8;
  byte *local_2d0;
  long *local_2c8;
  XmlElement *local_2c0;
  float *local_2b8;
  Drawable *local_2b0;
  Drawable *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  ulong uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  Drawable local_278 [8];
  Drawable *local_270;
  undefined8 *local_268;
  Drawable *local_260;
  long *local_258;
  long *local_250;
  void *local_240;
  Drawable *local_208;
  long local_200;
  long *local_1f8;
  long *local_1f0;
  long *local_1e8;
  void *local_1d8;
  SVGState *local_1a0;
  void *local_198;
  ulong uStack_190;
  undefined1 *local_188;
  long local_180;
  long *local_178;
  long *local_170;
  long *local_168;
  void *local_158;
  undefined8 local_120;
  undefined8 uStack_118;
  char *local_110;
  long local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  void *local_e0;
  undefined1 local_a8 [16];
  undefined4 *local_98;
  long local_90;
  long *local_88;
  long *local_80;
  long *local_78;
  void *local_68;
  
  lVar28 = *param_5;
  pDVar40 = param_8;
  local_2b8 = param_7;
  if (param_6 != 0) {
    for (puVar27 = *(undefined8 **)(lVar28 + 0x10); puVar27 != (undefined8 *)0x0;
        puVar27 = (undefined8 *)*puVar27) {
      uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar27[1],(byte *)"transform");
      pfVar12 = local_2b8;
      if (uVar13 == 0) {
        local_378 = *(Drawable **)this;
        piVar39 = (int *)((long)local_378 + -0x10);
        if (piVar39 != &emptyString) {
          LOCK();
          *piVar39 = *piVar39 + 1;
          UNLOCK();
        }
        uStack_340 = *(undefined8 *)(this + 0x38);
        uVar46 = *(undefined8 *)(this + 8);
        local_360 = *(undefined1 (*) [16])(this + 0x18);
        uVar52 = local_360._0_4_;
        uVar53 = local_360._4_4_;
        uVar57 = *(undefined8 *)(this + 0x28);
        pvStack_348 = *(void **)(this + 0x30);
        fStack_370 = (float)uVar46;
        fStack_36c = (float)((ulong)uVar46 >> 0x20);
        fStack_368 = (float)*(undefined8 *)(this + 0x10);
        fStack_364 = (float)((ulong)*(undefined8 *)(this + 0x10) >> 0x20);
        local_338 = *(long *)(this + 0x40);
        piVar39 = (int *)(local_338 + -0x10);
        if (piVar39 != &emptyString) {
          LOCK();
          *piVar39 = *piVar39 + 1;
          UNLOCK();
        }
                    /* try { // try from 002a75c1 to 002a75e5 has its CatchHandler @ 002aa12c */
        local_350 = uVar57;
        addTransform(uVar46,local_360._0_8_,uVar57,(SVGState *)&local_378,
                     *(long **)(*param_5 + 0x10),extraout_RDX,(char *)param_7,pDVar40,param_9);
        pDVar40 = parseText(extraout_XMM0_Qa_01,CONCAT44(uVar53,uVar52),uVar57,
                            (SVGState *)&local_378,param_5,0,pfVar12,(Drawable *)0x0,param_9);
        piVar39 = (int *)(local_338 + -0x10);
        if (piVar39 != &emptyString) {
          LOCK();
          iVar26 = *piVar39;
          *piVar39 = *piVar39 + -1;
          UNLOCK();
          if (iVar26 == 0) {
            operator_delete__(piVar39);
          }
        }
        piVar39 = (int *)((long)local_378 + -0x10);
        if (piVar39 == &emptyString) {
          return pDVar40;
        }
        LOCK();
        iVar26 = *piVar39;
        *piVar39 = *piVar39 + -1;
        UNLOCK();
        if (iVar26 == 0) {
          operator_delete__(piVar39);
          return pDVar40;
        }
        return pDVar40;
      }
    }
  }
  uVar13 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (*(byte **)(lVar28 + 0x18),(byte *)0x65adb7);
  if (uVar13 == 0) {
    for (puVar27 = *(undefined8 **)(*param_5 + 0x10); puVar27 != (undefined8 *)0x0;
        puVar27 = (undefined8 *)*puVar27) {
      uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar27[1],&DAT_005db3a7);
      if (uVar13 == 0) {
        puVar27 = puVar27 + 2;
        goto LAB_002a7701;
      }
    }
    puVar27 = &getEmptyStringRef()::empty;
    if ((getEmptyStringRef()::empty == '\0') &&
       (iVar26 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar26 != 0)) {
      getEmptyStringRef()::empty = &DAT_0061ac58;
      puVar27 = &getEmptyStringRef()::empty;
      __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
      __cxa_guard_release(&getEmptyStringRef()::empty);
    }
LAB_002a7701:
    local_270 = (Drawable *)*puVar27;
    dVar47 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>((long *)&local_270)
    ;
    fVar63 = (float)dVar47;
    _local_3f8 = ZEXT416(~-(uint)NAN(fVar63) &
                         ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar63)) &
                         (uint)fVar63);
    puVar27 = *(undefined8 **)(*param_5 + 0x10);
    do {
      if (puVar27 == (undefined8 *)0x0) {
        puVar27 = &getEmptyStringRef()::empty;
        if ((getEmptyStringRef()::empty == '\0') &&
           (iVar26 = __cxa_guard_acquire(&getEmptyStringRef()::empty), iVar26 != 0)) {
          getEmptyStringRef()::empty = &DAT_0061ac58;
          puVar27 = &getEmptyStringRef()::empty;
          __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
          __cxa_guard_release(&getEmptyStringRef()::empty);
        }
LAB_002a77d6:
        local_270 = (Drawable *)*puVar27;
        dVar47 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>
                                   ((long *)&local_270);
        fVar63 = (float)dVar47;
        fStack_364 = (float)(~-(uint)NAN(fVar63) &
                            ~-(uint)(DAT_005d94c8 <= (float)(_DAT_005d91c0 & (uint)fVar63)) &
                            (uint)fVar63);
        local_378 = (Drawable *)0x3f800000;
        fStack_370 = (float)local_3f8._0_4_;
        fStack_36c = 0.0;
        fStack_368 = 1.0;
        local_268 = &local_378;
        local_260 = (Drawable *)0x0;
        local_270 = (Drawable *)this;
        getLinkedID((SVGState *)&local_208,*(long **)(*param_5 + 0x10));
        if (*local_208 == (Drawable)0x0) {
          pDVar40 = (Drawable *)0x0;
        }
        else {
                    /* try { // try from 002a7894 to 002a78ab has its CatchHandler @ 002aa0ee */
          XmlPath::applyOperationToChildWithID<juce::SVGState::UseTextOp>
                    ((XmlPath *)(this + 8),&local_208,&local_270);
          pDVar40 = local_260;
        }
        if (local_208 == (Drawable *)&DAT_0061ac58) {
          return pDVar40;
        }
        local_208 = local_208 + -0x10;
        LOCK();
        uVar13 = *(uint *)local_208;
        *(uint *)local_208 = *(uint *)local_208 - 1;
        UNLOCK();
        if (uVar13 == 0) {
          operator_delete__(local_208);
          return pDVar40;
        }
        return pDVar40;
      }
      uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)puVar27[1],&DAT_006558e1);
      if (uVar13 == 0) {
        puVar27 = puVar27 + 2;
        goto LAB_002a77d6;
      }
      puVar27 = (undefined8 *)*puVar27;
    } while( true );
  }
  uVar13 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     (*(byte **)(*param_5 + 0x18),(byte *)0x65a4a6);
  uVar46 = extraout_XMM0_Qa;
  if (uVar13 != 0) {
    uVar14 = XmlElement::hasTagNameIgnoringNamespace
                       ((XmlElement *)*param_5,(byte *)"tspan",extraout_RDX_00,param_7,pDVar40,
                        (uint)param_9);
    uVar46 = extraout_XMM0_Qa_00;
    if ((char)uVar14 == '\0') {
      return (Drawable *)0x0;
    }
  }
  uVar46 = getCoordList(uVar46,param_2,param_3_00,&local_198,(long)this,*param_5,0);
                    /* try { // try from 002a6ee1 to 002a6ef5 has its CatchHandler @ 002aa230 */
  getCoordList(uVar46,param_2,param_3_00,&local_120,(long)this,*param_5,1);
  local_2a0 = 0;
  local_298 = local_198;
  uStack_290 = uStack_190;
  local_198 = (void *)0x0;
  uStack_190 = 0;
  uVar52 = (undefined4)local_120;
  uVar53 = local_120._4_4_;
  local_288 = (undefined4)local_120;
  uStack_284 = local_120._4_4_;
  uStack_280 = (undefined4)uStack_118;
  uStack_27c = uStack_118._4_4_;
  local_120 = 0;
  uStack_118 = 0;
  local_278[0] = (Drawable)0x0;
                    /* try { // try from 002a6f45 to 002a6f5b has its CatchHandler @ 002aa228 */
  local_2a8 = param_8;
  FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_270,0);
                    /* try { // try from 002a6f5c to 002a6f70 has its CatchHandler @ 002aa213 */
  Font::Font((Font *)&local_208,(long *)&local_270);
  plVar17 = local_258;
  plVar7 = local_250;
  if (local_240 != (void *)0x0) {
    operator_delete(local_240);
    plVar17 = local_258;
    plVar7 = local_250;
  }
  for (; plVar34 = local_250, plVar17 != local_250; plVar17 = plVar17 + 1) {
    piVar39 = (int *)(*plVar17 + -0x10);
    local_250 = plVar7;
    if (piVar39 != &emptyString) {
      LOCK();
      iVar26 = *piVar39;
      *piVar39 = *piVar39 + -1;
      UNLOCK();
      if (iVar26 == 0) {
        operator_delete__(piVar39);
      }
    }
    plVar7 = local_250;
    local_250 = plVar34;
  }
  local_250 = plVar7;
  if (local_258 != (long *)0x0) {
    operator_delete(local_258);
  }
  local_3c8 = param_5;
  local_3a0 = this;
  if (local_260 != (Drawable *)0x0) {
    LOCK();
    plVar17 = (long *)((long)local_260 + 8);
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*(long *)local_260 + 8))();
    }
  }
  piVar39 = (int *)((long)local_268 + -0x10);
  if (piVar39 != &emptyString) {
    LOCK();
    iVar26 = *piVar39;
    *piVar39 = *piVar39 + -1;
    UNLOCK();
    if (iVar26 == 0) {
      operator_delete__(piVar39);
    }
  }
  pDVar40 = local_270 + -0x10;
  if (pDVar40 != (Drawable *)&emptyString) {
    LOCK();
    uVar13 = *(uint *)pDVar40;
    *(uint *)pDVar40 = *(uint *)pDVar40 - 1;
    UNLOCK();
    if (uVar13 == 0) {
      operator_delete__(pDVar40);
    }
  }
  local_188 = &DAT_0061ac58;
                    /* try { // try from 002a7116 to 002a713b has its CatchHandler @ 002aa206 */
  getStyleAttribute((SVGState *)&local_378,(long)local_3a0,local_3c8,(byte *)"font-family",
                    (byte *)&local_188,param_9);
                    /* try { // try from 002a713c to 002a7150 has its CatchHandler @ 002aa1d6 */
  juce::String::unquoted(&local_110,&local_378);
  pDVar40 = local_378 + -0x10;
  if (pDVar40 == (Drawable *)&emptyString) {
LAB_002a7173:
    piVar39 = (int *)(local_188 + -0x10);
    if (piVar39 == &emptyString) goto LAB_002a7195;
LAB_002a7184:
    LOCK();
    iVar26 = *piVar39;
    *piVar39 = *piVar39 + -1;
    UNLOCK();
    if (iVar26 != 0) goto LAB_002a7195;
    operator_delete__(piVar39);
    cVar5 = *local_110;
  }
  else {
    LOCK();
    uVar13 = *(uint *)pDVar40;
    *(uint *)pDVar40 = *(uint *)pDVar40 - 1;
    UNLOCK();
    if (uVar13 != 0) goto LAB_002a7173;
    operator_delete__(pDVar40);
    piVar39 = (int *)(local_188 + -0x10);
    if (piVar39 != &emptyString) goto LAB_002a7184;
LAB_002a7195:
    cVar5 = *local_110;
  }
  if (cVar5 != '\0') {
                    /* try { // try from 002a71a2 to 002a71b6 has its CatchHandler @ 002aa242 */
    Font::setTypefaceName((Font *)&local_208,(long *)&local_110);
  }
  local_188 = &DAT_0061ac58;
                    /* try { // try from 002a71bf to 002a71e4 has its CatchHandler @ 002aa1d4 */
  getStyleAttribute((SVGState *)&local_378,(long)local_3a0,local_3c8,(byte *)"font-style",
                    (byte *)&local_188,param_9);
  uVar46 = juce::String::containsIgnoreCase((String *)&local_378,(byte *)"italic");
  pDVar40 = local_378 + -0x10;
  if (pDVar40 == (Drawable *)&emptyString) {
LAB_002a721d:
    piVar39 = (int *)(local_188 + -0x10);
    if (piVar39 != &emptyString) {
LAB_002a722e:
      LOCK();
      iVar26 = *piVar39;
      *piVar39 = *piVar39 + -1;
      UNLOCK();
      if (iVar26 == 0) {
        operator_delete__(piVar39);
      }
    }
  }
  else {
    LOCK();
    uVar13 = *(uint *)pDVar40;
    *(uint *)pDVar40 = *(uint *)pDVar40 - 1;
    UNLOCK();
    if (uVar13 != 0) goto LAB_002a721d;
    operator_delete__(pDVar40);
    piVar39 = (int *)(local_188 + -0x10);
    if (piVar39 != &emptyString) goto LAB_002a722e;
  }
  if ((char)uVar46 != '\0') {
    uVar13 = Font::getStyleFlags((Font *)&local_208);
                    /* try { // try from 002a7256 to 002a725f has its CatchHandler @ 002aa242 */
    Font::setStyleFlags((Font *)&local_208,uVar13 | 2);
  }
  local_188 = &DAT_0061ac58;
                    /* try { // try from 002a7268 to 002a728d has its CatchHandler @ 002aa1d2 */
  getStyleAttribute((SVGState *)&local_378,(long)local_3a0,local_3c8,(byte *)0x6582f0,
                    (byte *)&local_188,param_9);
  uVar46 = juce::String::containsIgnoreCase((String *)&local_378,&DAT_005e3c12);
  pDVar40 = local_378 + -0x10;
  if (pDVar40 == (Drawable *)&emptyString) {
LAB_002a72c6:
    piVar39 = (int *)(local_188 + -0x10);
    if (piVar39 != &emptyString) {
LAB_002a72d7:
      LOCK();
      iVar26 = *piVar39;
      *piVar39 = *piVar39 + -1;
      UNLOCK();
      if (iVar26 == 0) {
        operator_delete__(piVar39);
      }
    }
  }
  else {
    LOCK();
    uVar13 = *(uint *)pDVar40;
    *(uint *)pDVar40 = *(uint *)pDVar40 - 1;
    UNLOCK();
    if (uVar13 != 0) goto LAB_002a72c6;
    operator_delete__(pDVar40);
    piVar39 = (int *)(local_188 + -0x10);
    if (piVar39 != &emptyString) goto LAB_002a72d7;
  }
  if ((char)uVar46 != '\0') {
    uVar13 = Font::getStyleFlags((Font *)&local_208);
                    /* try { // try from 002a72ff to 002a7308 has its CatchHandler @ 002aa242 */
    Font::setStyleFlags((Font *)&local_208,uVar13 | 1);
  }
                    /* try { // try from 002a7309 to 002a7312 has its CatchHandler @ 002aa1d0 */
  puVar15 = operator_new__(0x1b);
  LOCK();
  *puVar15 = 0;
  UNLOCK();
  *(undefined8 *)(puVar15 + 2) = 4;
  local_98 = puVar15 + 4;
  *(undefined2 *)(puVar15 + 4) = 0x3531;
  *(undefined1 *)((long)puVar15 + 0x12) = 0;
                    /* try { // try from 002a7338 to 002a735d has its CatchHandler @ 002aa19d */
  getStyleAttribute((SVGState *)&local_188,(long)local_3a0,local_3c8,(byte *)0x6582d0,
                    (byte *)&local_98,param_9);
  uVar14 = getCoordLength(DAT_005d9038,CONCAT44(uVar53,uVar52),param_3_00,(String *)&local_188);
  local_408 = local_208;
  LOCK();
  *(uint *)(local_208 + 8) = *(uint *)(local_208 + 8) + 1;
  UNLOCK();
  fVar45 = (float)uVar14;
  fVar63 = DAT_005d9048;
  if (fVar45 <= DAT_005d9048) {
    fVar63 = fVar45;
  }
  fVar45 = (float)(-(uint)(fVar45 < DAT_005d9068) & (uint)DAT_005d9068 |
                  ~-(uint)(fVar45 < DAT_005d9068) & (uint)fVar63);
  fVar63 = *(float *)(local_208 + 0x68);
  fVar51 = (float)((uint)fVar63 & _DAT_005d91c0);
  if ((fVar51 == DAT_005d94c8) ||
     (fVar56 = (float)((uint)fVar45 & _DAT_005d91c0), fVar56 == DAT_005d94c8)) {
    if ((fVar63 == fVar45) && (!NAN(fVar63) && !NAN(fVar45))) goto LAB_002a7a48;
  }
  else {
    fVar63 = (float)((uint)(fVar63 - fVar45) & _DAT_005d91c0);
    if (fVar63 <= DAT_005d94cc) goto LAB_002a7a48;
    if (fVar56 <= fVar51) {
      fVar56 = fVar51;
    }
    if (fVar63 <= fVar56 * DAT_005d94d0) goto LAB_002a7a48;
  }
  _local_3f8 = ZEXT416((uint)fVar45);
  if (1 < (int)*(uint *)(local_208 + 8)) {
                    /* try { // try from 002a7425 to 002a7431 has its CatchHandler @ 002aa09e */
    Font::SharedFontInternal::copy(&local_378,(long)local_208);
    pDVar40 = local_408;
    local_408 = local_378;
    local_378 = pDVar40;
    if (pDVar40 != (Drawable *)0x0) {
      LOCK();
      pDVar16 = pDVar40 + 8;
      *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
      UNLOCK();
      if (*(uint *)pDVar16 == 0) {
        (**(code **)(*(long *)pDVar40 + 8))();
      }
    }
  }
  pDVar16 = local_408;
                    /* try { // try from 002a7464 to 002a7470 has its CatchHandler @ 002aa09e */
  FontOptions::FontOptions((FontOptions *)&local_378,(long *)(local_408 + 0x18));
  uStack_328 = local_3f8._0_4_;
  uStack_32c = 0xbf800000;
  pDVar40 = *(Drawable **)(pDVar16 + 0x18);
  uVar46 = *(undefined8 *)(pDVar16 + 0x20);
  *(Drawable **)(pDVar16 + 0x18) = local_378;
  *(ulong *)(pDVar16 + 0x20) = CONCAT44(fStack_36c,fStack_370);
  fStack_370 = (float)uVar46;
  fStack_36c = (float)((ulong)uVar46 >> 0x20);
  uVar46 = *(undefined8 *)(pDVar16 + 0x28);
  *(ulong *)(pDVar16 + 0x28) = CONCAT44(fStack_364,fStack_368);
  fStack_368 = (float)uVar46;
  fStack_364 = (float)((ulong)uVar46 >> 0x20);
  plVar17 = *(long **)(pDVar16 + 0x30);
  plVar7 = *(long **)(pDVar16 + 0x38);
  *(undefined8 *)(pDVar16 + 0x30) = local_360._0_8_;
  *(undefined8 *)(pDVar16 + 0x38) = local_360._8_8_;
  *(undefined8 *)(pDVar16 + 0x40) = local_350;
  local_360 = ZEXT816(0);
  local_350 = 0;
  local_378 = pDVar40;
  if (plVar17 != plVar7) {
    plVar34 = plVar17;
    do {
      piVar39 = (int *)(*plVar34 + -0x10);
      if (piVar39 != &emptyString) {
        LOCK();
        iVar26 = *piVar39;
        *piVar39 = *piVar39 + -1;
        UNLOCK();
        if (iVar26 == 0) {
          operator_delete__(piVar39);
        }
      }
      plVar34 = plVar34 + 1;
    } while (plVar34 != plVar7);
  }
  if (plVar17 != (long *)0x0) {
    operator_delete(plVar17);
  }
  pvVar8 = *(void **)(pDVar16 + 0x48);
  *(void **)(pDVar16 + 0x48) = pvStack_348;
  *(undefined8 *)(pDVar16 + 0x50) = uStack_340;
  *(long *)(pDVar16 + 0x58) = local_338;
  pvStack_348 = (void *)0x0;
  uStack_340 = 0;
  local_338 = 0;
  if (pvVar8 != (void *)0x0) {
    operator_delete(pvVar8);
  }
  *(ulong *)(pDVar16 + 0x6e) = CONCAT62(uStack_320,uStack_322);
  *(undefined8 *)(pDVar16 + 0x76) = uStack_31a;
  *(ulong *)(pDVar16 + 0x60) = CONCAT44(uStack_32c,local_330);
  *(ulong *)(pDVar16 + 0x68) = CONCAT26(uStack_322,CONCAT24(uStack_324,uStack_328));
  uVar46 = local_360._8_8_;
  plVar17 = (long *)local_360._0_8_;
  if (local_360._0_8_ != local_360._8_8_) {
    do {
      piVar39 = (int *)(*plVar17 + -0x10);
      if (piVar39 != &emptyString) {
        LOCK();
        iVar26 = *piVar39;
        *piVar39 = *piVar39 + -1;
        UNLOCK();
        if (iVar26 == 0) {
          operator_delete__(piVar39);
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != (long *)uVar46);
  }
  if ((long *)local_360._0_8_ != (long *)0x0) {
    operator_delete((void *)local_360._0_8_);
  }
  plVar17 = (long *)CONCAT44(fStack_364,fStack_368);
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar17 + 8))();
    }
  }
  piVar39 = (int *)(CONCAT44(fStack_36c,fStack_370) + -0x10);
  if (piVar39 != &emptyString) {
    LOCK();
    iVar26 = *piVar39;
    *piVar39 = *piVar39 + -1;
    UNLOCK();
    if (iVar26 == 0) {
      operator_delete__(piVar39);
    }
  }
  pDVar40 = local_378 + -0x10;
  if (pDVar40 != (Drawable *)&emptyString) {
    LOCK();
    uVar13 = *(uint *)pDVar40;
    *(uint *)pDVar40 = *(uint *)pDVar40 - 1;
    UNLOCK();
    if (uVar13 == 0) {
      operator_delete__(pDVar40);
    }
  }
  pDVar40 = local_408;
  __mutex = (pthread_mutex_t *)(local_408 + 0x80);
  pthread_mutex_lock(__mutex);
  plVar17 = *(long **)(pDVar40 + 0x10);
  *(undefined8 *)(pDVar40 + 0x10) = 0;
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar7 = plVar17 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)(*plVar17 + 8))();
    }
  }
  pthread_mutex_unlock(__mutex);
LAB_002a7a48:
  piVar39 = (int *)(local_188 + -0x10);
  if (piVar39 != &emptyString) {
    LOCK();
    iVar26 = *piVar39;
    *piVar39 = *piVar39 + -1;
    UNLOCK();
    if (iVar26 == 0) {
      operator_delete__(piVar39);
    }
  }
  piVar39 = local_98 + -4;
  if (piVar39 != &emptyString) {
    LOCK();
    iVar26 = *piVar39;
    *piVar39 = *piVar39 + -1;
    UNLOCK();
    if (iVar26 == 0) {
      operator_delete__(piVar39);
    }
  }
  piVar39 = (int *)(local_110 + -0x10);
  if (piVar39 != &emptyString) {
    LOCK();
    iVar26 = *piVar39;
    *piVar39 = *piVar39 + -1;
    UNLOCK();
    if (iVar26 == 0) {
      operator_delete__(piVar39);
    }
  }
  if (local_208 != (Drawable *)0x0) {
    LOCK();
    pDVar40 = local_208 + 8;
    *(uint *)pDVar40 = *(uint *)pDVar40 - 1;
    UNLOCK();
    if (*(uint *)pDVar40 == 0) {
      (**(code **)(*(long *)local_208 + 8))();
    }
  }
  local_378 = (Drawable *)&DAT_0061ac58;
                    /* try { // try from 002a7ad3 to 002a7af8 has its CatchHandler @ 002aa195 */
  pcVar22 = "text-anchor";
  pDVar40 = (Drawable *)&local_378;
  getStyleAttribute((SVGState *)&local_2d0,(long)local_3a0,local_3c8,(byte *)"text-anchor",
                    (byte *)pDVar40,param_9);
                    /* try { // try from 002a7af9 to 002a7b02 has its CatchHandler @ 002aa27c */
  pDVar16 = operator_new(400);
                    /* try { // try from 002a7b06 to 002a7b0d has its CatchHandler @ 002aa185 */
  Drawable::Drawable(pDVar16);
  *(undefined ***)pDVar16 = &PTR__DrawableComposite_00707d08;
  auVar58 = ZEXT416(DAT_005d94c4) << 0x40;
  *(undefined1 (*) [16])(pDVar16 + 0x160) = auVar58;
  *(undefined8 *)(pDVar16 + 0x170) = DAT_005dd020;
  *(undefined8 *)(pDVar16 + 0x178) = 0;
  *(undefined8 *)(pDVar16 + 0x180) = 0;
  pDVar16[0x188] = (Drawable)0x0;
  *(undefined8 *)(pDVar16 + 0x180) = DAT_005dcf50;
                    /* try { // try from 002a7b5e to 002a7b6a has its CatchHandler @ 002aa27c */
  setCommonAttributes((long *)pDVar16,local_3c8);
  this_00 = *(XmlElement **)(*local_3c8 + 8);
  local_2d8 = pDVar16;
  local_2c0 = this_00;
  if (this_00 != (XmlElement *)0x0) {
    local_1a0 = local_3a0 + 0x28;
    uVar52 = 0;
    uVar53 = 0;
    local_a8 = ZEXT416((uint)DAT_005d94c0) << 0x40;
    uVar46 = extraout_RDX_01;
    do {
      if (**(char **)(this_00 + 0x18) == '\0') {
        lVar28 = *(long *)this_00;
        local_310 = this_00;
        plVar17 = XmlElement::getText(this_00);
                    /* try { // try from 002a7ca3 to 002a7cba has its CatchHandler @ 002aa2ba */
        juce::String::replace
                  ((String *)&local_378,plVar17,&DAT_005e50db,&DAT_005e3c3c,(byte *)0x0,param_9);
                    /* try { // try from 002a7cbb to 002a7cd4 has its CatchHandler @ 002aa2de */
        pDVar40 = (Drawable *)0x0;
        juce::String::replace
                  ((String *)&local_400,(long *)&local_378,&DAT_00658931,&DAT_005e3c3c,(byte *)0x0,
                   param_9);
        pDVar16 = local_378 + -0x10;
        if (pDVar16 != (Drawable *)&emptyString) {
          LOCK();
          uVar13 = *(uint *)pDVar16;
          *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
          UNLOCK();
          if (uVar13 == 0) {
            operator_delete__(pDVar16);
          }
        }
        if (local_278[0] != (Drawable)0x0) {
                    /* try { // try from 002a7cfd to 002a7d09 has its CatchHandler @ 002aa2b2 */
          juce::String::trimStart(&local_378,&local_400);
          pDVar16 = local_400;
          local_400 = local_378;
          local_378 = pDVar16;
          pDVar16 = pDVar16 + -0x10;
          if (pDVar16 != (Drawable *)&emptyString) {
            LOCK();
            uVar13 = *(uint *)pDVar16;
            *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
            UNLOCK();
            if (uVar13 == 0) {
              operator_delete__(pDVar16);
            }
          }
        }
        uVar13 = CharacterFunctions::
                 compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (*(byte **)(*local_3c8 + 0x18),(byte *)0x65a4a6);
        if (uVar13 == 0) {
          if (local_310 == local_2c0) {
                    /* try { // try from 002a7e88 to 002a7e94 has its CatchHandler @ 002aa240 */
            juce::String::trimStart(&local_378,&local_400);
          }
          else {
            if (lVar28 != 0) goto LAB_002a7d6c;
                    /* try { // try from 002a7dea to 002a7df6 has its CatchHandler @ 002aa127 */
            juce::String::trimEnd((long *)&local_378,(long *)&local_400);
          }
          pDVar16 = local_400;
          local_400 = local_378;
          local_378 = pDVar16;
          pDVar16 = pDVar16 + -0x10;
          if (pDVar16 != (Drawable *)&emptyString) {
            LOCK();
            uVar13 = *(uint *)pDVar16;
            *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
            UNLOCK();
            if (uVar13 == 0) {
              operator_delete__(pDVar16);
            }
          }
        }
LAB_002a7d6c:
        pDVar16 = local_400;
        local_378 = (Drawable *)0x0;
        fStack_370 = 0.0;
        fStack_36c = 0.0;
                    /* try { // try from 002a7d7c to 002a7d94 has its CatchHandler @ 002aa2c9 */
        StringArray::addTokens
                  ((StringArray *)&local_378,(byte *)local_400,&DAT_005e5e66,&DAT_005e2ee7);
        StringArray::removeEmptyStrings
                  ((Array<juce::String,juce::DummyCriticalSection,0> *)&local_378);
                    /* try { // try from 002a7d9d to 002a7dae has its CatchHandler @ 002aa310 */
        StringArray::joinIntoString((long *)&local_208,(long *)&local_378," ");
        DVar6 = *pDVar16;
        uVar13 = (uint)(byte)DVar6;
        if ((char)DVar6 < '\0') {
          uVar13 = (uint)(byte)DVar6;
          if (((byte)DVar6 & 0x40) == 0) {
            uVar13 = uVar13 & 0x7f;
          }
          else {
            uVar38 = uVar13 & 0x10 ^ 0x1f;
            if (((byte)DVar6 & 0x20) == 0) {
              uVar38 = 0x3f;
            }
            uVar13 = uVar38 & uVar13;
            if ((((((byte)pDVar16[1] & 0xffffffc0) == 0x80) &&
                 (uVar13 = (byte)pDVar16[1] & 0x3f | uVar13 << 6, ((byte)DVar6 & 0x20) != 0)) &&
                (((byte)pDVar16[2] & 0xffffffc0) == 0x80)) &&
               ((uVar13 = (byte)pDVar16[2] & 0x3f | uVar13 << 6,
                ((byte)DVar6 >> 5 & ((byte)DVar6 & 0x10) == 0) == 0 &&
                (((byte)pDVar16[3] & 0xffffffc0) == 0x80)))) {
              uVar13 = uVar13 << 6 | (byte)pDVar16[3] & 0x3f;
            }
          }
        }
        if (uVar13 == 0x20) {
                    /* try { // try from 002a7ee5 to 002a7efb has its CatchHandler @ 002aa283 */
          operator+((juce *)&local_270,&DAT_005e3c3c,(String *)&local_208);
          pDVar16 = local_208;
          local_208 = local_270;
          local_270 = pDVar16;
          pDVar16 = pDVar16 + -0x10;
          if (pDVar16 != (Drawable *)&emptyString) {
            LOCK();
            uVar13 = *(uint *)pDVar16;
            *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
            UNLOCK();
            if (uVar13 == 0) {
              operator_delete__(pDVar16);
            }
          }
          pDVar16 = local_400;
        }
        uVar14 = juce::String::endsWithChar((char *)pDVar16);
        if ((char)uVar14 != '\0') {
                    /* try { // try from 002a7f48 to 002a7f5d has its CatchHandler @ 002aa281 */
          juce::String::appendCharPointer((String *)&local_208,&DAT_005e3c3c,0x5e3c3d);
        }
        if (0 < (int)fStack_36c) {
          lVar28 = 0;
          do {
            piVar39 = (int *)(*(long *)(local_378 + lVar28 * 8) + -0x10);
            if (piVar39 != &emptyString) {
              LOCK();
              iVar26 = *piVar39;
              *piVar39 = *piVar39 + -1;
              UNLOCK();
              if (iVar26 == 0) {
                operator_delete__(piVar39);
              }
            }
            lVar28 = lVar28 + 1;
          } while (lVar28 < (int)fStack_36c);
          pDVar16 = local_400;
        }
        fStack_36c = 0.0;
        free(local_378);
        local_400 = local_208;
        pDVar29 = pDVar16 + -0x10;
        local_208 = pDVar16;
        if (pDVar29 != (Drawable *)&emptyString) {
          LOCK();
          uVar13 = *(uint *)pDVar29;
          *(uint *)pDVar29 = *(uint *)pDVar29 - 1;
          UNLOCK();
          if (uVar13 == 0) {
            operator_delete__(pDVar29);
          }
        }
        pDVar29 = local_400;
        uVar14 = juce::String::endsWithChar((char *)local_400);
        pDVar16 = local_278;
        pcVar22 = (char *)&local_2a8;
        do {
          *pDVar16 = SUB81(uVar14,0);
          pcVar22 = *(char **)pcVar22;
          pDVar16 = (Drawable *)(pcVar22 + 0x30);
        } while ((Drawable *)pcVar22 != (Drawable *)0x0);
        local_308 = (Drawable *)0x0;
        pDStack_300 = (Drawable *)0x0;
        local_2f8 = (Drawable *)0x0;
        sVar18 = strlen((char *)pDVar29);
        uVar46 = extraout_RDX_05;
        this_00 = local_310;
        if (sVar18 != 0) {
          local_3c0 = pDVar29 + sVar18;
          pDVar41 = (Drawable *)0x0;
          pDVar36 = (Drawable *)0x0;
          pDVar16 = local_3c0;
          do {
            while( true ) {
              this_01 = (StringLayoutState *)&local_2a8;
              auVar70 = StringLayoutState::popCoords(this_01);
              do {
                if ((*(uint *)(this_01 + 0x1c) | *(uint *)(this_01 + 0x2c)) != 0) {
                  pDVar16 = pDVar29 + 1;
                  DVar6 = *pDVar29;
                  pcVar22 = (char *)(ulong)CONCAT31((int3)((*(uint *)(this_01 + 0x1c) |
                                                           *(uint *)(this_01 + 0x2c)) >> 8),DVar6);
                  if (-1 < (char)DVar6) goto LAB_002a8101;
                  if (((byte)DVar6 & 0x40) != 0) {
                    if (((byte)DVar6 & 0x20) == 0) {
                      pDVar16 = pDVar29 + 2;
                    }
                    else {
                      pcVar22 = (char *)(ulong)((byte)DVar6 & 0x10);
                      pDVar16 = pDVar29 + (4 - (ulong)(((byte)DVar6 & 0x10) == 0));
                    }
                  }
                  goto LAB_002a810f;
                }
                this_01 = *(StringLayoutState **)this_01;
              } while (this_01 != (StringLayoutState *)0x0);
              if (pDVar29 == (Drawable *)0x0) break;
              pcVar22 = (char *)(ulong)(byte)*pDVar29;
LAB_002a8101:
              puVar15 = (undefined4 *)&DAT_0061ac58;
              if ((char)pcVar22 != '\0') {
LAB_002a810f:
                local_3f8 = (undefined1  [8])auVar70._8_8_;
                local_3d8._0_4_ = auVar70._0_4_;
                local_3d8._4_4_ = auVar70._4_4_;
                sVar18 = (long)pDVar16 - (long)pDVar29;
                uVar14 = sVar18 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002a8131 to 002a8135 has its CatchHandler @ 002aa3f2 */
                puVar19 = operator_new__(uVar14 + 0x17);
                LOCK();
                *puVar19 = 0;
                UNLOCK();
                *(ulong *)(puVar19 + 2) = uVar14;
                puVar15 = puVar19 + 4;
                memcpy(puVar15,pDVar29,sVar18);
                *(undefined1 *)((long)puVar19 + sVar18 + 0x10) = 0;
                auVar70._4_4_ = local_3d8._4_4_;
                auVar70._0_4_ = (float)local_3d8;
                auVar70._8_8_ = local_3f8;
                pDVar36 = pDStack_300;
                pDVar41 = local_2f8;
              }
              pDVar29 = pDVar16;
              if (pDVar36 != pDVar41) goto LAB_002a8090;
LAB_002a818a:
              pDVar24 = local_308;
              fVar45 = local_3d8._4_4_;
              fVar63 = (float)local_3d8;
              auVar23 = auVar70._8_8_;
              lVar28 = (long)pDVar41 - (long)local_308;
              local_3d8._0_4_ = SUB84(puVar15,0);
              local_3d8._4_4_ = (float)((ulong)puVar15 >> 0x20);
              if (lVar28 == 0x7ffffffffffffff8) {
                    /* try { // try from 002aa08d to 002aa09d has its CatchHandler @ 002aa3b6 */
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              pcVar22 = (char *)(lVar28 >> 3);
              uVar35 = (long)pcVar22 * -0x5555555555555555;
              uVar14 = uVar35;
              if (lVar28 == 0) {
                uVar14 = 1;
              }
              uVar30 = uVar14 + uVar35;
              if (0x555555555555555 < uVar30) {
                uVar30 = 0x555555555555555;
              }
              if (CARRY8(uVar14,uVar35)) {
                uVar30 = 0x555555555555555;
              }
              if (uVar30 == 0) {
                pDVar20 = (Drawable *)0x0;
                local_3d8._0_4_ = fVar63;
                local_3d8._4_4_ = fVar45;
              }
              else {
                local_3f8 = auVar23;
                local_380 = pDVar29;
                    /* try { // try from 002a8211 to 002a8215 has its CatchHandler @ 002aa375 */
                pDVar20 = operator_new(uVar30 * 0x18);
                puVar15 = (undefined4 *)CONCAT44(local_3d8._4_4_,(float)local_3d8);
                auVar23 = local_3f8;
                pDVar29 = local_380;
              }
              pDVar16 = local_3c0;
              *(undefined1 (*) [8])(pDVar20 + (long)pcVar22 * 8) = auVar23;
              *(long *)(pDVar20 + (long)pcVar22 * 8 + 8) = auVar70._0_8_;
              *(undefined4 **)(pDVar20 + (long)pcVar22 * 8 + 0x10) = puVar15;
              pDVar36 = pDVar20;
              if (pDVar24 != pDVar41) {
                pDVar21 = pDVar24;
                do {
                  uVar46 = *(undefined8 *)(pDVar21 + 8);
                  *(undefined8 *)pDVar36 = *(undefined8 *)pDVar21;
                  *(undefined8 *)(pDVar36 + 8) = uVar46;
                  pcVar22 = *(char **)(pDVar21 + 0x10);
                  *(char **)(pDVar36 + 0x10) = pcVar22;
                  *(undefined1 **)(pDVar21 + 0x10) = &DAT_0061ac58;
                  pDVar36 = pDVar36 + 0x18;
                  pDVar21 = pDVar21 + 0x18;
                } while (pDVar21 != pDVar41);
              }
              pDVar36 = pDVar36 + 0x18;
              if (pDVar24 != (Drawable *)0x0) {
                operator_delete(pDVar24);
              }
              pDVar41 = pDVar20 + uVar30 * 0x18;
              local_308 = pDVar20;
              pDStack_300 = pDVar36;
              local_2f8 = pDVar41;
              if (pDVar29 == pDVar16) goto LAB_002a8320;
            }
            puVar15 = (undefined4 *)&DAT_0061ac58;
            pcVar22 = (char *)0x0;
            pDVar29 = pDVar16;
            if (pDVar36 == pDVar41) goto LAB_002a818a;
LAB_002a8090:
            *(long *)pDVar36 = auVar70._8_8_;
            *(long *)(pDVar36 + 8) = auVar70._0_8_;
            *(undefined4 **)(pDVar36 + 0x10) = puVar15;
            pDVar36 = pDVar36 + 0x18;
            pDVar16 = local_3c0;
            pDStack_300 = pDVar36;
          } while (pDVar29 != local_3c0);
LAB_002a8320:
          pDVar16 = local_308;
          local_2b0 = pDStack_300;
          if (local_308 == pDStack_300) {
            pDVar16 = pDStack_300;
          }
          else {
            do {
                    /* try { // try from 002a8340 to 002a8349 has its CatchHandler @ 002aa5a5 */
              pDVar29 = operator_new(0x1a8);
                    /* try { // try from 002a834d to 002a8354 has its CatchHandler @ 002aa523 */
              Drawable::Drawable(pDVar29);
              *(undefined ***)pDVar29 = &PTR__DrawableText_00708428;
              *(undefined8 *)(pDVar29 + 0x160) = 0;
              *(undefined8 *)(pDVar29 + 0x168) = 0;
              *(undefined8 *)(pDVar29 + 0x170) = 0;
                    /* try { // try from 002a8378 to 002a8391 has its CatchHandler @ 002aa594 */
              FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_270,0);
                    /* try { // try from 002a8392 to 002a83a7 has its CatchHandler @ 002aa528 */
              Component::withDefaultMetrics(&local_378,(long)pDVar29,(long *)&local_270);
                    /* try { // try from 002a83b0 to 002a83bc has its CatchHandler @ 002aa50c */
              local_3f8 = (undefined1  [8])(pDVar29 + 0x180);
              Font::Font((Font *)(pDVar29 + 0x180),&local_378);
              if (pvStack_348 != (void *)0x0) {
                operator_delete(pvStack_348);
              }
              uVar46 = local_360._8_8_;
              plVar17 = (long *)local_360._0_8_;
              if (local_360._0_8_ != local_360._8_8_) {
                do {
                  piVar39 = (int *)(*plVar17 + -0x10);
                  if (piVar39 != &emptyString) {
                    LOCK();
                    iVar26 = *piVar39;
                    *piVar39 = *piVar39 + -1;
                    UNLOCK();
                    if (iVar26 == 0) {
                      operator_delete__(piVar39);
                    }
                  }
                  plVar17 = plVar17 + 1;
                } while (plVar17 != (long *)uVar46);
              }
              if ((long *)local_360._0_8_ != (long *)0x0) {
                operator_delete((void *)local_360._0_8_);
              }
              plVar17 = (long *)CONCAT44(fStack_364,fStack_368);
              if (plVar17 != (long *)0x0) {
                LOCK();
                plVar7 = plVar17 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)(*plVar17 + 8))();
                }
              }
              piVar39 = (int *)(CONCAT44(fStack_36c,fStack_370) + -0x10);
              if (piVar39 == &emptyString) {
LAB_002a8431:
                pDVar41 = local_378 + -0x10;
                if (pDVar41 != (Drawable *)&emptyString) {
LAB_002a8446:
                  LOCK();
                  uVar13 = *(uint *)pDVar41;
                  *(uint *)pDVar41 = *(uint *)pDVar41 - 1;
                  UNLOCK();
                  if (uVar13 == 0) {
                    operator_delete__(pDVar41);
                  }
                }
              }
              else {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 != 0) goto LAB_002a8431;
                operator_delete__(piVar39);
                pDVar41 = local_378 + -0x10;
                if (pDVar41 != (Drawable *)&emptyString) goto LAB_002a8446;
              }
              plVar17 = local_258;
              plVar7 = local_250;
              if (local_240 != (void *)0x0) {
                operator_delete(local_240);
                plVar17 = local_258;
                plVar7 = local_250;
              }
              for (; plVar34 = local_250, plVar17 != local_250; plVar17 = plVar17 + 1) {
                piVar39 = (int *)(*plVar17 + -0x10);
                local_250 = plVar7;
                if (piVar39 != &emptyString) {
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
                plVar7 = local_250;
                local_250 = plVar34;
              }
              local_250 = plVar7;
              if (local_258 != (long *)0x0) {
                operator_delete(local_258);
              }
              if (local_260 != (Drawable *)0x0) {
                LOCK();
                plVar17 = (long *)((long)local_260 + 8);
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)(*(long *)local_260 + 8))();
                }
              }
              piVar39 = (int *)((long)local_268 + -0x10);
              if (piVar39 == &emptyString) {
LAB_002a854c:
                pDVar41 = local_270 + -0x10;
                if (pDVar41 != (Drawable *)&emptyString) {
LAB_002a8561:
                  LOCK();
                  uVar13 = *(uint *)pDVar41;
                  *(uint *)pDVar41 = *(uint *)pDVar41 - 1;
                  UNLOCK();
                  if (uVar13 == 0) {
                    operator_delete__(pDVar41);
                  }
                }
              }
              else {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 != 0) goto LAB_002a854c;
                operator_delete__(piVar39);
                pDVar41 = local_270 + -0x10;
                if (pDVar41 != (Drawable *)&emptyString) goto LAB_002a8561;
              }
                    /* try { // try from 002a85f0 to 002a8606 has its CatchHandler @ 002aa53a */
              local_3c0 = pDVar29;
              FontOptions::FontOptions(DAT_005d9064,(FontOptions *)&local_110,0);
                    /* try { // try from 002a8607 to 002a8614 has its CatchHandler @ 002aa51e */
              Component::withDefaultMetrics(&local_208,(long)pDVar29,(long *)&local_110);
              this_02 = (Font *)(pDVar29 + 0x188);
                    /* try { // try from 002a8622 to 002a8629 has its CatchHandler @ 002aa53f */
              Font::Font(this_02,(long *)&local_208);
              plVar17 = local_1f0;
              plVar7 = local_1e8;
              if (local_1d8 != (void *)0x0) {
                operator_delete(local_1d8);
                plVar17 = local_1f0;
                plVar7 = local_1e8;
              }
              for (; plVar34 = local_1e8, plVar17 != local_1e8; plVar17 = plVar17 + 1) {
                piVar39 = (int *)(*plVar17 + -0x10);
                local_1e8 = plVar7;
                if (piVar39 != &emptyString) {
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
                plVar7 = local_1e8;
                local_1e8 = plVar34;
              }
              local_1e8 = plVar7;
              if (local_1f0 != (long *)0x0) {
                operator_delete(local_1f0);
              }
              if (local_1f8 != (long *)0x0) {
                LOCK();
                plVar17 = local_1f8 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)(*local_1f8 + 8))();
                }
              }
              piVar39 = (int *)(local_200 + -0x10);
              if (piVar39 == &emptyString) {
LAB_002a8696:
                pDVar41 = local_208 + -0x10;
                if (pDVar41 != (Drawable *)&emptyString) {
LAB_002a86ab:
                  LOCK();
                  uVar13 = *(uint *)pDVar41;
                  *(uint *)pDVar41 = *(uint *)pDVar41 - 1;
                  UNLOCK();
                  if (uVar13 == 0) {
                    operator_delete__(pDVar41);
                  }
                }
              }
              else {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 != 0) goto LAB_002a8696;
                operator_delete__(piVar39);
                pDVar41 = local_208 + -0x10;
                if (pDVar41 != (Drawable *)&emptyString) goto LAB_002a86ab;
              }
              plVar17 = local_f8;
              plVar7 = local_f0;
              if (local_e0 != (void *)0x0) {
                operator_delete(local_e0);
                plVar17 = local_f8;
                plVar7 = local_f0;
              }
              for (; plVar34 = local_f0, plVar17 != local_f0; plVar17 = plVar17 + 1) {
                piVar39 = (int *)(*plVar17 + -0x10);
                local_f0 = plVar7;
                if (piVar39 != &emptyString) {
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
                plVar7 = local_f0;
                local_f0 = plVar34;
              }
              local_f0 = plVar7;
              if (local_f8 != (long *)0x0) {
                operator_delete(local_f8);
              }
              if (local_100 != (long *)0x0) {
                LOCK();
                plVar17 = local_100 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)(*local_100 + 8))();
                }
              }
              piVar39 = (int *)(local_108 + -0x10);
              if (piVar39 == &emptyString) {
LAB_002a87b4:
                piVar39 = (int *)(local_110 + -0x10);
                if (piVar39 != &emptyString) {
LAB_002a87c9:
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
              }
              else {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 != 0) goto LAB_002a87b4;
                operator_delete__(piVar39);
                piVar39 = (int *)(local_110 + -0x10);
                if (piVar39 != &emptyString) goto LAB_002a87c9;
              }
              *(undefined1 **)(pDVar29 + 400) = &DAT_0061ac58;
              pDVar29[0x198] = (Drawable)0x0;
              *(uint *)(pDVar29 + 0x199) = _ZN4juce7ColoursL5blackE_14;
              *(undefined4 *)(pDVar29 + 0x1a0) = 0x21;
              if ((((*(float *)(pDVar29 + 0x160) != DAT_005d9058) ||
                   (*(float *)(pDVar29 + 0x164) != DAT_005d9058)) ||
                  ((NAN(*(float *)(pDVar29 + 0x164)) || NAN(DAT_005d9058) ||
                   (((*(float *)(pDVar29 + 0x168) != DAT_005d94c0 ||
                     (NAN(*(float *)(pDVar29 + 0x168)) || NAN(DAT_005d94c0))) ||
                    (*(float *)(pDVar29 + 0x16c) != DAT_005d9058)))))) ||
                 ((*(float *)(pDVar29 + 0x170) != DAT_005d9058 ||
                  (NAN(*(float *)(pDVar29 + 0x170)) || NAN(DAT_005d9058))))) {
LAB_002a8910:
                *(undefined8 *)(pDVar29 + 0x160) = local_a8._0_8_;
                *(undefined8 *)(pDVar29 + 0x168) = local_a8._8_8_;
                *(undefined8 *)(pDVar29 + 0x170) = DAT_005dd200;
                    /* try { // try from 002a8933 to 002a893a has its CatchHandler @ 002aa3ea */
                DrawableText::refreshBounds((DrawableText *)pDVar29);
              }
              else if ((*(float *)(pDVar29 + 0x174) != DAT_005d98f4) ||
                      (NAN(*(float *)(pDVar29 + 0x174)) || NAN(DAT_005d98f4))) goto LAB_002a8910;
                    /* try { // try from 002a893b to 002a894c has its CatchHandler @ 002aa4ac */
              FontOptions::FontOptions(DAT_005d906c,(FontOptions *)&local_98,0);
              local_3d8 = this_02;
                    /* try { // try from 002a894d to 002a895f has its CatchHandler @ 002aa4b1 */
              Component::withDefaultMetrics(&local_188,(long)pDVar29,(long *)&local_98);
                    /* try { // try from 002a8960 to 002a896f has its CatchHandler @ 002aa49a */
              Font::Font((Font *)&local_2c8,(long *)&local_188);
              plVar7 = local_2c8;
              plVar17 = *(long **)local_3f8;
              if (plVar17 != local_2c8) {
                    /* try { // try from 002a898d to 002a8991 has its CatchHandler @ 002aa3e2 */
                uVar14 = FontOptions::operator==((FontOptions *)(plVar17 + 3),local_2c8 + 3);
                plVar17 = plVar7;
                if ((char)uVar14 == '\0') {
                  if (plVar7 != (long *)0x0) {
                    LOCK();
                    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                    UNLOCK();
                  }
                  plVar17 = *(long **)local_3f8;
                  *(long **)local_3f8 = plVar7;
                  uVar46 = extraout_RDX_06;
                  if (plVar17 != (long *)0x0) {
                    LOCK();
                    plVar7 = plVar17 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      (**(code **)(*plVar17 + 8))();
                      uVar46 = extraout_RDX_07;
                    }
                  }
                  auVar23 = local_3f8;
                  pSVar42 = *(SharedFontInternal **)local_3f8;
                  fVar63 = *(float *)(pSVar42 + 100);
                  if (fVar63 <= DAT_005d9058) {
                    local_380 = (Drawable *)
                                CONCAT44(local_380._4_4_,*(undefined4 *)(pSVar42 + 0x68));
                    /* try { // try from 002a89fb to 002a8a02 has its CatchHandler @ 002aa33e */
                    uVar46 = Font::SharedFontInternal::getAscentDescent
                                       (pSVar42,(long *)local_3f8,uVar46,pcVar22,(uint *)pDVar40,
                                        (ulong)param_9);
                    fVar63 = local_380._0_4_ * ((float)((ulong)uVar46 >> 0x20) + (float)uVar46);
                    pSVar42 = *(SharedFontInternal **)auVar23;
                  }
                  *(float *)(pDVar29 + 0x178) = fVar63;
                  *(undefined4 *)(pDVar29 + 0x17c) = *(undefined4 *)(pSVar42 + 0x70);
                    /* try { // try from 002a8a37 to 002a8a3e has its CatchHandler @ 002aa346 */
                  DrawableText::refreshBounds((DrawableText *)pDVar29);
                  plVar17 = local_2c8;
                }
              }
              if (plVar17 != (long *)0x0) {
                LOCK();
                plVar7 = plVar17 + 1;
                *(int *)plVar7 = (int)*plVar7 + -1;
                UNLOCK();
                if ((int)*plVar7 == 0) {
                  (**(code **)(*plVar17 + 8))();
                }
              }
              plVar17 = local_170;
              plVar7 = local_168;
              if (local_158 != (void *)0x0) {
                operator_delete(local_158);
                plVar17 = local_170;
                plVar7 = local_168;
              }
              for (; plVar34 = local_168, plVar17 != local_168; plVar17 = plVar17 + 1) {
                piVar39 = (int *)(*plVar17 + -0x10);
                local_168 = plVar7;
                if (piVar39 != &emptyString) {
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
                plVar7 = local_168;
                local_168 = plVar34;
              }
              local_168 = plVar7;
              if (local_170 != (long *)0x0) {
                operator_delete(local_170);
              }
              if (local_178 != (long *)0x0) {
                LOCK();
                plVar17 = local_178 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)(*local_178 + 8))();
                }
              }
              piVar39 = (int *)(local_180 + -0x10);
              if (piVar39 == &emptyString) {
LAB_002a8ac5:
                piVar39 = (int *)(local_188 + -0x10);
                if (piVar39 != &emptyString) {
LAB_002a8ada:
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
              }
              else {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 != 0) goto LAB_002a8ac5;
                operator_delete__(piVar39);
                piVar39 = (int *)(local_188 + -0x10);
                if (piVar39 != &emptyString) goto LAB_002a8ada;
              }
              plVar17 = local_80;
              plVar7 = local_78;
              if (local_68 != (void *)0x0) {
                operator_delete(local_68);
                plVar17 = local_80;
                plVar7 = local_78;
              }
              for (; plVar34 = local_78, plVar17 != local_78; plVar17 = plVar17 + 1) {
                piVar39 = (int *)(*plVar17 + -0x10);
                local_78 = plVar7;
                if (piVar39 != &emptyString) {
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
                plVar7 = local_78;
                local_78 = plVar34;
              }
              local_78 = plVar7;
              if (local_80 != (long *)0x0) {
                operator_delete(local_80);
              }
              if (local_88 != (long *)0x0) {
                LOCK();
                plVar17 = local_88 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
                  (**(code **)(*local_88 + 8))();
                }
              }
              piVar39 = (int *)(local_90 + -0x10);
              if (piVar39 == &emptyString) {
LAB_002a8bd4:
                piVar39 = local_98 + -4;
                if (piVar39 != &emptyString) {
LAB_002a8be9:
                  LOCK();
                  iVar26 = *piVar39;
                  *piVar39 = *piVar39 + -1;
                  UNLOCK();
                  if (iVar26 == 0) {
                    operator_delete__(piVar39);
                  }
                }
              }
              else {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 != 0) goto LAB_002a8bd4;
                operator_delete__(piVar39);
                piVar39 = local_98 + -4;
                if (piVar39 != &emptyString) goto LAB_002a8be9;
              }
                    /* try { // try from 002a8c74 to 002a8c93 has its CatchHandler @ 002aa5a5 */
              (**(code **)(*(long *)pDVar29 + 0x60))(pDVar29,1);
              Component::addChildComponent((Component *)local_2d8,(Component *)pDVar29,0xffffffff);
              DVar6 = pDVar29[0x198];
              pDVar29[0x198] = (Drawable)0x1;
              local_380 = pDVar16;
              if (DVar6 != (Drawable)0x1) {
                local_3e8._0_4_ =
                     hypotf((float)*(undefined8 *)(pDVar29 + 0x160) -
                            (float)*(undefined8 *)(pDVar29 + 0x168),
                            (float)((ulong)*(undefined8 *)(pDVar29 + 0x160) >> 0x20) -
                            (float)((ulong)*(undefined8 *)(pDVar29 + 0x168) >> 0x20));
                local_3e8._4_4_ = extraout_XMM0_Db;
                uStack_3e0._0_4_ = extraout_XMM0_Dc;
                uStack_3e0._4_4_ = extraout_XMM0_Dd;
                fVar45 = hypotf((float)*(undefined8 *)(pDVar29 + 0x160) -
                                (float)*(undefined8 *)(pDVar29 + 0x170),
                                (float)((ulong)*(undefined8 *)(pDVar29 + 0x160) >> 0x20) -
                                (float)((ulong)*(undefined8 *)(pDVar29 + 0x170) >> 0x20));
                fVar63 = *(float *)(pDVar29 + 0x178);
                _local_3b8 = ZEXT416(*(uint *)(pDVar29 + 0x17c));
                lVar28 = *(long *)(pDVar29 + 0x180);
                if (lVar28 != 0) {
                  LOCK();
                  *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
                  UNLOCK();
                }
                plVar17 = *(long **)this_02;
                *(long *)this_02 = lVar28;
                if (plVar17 != (long *)0x0) {
                  LOCK();
                  plVar7 = plVar17 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    local_398 = (ulong)(uint)fVar63;
                    uStack_390 = 0;
                    local_2e8 = CONCAT44(extraout_var._0_4_,fVar45);
                    uStack_2e0 = extraout_var._4_8_;
                    (**(code **)(*plVar17 + 8))();
                    fVar45 = (float)local_2e8;
                    fVar63 = (float)local_398;
                  }
                }
                if (fVar45 <= DAT_00652618) {
                  fVar45 = DAT_00652618;
                }
                if (fVar63 <= fVar45) {
                  fVar45 = fVar63;
                }
                    /* try { // try from 002a8d81 to 002a8dcb has its CatchHandler @ 002aa5a5 */
                Font::setHeight((float)(-(uint)(fVar63 < DAT_00652618) & (uint)DAT_00652618 |
                                       ~-(uint)(fVar63 < DAT_00652618) & (uint)fVar45),this_02);
                uVar52 = 0;
                uVar53 = 0;
                uVar54 = 0;
                fVar63 = (float)local_3e8._0_4_;
                if ((float)local_3e8._0_4_ <= DAT_00652618) {
                  fVar63 = DAT_00652618;
                }
                if ((float)local_3b8._0_4_ <= fVar63) {
                  fVar63 = (float)local_3b8._0_4_;
                }
                fVar45 = DAT_00652618;
                Font::setHorizontalScale
                          (-(uint)((float)local_3b8._0_4_ < DAT_00652618) & (uint)DAT_00652618 |
                           ~-(uint)((float)local_3b8._0_4_ < DAT_00652618) & (uint)fVar63,this_02);
                local_3e8 = (undefined1  [8])(**(code **)(*(long *)pDVar29 + 0x1a8))(pDVar29);
                auVar59._8_4_ = (int)extraout_XMM0_Qb;
                auVar59._0_8_ = local_3e8;
                auVar59._12_4_ = (int)((ulong)extraout_XMM0_Qb >> 0x20);
                local_398 = CONCAT44(uVar52,fVar45);
                uStack_390 = CONCAT44(uVar54,uVar53);
                uStack_3e0 = extraout_XMM0_Qb;
                if (*(long *)(pDVar29 + 0x30) == 0) {
                  uVar46 = 0;
                  iVar26 = 0;
                }
                else {
                  uVar46 = 0;
                  lVar28 = __dynamic_cast(*(long *)(pDVar29 + 0x30),&Component::typeinfo,
                                          &DrawableComposite::typeinfo,0);
                  iVar26 = 0;
                  auVar59 = _local_3e8;
                  if (lVar28 != 0) {
                    uVar46 = *(undefined8 *)(lVar28 + 0xf0);
                    iVar26 = (int)((ulong)uVar46 >> 0x20);
                  }
                }
                local_3b8 = (undefined1  [8])uVar46;
                iVar32 = -0x80000000;
                iVar25 = -0x80000000;
                if (DAT_00653430 < auVar59._0_4_) {
                  fVar63 = floorf(auVar59._0_4_);
                  iVar25 = (int)fVar63;
                  auVar59 = _local_3e8;
                }
                if (DAT_00653430 < auVar59._4_4_) {
                  fVar63 = floorf(auVar59._4_4_);
                  iVar32 = (int)fVar63;
                  auVar59 = _local_3e8;
                }
                fVar45 = auVar59._0_4_ + (float)local_398;
                fVar63 = auVar59._4_4_ + local_398._4_4_;
                iVar44 = 0x7fffffff;
                iVar43 = 0x7fffffff;
                if (fVar45 < DAT_00653434) {
                  local_3e8._4_4_ = fVar63;
                  local_3e8._0_4_ = fVar45;
                  uStack_3e0._0_4_ = auVar59._8_4_ + (float)uStack_390;
                  uStack_3e0._4_4_ = auVar59._12_4_ + uStack_390._4_4_;
                  fVar63 = ceilf(fVar45);
                  iVar43 = (int)fVar63;
                  fVar63 = (float)local_3e8._4_4_;
                }
                if (fVar63 < DAT_00653434) {
                  fVar63 = ceilf(fVar63);
                  iVar44 = (int)fVar63;
                }
                pDVar29 = local_3c0;
                *(ulong *)(local_3c0 + 0xf0) = CONCAT44(-iVar32,-iVar25);
                    /* try { // try from 002a8ee0 to 002a8f13 has its CatchHandler @ 002aa5a5 */
                pDVar40 = (Drawable *)(ulong)(uint)(iVar44 - iVar32);
                Component::setBounds
                          ((Component *)local_3c0,local_3b8._0_4_ + iVar25,iVar26 + iVar32,
                           iVar43 - iVar25,iVar44 - iVar32);
                pDVar16 = local_380;
                this_02 = local_3d8;
                pcVar22 = (char *)0x1;
                Component::internalRepaintUnchecked
                          ((long)pDVar29,0,*(ulong *)(pDVar29 + 0x40),'\x01');
              }
              pbVar31 = *(byte **)(pDVar16 + 0x10);
              if (*(byte **)(pDVar29 + 400) != pbVar31) {
                uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   (*(byte **)(pDVar29 + 400),pbVar31);
                if (uVar13 != 0) {
                  pbVar1 = pbVar31 + -0x10;
                  if (pbVar1 != (byte *)&emptyString) {
                    LOCK();
                    *(int *)pbVar1 = *(int *)pbVar1 + 1;
                    UNLOCK();
                    pbVar31 = *(byte **)(pDVar16 + 0x10);
                  }
                  LOCK();
                  lVar28 = *(long *)(pDVar29 + 400);
                  *(byte **)(pDVar29 + 400) = pbVar31;
                  UNLOCK();
                  piVar39 = (int *)(lVar28 + -0x10);
                  if (piVar39 != &emptyString) {
                    LOCK();
                    iVar26 = *piVar39;
                    *piVar39 = *piVar39 + -1;
                    UNLOCK();
                    if (iVar26 == 0) {
                      operator_delete__(piVar39);
                    }
                  }
                  local_3e8._0_4_ =
                       hypotf((float)*(long *)(pDVar29 + 0x160) - (float)*(long *)(pDVar29 + 0x168),
                              (float)((ulong)*(long *)(pDVar29 + 0x160) >> 0x20) -
                              (float)((ulong)*(long *)(pDVar29 + 0x168) >> 0x20));
                  local_3e8._4_4_ = extraout_XMM0_Db_00;
                  uStack_3e0._0_4_ = extraout_XMM0_Dc_00;
                  uStack_3e0._4_4_ = extraout_XMM0_Dd_00;
                  fVar45 = hypotf((float)*(long *)(pDVar29 + 0x160) -
                                  (float)*(long *)(pDVar29 + 0x170),
                                  (float)((ulong)*(long *)(pDVar29 + 0x160) >> 0x20) -
                                  (float)((ulong)*(long *)(pDVar29 + 0x170) >> 0x20));
                  fVar63 = *(float *)(pDVar29 + 0x178);
                  _local_3b8 = ZEXT416(*(uint *)(pDVar29 + 0x17c));
                  lVar28 = *(long *)(pDVar29 + 0x180);
                  if (lVar28 != 0) {
                    LOCK();
                    *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
                    UNLOCK();
                  }
                  plVar17 = *(long **)this_02;
                  *(long *)this_02 = lVar28;
                  if (plVar17 != (long *)0x0) {
                    LOCK();
                    plVar7 = plVar17 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      local_398 = (ulong)(uint)fVar63;
                      uStack_390 = 0;
                      local_2e8 = CONCAT44(extraout_var_00._0_4_,fVar45);
                      uStack_2e0 = extraout_var_00._4_8_;
                      (**(code **)(*plVar17 + 8))();
                      fVar45 = (float)local_2e8;
                      fVar63 = (float)local_398;
                    }
                  }
                  if (fVar45 <= DAT_00652618) {
                    fVar45 = DAT_00652618;
                  }
                  if (fVar63 <= fVar45) {
                    fVar45 = fVar63;
                  }
                    /* try { // try from 002a903c to 002a9086 has its CatchHandler @ 002aa5a5 */
                  Font::setHeight((float)(-(uint)(fVar63 < DAT_00652618) & (uint)DAT_00652618 |
                                         ~-(uint)(fVar63 < DAT_00652618) & (uint)fVar45),this_02);
                  uVar52 = 0;
                  uVar53 = 0;
                  uVar54 = 0;
                  fVar63 = (float)local_3e8._0_4_;
                  if ((float)local_3e8._0_4_ <= DAT_00652618) {
                    fVar63 = DAT_00652618;
                  }
                  if ((float)local_3b8._0_4_ <= fVar63) {
                    fVar63 = (float)local_3b8._0_4_;
                  }
                  fVar45 = DAT_00652618;
                  Font::setHorizontalScale
                            (-(uint)((float)local_3b8._0_4_ < DAT_00652618) & (uint)DAT_00652618 |
                             ~-(uint)((float)local_3b8._0_4_ < DAT_00652618) & (uint)fVar63,this_02)
                  ;
                  local_3e8 = (undefined1  [8])(**(code **)(*(long *)pDVar29 + 0x1a8))(pDVar29);
                  auVar60._8_4_ = (int)extraout_XMM0_Qb_00;
                  auVar60._0_8_ = local_3e8;
                  auVar60._12_4_ = (int)((ulong)extraout_XMM0_Qb_00 >> 0x20);
                  local_398 = CONCAT44(uVar52,fVar45);
                  uStack_390 = CONCAT44(uVar54,uVar53);
                  uStack_3e0 = extraout_XMM0_Qb_00;
                  if (*(long *)(pDVar29 + 0x30) == 0) {
                    uVar14 = 0;
                    uVar35 = 0;
                  }
                  else {
                    uVar14 = 0;
                    lVar28 = __dynamic_cast(*(long *)(pDVar29 + 0x30),&Component::typeinfo,
                                            &DrawableComposite::typeinfo,0);
                    uVar35 = 0;
                    auVar60 = _local_3e8;
                    if (lVar28 != 0) {
                      uVar14 = *(ulong *)(lVar28 + 0xf0);
                      uVar35 = uVar14 >> 0x20;
                    }
                  }
                  local_3b8 = (undefined1  [8])uVar35;
                  iVar25 = -0x80000000;
                  iVar26 = -0x80000000;
                  if (DAT_00653430 < auVar60._0_4_) {
                    fVar63 = floorf(auVar60._0_4_);
                    iVar26 = (int)fVar63;
                    auVar60 = _local_3e8;
                  }
                  if (DAT_00653430 < auVar60._4_4_) {
                    fVar63 = floorf(auVar60._4_4_);
                    iVar25 = (int)fVar63;
                    auVar60 = _local_3e8;
                  }
                  fVar45 = auVar60._0_4_ + (float)local_398;
                  fVar63 = auVar60._4_4_ + local_398._4_4_;
                  iVar43 = 0x7fffffff;
                  iVar32 = 0x7fffffff;
                  if (fVar45 < DAT_00653434) {
                    local_3e8._4_4_ = fVar63;
                    local_3e8._0_4_ = fVar45;
                    uStack_3e0._0_4_ = auVar60._8_4_ + (float)uStack_390;
                    uStack_3e0._4_4_ = auVar60._12_4_ + uStack_390._4_4_;
                    fVar63 = ceilf(fVar45);
                    iVar32 = (int)fVar63;
                    fVar63 = (float)local_3e8._4_4_;
                  }
                  if (fVar63 < DAT_00653434) {
                    fVar63 = ceilf(fVar63);
                    iVar43 = (int)fVar63;
                  }
                  pDVar29 = local_3c0;
                  *(ulong *)(local_3c0 + 0xf0) = CONCAT44(-iVar25,-iVar26);
                    /* try { // try from 002a919f to 002a91cf has its CatchHandler @ 002aa5a5 */
                  pDVar40 = (Drawable *)(ulong)(uint)(iVar43 - iVar25);
                  Component::setBounds
                            ((Component *)local_3c0,(int)uVar14 + iVar26,local_3b8._0_4_ + iVar25,
                             iVar32 - iVar26,iVar43 - iVar25);
                  pDVar16 = local_380;
                  this_02 = local_3d8;
                  pcVar22 = (char *)0x1;
                  Component::internalRepaintUnchecked
                            ((long)pDVar29,0,*(ulong *)(pDVar29 + 0x40),'\x01');
                }
              }
              if (*(Drawable **)local_3f8 != local_408) {
                    /* try { // try from 002a91ed to 002a91f1 has its CatchHandler @ 002aa3da */
                uVar14 = FontOptions::operator==
                                   ((FontOptions *)(*(Drawable **)local_3f8 + 0x18),
                                    (undefined8 *)(local_408 + 0x18));
                if ((char)uVar14 == '\0') {
                  if (local_408 != (Drawable *)0x0) {
                    LOCK();
                    *(uint *)(local_408 + 8) = *(uint *)(local_408 + 8) + 1;
                    UNLOCK();
                  }
                  auVar23 = local_3f8;
                  plVar17 = *(long **)local_3f8;
                  *(Drawable **)local_3f8 = local_408;
                  uVar46 = extraout_RDX_08;
                  if (plVar17 != (long *)0x0) {
                    LOCK();
                    plVar7 = plVar17 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      (**(code **)(*plVar17 + 8))();
                      uVar46 = extraout_RDX_09;
                    }
                  }
                  pSVar42 = *(SharedFontInternal **)auVar23;
                  fVar63 = *(float *)(pSVar42 + 100);
                  if (fVar63 <= DAT_005d9058) {
                    local_3e8._0_4_ = *(undefined4 *)(pSVar42 + 0x68);
                    /* try { // try from 002a9241 to 002a9248 has its CatchHandler @ 002aa336 */
                    uVar46 = Font::SharedFontInternal::getAscentDescent
                                       (pSVar42,(long *)auVar23,uVar46,pcVar22,(uint *)pDVar40,
                                        (ulong)param_9);
                    fVar63 = (float)local_3e8._0_4_ *
                             ((float)((ulong)uVar46 >> 0x20) + (float)uVar46);
                    pSVar42 = *(SharedFontInternal **)auVar23;
                  }
                  *(float *)(pDVar29 + 0x178) = fVar63;
                  *(undefined4 *)(pDVar29 + 0x17c) = *(undefined4 *)(pSVar42 + 0x70);
                  local_3f8._0_4_ =
                       hypotf((float)*(long *)(pDVar29 + 0x160) - (float)*(long *)(pDVar29 + 0x168),
                              (float)((ulong)*(long *)(pDVar29 + 0x160) >> 0x20) -
                              (float)((ulong)*(long *)(pDVar29 + 0x168) >> 0x20));
                  local_3f8._4_4_ = extraout_XMM0_Db_01;
                  uStack_3f0._0_4_ = (float)extraout_XMM0_Dc_01;
                  uStack_3f0._4_4_ = (float)extraout_XMM0_Dd_01;
                  fVar45 = hypotf((float)*(long *)(pDVar29 + 0x160) -
                                  (float)*(long *)(pDVar29 + 0x170),
                                  (float)((ulong)*(long *)(pDVar29 + 0x160) >> 0x20) -
                                  (float)((ulong)*(long *)(pDVar29 + 0x170) >> 0x20));
                  fVar63 = *(float *)(pDVar29 + 0x178);
                  _local_3e8 = ZEXT416(*(uint *)(pDVar29 + 0x17c));
                  lVar28 = *(long *)(pDVar29 + 0x180);
                  if (lVar28 != 0) {
                    LOCK();
                    *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
                    UNLOCK();
                  }
                  plVar17 = *(long **)this_02;
                  *(long *)this_02 = lVar28;
                  if (plVar17 != (long *)0x0) {
                    LOCK();
                    plVar7 = plVar17 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      _local_3b8 = ZEXT416((uint)fVar63);
                      local_398 = CONCAT44(extraout_var_01._0_4_,fVar45);
                      uStack_390 = extraout_var_01._4_8_;
                      (**(code **)(*plVar17 + 8))();
                      fVar45 = (float)local_398;
                      fVar63 = (float)local_3b8._0_4_;
                    }
                  }
                  if (fVar45 <= DAT_00652618) {
                    fVar45 = DAT_00652618;
                  }
                  if (fVar63 <= fVar45) {
                    fVar45 = fVar63;
                  }
                    /* try { // try from 002a9340 to 002a938a has its CatchHandler @ 002aa5a5 */
                  Font::setHeight((float)(-(uint)(fVar63 < DAT_00652618) & (uint)DAT_00652618 |
                                         ~-(uint)(fVar63 < DAT_00652618) & (uint)fVar45),this_02);
                  uVar52 = 0;
                  uVar53 = 0;
                  uVar54 = 0;
                  fVar63 = (float)local_3f8._0_4_;
                  if ((float)local_3f8._0_4_ <= DAT_00652618) {
                    fVar63 = DAT_00652618;
                  }
                  if ((float)local_3e8._0_4_ <= fVar63) {
                    fVar63 = (float)local_3e8._0_4_;
                  }
                  fVar45 = DAT_00652618;
                  Font::setHorizontalScale
                            (-(uint)((float)local_3e8._0_4_ < DAT_00652618) & (uint)DAT_00652618 |
                             ~-(uint)((float)local_3e8._0_4_ < DAT_00652618) & (uint)fVar63,this_02)
                  ;
                  local_3f8 = (undefined1  [8])(**(code **)(*(long *)pDVar29 + 0x1a8))(pDVar29);
                  auVar61._8_4_ = (int)extraout_XMM0_Qb_01;
                  auVar61._0_8_ = local_3f8;
                  auVar61._12_4_ = (int)((ulong)extraout_XMM0_Qb_01 >> 0x20);
                  local_398 = CONCAT44(uVar52,fVar45);
                  uStack_390 = CONCAT44(uVar54,uVar53);
                  uStack_3f0 = extraout_XMM0_Qb_01;
                  if (*(long *)(pDVar29 + 0x30) == 0) {
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = uStack_3e0;
                    _local_3e8 = auVar11 << 0x40;
                    uVar14 = 0;
                    iVar26 = -0x80000000;
                    if (DAT_00653430 < SUB84(local_3f8,0)) goto LAB_002a93f8;
                  }
                  else {
                    auVar10._8_8_ = 0;
                    auVar10._0_8_ = uStack_3e0;
                    _local_3e8 = auVar10 << 0x40;
                    lVar28 = __dynamic_cast(*(long *)(pDVar29 + 0x30),&Component::typeinfo,
                                            &DrawableComposite::typeinfo,0);
                    uVar14 = 0;
                    if (lVar28 != 0) {
                      local_3e8 = (undefined1  [8])*(ulong *)(lVar28 + 0xf0);
                      uVar14 = *(ulong *)(lVar28 + 0xf0) >> 0x20;
                    }
                    iVar26 = -0x80000000;
                    auVar61 = _local_3f8;
                    if (DAT_00653430 < local_3f8._0_4_) {
LAB_002a93f8:
                      fVar63 = floorf(auVar61._0_4_);
                      iVar26 = (int)fVar63;
                      auVar61 = _local_3f8;
                    }
                  }
                  iVar25 = -0x80000000;
                  local_3b8 = (undefined1  [8])uVar14;
                  if (DAT_00653430 < auVar61._4_4_) {
                    fVar63 = floorf(auVar61._4_4_);
                    iVar25 = (int)fVar63;
                    auVar61 = _local_3f8;
                  }
                  fVar45 = auVar61._0_4_ + (float)local_398;
                  fVar63 = auVar61._4_4_ + local_398._4_4_;
                  iVar43 = 0x7fffffff;
                  iVar32 = 0x7fffffff;
                  if (fVar45 < DAT_00653434) {
                    local_3f8._4_4_ = fVar63;
                    local_3f8._0_4_ = fVar45;
                    uStack_3f0._0_4_ = auVar61._8_4_ + (float)uStack_390;
                    uStack_3f0._4_4_ = auVar61._12_4_ + uStack_390._4_4_;
                    fVar63 = ceilf(fVar45);
                    iVar32 = (int)fVar63;
                    fVar63 = (float)local_3f8._4_4_;
                  }
                  if (fVar63 < DAT_00653434) {
                    fVar63 = ceilf(fVar63);
                    iVar43 = (int)fVar63;
                  }
                  pDVar29 = local_3c0;
                  *(ulong *)(local_3c0 + 0xf0) = CONCAT44(-iVar25,-iVar26);
                    /* try { // try from 002a94ad to 002a94dd has its CatchHandler @ 002aa5a5 */
                  pDVar40 = (Drawable *)(ulong)(uint)(iVar43 - iVar25);
                  Component::setBounds
                            ((Component *)local_3c0,local_3e8._0_4_ + iVar26,
                             local_3b8._0_4_ + iVar25,iVar32 - iVar26,iVar43 - iVar25);
                  pDVar16 = local_380;
                  this_02 = local_3d8;
                  Component::internalRepaintUnchecked
                            ((long)pDVar29,0,*(ulong *)(pDVar29 + 0x40),'\x01');
                }
              }
              if (local_2b8 == (float *)0x0) {
                *(undefined8 *)(pDVar29 + 0x110) = *(undefined8 *)(local_1a0 + 0x10);
                uVar46 = *(undefined8 *)(local_1a0 + 8);
                *(undefined8 *)(pDVar29 + 0x100) = *(undefined8 *)local_1a0;
                *(undefined8 *)(pDVar29 + 0x108) = uVar46;
                    /* try { // try from 002a9770 to 002a9777 has its CatchHandler @ 002aa5a5 */
                Drawable::updateTransform(pDVar29);
              }
              else {
                fVar63 = *local_2b8;
                fVar45 = local_2b8[1];
                fVar51 = *(float *)(local_3a0 + 0x34);
                fVar56 = *(float *)(local_3a0 + 0x28);
                fVar64 = *(float *)(local_3a0 + 0x2c);
                fVar65 = *(float *)(local_3a0 + 0x38);
                fVar66 = *(float *)(local_3a0 + 0x30);
                fVar68 = *(float *)(local_3a0 + 0x3c);
                fVar2 = local_2b8[2];
                fVar3 = local_2b8[3];
                fVar4 = local_2b8[4];
                fVar67 = fVar64 * fVar3 + fVar65 * fVar4;
                fVar69 = fVar3 * fVar66 + fVar68 * fVar4 + local_2b8[5];
                *(float *)(pDVar29 + 0x100) = fVar63 * fVar56 + fVar45 * fVar51;
                *(float *)(pDVar29 + 0x104) = fVar63 * fVar64 + fVar45 * fVar65;
                *(float *)(pDVar29 + 0x108) = fVar63 * fVar66 + fVar45 * fVar68 + fVar2;
                *(float *)(pDVar29 + 0x10c) = fVar56 * fVar3 + fVar51 * fVar4;
                *(float *)(pDVar29 + 0x110) = fVar67;
                *(float *)(pDVar29 + 0x114) = fVar69;
                auVar58 = *(undefined1 (*) [16])(pDVar29 + 0x100);
                fVar63 = auVar58._0_4_;
                fVar45 = auVar58._4_4_;
                fVar51 = auVar58._12_4_;
                auVar48._4_4_ = -(uint)(fVar45 != 0.0);
                auVar48._0_4_ = -(uint)(fVar63 != DAT_005d9038);
                auVar48._8_4_ = -(uint)(auVar58._8_4_ != 0.0);
                auVar48._12_4_ = -(uint)(fVar51 != 0.0);
                iVar26 = movmskps((int)local_3a0,auVar48);
                if (iVar26 == 0) {
                  if ((fVar67 == DAT_005d9038) && (!NAN(fVar67) && !NAN(DAT_005d9038))) {
                    if ((fVar69 == DAT_005d9058) && (!NAN(fVar69) && !NAN(DAT_005d9058)))
                    goto LAB_002a9778;
                  }
                }
                iVar26 = *(int *)(pDVar29 + 0xf0) + (int)*(undefined8 *)(pDVar29 + 0x38);
                iVar25 = (int)((ulong)*(undefined8 *)(pDVar29 + 0x38) >> 0x20) +
                         *(int *)(pDVar29 + 0xf4);
                fVar68 = (float)-iVar26;
                fVar66 = (float)-iVar25;
                fVar64 = fVar45 * 0.0 + fVar63;
                fVar56 = fVar63 * 0.0 + fVar45;
                fVar65 = fVar63 * fVar68 + fVar45 * fVar66 + auVar58._8_4_;
                fVar45 = fVar51 * 0.0 + fVar67;
                fVar63 = fVar67 * 0.0 + fVar51;
                fVar69 = fVar69 + fVar51 * fVar68 + fVar67 * fVar66;
                fStack_370 = fVar69 * 0.0 + fVar65 + (float)iVar26;
                fStack_36c = fVar64 * 0.0 + fVar63;
                fStack_368 = fVar56 * 0.0 + fVar45;
                fStack_364 = fVar65 * 0.0 + fVar69 + (float)iVar25;
                local_378 = (Drawable *)CONCAT44(fVar45 * 0.0 + fVar56,fVar63 * 0.0 + fVar64);
                    /* try { // try from 002a973a to 002a9749 has its CatchHandler @ 002aa370 */
                Component::setTransform((Component *)pDVar29,(float *)&local_378);
              }
LAB_002a9778:
                    /* try { // try from 002a977e to 002a9793 has its CatchHandler @ 002aa401 */
              uVar13 = parseColour(local_3a0,local_3c8,(byte *)0x654009,_ZN4juce7ColoursL5blackE_14,
                                   pDVar40,param_9);
                    /* try { // try from 002a9796 to 002a979f has its CatchHandler @ 002aa412 */
              puVar15 = operator_new__(0x1b);
              LOCK();
              *puVar15 = 0;
              UNLOCK();
              *(undefined8 *)(puVar15 + 2) = 4;
              local_208 = (Drawable *)(puVar15 + 4);
              *(undefined2 *)(puVar15 + 4) = 0x31;
                    /* try { // try from 002a97c1 to 002a97e6 has its CatchHandler @ 002aa44c */
              pDVar40 = (Drawable *)&local_208;
              getStyleAttribute((SVGState *)&local_270,(long)local_3a0,local_3c8,
                                (byte *)"fill-opacity",(byte *)pDVar40,param_9);
              pDVar41 = local_270;
              local_378 = local_270;
              dVar47 = (double)CharacterFunctions::readDoubleValue<juce::CharPointer_UTF8>
                                         (&local_378);
              fVar63 = (float)dVar47;
              iVar26 = SUB84((double)((float)(uVar13 >> 0x18) *
                                     (float)(~-(uint)NAN(fVar63) &
                                            ~-(uint)(DAT_005d94c8 <=
                                                    (float)((uint)fVar63 & _DAT_005d91c0)) &
                                            (uint)fVar63)) + DAT_005d9098,0);
              if (0xfe < iVar26) {
                iVar26 = 0xff;
              }
              uVar13 = uVar13 & 0xffffff | iVar26 << 0x18;
              if (*(uint *)(pDVar29 + 0x199) != uVar13) {
                *(uint *)(pDVar29 + 0x199) = uVar13;
                    /* try { // try from 002a987d to 002a988b has its CatchHandler @ 002aa37f */
                Component::internalRepaintUnchecked
                          ((long)pDVar29,0,*(ulong *)(pDVar29 + 0x40),'\x01');
              }
              pDVar41 = pDVar41 + -0x10;
              if (pDVar41 != (Drawable *)&emptyString) {
                LOCK();
                uVar13 = *(uint *)pDVar41;
                *(uint *)pDVar41 = *(uint *)pDVar41 - 1;
                UNLOCK();
                if (uVar13 == 0) {
                  operator_delete__(pDVar41);
                }
              }
              pDVar41 = local_208 + -0x10;
              if (pDVar41 != (Drawable *)&emptyString) {
                LOCK();
                uVar13 = *(uint *)pDVar41;
                *(uint *)pDVar41 = *(uint *)pDVar41 - 1;
                UNLOCK();
                if (uVar13 == 0) {
                  operator_delete__(pDVar41);
                }
              }
              pDVar41 = (Drawable *)&local_2a8;
              do {
                pDVar36 = pDVar41;
                pDVar41 = *(Drawable **)pDVar36;
              } while (*(Drawable **)pDVar36 != (Drawable *)0x0);
              uVar52 = (undefined4)((ulong)*(long *)(pDVar36 + 8) >> 0x20);
              uVar46 = CONCAT71((int7)((ulong)pDVar36 >> 8),pDVar16[0xc]);
              pDVar41 = (Drawable *)&local_2a8;
              do {
                pDVar24 = pDVar41;
                pDVar41 = *(Drawable **)pDVar24;
              } while (pDVar41 != (Drawable *)0x0);
              uVar13 = (uint)*(long *)(pDVar36 + 8);
              if (pDVar16[0xc] != (Drawable)0x0) {
                uVar52 = 0;
                uVar13 = *(uint *)(pDVar16 + 8);
              }
              local_398 = CONCAT44(uVar52,uVar13);
              uStack_390 = 0;
              pDVar41 = pDVar24 + 0xc;
              if (pDVar16[4] != (Drawable)0x0) {
                pDVar41 = pDVar16;
              }
              _local_3e8 = ZEXT416(*(uint *)pDVar41);
                    /* try { // try from 002a9961 to 002a9970 has its CatchHandler @ 002aa599 */
              local_2e8 = Font::SharedFontInternal::getAscentDescent
                                    ((SharedFontInternal *)local_408,(long *)&local_408,0,uVar46,
                                     (uint *)pDVar40,(ulong)param_9);
              local_3d8._0_4_ = *(float *)(local_408 + 100);
              uStack_2e0 = extraout_XMM0_Qb_02;
              if ((float)local_3d8 <= DAT_005d9058) {
                local_3d8._0_4_ = *(float *)(local_408 + 0x68);
                    /* try { // try from 002a9995 to 002a999c has its CatchHandler @ 002aa3ae */
                uVar46 = Font::SharedFontInternal::getAscentDescent
                                   ((SharedFontInternal *)local_408,(long *)&local_408,
                                    extraout_RDX_10,uVar46,(uint *)pDVar40,(ulong)param_9);
                local_3d8._0_4_ =
                     (float)local_3d8 * ((float)((ulong)uVar46 >> 0x20) + (float)uVar46);
              }
              pbVar31 = *(byte **)(pDVar16 + 0x10);
              fStack_370 = 2.8026e-43;
              fStack_36c = 0.0;
              local_378 = malloc(0x1900);
                    /* try { // try from 002a99da to 002a99e1 has its CatchHandler @ 002aa406 */
              pDVar41 = (Drawable *)
                        StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar31);
                    /* try { // try from 002a99ed to 002a9a14 has its CatchHandler @ 002aa421 */
              uVar52 = 0;
              uVar53 = 0;
              uVar54 = 0;
              uVar55 = 0;
              local_270 = pDVar41;
              GlyphArrangement::addCurtailedLineOfText
                        (0.0,0.0,DAT_005de518,(GlyphArrangement *)&local_378,&local_408,
                         (ulong *)&local_270,'\0');
              pDVar41 = pDVar41 + -0x10;
              if (pDVar41 != (Drawable *)&emptyString) {
                LOCK();
                uVar13 = *(uint *)pDVar41;
                *(uint *)pDVar41 = *(uint *)pDVar41 - 1;
                UNLOCK();
                if (uVar13 == 0) {
                  operator_delete__(pDVar41);
                }
              }
              fVar63 = fStack_36c;
                    /* try { // try from 002a9a3b to 002a9a50 has its CatchHandler @ 002aa485 */
              pcVar22 = (char *)0x1;
              GlyphArrangement::getBoundingBox
                        ((GlyphArrangement *)&local_378,0,(ulong)(uint)fStack_36c,1,(uint *)pDVar40,
                         (ulong)param_9);
              local_3f8._4_4_ = uVar53;
              local_3f8._0_4_ = uVar52;
              uStack_3f0._0_4_ = (float)uVar54;
              uStack_3f0._4_4_ = (float)uVar55;
              if (0 < (int)fVar63) {
                lVar28 = 0;
                lVar37 = 0;
                do {
                  plVar17 = *(long **)(local_378 + lVar28);
                  if (plVar17 != (long *)0x0) {
                    LOCK();
                    plVar7 = plVar17 + 1;
                    *(int *)plVar7 = (int)*plVar7 + -1;
                    UNLOCK();
                    if ((int)*plVar7 == 0) {
                      (**(code **)(*plVar17 + 8))();
                    }
                  }
                  lVar37 = lVar37 + 1;
                  lVar28 = lVar28 + 0x20;
                } while (lVar37 < (int)fStack_36c);
              }
              free(local_378);
              pDVar41 = local_2b0;
              local_3b8._0_4_ = *(undefined4 *)(local_408 + 100);
              local_3b8._4_4_ = 0;
              fStack_3b0 = 0.0;
              fStack_3ac = 0.0;
              if ((float)local_3b8._0_4_ <= DAT_005d9058) {
                _local_3b8 = ZEXT416(*(uint *)(local_408 + 0x68));
                    /* try { // try from 002a9ad1 to 002a9ad8 has its CatchHandler @ 002aa377 */
                uVar46 = Font::SharedFontInternal::getAscentDescent
                                   ((SharedFontInternal *)local_408,(long *)&local_408,
                                    extraout_RDX_11,pcVar22,(uint *)pDVar40,(ulong)param_9);
                local_3b8._0_4_ =
                     (float)local_3b8._0_4_ * ((float)((ulong)uVar46 >> 0x20) + (float)uVar46);
              }
              pbVar31 = local_2d0;
              local_3d8._4_4_ =
                   (float)local_3e8._0_4_ -
                   (DAT_005d9038 / (local_2e8._4_4_ + (float)local_2e8)) * (float)local_2e8 *
                   (float)local_3d8;
              local_3d8._0_4_ = (float)local_398;
              fStack_3d0 = local_398._4_4_;
              fStack_3cc = (float)local_3e8._4_4_;
              uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 (local_2d0,(byte *)"middle");
              if (uVar13 == 0) {
                uVar57 = local_3f8._8_8_;
                fVar63 = (float)local_398 + (float)local_3f8._0_4_ * DAT_005d98c8;
                uVar46 = extraout_RDX_12;
LAB_002a9b9e:
                auVar9._4_8_ = uVar57;
                auVar9._0_4_ = local_3d8._4_4_;
                auVar49._0_8_ = auVar9._0_8_ << 0x20;
                auVar49._8_4_ = fStack_3d0;
                auVar49._12_4_ = fStack_3cc;
                auVar50._4_12_ = auVar49._4_12_;
                auVar50._0_4_ = fVar63;
              }
              else {
                uVar13 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   (pbVar31,(byte *)0x655c7a);
                uVar57 = extraout_var_02._4_8_;
                uVar46 = extraout_RDX_13;
                if (uVar13 == 0) {
                  fVar63 = (float)local_398 - (float)local_3f8._0_4_;
                  goto LAB_002a9b9e;
                }
                auVar50._4_4_ = local_3d8._4_4_;
                auVar50._0_4_ = (float)local_3d8;
                auVar50._8_4_ = fStack_3d0;
                auVar50._12_4_ = fStack_3cc;
              }
              fVar63 = auVar50._0_4_;
              local_3f8._0_4_ = (float)local_3f8._0_4_ + fVar63;
              fVar45 = auVar50._4_4_;
              local_3f8._4_4_ = (float)local_3f8._4_4_ + fVar45;
              uStack_3f0._0_4_ = (float)uStack_3f0 + auVar50._8_4_;
              uStack_3f0._4_4_ = uStack_3f0._4_4_ + auVar50._12_4_;
              fVar51 = (float)local_3b8._0_4_ + fVar45;
              if (((((*(float *)(pDVar29 + 0x160) != fVar63) ||
                    (NAN(*(float *)(pDVar29 + 0x160)) || NAN(fVar63))) ||
                   (*(float *)(pDVar29 + 0x164) != fVar45)) ||
                  (((NAN(*(float *)(pDVar29 + 0x164)) || NAN(fVar45) ||
                    (*(float *)(pDVar29 + 0x168) != (float)local_3f8._0_4_)) ||
                   ((NAN(*(float *)(pDVar29 + 0x168)) || NAN((float)local_3f8._0_4_) ||
                    ((*(float *)(pDVar29 + 0x16c) != fVar45 ||
                     (NAN(*(float *)(pDVar29 + 0x16c)) || NAN(fVar45))))))))) ||
                 ((*(float *)(pDVar29 + 0x170) != fVar63 ||
                  (NAN(*(float *)(pDVar29 + 0x170)) || NAN(fVar63))))) {
LAB_002a9c30:
                *(long *)(pDVar29 + 0x160) = auVar50._0_8_;
                *(ulong *)(pDVar29 + 0x168) = CONCAT44(fVar45,local_3f8._0_4_);
                *(ulong *)(pDVar29 + 0x170) = CONCAT44(fVar51,fVar63);
                local_3d8._0_4_ = hypotf(fVar63 - (float)local_3f8._0_4_,fVar45 - fVar45);
                fVar45 = hypotf((float)*(undefined8 *)(pDVar29 + 0x160) -
                                (float)*(undefined8 *)(pDVar29 + 0x170),
                                (float)((ulong)*(undefined8 *)(pDVar29 + 0x160) >> 0x20) -
                                (float)((ulong)*(undefined8 *)(pDVar29 + 0x170) >> 0x20));
                fVar63 = *(float *)(pDVar29 + 0x178);
                _local_3b8 = ZEXT416(*(uint *)(pDVar29 + 0x17c));
                lVar28 = *(long *)(pDVar29 + 0x180);
                if (lVar28 != 0) {
                  LOCK();
                  *(int *)(lVar28 + 8) = *(int *)(lVar28 + 8) + 1;
                  UNLOCK();
                }
                plVar17 = *(long **)this_02;
                *(long *)this_02 = lVar28;
                if (plVar17 != (long *)0x0) {
                  LOCK();
                  plVar7 = plVar17 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    local_398 = (ulong)(uint)fVar63;
                    uStack_390 = 0;
                    local_2e8 = CONCAT44(extraout_var_03._0_4_,fVar45);
                    uStack_2e0 = extraout_var_03._4_8_;
                    (**(code **)(*plVar17 + 8))();
                    fVar45 = (float)local_2e8;
                    fVar63 = (float)local_398;
                  }
                }
                if (fVar45 <= DAT_00652618) {
                  fVar45 = DAT_00652618;
                }
                if (fVar63 <= fVar45) {
                  fVar45 = fVar63;
                }
                    /* try { // try from 002a9d15 to 002a9d5f has its CatchHandler @ 002aa599 */
                Font::setHeight((float)(-(uint)(fVar63 < DAT_00652618) & (uint)DAT_00652618 |
                                       ~-(uint)(fVar63 < DAT_00652618) & (uint)fVar45),this_02);
                uVar52 = 0;
                uVar53 = 0;
                uVar54 = 0;
                fVar63 = (float)local_3d8;
                if ((float)local_3d8 <= DAT_00652618) {
                  fVar63 = DAT_00652618;
                }
                if ((float)local_3b8._0_4_ <= fVar63) {
                  fVar63 = (float)local_3b8._0_4_;
                }
                fVar45 = DAT_00652618;
                Font::setHorizontalScale
                          (-(uint)((float)local_3b8._0_4_ < DAT_00652618) & (uint)DAT_00652618 |
                           ~-(uint)((float)local_3b8._0_4_ < DAT_00652618) & (uint)fVar63,this_02);
                uVar46 = (**(code **)(*(long *)pDVar29 + 0x1a8))(pDVar29);
                fStack_3d0 = (float)extraout_XMM0_Qb_03;
                auVar62._8_4_ = fStack_3d0;
                auVar62._0_8_ = uVar46;
                fStack_3cc = (float)((ulong)extraout_XMM0_Qb_03 >> 0x20);
                auVar62._12_4_ = fStack_3cc;
                local_3b8._4_4_ = uVar52;
                local_3b8._0_4_ = fVar45;
                fStack_3b0 = (float)uVar53;
                fStack_3ac = (float)uVar54;
                local_3d8._0_4_ = (float)uVar46;
                local_3d8._4_4_ = (float)((ulong)uVar46 >> 0x20);
                if (*(long *)(pDVar29 + 0x30) == 0) {
                  iVar43 = 0;
                  iVar32 = 0;
                  iVar44 = -0x80000000;
                  iVar26 = 0;
                  iVar25 = 0;
                  if (DAT_00653430 < (float)local_3d8) goto LAB_002a9dc6;
                }
                else {
                  uVar46 = 0;
                  lVar28 = __dynamic_cast(*(long *)(pDVar29 + 0x30),&Component::typeinfo,
                                          &DrawableComposite::typeinfo,0);
                  auVar62._4_4_ = local_3d8._4_4_;
                  auVar62._0_4_ = (float)local_3d8;
                  auVar62._8_4_ = fStack_3d0;
                  auVar62._12_4_ = fStack_3cc;
                  iVar32 = 0;
                  if (lVar28 != 0) {
                    uVar46 = *(undefined8 *)(lVar28 + 0xf0);
                    iVar32 = (int)((ulong)uVar46 >> 0x20);
                  }
                  iVar43 = (int)uVar46;
                  iVar44 = -0x80000000;
                  iVar26 = iVar43;
                  iVar25 = iVar32;
                  if (DAT_00653430 < (float)local_3d8) {
LAB_002a9dc6:
                    iVar32 = iVar25;
                    iVar43 = iVar26;
                    fVar63 = floorf(auVar62._0_4_);
                    auVar62._4_4_ = local_3d8._4_4_;
                    auVar62._0_4_ = (float)local_3d8;
                    auVar62._8_4_ = fStack_3d0;
                    auVar62._12_4_ = fStack_3cc;
                    iVar44 = (int)fVar63;
                  }
                }
                iVar26 = -0x80000000;
                if (DAT_00653430 < auVar62._4_4_) {
                  fVar63 = floorf(auVar62._4_4_);
                  auVar62._4_4_ = local_3d8._4_4_;
                  auVar62._0_4_ = (float)local_3d8;
                  auVar62._8_4_ = fStack_3d0;
                  auVar62._12_4_ = fStack_3cc;
                  iVar26 = (int)fVar63;
                }
                fVar45 = auVar62._0_4_ + (float)local_3b8._0_4_;
                fVar63 = auVar62._4_4_ + (float)local_3b8._4_4_;
                iVar33 = 0x7fffffff;
                iVar25 = 0x7fffffff;
                if (fVar45 < DAT_00653434) {
                  local_3d8._0_4_ = fVar45;
                  local_3d8._4_4_ = fVar63;
                  fStack_3d0 = auVar62._8_4_ + fStack_3b0;
                  fStack_3cc = auVar62._12_4_ + fStack_3ac;
                  fVar63 = ceilf(fVar45);
                  iVar25 = (int)fVar63;
                  fVar63 = local_3d8._4_4_;
                }
                auVar58._4_4_ = fVar63;
                auVar58._0_4_ = fVar63;
                auVar58._8_4_ = fVar63;
                auVar58._12_4_ = fVar63;
                if (fVar63 < DAT_00653434) {
                  fVar63 = ceilf(fVar63);
                  iVar33 = (int)fVar63;
                }
                pDVar29 = local_3c0;
                *(ulong *)(local_3c0 + 0xf0) = CONCAT44(-iVar26,-iVar44);
                    /* try { // try from 002a9e6e to 002a9ea0 has its CatchHandler @ 002aa599 */
                pDVar40 = (Drawable *)(ulong)(uint)(iVar33 - iVar26);
                Component::setBounds
                          ((Component *)local_3c0,iVar43 + iVar44,iVar32 + iVar26,iVar25 - iVar44,
                           iVar33 - iVar26);
                pDVar41 = local_2b0;
                pDVar16 = local_380;
                pcVar22 = (char *)0x1;
                Component::internalRepaintUnchecked
                          ((long)pDVar29,0,*(ulong *)(pDVar29 + 0x40),'\x01');
                uVar46 = extraout_RDX_14;
              }
              else {
                fVar56 = *(float *)(pDVar29 + 0x174);
                auVar58 = ZEXT416((uint)fVar56);
                if ((fVar56 != fVar51) || (NAN(fVar56) || NAN(fVar51))) goto LAB_002a9c30;
              }
              pDVar36 = pDStack_300;
              pDVar29 = (Drawable *)&local_2a8;
              do {
                *(long *)(pDVar29 + 8) = CONCAT44(local_3e8._0_4_,local_3f8._0_4_);
                pDVar29 = *(Drawable **)pDVar29;
              } while (pDVar29 != (Drawable *)0x0);
              pDVar16 = pDVar16 + 0x18;
              uVar52 = local_3f8._0_4_;
              uVar53 = local_3f8._4_4_;
              this_00 = local_310;
              pDVar29 = local_308;
            } while (pDVar16 != pDVar41);
            for (; local_310 = this_00, pDVar29 != pDVar36; pDVar29 = pDVar29 + 0x18) {
              piVar39 = (int *)(*(long *)(pDVar29 + 0x10) + -0x10);
              if (piVar39 != &emptyString) {
                LOCK();
                iVar26 = *piVar39;
                *piVar39 = *piVar39 + -1;
                UNLOCK();
                if (iVar26 == 0) {
                  operator_delete__(piVar39);
                  uVar46 = extraout_RDX_15;
                }
              }
              this_00 = local_310;
            }
            pDVar16 = local_308;
            if (local_308 == (Drawable *)0x0) goto LAB_002a9fca;
          }
          this_00 = local_310;
          operator_delete(pDVar16);
          uVar46 = extraout_RDX_16;
        }
LAB_002a9fca:
        pDVar16 = local_400 + -0x10;
        if (pDVar16 != (Drawable *)&emptyString) {
          LOCK();
          uVar13 = *(uint *)pDVar16;
          *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
          UNLOCK();
          if (uVar13 == 0) {
            operator_delete__(pDVar16);
            uVar46 = extraout_RDX_17;
          }
        }
      }
      else {
                    /* try { // try from 002a7c01 to 002a7c0f has its CatchHandler @ 002aa32c */
        uVar14 = XmlElement::hasTagNameIgnoringNamespace
                           (this_00,(byte *)"tspan",uVar46,pcVar22,pDVar40,(uint)param_9);
        uVar46 = extraout_RDX_02;
        if ((char)uVar14 != '\0') {
          fStack_370 = SUB84(local_3c8,0);
          fStack_36c = (float)((ulong)local_3c8 >> 0x20);
                    /* try { // try from 002a7c2f to 002a7c72 has its CatchHandler @ 002aa32e */
          pcVar22 = (char *)0x0;
          pDVar40 = (Drawable *)&local_2a8;
          local_378 = (Drawable *)this_00;
          pDVar16 = parseText(extraout_XMM0_Qa_02,CONCAT44(uVar53,uVar52),auVar58._0_8_,local_3a0,
                              (long *)&local_378,1,(float *)0x0,pDVar40,param_9);
          uVar46 = extraout_RDX_03;
          if (pDVar16 != (Drawable *)0x0) {
            (**(code **)(*(long *)pDVar16 + 0x60))(pDVar16,1);
            Component::addChildComponent((Component *)local_2d8,(Component *)pDVar16,0xffffffff);
            uVar46 = extraout_RDX_04;
          }
        }
      }
      this_00 = *(XmlElement **)this_00;
    } while (this_00 != (XmlElement *)0x0);
  }
  local_2d0 = local_2d0 + -0x10;
  if (local_2d0 != (byte *)&emptyString) {
    LOCK();
    iVar26 = *(int *)local_2d0;
    *(int *)local_2d0 = *(int *)local_2d0 + -1;
    UNLOCK();
    if (iVar26 == 0) {
      operator_delete__(local_2d0);
    }
  }
  pDVar40 = local_2d8;
  if (local_408 != (Drawable *)0x0) {
    LOCK();
    pDVar16 = local_408 + 8;
    *(uint *)pDVar16 = *(uint *)pDVar16 - 1;
    UNLOCK();
    if (*(uint *)pDVar16 == 0) {
      (**(code **)(*(long *)local_408 + 8))();
    }
  }
  uStack_27c = 0;
  free((void *)CONCAT44(uStack_284,local_288));
  uStack_290 = uStack_290 & 0xffffffff;
  free(local_298);
  return pDVar40;
}


