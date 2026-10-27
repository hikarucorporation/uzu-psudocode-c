// Function : FTTypefaceList
// Namespace: juce:FTTypefaceList
// Entry    : 002fa380
// Prototype: undefined FTTypefaceList(FTTypefaceList * this)
// Body     : 002fa380 - 002fdffa


/* WARNING: Removing unreachable block (ram,0x002fb62e) */
/* WARNING: Type propagation algorithm not settling */
/* juce::FTTypefaceList::FTTypefaceList() */

void __thiscall juce::FTTypefaceList::FTTypefaceList(FTTypefaceList *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined4 uVar13;
  undefined4 uVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  wint_t wVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  byte *pbVar24;
  undefined4 *puVar25;
  byte *pbVar26;
  byte *pbVar27;
  void *pvVar28;
  undefined8 *puVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  long lVar32;
  long lVar33;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  byte *pbVar34;
  byte *extraout_RDX_06;
  ulong uVar35;
  char *pcVar36;
  byte *pbVar37;
  byte *pbVar38;
  wint_t wVar39;
  byte *pbVar40;
  byte bVar41;
  uint uVar42;
  XmlElement *pXVar43;
  ulong uVar44;
  char *pcVar45;
  ulong uVar46;
  int *piVar47;
  undefined1 *puVar48;
  uint *in_R8;
  byte *pbVar49;
  byte bVar50;
  int iVar51;
  ulong in_R9;
  uint uVar52;
  byte *pbVar53;
  ulong uVar54;
  ulong uVar55;
  long *plVar56;
  byte *pbVar57;
  uint uVar58;
  byte *pbVar59;
  ulong uVar60;
  byte *pbVar61;
  byte *local_158;
  byte *local_148;
  undefined7 local_140;
  uint uStack_139;
  FTTypefaceList *local_130;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 *local_d0;
  long local_c8;
  undefined3 uStack_c0;
  undefined5 uStack_bd;
  undefined3 uStack_b8;
  undefined4 uStack_b5;
  undefined4 uStack_b1;
  int *local_a8;
  ulong local_a0;
  byte *local_98;
  long local_90;
  byte *local_88;
  byte *local_80;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_78;
  undefined8 local_70;
  long *local_68;
  undefined1 *local_60;
  long local_58;
  undefined3 uStack_50;
  undefined5 uStack_4d;
  undefined3 uStack_48;
  undefined8 uStack_45;
  byte *local_38;
  
  DeletedAtShutdown::DeletedAtShutdown((DeletedAtShutdown *)this);
  *(undefined ***)this = &PTR__FTTypefaceList_007123e0;
                    /* try { // try from 002fa3a4 to 002fa3ad has its CatchHandler @ 002fe14f */
  puVar22 = operator_new(0x20);
  *(undefined4 *)(puVar22 + 1) = 0;
  *puVar22 = &PTR__FTLibWrapper_00712428;
  local_130 = this;
                    /* try { // try from 002fa3c3 to 002fa3cc has its CatchHandler @ 002fe13a */
  uVar23 = FcInitLoadConfigAndFonts();
  puVar22[2] = uVar23;
  puVar22[3] = 0;
                    /* try { // try from 002fa3e4 to 002fa3eb has its CatchHandler @ 002fe12d */
  iVar16 = FT_Init_FreeType(puVar22 + 3);
  if (iVar16 != 0) {
    puVar22[3] = 0;
  }
  *(undefined8 **)(this + 8) = puVar22;
  LOCK();
  *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
  UNLOCK();
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x20) = 0;
  local_128 = (undefined1  [16])0x0;
  pbVar24 = (byte *)getenv("JUCE_FONT_PATH");
                    /* try { // try from 002fa427 to 002fa42e has its CatchHandler @ 002fe128 */
  pbVar24 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar24);
                    /* try { // try from 002fa432 to 002fa44c has its CatchHandler @ 002fe0ee */
  StringArray::addTokens((StringArray *)local_128,pbVar24,&DAT_005e5e2d,&DAT_005e2ee7);
  pbVar24 = pbVar24 + -0x10;
  if (pbVar24 != (byte *)&emptyString) {
    LOCK();
    iVar16 = *(int *)pbVar24;
    *(int *)pbVar24 = *(int *)pbVar24 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(pbVar24);
    }
  }
  StringArray::removeEmptyStrings((Array<juce::String,juce::DummyCriticalSection,0> *)local_128);
  if (local_128._12_4_ != 0) goto joined_r0x002fb6e7;
                    /* try { // try from 002fa488 to 002fa491 has its CatchHandler @ 002fe07c */
  puVar25 = operator_new__(0x2f);
  LOCK();
  *puVar25 = 0;
  UNLOCK();
  *(undefined8 *)(puVar25 + 2) = 0x18;
  uVar23 = s__etc_fonts_fonts_usr_X11R6_lib_X_005dd320._8_8_;
  *(undefined8 *)(puVar25 + 4) = s__etc_fonts_fonts_usr_X11R6_lib_X_005dd320._0_8_;
  *(undefined8 *)(puVar25 + 6) = uVar23;
  puVar25[8] = 0x6e6f632e;
  *(undefined2 *)(puVar25 + 9) = 0x66;
  local_f0._0_8_ = puVar25 + 4;
                    /* try { // try from 002fa4c7 to 002fa4db has its CatchHandler @ 002fe058 */
  File::parseAbsolutePath((File *)&local_80,(uint *)local_f0,extraout_RDX,puVar25 + 4,in_R8,in_R9);
                    /* try { // try from 002fa4dc to 002fa4ed has its CatchHandler @ 002fe029 */
  parseXML((juce *)&local_140,(long *)&local_80);
  pbVar24 = local_80 + -0x10;
  if (pbVar24 != (byte *)&emptyString) {
    LOCK();
    iVar16 = *(int *)pbVar24;
    *(int *)pbVar24 = *(int *)pbVar24 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(pbVar24);
    }
  }
  piVar47 = (int *)(local_f0._0_8_ + -0x10);
  if (piVar47 == &emptyString) {
LAB_002fa541:
    lVar32 = CONCAT17((undefined1)uStack_139,local_140);
  }
  else {
    LOCK();
    iVar16 = *piVar47;
    *piVar47 = *piVar47 + -1;
    UNLOCK();
    if (iVar16 != 0) goto LAB_002fa541;
    operator_delete__(piVar47);
    lVar32 = CONCAT17((undefined1)uStack_139,local_140);
  }
  if (lVar32 == 0) {
    local_140 = 0;
    uStack_139 = uStack_139 & 0xffffff00;
                    /* try { // try from 002fa558 to 002fa561 has its CatchHandler @ 002fe07c */
    puVar25 = operator_new__(0x33);
    LOCK();
    *puVar25 = 0;
    UNLOCK();
    *(undefined8 *)(puVar25 + 2) = 0x1c;
    uVar54 = CONCAT71((int7)((ulong)extraout_RDX_00 >> 8),0x2f);
    lVar32 = 2;
    pbVar24 = (byte *)(puVar25 + 4);
    while( true ) {
      if ((char)(byte)uVar54 < '\0') {
        *pbVar24 = (byte)((uVar54 & 0xffffffff) >> 6) & 3 | 0xc0;
        uVar54 = uVar54 & 0xffffffffffffff3f | 0x80;
        pbVar24[1] = (byte)uVar54;
        pbVar26 = pbVar24 + 2;
        pbVar24 = pbVar24 + 1;
      }
      else {
        *pbVar24 = (byte)uVar54;
        pbVar26 = pbVar24 + 1;
      }
      if (lVar32 == 0x1c) break;
      bVar50 = (&UNK_005e50ff)[lVar32];
      if ((char)bVar50 < '\0') {
        pbVar24[1] = bVar50 >> 6 | 0xc0;
        pbVar24[2] = bVar50 & 0x3f | 0x80;
      }
      else {
        *pbVar26 = bVar50;
        pbVar26 = pbVar24;
      }
      pbVar24 = pbVar26 + 2;
      uVar54 = (ulong)(byte)"/usr/share/fonts/fonts.conf"[lVar32];
      lVar32 = lVar32 + 2;
    }
    *pbVar26 = 0;
    local_f0._0_8_ = puVar25 + 4;
                    /* try { // try from 002fa609 to 002fa61d has its CatchHandler @ 002fe058 */
    File::parseAbsolutePath((File *)&local_80,(uint *)local_f0,uVar54,0x1c,in_R8,in_R9);
                    /* try { // try from 002fa61e to 002fa62f has its CatchHandler @ 002fe029 */
    parseXML((juce *)&local_140,(long *)&local_80);
    pbVar24 = local_80 + -0x10;
    if (pbVar24 != (byte *)&emptyString) {
      LOCK();
      iVar16 = *(int *)pbVar24;
      *(int *)pbVar24 = *(int *)pbVar24 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(pbVar24);
      }
    }
    piVar47 = (int *)(local_f0._0_8_ + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(piVar47);
      }
    }
    lVar32 = CONCAT17((undefined1)uStack_139,local_140);
    if (lVar32 != 0) goto LAB_002fa885;
    local_140 = 0;
    uStack_139 = uStack_139 & 0xffffff00;
                    /* try { // try from 002fa69b to 002fa6a4 has its CatchHandler @ 002fe07c */
    puVar25 = operator_new__(0x37);
    LOCK();
    *puVar25 = 0;
    UNLOCK();
    *(undefined8 *)(puVar25 + 2) = 0x20;
    uVar54 = CONCAT71((int7)((ulong)extraout_RDX_01 >> 8),0x2f);
    lVar33 = 2;
    pbVar24 = (byte *)(puVar25 + 4);
    while( true ) {
      if ((char)(byte)uVar54 < '\0') {
        *pbVar24 = (byte)((uVar54 & 0xffffffff) >> 6) & 3 | 0xc0;
        uVar54 = uVar54 & 0xffffffffffffff3f | 0x80;
        pbVar24[1] = (byte)uVar54;
        pbVar26 = pbVar24 + 2;
        pbVar24 = pbVar24 + 1;
      }
      else {
        *pbVar24 = (byte)uVar54;
        pbVar26 = pbVar24 + 1;
      }
      if (lVar33 == 0x20) break;
      bVar50 = "/usr/share/fonts/fonts.conf"[lVar33 + 0x1b];
      if ((char)bVar50 < '\0') {
        pbVar24[1] = bVar50 >> 6 | 0xc0;
        pbVar24[2] = bVar50 & 0x3f | 0x80;
        pbVar24 = pbVar26;
      }
      else {
        *pbVar26 = bVar50;
      }
      pbVar24 = pbVar24 + 2;
      uVar54 = (ulong)(byte)"/usr/local/etc/fonts/fonts.conf"[lVar33];
      lVar33 = lVar33 + 2;
    }
    *pbVar26 = 0;
    local_f0._0_8_ = puVar25 + 4;
                    /* try { // try from 002fa756 to 002fa76a has its CatchHandler @ 002fe058 */
    File::parseAbsolutePath((File *)&local_80,(uint *)local_f0,uVar54,0x20,in_R8,in_R9);
                    /* try { // try from 002fa76b to 002fa77c has its CatchHandler @ 002fe029 */
    parseXML((juce *)&local_140,(long *)&local_80);
    pbVar24 = local_80 + -0x10;
    if (pbVar24 != (byte *)&emptyString) {
      LOCK();
      iVar16 = *(int *)pbVar24;
      *(int *)pbVar24 = *(int *)pbVar24 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(pbVar24);
      }
    }
    piVar47 = (int *)(local_f0._0_8_ + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(piVar47);
      }
    }
    lVar32 = CONCAT17((undefined1)uStack_139,local_140);
    if (lVar32 != 0) goto LAB_002fa885;
    local_140 = 0;
    uStack_139 = uStack_139 & 0xffffff00;
                    /* try { // try from 002fa7e8 to 002fa7fb has its CatchHandler @ 002fe07c */
    juce::String::String((String *)local_f0,(byte *)"/usr/share/defaults/fonts/fonts.conf");
                    /* try { // try from 002fa7fc to 002fa810 has its CatchHandler @ 002fe058 */
    File::parseAbsolutePath((File *)&local_80,(uint *)local_f0,extraout_RDX_02,lVar33,in_R8,in_R9);
                    /* try { // try from 002fa811 to 002fa822 has its CatchHandler @ 002fe029 */
    parseXML((juce *)&local_140,(long *)&local_80);
    pbVar24 = local_80 + -0x10;
    if (pbVar24 != (byte *)&emptyString) {
      LOCK();
      iVar16 = *(int *)pbVar24;
      *(int *)pbVar24 = *(int *)pbVar24 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(pbVar24);
      }
    }
    piVar47 = (int *)(local_f0._0_8_ + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(piVar47);
      }
    }
    lVar32 = CONCAT17((undefined1)uStack_139,local_140);
    if (lVar32 != 0) goto LAB_002fa885;
  }
  else {
LAB_002fa885:
    for (pXVar43 = *(XmlElement **)(lVar32 + 8); pXVar43 != (XmlElement *)0x0;
        pXVar43 = *(XmlElement **)pXVar43) {
      uVar17 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (*(byte **)(pXVar43 + 0x18),(byte *)0x652939);
      if (uVar17 == 0) goto LAB_002fa8bb;
    }
    pXVar43 = (XmlElement *)0x0;
LAB_002fa8bb:
                    /* try { // try from 002fa8bb to 002fa8c6 has its CatchHandler @ 002fe005 */
    pbVar26 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                                ((byte *)0x652939);
    pbVar24 = pbVar26 + -0x10;
    if (pbVar24 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar24 = *(int *)pbVar24 + 1;
      UNLOCK();
    }
    if (pXVar43 != (XmlElement *)0x0) {
      pbVar27 = pbVar24;
      do {
                    /* try { // try from 002fa933 to 002fa93d has its CatchHandler @ 002fe18b */
        XmlElement::getAllSubText((long *)local_f0,pXVar43);
                    /* try { // try from 002fa93e to 002fa94d has its CatchHandler @ 002fe15c */
        juce::String::trim((long *)&local_80,(long *)local_f0);
        piVar47 = (int *)(local_f0._0_8_ + -0x10);
        if (piVar47 == &emptyString) {
LAB_002fa977:
          bVar50 = *local_80;
        }
        else {
          LOCK();
          iVar16 = *piVar47;
          *piVar47 = *piVar47 + -1;
          UNLOCK();
          if (iVar16 != 0) goto LAB_002fa977;
          operator_delete__(piVar47);
          bVar50 = *local_80;
        }
        if (bVar50 != 0) {
          for (puVar22 = *(undefined8 **)(pXVar43 + 0x10); puVar22 != (undefined8 *)0x0;
              puVar22 = (undefined8 *)*puVar22) {
            uVar17 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               ((byte *)puVar22[1],(byte *)"prefix");
            if (uVar17 == 0) {
              puVar22 = puVar22 + 2;
              goto LAB_002faa4f;
            }
          }
          puVar22 = &getEmptyStringRef()::empty;
          if (getEmptyStringRef()::empty == '\0') {
            iVar16 = __cxa_guard_acquire(&getEmptyStringRef()::empty);
            puVar22 = &getEmptyStringRef()::empty;
            if (iVar16 != 0) {
              getEmptyStringRef()::empty = &DAT_0061ac58;
              puVar22 = &getEmptyStringRef()::empty;
              __cxa_atexit(juce::String::~String,&getEmptyStringRef()::empty,&__dso_handle);
              __cxa_guard_release(&getEmptyStringRef()::empty);
            }
          }
LAB_002faa4f:
          uVar17 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)*puVar22,&DAT_005e4e53);
          if (uVar17 == 0) {
                    /* try { // try from 002fad80 to 002fad89 has its CatchHandler @ 002fe0e1 */
            piVar47 = operator_new__(0x27);
            LOCK();
            *piVar47 = 0;
            UNLOCK();
            piVar47[2] = 0x10;
            piVar47[3] = 0;
            piVar47[4] = 0x5f474458;
            piVar47[5] = 0x41544144;
            piVar47[6] = 0x4d4f485f;
            *(undefined2 *)(piVar47 + 7) = 0x45;
            pbVar34 = (byte *)getenv((char *)(piVar47 + 4));
            if (pbVar34 == (byte *)0x0) {
              puVar25 = (undefined4 *)&DAT_0061ac58;
            }
            else {
                    /* try { // try from 002fadc5 to 002fadcc has its CatchHandler @ 002fe00d */
              puVar25 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar34);
            }
            local_f0._0_8_ = puVar25;
            LOCK();
            iVar16 = *piVar47;
            *piVar47 = *piVar47 + -1;
            UNLOCK();
            if (iVar16 == 0) {
              operator_delete__(piVar47);
            }
                    /* try { // try from 002fadf3 to 002fadff has its CatchHandler @ 002fe0b2 */
            juce::String::trimStart(&local_100,(undefined8 *)local_f0);
            bVar50 = *local_100;
            pbVar34 = local_100 + -0x10;
            uVar23 = extraout_RDX_03;
            if (pbVar34 != (byte *)&emptyString) {
              LOCK();
              iVar16 = *(int *)pbVar34;
              *(int *)pbVar34 = *(int *)pbVar34 + -1;
              UNLOCK();
              if (iVar16 == 0) {
                operator_delete__(pbVar34);
                uVar23 = extraout_RDX_04;
              }
            }
            if (bVar50 == 0) {
                    /* try { // try from 002faf2d to 002faf36 has its CatchHandler @ 002fe000 */
              puVar25 = operator_new__(0x27);
              LOCK();
              *puVar25 = 0;
              UNLOCK();
              *(undefined8 *)(puVar25 + 2) = 0x10;
              pbVar27 = (byte *)(puVar25 + 4);
              uVar23 = 0x6c61636f6c2e2f7e;
              *(undefined8 *)(puVar25 + 4) = 0x6c61636f6c2e2f7e;
              puVar25[6] = 0x6168732f;
              *(undefined2 *)(puVar25 + 7) = 0x6572;
              *(undefined1 *)((long)puVar25 + 0x1e) = 0;
              uVar8 = local_f0._0_8_;
              local_f0._0_8_ = pbVar27;
              piVar47 = (int *)(uVar8 + -0x10);
              if (piVar47 != &emptyString) {
                LOCK();
                iVar16 = *piVar47;
                *piVar47 = *piVar47 + -1;
                UNLOCK();
                if (iVar16 == 0) {
                  operator_delete__(piVar47);
                  uVar23 = extraout_RDX_05;
                }
              }
            }
                    /* try { // try from 002fae30 to 002fae3a has its CatchHandler @ 002fe0b0 */
            File::parseAbsolutePath((File *)&local_90,(uint *)local_f0,uVar23,pbVar27,in_R8,in_R9);
                    /* try { // try from 002fae43 to 002fae4f has its CatchHandler @ 002fe081 */
            File::getChildFile((File *)&local_100,(undefined8 *)&local_90,local_80);
            pbVar27 = local_100 + -0x10;
            if (pbVar27 != (byte *)&emptyString) {
              LOCK();
              *(int *)pbVar27 = *(int *)pbVar27 + 1;
              UNLOCK();
            }
            LOCK();
            UNLOCK();
            pbVar27 = local_80 + -0x10;
            local_80 = local_100;
            if (pbVar27 != (byte *)&emptyString) {
              LOCK();
              iVar16 = *(int *)pbVar27;
              *(int *)pbVar27 = *(int *)pbVar27 + -1;
              UNLOCK();
              if (iVar16 == 0) {
                operator_delete__(pbVar27);
              }
            }
            pbVar27 = local_100 + -0x10;
            if (pbVar27 != (byte *)&emptyString) {
              LOCK();
              iVar16 = *(int *)pbVar27;
              *(int *)pbVar27 = *(int *)pbVar27 + -1;
              UNLOCK();
              if (iVar16 == 0) {
                operator_delete__(pbVar27);
              }
            }
            piVar47 = (int *)(local_90 + -0x10);
            if (piVar47 != &emptyString) {
              LOCK();
              iVar16 = *piVar47;
              *piVar47 = *piVar47 + -1;
              UNLOCK();
              if (iVar16 == 0) {
                operator_delete__(piVar47);
              }
            }
            piVar47 = (int *)(local_f0._0_8_ + -0x10);
            if (piVar47 != &emptyString) {
              LOCK();
              iVar16 = *piVar47;
              *piVar47 = *piVar47 + -1;
              UNLOCK();
              if (iVar16 == 0) {
                operator_delete__(piVar47);
              }
            }
          }
          local_38 = local_80;
          pbVar27 = local_80 + -0x10;
          if (pbVar27 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar27 = *(int *)pbVar27 + 1;
            UNLOCK();
          }
          StringArray::add((StringArray *)local_128,&local_38);
          pbVar27 = local_38 + -0x10;
          if (pbVar27 != (byte *)&emptyString) {
            LOCK();
            iVar16 = *(int *)pbVar27;
            *(int *)pbVar27 = *(int *)pbVar27 + -1;
            UNLOCK();
            if (iVar16 == 0) {
              operator_delete__(pbVar27);
            }
          }
        }
        pbVar27 = local_80 + -0x10;
        if (pbVar27 != (byte *)&emptyString) {
          LOCK();
          iVar16 = *(int *)pbVar27;
          *(int *)pbVar27 = *(int *)pbVar27 + -1;
          UNLOCK();
          if (iVar16 == 0) {
            operator_delete__(pbVar27);
          }
        }
        do {
          plVar56 = &local_90;
          pXVar43 = *(XmlElement **)pXVar43;
          if (pXVar43 == (XmlElement *)0x0) goto LAB_002fafa8;
          pbVar34 = pbVar26;
          pbVar53 = *(byte **)(pXVar43 + 0x18);
          do {
            pbVar27 = pbVar53 + 1;
            bVar50 = *pbVar53;
            uVar17 = (uint)bVar50;
            if ((char)bVar50 < '\0') {
              if ((bVar50 & 0x40) == 0) {
                uVar17 = bVar50 & 0x7f;
                goto LAB_002fac10;
              }
              if ((bVar50 & 0x20) == 0) {
                uVar17 = 0x3f;
                lVar32 = 0;
                bVar7 = false;
                bVar11 = false;
              }
              else {
                bVar7 = true;
                if ((bVar50 & 0x10) == 0) {
                  uVar17 = 0x1f;
                  lVar32 = 1;
                  bVar11 = false;
                }
                else {
                  uVar17 = 0xf;
                  lVar32 = 2;
                  bVar11 = true;
                }
              }
              uVar17 = bVar50 & uVar17;
              if ((pbVar53[1] & 0xffffffc0) != 0x80) goto LAB_002fac10;
              pbVar27 = pbVar53 + lVar32 + 2;
              uVar17 = pbVar53[1] & 0x3f | uVar17 << 6;
              if (!bVar7) goto LAB_002fac10;
              pbVar49 = pbVar53 + 2;
              if ((*pbVar49 & 0xffffffc0) == 0x80) {
                uVar17 = *pbVar49 & 0x3f | uVar17 << 6;
                if (!bVar11) goto LAB_002fac10;
                pbVar49 = pbVar53 + 3;
                if ((*pbVar49 & 0xffffffc0) == 0x80) {
                  uVar17 = uVar17 << 6 | *pbVar49 & 0x3f;
                  goto LAB_002fac10;
                }
                goto LAB_002fac13;
              }
              pbVar27 = pbVar34 + 1;
              bVar50 = *pbVar34;
              wVar39 = (wint_t)bVar50;
              if ((char)bVar50 < '\0') goto LAB_002fac23;
LAB_002facf0:
              pbVar53 = pbVar27;
LAB_002facf3:
              uVar19 = 0;
              if (uVar17 != wVar39) {
LAB_002facfe:
                wVar18 = towupper(uVar17);
                wVar39 = towupper(wVar39);
                uVar19 = (int)(wVar18 - wVar39) >> 0x1f | 1;
                if (wVar18 - wVar39 == 0) {
                  uVar19 = 0;
                }
                this = local_130;
              }
            }
            else {
LAB_002fac10:
              pbVar49 = pbVar27;
LAB_002fac13:
              pbVar27 = pbVar34 + 1;
              bVar50 = *pbVar34;
              wVar39 = (wint_t)bVar50;
              if (-1 < (char)bVar50) goto LAB_002facf0;
LAB_002fac23:
              pbVar27 = pbVar34 + 1;
              if ((bVar50 & 0x40) == 0) {
                wVar39 = bVar50 & 0x7f;
                goto LAB_002facf0;
              }
              if ((bVar50 & 0x20) == 0) {
                uVar19 = 0x3f;
                lVar32 = 0;
                bVar7 = false;
                in_R8 = (uint *)0x0;
              }
              else {
                bVar7 = true;
                if ((bVar50 & 0x10) == 0) {
                  uVar19 = 0x1f;
                  lVar32 = 1;
                  in_R8 = (uint *)0x0;
                }
                else {
                  uVar19 = 0xf;
                  lVar32 = 2;
                  in_R8 = (uint *)CONCAT71((int7)((ulong)in_R8 >> 8),1);
                }
              }
              wVar39 = bVar50 & uVar19;
              if ((pbVar34[1] & 0xffffffc0) != 0x80) goto LAB_002facf0;
              pbVar27 = pbVar34 + lVar32 + 2;
              wVar39 = pbVar34[1] & 0x3f | wVar39 << 6;
              if (!bVar7) goto LAB_002facf0;
              pbVar53 = pbVar34 + 2;
              if ((*pbVar53 & 0xc0) == 0x80) {
                wVar39 = *pbVar53 & 0x3f | wVar39 << 6;
                if ((char)in_R8 == '\0') goto LAB_002facf0;
                pbVar53 = pbVar34 + 3;
                if ((*pbVar53 & 0xffffffc0) == 0x80) {
                  wVar39 = wVar39 << 6 | *pbVar53 & 0x3f;
                  goto LAB_002facf0;
                }
                goto LAB_002facf3;
              }
              uVar19 = 0;
              if (uVar17 != wVar39) goto LAB_002facfe;
            }
            plVar56 = (long *)((ulong)plVar56 & 0xffffffff);
            if (uVar19 != 0) {
              plVar56 = (long *)(ulong)uVar19;
            }
            pbVar27 = (byte *)(ulong)((uint)(uVar17 == 0) * 2);
            if (uVar19 != 0) {
              pbVar27 = (byte *)0x1;
            }
            pbVar34 = pbVar53;
            pbVar53 = pbVar49;
          } while ((int)pbVar27 == 0);
        } while (((int)pbVar27 == 1) && ((int)plVar56 != 0));
      } while (pXVar43 != (XmlElement *)0x0);
    }
LAB_002fafa8:
    if (pbVar24 == (byte *)&emptyString) {
LAB_002fafdd:
      pXVar43 = (XmlElement *)CONCAT17((undefined1)uStack_139,local_140);
    }
    else {
      LOCK();
      iVar16 = *(int *)pbVar24;
      *(int *)pbVar24 = *(int *)pbVar24 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(pbVar24);
        LOCK();
        iVar16 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
      }
      else {
        LOCK();
        iVar16 = *(int *)pbVar24;
        *(int *)pbVar24 = *(int *)pbVar24 + -1;
        UNLOCK();
      }
      if (iVar16 != 0) goto LAB_002fafdd;
      operator_delete__(pbVar24);
      pXVar43 = (XmlElement *)CONCAT17((undefined1)uStack_139,local_140);
    }
    if (pXVar43 != (XmlElement *)0x0) {
      XmlElement::~XmlElement(pXVar43);
      operator_delete(pXVar43);
    }
  }
  if (local_128._12_4_ == 0) {
                    /* try { // try from 002fb660 to 002fb669 has its CatchHandler @ 002fdffb */
    puVar25 = operator_new__(0x33);
    LOCK();
    *puVar25 = 0;
    UNLOCK();
    *(undefined8 *)(puVar25 + 2) = 0x1c;
    uVar23 = s__etc_fonts_fonts_usr_X11R6_lib_X_005dd320._24_8_;
    local_80 = (byte *)(puVar25 + 4);
    *(undefined8 *)(puVar25 + 4) = s__etc_fonts_fonts_usr_X11R6_lib_X_005dd320._16_8_;
    *(undefined8 *)(puVar25 + 6) = uVar23;
    *(undefined8 *)(puVar25 + 8) = 0x73746e6f662f3131;
    *(undefined1 *)(puVar25 + 10) = 0;
    StringArray::add((StringArray *)local_128,&local_80);
    pbVar24 = local_80 + -0x10;
    if (pbVar24 != (byte *)&emptyString) {
      LOCK();
      iVar16 = *(int *)pbVar24;
      *(int *)pbVar24 = *(int *)pbVar24 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(pbVar24);
      }
    }
  }
joined_r0x002fb6e7:
  uVar17 = local_128._12_4_;
  if (1 < (int)local_128._12_4_) {
    pbVar24 = (byte *)(ulong)(uint)local_128._12_4_;
    local_118 = &DAT_0061ac58;
    uStack_110 = 0x61ac58;
    uStack_10c = 0;
    local_a0 = 0;
LAB_002fb052:
    pbVar27 = *(byte **)(local_128._0_8_ + local_a0 * 8);
    pbVar26 = pbVar27 + -0x10;
    if (pbVar26 != (byte *)&emptyString) {
      LOCK();
      *(int *)pbVar26 = *(int *)pbVar26 + 1;
      UNLOCK();
      pbVar24 = (byte *)(ulong)(uint)local_128._12_4_;
    }
    local_a0 = local_a0 + 1;
    uVar54 = local_a0 & 0xffffffff;
    pbVar34 = pbVar26;
LAB_002fb08c:
    uVar17 = (uint)pbVar24;
LAB_002fb0b0:
    uVar19 = (uint)uVar54;
    if ((int)uVar19 < 0) {
      uVar19 = 0;
    }
    local_f8 = pbVar24;
    if ((int)uVar19 < (int)uVar17) {
      uVar52 = (uVar17 - 5) - uVar19;
      bVar50 = ((char)pbVar24 + '\x03') - (char)uVar19;
      uVar54 = (ulong)uVar19;
      do {
        pbVar53 = *(byte **)(local_128._0_8_ + uVar54 * 8);
        pbVar49 = pbVar27;
        do {
          pbVar57 = pbVar49 + 1;
          bVar41 = *pbVar49;
          uVar19 = (uint)bVar41;
          if ((char)bVar41 < '\0') {
            if ((bVar41 & 0x40) == 0) {
              uVar19 = uVar19 & 0x7f;
              goto LAB_002fb200;
            }
            if ((bVar41 & 0x20) == 0) {
              uVar58 = 0x3f;
              lVar32 = 0;
              bVar7 = false;
              bVar11 = false;
            }
            else {
              bVar7 = true;
              if ((bVar41 & 0x10) == 0) {
                uVar58 = 0x1f;
                lVar32 = 1;
                bVar11 = false;
              }
              else {
                uVar58 = 0xf;
                lVar32 = 2;
                bVar11 = true;
              }
            }
            uVar19 = uVar19 & uVar58;
            if ((pbVar49[1] & 0xc0) != 0x80) goto LAB_002fb200;
            pbVar57 = pbVar49 + lVar32 + 2;
            uVar19 = pbVar49[1] & 0x3f | uVar19 << 6;
            if (!bVar7) goto LAB_002fb200;
            uVar58 = (uint)pbVar49[2];
            if ((uVar58 & 0xffffffc0) == 0x80) {
              uVar19 = uVar58 & 0x3f | uVar19 << 6;
              if (!bVar11) goto LAB_002fb200;
              pbVar49 = pbVar49 + 3;
              if ((*pbVar49 & 0xffffffc0) == 0x80) {
                uVar19 = uVar19 << 6 | *pbVar49 & 0x3f;
                goto LAB_002fb200;
              }
              goto LAB_002fb203;
            }
            bVar41 = *pbVar53;
            pbVar49 = pbVar49 + 2;
          }
          else {
LAB_002fb200:
            pbVar49 = pbVar57;
LAB_002fb203:
            bVar41 = *pbVar53;
          }
          uVar58 = (uint)bVar41;
          pbVar57 = pbVar53 + 1;
          if ((char)bVar41 < '\0') {
            pbVar57 = pbVar53 + 1;
            if ((bVar41 & 0x40) == 0) {
              uVar58 = bVar41 & 0x7f;
            }
            else {
              if ((bVar41 & 0x20) == 0) {
                uVar58 = 0x3f;
                lVar32 = 0;
                bVar7 = false;
                bVar11 = false;
              }
              else {
                bVar7 = true;
                if ((bVar41 & 0x10) == 0) {
                  uVar58 = 0x1f;
                  lVar32 = 1;
                  bVar11 = false;
                }
                else {
                  uVar58 = 0xf;
                  lVar32 = 2;
                  bVar11 = true;
                }
              }
              uVar58 = bVar41 & uVar58;
              if ((pbVar53[1] & 0xc0) == 0x80) {
                pbVar57 = pbVar53 + lVar32 + 2;
                uVar58 = pbVar53[1] & 0x3f | uVar58 << 6;
                if (bVar7) {
                  bVar41 = pbVar53[2];
                  if ((bVar41 & 0xc0) == 0x80) {
                    uVar58 = bVar41 & 0x3f | uVar58 << 6;
                    if (bVar11) {
                      uVar42 = (uint)pbVar53[3];
                      if ((uVar42 & 0xffffffc0) == 0x80) {
                        uVar58 = uVar58 << 6 | uVar42 & 0x3f;
                      }
                      else {
                        pbVar57 = pbVar53 + 3;
                      }
                    }
                  }
                  else {
                    pbVar57 = pbVar53 + 2;
                  }
                }
              }
            }
          }
          pbVar53 = pbVar57;
          cVar15 = (uVar19 == 0) * '\x02';
          pbVar34 = (byte *)((ulong)pbVar34 & 0xffffffff);
          if (uVar19 - uVar58 != 0) {
            pbVar34 = (byte *)(ulong)((int)(uVar19 - uVar58) >> 0x1f | 1);
            cVar15 = '\x01';
          }
        } while (cVar15 == '\0');
        if ((cVar15 != '\x01') || ((int)pbVar34 == 0)) goto LAB_002fb340;
        uVar54 = uVar54 + 1;
        uVar52 = uVar52 - 1;
        bVar50 = bVar50 + 3;
        if (uVar54 == ((ulong)pbVar24 & 0xffffffff)) break;
      } while( true );
    }
    goto LAB_002fb630;
  }
LAB_002fb6ed:
  if (uVar17 != 0) {
    local_108 = (byte *)local_128._0_8_;
    local_88 = (byte *)(local_128._0_8_ + (long)(int)uVar17 * 8);
LAB_002fb756:
                    /* try { // try from 002fb756 to 002fb75d has its CatchHandler @ 002fe1e8 */
    File::getCurrentWorkingDirectory((File *)&local_140);
                    /* try { // try from 002fb766 to 002fb775 has its CatchHandler @ 002fe1f0 */
    File::getChildFile((File *)local_f0,(undefined8 *)&local_140,*(byte **)local_108);
                    /* try { // try from 002fb776 to 002fb77f has its CatchHandler @ 002fe1f5 */
    piVar47 = operator_new__(0x1b);
    LOCK();
    *piVar47 = 0;
    UNLOCK();
    piVar47[2] = 4;
    piVar47[3] = 0;
    local_100 = (byte *)(piVar47 + 4);
    *(undefined2 *)(piVar47 + 4) = 0x2a;
                    /* try { // try from 002fb7a1 to 002fb7cb has its CatchHandler @ 002fe1fa */
    RangedDirectoryIterator::RangedDirectoryIterator
              ((RangedDirectoryIterator *)&local_80,(long *)local_f0,(DirectoryIterator)0x1,
               (long *)&local_100,2,2);
    LOCK();
    iVar16 = *piVar47;
    *piVar47 = *piVar47 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar47);
    }
    piVar47 = (int *)(local_f0._0_8_ + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(piVar47);
      }
    }
    piVar47 = (int *)(CONCAT17((undefined1)uStack_139,local_140) + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(piVar47);
      }
    }
    local_f0._8_8_ = local_78;
    local_f0._0_8_ = local_80;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
    }
    local_e0._8_8_ = local_68;
    local_e0._0_8_ = local_70;
    if (local_68 != (long *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)((long)local_68 + 0xc) = *(int *)((long)local_68 + 0xc) + 1;
        UNLOCK();
      }
      else {
        *(int *)((long)local_68 + 0xc) = *(int *)((long)local_68 + 0xc) + 1;
      }
    }
    local_d0 = local_60;
    piVar47 = (int *)(local_60 + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      *piVar47 = *piVar47 + 1;
      UNLOCK();
    }
    uStack_b8 = uStack_48;
    uStack_b5 = (undefined4)uStack_45;
    uStack_b1 = (uint)((ulong)uStack_45 >> 0x20);
    local_c8 = local_58;
    uStack_c0 = uStack_50;
    uStack_bd = uStack_4d;
LAB_002fb8f9:
    lVar32 = local_f0._0_8_;
LAB_002fb933:
    if (lVar32 != 0) {
      local_140 = SUB87(local_d0,0);
      uStack_139._0_1_ = (undefined1)((ulong)local_d0 >> 0x38);
      piVar47 = (int *)(local_d0 + -0x10);
      if (piVar47 != &emptyString) {
        LOCK();
        *piVar47 = *piVar47 + 1;
        UNLOCK();
      }
                    /* try { // try from 002fb95d to 002fb96b has its CatchHandler @ 002fe2af */
      uVar54 = File::hasFileExtension((File *)&local_140,(byte *)"ttf;otf");
      piVar47 = (int *)(CONCAT17((undefined1)uStack_139,local_140) + -0x10);
      puVar48 = local_d0;
      if (piVar47 != &emptyString) {
        LOCK();
        iVar16 = *piVar47;
        *piVar47 = *piVar47 + -1;
        UNLOCK();
        if (iVar16 == 0) {
          operator_delete__(piVar47);
          puVar48 = local_d0;
        }
      }
      local_d0 = puVar48;
      if ((char)uVar54 != '\0') {
        local_a8 = (int *)(puVar48 + -0x10);
        if (local_a8 != &emptyString) {
          LOCK();
          *local_a8 = *local_a8 + 1;
          UNLOCK();
        }
        pbVar24 = (byte *)0x0;
        iVar16 = 0;
LAB_002fba02:
        local_140 = 0;
        uStack_139 = uStack_139 & 0xffffff00;
                    /* try { // try from 002fba14 to 002fba2f has its CatchHandler @ 002fe366 */
        iVar20 = FT_New_Face(*(undefined8 *)(*(long *)(this + 8) + 0x18),puVar48,pbVar24,&local_140)
        ;
        if (iVar20 == 0) {
          puVar22 = operator_new(0x30);
          *(undefined4 *)(puVar22 + 1) = 0;
          *puVar22 = &PTR__FTFaceWrapper_007123a8;
          lVar32 = *(long *)(this + 8);
          puVar22[2] = lVar32;
          if (lVar32 != 0) {
            LOCK();
            *(int *)(lVar32 + 8) = *(int *)(lVar32 + 8) + 1;
            UNLOCK();
          }
          *(undefined1 (*) [16])(puVar22 + 3) = (undefined1  [16])0x0;
          puVar22[5] = CONCAT17((undefined1)uStack_139,local_140);
          LOCK();
          *(int *)(puVar22 + 1) = *(int *)(puVar22 + 1) + 1;
          UNLOCK();
                    /* try { // try from 002fba75 to 002fba92 has its CatchHandler @ 002fe359 */
          iVar20 = FT_Select_Charmap(puVar22[5],0x756e6963);
          if (iVar20 != 0) {
            FT_Set_Charmap(puVar22[5],**(undefined8 **)(puVar22[5] + 0x50));
          }
          piVar47 = (int *)puVar22[5];
          if (piVar47 != (int *)0x0) {
            if (pbVar24 == (byte *)0x0) {
              iVar16 = *piVar47;
            }
                    /* try { // try from 002fbaab to 002fbab4 has its CatchHandler @ 002fe357 */
            puVar29 = operator_new(0x28);
            *puVar29 = &PTR__KnownTypeface_00712340;
            pbVar26 = *(byte **)(piVar47 + 10);
            local_f8 = pbVar24;
            if (pbVar26 == (byte *)0x0) {
              local_158 = &DAT_0061ac58;
            }
            else {
              bVar50 = *pbVar26;
              local_158 = &DAT_0061ac58;
              if (bVar50 != 0) {
                pbVar24 = pbVar26 + 1;
                lVar32 = 0;
                pbVar27 = pbVar24;
                do {
                  lVar33 = lVar32 + (ulong)(bVar50 >> 7);
                  lVar32 = lVar33 + 1;
                  bVar50 = *pbVar27;
                  pbVar27 = pbVar27 + 1;
                } while (bVar50 != 0);
                uVar54 = lVar33 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002fbb24 to 002fbb28 has its CatchHandler @ 002fe2e4 */
                puVar25 = operator_new__(uVar54 + 0x17);
                LOCK();
                *puVar25 = 0;
                UNLOCK();
                *(ulong *)(puVar25 + 2) = uVar54;
                local_158 = (byte *)(puVar25 + 4);
                bVar50 = *pbVar26;
                pbVar26 = local_158;
                if (bVar50 != 0) {
                  do {
                    if ((char)bVar50 < '\0') {
                      *pbVar26 = bVar50 >> 6 | 0xc0;
                      pbVar26[1] = bVar50 & 0x3f | 0x80;
                      pbVar26 = pbVar26 + 1;
                    }
                    else {
                      *pbVar26 = bVar50;
                    }
                    pbVar26 = pbVar26 + 1;
                    bVar50 = *pbVar24;
                    pbVar24 = pbVar24 + 1;
                  } while (bVar50 != 0);
                }
                *pbVar26 = 0;
                piVar47 = (int *)puVar22[5];
              }
            }
            puVar29[1] = local_158;
            pbVar24 = *(byte **)(piVar47 + 0xc);
            if ((pbVar24 == (byte *)0x0) || (bVar50 = *pbVar24, bVar50 == 0)) {
              pbVar26 = &DAT_0061ac58;
            }
            else {
              pbVar27 = pbVar24 + 1;
              lVar32 = 0;
              pbVar26 = pbVar27;
              do {
                lVar33 = lVar32 + (ulong)(bVar50 >> 7);
                lVar32 = lVar33 + 1;
                bVar50 = *pbVar26;
                pbVar26 = pbVar26 + 1;
              } while (bVar50 != 0);
              uVar54 = lVar33 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 002fbbe4 to 002fbbe8 has its CatchHandler @ 002fe2e9 */
              puVar25 = operator_new__(uVar54 + 0x17);
              LOCK();
              *puVar25 = 0;
              UNLOCK();
              *(ulong *)(puVar25 + 2) = uVar54;
              pbVar26 = (byte *)(puVar25 + 4);
              bVar50 = *pbVar24;
              pbVar24 = pbVar26;
              if (bVar50 != 0) {
                do {
                  if ((char)bVar50 < '\0') {
                    *pbVar24 = bVar50 >> 6 | 0xc0;
                    pbVar24[1] = bVar50 & 0x3f | 0x80;
                    pbVar24 = pbVar24 + 1;
                  }
                  else {
                    *pbVar24 = bVar50;
                  }
                  pbVar24 = pbVar24 + 1;
                  bVar50 = *pbVar27;
                  pbVar27 = pbVar27 + 1;
                } while (bVar50 != 0);
              }
              *pbVar24 = 0;
              piVar47 = (int *)puVar22[5];
              local_158 = (byte *)puVar29[1];
            }
            puVar29[2] = pbVar26;
            *(int *)(puVar29 + 3) = piVar47[2];
            uVar54 = CONCAT71((int7)((ulong)piVar47 >> 8),0x53);
            uVar17 = 1;
            pcVar36 = "Sans";
            do {
              pcVar45 = pcVar36 + 1;
              if ((char)uVar54 < '\0') {
                do {
                  pbVar24 = (byte *)(pcVar36 + 1);
                  uVar54 = (ulong)*pbVar24;
                  pcVar45 = pcVar36 + 1;
                  pcVar36 = pcVar45;
                } while ((*pbVar24 & 0xc0) == 0x80);
              }
              else {
                if ((char)uVar54 == '\0') goto LAB_002fbcf0;
                uVar54 = CONCAT71((int7)(uVar54 >> 8),*pcVar45);
              }
              uVar17 = uVar17 + 1;
              pcVar36 = pcVar45;
            } while( true );
          }
          goto LAB_002fc412;
        }
        goto LAB_002fb9f0;
      }
      goto LAB_002fd0e0;
    }
    piVar47 = (int *)(local_d0 + -0x10);
    if (piVar47 == &emptyString) {
LAB_002fd325:
    }
    else {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 != 0) goto LAB_002fd325;
      operator_delete__(piVar47);
    }
    if ((long *)local_e0._8_8_ != (long *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        piVar47 = (int *)(local_e0._8_8_ + 0xc);
        iVar16 = *piVar47;
        *piVar47 = *piVar47 + -1;
        UNLOCK();
      }
      else {
        iVar16 = *(int *)(local_e0._8_8_ + 0xc);
        *(int *)(local_e0._8_8_ + 0xc) = iVar16 + -1;
      }
      if (iVar16 == 1) {
        (**(code **)(*(long *)local_e0._8_8_ + 0x18))();
      }
    }
    uVar23 = local_f0._8_8_;
    if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_f0._8_8_ !=
        (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(local_f0._8_8_ + 8) == 0x100000001) {
        *(undefined8 *)(local_f0._8_8_ + 8) = 0;
        (**(code **)(*(long *)local_f0._8_8_ + 0x10))(local_f0._8_8_);
        (**(code **)(*(long *)uVar23 + 0x18))(uVar23);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_f0._8_8_ + 8);
          iVar16 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar16 = (int)*(long *)(local_f0._8_8_ + 8);
          *(int *)(local_f0._8_8_ + 8) = iVar16 + -1;
        }
        if (iVar16 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                    ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_f0._8_8_);
        }
      }
    }
    piVar47 = (int *)(local_60 + -0x10);
    if (piVar47 != &emptyString) {
      LOCK();
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(piVar47);
      }
    }
    if (local_68 != (long *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        piVar47 = (int *)((long)local_68 + 0xc);
        iVar16 = *piVar47;
        *piVar47 = *piVar47 + -1;
        UNLOCK();
      }
      else {
        iVar16 = *(int *)((long)local_68 + 0xc);
        *(int *)((long)local_68 + 0xc) = iVar16 + -1;
      }
      if (iVar16 == 1) {
        (**(code **)(*local_68 + 0x18))();
      }
    }
    p_Var1 = local_78;
    if (local_78 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(local_78 + 8) == 0x100000001) {
        *(undefined8 *)(local_78 + 8) = 0;
        (**(code **)(*(long *)local_78 + 0x10))(local_78);
        (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = local_78 + 8;
          iVar16 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar16 = (int)*(long *)(local_78 + 8);
          *(int *)(local_78 + 8) = iVar16 + -1;
        }
        if (iVar16 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(local_78);
        }
      }
    }
    local_108 = local_108 + 8;
    if (local_108 == local_88) goto LAB_002fd4fa;
    goto LAB_002fb756;
  }
LAB_002fd4fa:
  pbVar24 = *(byte **)(this + 0x10);
  local_98 = *(byte **)(this + 0x18);
  if (pbVar24 != local_98) {
    lVar32 = (long)local_98 - (long)pbVar24;
    uVar44 = lVar32 >> 3;
    uVar54 = 0x3f;
    if (uVar44 != 0) {
      for (; uVar44 >> uVar54 == 0; uVar54 = uVar54 - 1) {
      }
    }
                    /* try { // try from 002fd539 to 002fd55f has its CatchHandler @ 002fe157 */
    std::
    __introsort_loop<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,long,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
              (pbVar24,local_98,(uVar54 ^ 0x3f) * 2 ^ 0x7e);
    if (lVar32 < 0x81) {
                    /* try { // try from 002fdf3f to 002fdf4e has its CatchHandler @ 002fe157 */
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
                ((long *)pbVar24,(long *)local_98);
    }
    else {
      local_148 = pbVar24 + 0x80;
      std::
      __insertion_sort<__gnu_cxx::__normal_iterator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>*,std::vector<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>,std::allocator<std::unique_ptr<juce::FTTypefaceList::KnownTypeface,std::default_delete<juce::FTTypefaceList::KnownTypeface>>>>>,__gnu_cxx::__ops::_Iter_comp_iter<juce::FTTypefaceList::scanFontPaths(juce::StringArray_const&)::_lambda(auto:1_const&,auto:2_const&)_1_>>
                ((long *)pbVar24,(long *)local_148);
      if (local_148 != local_98) {
        do {
          local_108 = *(byte **)local_148;
          local_148[0] = 0;
          local_148[1] = 0;
          local_148[2] = 0;
          local_148[3] = 0;
          local_148[4] = 0;
          local_148[5] = 0;
          local_148[6] = 0;
          local_148[7] = 0;
          pbVar24 = local_108;
          local_88 = local_148;
LAB_002fd5c0:
          pbVar27 = local_108;
          local_130 = (FTTypefaceList *)CONCAT44(local_130._4_4_,*(undefined4 *)(pbVar24 + 0x18));
          local_118 = *(byte **)(pbVar24 + 0x10);
          pbVar26 = local_118 + -0x10;
          if (pbVar26 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar26 = *(int *)pbVar26 + 1;
            UNLOCK();
          }
          local_f8 = local_148 + -8;
          uVar17 = *(uint *)(pbVar24 + 0x1c);
          local_a0 = CONCAT44(local_a0._4_4_,uVar17);
          pbVar53 = *(byte **)(pbVar24 + 8);
          pbVar34 = pbVar53 + -0x10;
          if (pbVar34 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar34 = *(int *)pbVar34 + 1;
            UNLOCK();
          }
          lVar32 = *(long *)local_f8;
          local_a8 = (int *)CONCAT44(local_a8._4_4_,*(undefined4 *)(lVar32 + 0x18));
          pbVar57 = *(byte **)(lVar32 + 0x10);
          pbVar49 = pbVar57 + -0x10;
          if (pbVar49 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar49 = *(int *)pbVar49 + 1;
            UNLOCK();
          }
          uVar19 = *(uint *)(lVar32 + 0x1c);
          pbVar59 = *(byte **)(lVar32 + 8);
          pbVar2 = pbVar59 + -0x10;
          if (pbVar2 != (byte *)&emptyString) {
            LOCK();
            *(int *)pbVar2 = *(int *)pbVar2 + 1;
            UNLOCK();
          }
          pbVar37 = pbVar59;
          pbVar38 = pbVar53;
          do {
            pbVar40 = pbVar38 + 1;
            bVar50 = *pbVar38;
            uVar52 = (uint)bVar50;
            if ((char)bVar50 < '\0') {
              if ((bVar50 & 0x40) == 0) {
                uVar52 = uVar52 & 0x7f;
                goto LAB_002fd6de;
              }
              if ((bVar50 & 0x20) == 0) {
                uVar58 = 0x3f;
                lVar32 = 0;
                bVar7 = false;
                bVar11 = false;
              }
              else {
                bVar7 = true;
                if ((bVar50 & 0x10) == 0) {
                  uVar58 = 0x1f;
                  lVar32 = 1;
                  bVar11 = false;
                }
                else {
                  uVar58 = 0xf;
                  lVar32 = 2;
                  bVar11 = true;
                }
              }
              uVar52 = uVar52 & uVar58;
              if ((pbVar38[1] & 0xffffffc0) == 0x80) {
                pbVar61 = pbVar38 + lVar32 + 2;
                uVar52 = pbVar38[1] & 0x3f | uVar52 << 6;
                if (bVar7) {
                  pbVar40 = pbVar38 + 2;
                  if ((*pbVar40 & 0xc0) != 0x80) goto LAB_002fd6de;
                  uVar52 = *pbVar40 & 0x3f | uVar52 << 6;
                  if (bVar11) {
                    bVar50 = pbVar38[3];
                    pbVar38 = pbVar38 + 3;
                    if ((bVar50 & 0xc0) != 0x80) goto LAB_002fd690;
                    uVar52 = uVar52 << 6 | bVar50 & 0x3f;
                  }
                  bVar50 = *pbVar37;
                  pbVar38 = pbVar61;
                }
                else {
                  pbVar38 = pbVar61;
LAB_002fd690:
                  bVar50 = *pbVar37;
                }
              }
              else {
                bVar50 = *pbVar37;
                pbVar38 = pbVar40;
              }
            }
            else {
LAB_002fd6de:
              bVar50 = *pbVar37;
              pbVar38 = pbVar40;
            }
            uVar58 = (uint)bVar50;
            pbVar40 = pbVar37 + 1;
            if ((char)bVar50 < '\0') {
              pbVar40 = pbVar37 + 1;
              if ((bVar50 & 0x40) == 0) {
                uVar58 = bVar50 & 0x7f;
              }
              else {
                if ((bVar50 & 0x20) == 0) {
                  uVar58 = 0x3f;
                  lVar32 = 0;
                  bVar7 = false;
                  bVar11 = false;
                }
                else {
                  bVar7 = true;
                  if ((bVar50 & 0x10) == 0) {
                    uVar58 = 0x1f;
                    lVar32 = 1;
                    bVar11 = false;
                  }
                  else {
                    uVar58 = 0xf;
                    lVar32 = 2;
                    bVar11 = true;
                  }
                }
                uVar58 = bVar50 & uVar58;
                if ((pbVar37[1] & 0xc0) == 0x80) {
                  pbVar40 = pbVar37 + lVar32 + 2;
                  uVar58 = pbVar37[1] & 0x3f | uVar58 << 6;
                  if (bVar7) {
                    uVar42 = (uint)pbVar37[2];
                    if ((uVar42 & 0xffffffc0) == 0x80) {
                      uVar58 = uVar42 & 0x3f | uVar58 << 6;
                      if (bVar11) {
                        uVar42 = (uint)pbVar37[3];
                        if ((uVar42 & 0xffffffc0) == 0x80) {
                          uVar58 = uVar58 << 6 | uVar42 & 0x3f;
                        }
                        else {
                          pbVar40 = pbVar37 + 3;
                        }
                      }
                    }
                    else {
                      pbVar40 = pbVar37 + 2;
                    }
                    goto LAB_002fd69d;
                  }
                }
              }
            }
LAB_002fd69d:
            pbVar37 = pbVar40;
            uVar58 = uVar52 - uVar58;
            cVar15 = (uVar52 == 0) * '\x02';
            pbVar24 = (byte *)((ulong)pbVar24 & 0xffffffff);
            if (uVar58 != 0) {
              pbVar24 = (byte *)(ulong)((int)uVar58 >> 0x1f | 1);
              cVar15 = '\x01';
            }
          } while (cVar15 == '\0');
          if ((cVar15 == '\x01') && ((int)pbVar24 < 0)) {
            cVar15 = -1;
          }
          else {
            do {
              pbVar24 = pbVar59 + 1;
              bVar50 = *pbVar59;
              uVar52 = (uint)bVar50;
              if ((char)bVar50 < '\0') {
                if ((bVar50 & 0x40) == 0) {
                  uVar52 = bVar50 & 0x7f;
                  goto LAB_002fda00;
                }
                if ((bVar50 & 0x20) == 0) {
                  uVar52 = 0x3f;
                  lVar32 = 0;
                  bVar7 = false;
                  bVar11 = false;
                }
                else {
                  bVar7 = true;
                  if ((bVar50 & 0x10) == 0) {
                    uVar52 = 0x1f;
                    lVar32 = 1;
                    bVar11 = false;
                  }
                  else {
                    uVar52 = 0xf;
                    lVar32 = 2;
                    bVar11 = true;
                  }
                }
                uVar52 = bVar50 & uVar52;
                if ((pbVar59[1] & 0xffffffc0) != 0x80) goto LAB_002fda00;
                pbVar24 = pbVar59 + lVar32 + 2;
                uVar52 = pbVar59[1] & 0x3f | uVar52 << 6;
                if (!bVar7) goto LAB_002fda00;
                uVar42 = (uint)pbVar59[2];
                if ((uVar42 & 0xffffffc0) == 0x80) {
                  uVar52 = uVar42 & 0x3f | uVar52 << 6;
                  if (!bVar11) goto LAB_002fda00;
                  pbVar59 = pbVar59 + 3;
                  if ((*pbVar59 & 0xffffffc0) == 0x80) {
                    uVar52 = uVar52 << 6 | *pbVar59 & 0x3f;
                    goto LAB_002fda00;
                  }
                  goto LAB_002fda03;
                }
                bVar50 = *pbVar53;
                pbVar59 = pbVar59 + 2;
              }
              else {
LAB_002fda00:
                pbVar59 = pbVar24;
LAB_002fda03:
                bVar50 = *pbVar53;
              }
              uVar42 = (uint)bVar50;
              pbVar24 = pbVar53 + 1;
              if ((char)bVar50 < '\0') {
                pbVar24 = pbVar53 + 1;
                if ((bVar50 & 0x40) == 0) {
                  uVar42 = uVar42 & 0x7f;
                }
                else {
                  if ((bVar50 & 0x20) == 0) {
                    uVar21 = 0x3f;
                    lVar32 = 0;
                    bVar7 = false;
                    bVar11 = false;
                  }
                  else {
                    bVar7 = true;
                    if ((bVar50 & 0x10) == 0) {
                      uVar21 = 0x1f;
                      lVar32 = 1;
                      bVar11 = false;
                    }
                    else {
                      uVar21 = 0xf;
                      lVar32 = 2;
                      bVar11 = true;
                    }
                  }
                  uVar42 = uVar42 & uVar21;
                  if ((pbVar53[1] & 0xffffffc0) == 0x80) {
                    pbVar38 = pbVar53 + lVar32 + 2;
                    uVar42 = pbVar53[1] & 0x3f | uVar42 << 6;
                    pbVar24 = pbVar38;
                    if (bVar7) {
                      pbVar24 = pbVar53 + 2;
                      if ((*pbVar24 & 0xffffffc0) == 0x80) {
                        uVar42 = *pbVar24 & 0x3f | uVar42 << 6;
                        pbVar24 = pbVar38;
                        if (bVar11) {
                          pbVar24 = pbVar53 + 3;
                          if ((*pbVar24 & 0xffffffc0) == 0x80) {
                            uVar42 = uVar42 << 6 | *pbVar24 & 0x3f;
                            pbVar24 = pbVar38;
                          }
                        }
                      }
                    }
                  }
                }
              }
              cVar15 = (uVar52 == 0) * '\x02';
              if (uVar52 - uVar42 != 0) {
                cVar15 = '\x01';
                uVar58 = (int)(uVar52 - uVar42) >> 0x1f | 1;
              }
              pbVar53 = pbVar24;
            } while (cVar15 == '\0');
            if ((cVar15 == '\x01') && ((int)uVar58 < 0)) {
              cVar15 = '\x01';
            }
            else if (uVar17 == uVar19) {
              pbVar53 = pbVar57;
              pbVar24 = local_118;
              do {
                pbVar59 = pbVar24 + 1;
                bVar50 = *pbVar24;
                uVar17 = (uint)bVar50;
                if ((char)bVar50 < '\0') {
                  if ((bVar50 & 0x40) == 0) {
                    uVar17 = bVar50 & 0x7f;
                    goto LAB_002fdb8d;
                  }
                  if ((bVar50 & 0x20) == 0) {
                    uVar17 = 0x3f;
                    lVar32 = 0;
                    bVar7 = false;
                    bVar11 = false;
                  }
                  else {
                    bVar7 = true;
                    if ((bVar50 & 0x10) == 0) {
                      uVar17 = 0x1f;
                      lVar32 = 1;
                      bVar11 = false;
                    }
                    else {
                      uVar17 = 0xf;
                      lVar32 = 2;
                      bVar11 = true;
                    }
                  }
                  uVar17 = bVar50 & uVar17;
                  if ((pbVar24[1] & 0xffffffc0) == 0x80) {
                    uVar17 = pbVar24[1] & 0x3f | uVar17 << 6;
                    if (bVar7) {
                      pbVar59 = pbVar24 + 2;
                      if ((*pbVar59 & 0xffffffc0) != 0x80) goto LAB_002fdb8d;
                      uVar17 = *pbVar59 & 0x3f | uVar17 << 6;
                      if (bVar11) {
                        pbVar59 = pbVar24 + 3;
                        if ((*pbVar59 & 0xc0) != 0x80) goto LAB_002fdc70;
                        uVar17 = uVar17 << 6 | *pbVar59 & 0x3f;
                      }
                    }
                    bVar50 = *pbVar53;
                    pbVar24 = pbVar24 + lVar32 + 2;
                  }
                  else {
LAB_002fdc70:
                    bVar50 = *pbVar53;
                    pbVar24 = pbVar59;
                  }
                }
                else {
LAB_002fdb8d:
                  bVar50 = *pbVar53;
                  pbVar24 = pbVar59;
                }
                uVar52 = (uint)bVar50;
                pbVar59 = pbVar53 + 1;
                if ((char)bVar50 < '\0') {
                  pbVar59 = pbVar53 + 1;
                  if ((bVar50 & 0x40) == 0) {
                    uVar52 = uVar52 & 0x7f;
                  }
                  else {
                    if ((bVar50 & 0x20) == 0) {
                      uVar58 = 0x3f;
                      lVar32 = 0;
                      bVar7 = false;
                      bVar11 = false;
                    }
                    else {
                      bVar7 = true;
                      if ((bVar50 & 0x10) == 0) {
                        uVar58 = 0x1f;
                        lVar32 = 1;
                        bVar11 = false;
                      }
                      else {
                        uVar58 = 0xf;
                        lVar32 = 2;
                        bVar11 = true;
                      }
                    }
                    uVar52 = uVar52 & uVar58;
                    if ((pbVar53[1] & 0xffffffc0) == 0x80) {
                      pbVar59 = pbVar53 + lVar32 + 2;
                      uVar52 = pbVar53[1] & 0x3f | uVar52 << 6;
                      if (bVar7) {
                        uVar58 = (uint)pbVar53[2];
                        if ((uVar58 & 0xffffffc0) == 0x80) {
                          uVar52 = uVar58 & 0x3f | uVar52 << 6;
                          if (bVar11) {
                            uVar58 = (uint)pbVar53[3];
                            if ((uVar58 & 0xffffffc0) == 0x80) {
                              uVar52 = uVar52 << 6 | uVar58 & 0x3f;
                            }
                            else {
                              pbVar59 = pbVar53 + 3;
                            }
                          }
                        }
                        else {
                          pbVar59 = pbVar53 + 2;
                        }
                      }
                    }
                  }
                }
                pbVar53 = pbVar59;
                cVar15 = (uVar17 == 0) * '\x02';
                if (uVar17 - uVar52 != 0) {
                  cVar15 = '\x01';
                  uVar19 = (int)(uVar17 - uVar52) >> 0x1f | 1;
                }
              } while (cVar15 == '\0');
              if ((cVar15 == '\x01') && ((int)uVar19 < 0)) {
                cVar15 = -1;
              }
              else {
                uVar17 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   (pbVar57,local_118);
                if ((int)uVar17 < 0) {
                  cVar15 = '\x01';
                }
                else {
                  cVar15 = ((int)local_a8 <= (int)local_130) * '\x02' + -1;
                  if ((int)local_130 == (int)local_a8) {
                    cVar15 = '\0';
                  }
                }
              }
            }
            else {
              cVar15 = ((int)uVar19 <= (int)uVar17) * '\x02' + -1;
            }
          }
          if (pbVar2 != (byte *)&emptyString) {
            LOCK();
            iVar16 = *(int *)pbVar2;
            *(int *)pbVar2 = *(int *)pbVar2 + -1;
            UNLOCK();
            if (iVar16 == 0) {
              operator_delete__(pbVar2);
            }
          }
          if (pbVar49 != (byte *)&emptyString) {
            LOCK();
            iVar16 = *(int *)pbVar49;
            *(int *)pbVar49 = *(int *)pbVar49 + -1;
            UNLOCK();
            if (iVar16 == 0) {
              operator_delete__(pbVar49);
            }
          }
          if (pbVar34 != (byte *)&emptyString) {
            LOCK();
            iVar16 = *(int *)pbVar34;
            *(int *)pbVar34 = *(int *)pbVar34 + -1;
            UNLOCK();
            if (iVar16 == 0) {
              operator_delete__(pbVar34);
            }
          }
          if (pbVar26 != (byte *)&emptyString) {
            LOCK();
            iVar16 = *(int *)pbVar26;
            *(int *)pbVar26 = *(int *)pbVar26 + -1;
            UNLOCK();
            if (iVar16 == 0) {
              operator_delete__(pbVar26);
            }
          }
          pbVar26 = local_f8;
          if (cVar15 < '\0') {
            lVar32 = *(long *)(local_148 + -8);
            plVar56 = *(long **)local_148;
            local_148[-8] = 0;
            local_148[-7] = 0;
            local_148[-6] = 0;
            local_148[-5] = 0;
            local_148[-4] = 0;
            local_148[-3] = 0;
            local_148[-2] = 0;
            local_148[-1] = 0;
            *(long *)local_148 = lVar32;
            local_148 = local_f8;
            pbVar24 = pbVar27;
            if (plVar56 != (long *)0x0) {
              (**(code **)(*plVar56 + 8))();
              local_148 = pbVar26;
            }
            goto LAB_002fd5c0;
          }
          plVar56 = *(long **)local_148;
          *(byte **)local_148 = pbVar27;
          if (plVar56 != (long *)0x0) {
            (**(code **)(*plVar56 + 8))();
          }
          local_148 = local_88 + 8;
        } while (local_148 != local_98);
      }
    }
  }
  if (0 < (int)local_128._12_4_) {
    lVar32 = 0;
    do {
      piVar47 = (int *)(*(long *)(local_128._0_8_ + lVar32 * 8) + -0x10);
      if (piVar47 != &emptyString) {
        LOCK();
        iVar16 = *piVar47;
        *piVar47 = *piVar47 + -1;
        UNLOCK();
        if (iVar16 == 0) {
          operator_delete__(piVar47);
        }
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 < (int)local_128._12_4_);
  }
  local_128._12_4_ = 0;
  auVar12 = local_128;
  uVar23 = local_128._0_8_;
  local_128 = auVar12;
  free((void *)uVar23);
  return;
LAB_002fb340:
  uVar19 = (uint)uVar54;
  if ((int)uVar19 < 0) {
LAB_002fb630:
    if (pbVar26 != (byte *)&emptyString) {
      LOCK();
      iVar16 = *(int *)pbVar26;
      *(int *)pbVar26 = *(int *)pbVar26 + -1;
      UNLOCK();
      if (iVar16 == 0) {
        operator_delete__(pbVar26);
      }
    }
    pbVar24 = (byte *)(long)(int)local_128._12_4_;
    this = local_130;
    uVar17 = local_128._12_4_;
    if ((long)(pbVar24 + -1) <= (long)local_a0) goto LAB_002fb6ed;
    goto LAB_002fb052;
  }
  if (uVar19 <= uVar17 && uVar17 - uVar19 != 0) goto code_r0x002fb35c;
  goto LAB_002fb0b0;
code_r0x002fb35c:
  uVar58 = uVar17 + ~uVar19;
  pbVar24 = (byte *)(local_128._0_8_ + (uVar54 & 0xffffffff) * 8);
  if ((int)uVar58 < 1) {
    pbVar53 = pbVar24;
  }
  else {
    uVar23 = *(undefined8 *)pbVar24;
    if (2 < (uVar17 - uVar19) - 2) {
      if (uVar58 - 4 < 4) {
        pbVar53 = pbVar24;
      }
      else {
        uVar17 = (uVar52 >> 2) + 1 & 0xfffffffe;
        do {
          *(undefined8 *)pbVar24 = *(undefined8 *)(pbVar24 + 8);
          *(undefined8 *)(pbVar24 + 8) = *(undefined8 *)(pbVar24 + 0x10);
          *(undefined8 *)(pbVar24 + 0x10) = *(undefined8 *)(pbVar24 + 0x18);
          *(undefined8 *)(pbVar24 + 0x18) = *(undefined8 *)(pbVar24 + 0x20);
          *(undefined8 *)(pbVar24 + 0x20) = uVar23;
          *(undefined4 *)(pbVar24 + 0x20) = *(undefined4 *)(pbVar24 + 0x28);
          *(undefined4 *)(pbVar24 + 0x24) = *(undefined4 *)(pbVar24 + 0x2c);
          *(undefined4 *)(pbVar24 + 0x28) = *(undefined4 *)(pbVar24 + 0x30);
          *(undefined4 *)(pbVar24 + 0x2c) = *(undefined4 *)(pbVar24 + 0x34);
          pbVar53 = pbVar24 + 0x40;
          *(undefined8 *)(pbVar24 + 0x30) = *(undefined8 *)(pbVar24 + 0x38);
          *(undefined8 *)(pbVar24 + 0x38) = *(undefined8 *)(pbVar24 + 0x40);
          *(undefined8 *)(pbVar24 + 0x40) = uVar23;
          uVar17 = uVar17 - 2;
          pbVar24 = pbVar53;
        } while (uVar17 != 0);
      }
      pbVar24 = pbVar53;
      if (((uVar58 - 4 >> 2) + 1 & 1) != 0) {
        *(undefined8 *)pbVar53 = *(undefined8 *)(pbVar53 + 8);
        *(undefined8 *)(pbVar53 + 8) = *(undefined8 *)(pbVar53 + 0x10);
        pbVar24 = pbVar53 + 0x20;
        *(undefined8 *)(pbVar53 + 0x10) = *(undefined8 *)(pbVar53 + 0x18);
        *(undefined8 *)(pbVar53 + 0x18) = *(undefined8 *)(pbVar53 + 0x20);
        *(undefined8 *)(pbVar53 + 0x20) = uVar23;
        pbVar53 = pbVar24;
      }
    }
    if ((uVar58 & 3) != 0) {
      iVar16 = (bVar50 & 3) << 3;
      do {
        pbVar53 = pbVar24 + 8;
        *(undefined8 *)pbVar24 = *(undefined8 *)(pbVar24 + 8);
        *(undefined8 *)(pbVar24 + 8) = uVar23;
        iVar16 = iVar16 + -8;
        pbVar24 = pbVar53;
      } while (iVar16 != 0);
    }
  }
  piVar47 = (int *)(*(long *)pbVar53 + -0x10);
  if (piVar47 != &emptyString) {
    LOCK();
    iVar16 = *piVar47;
    *piVar47 = *piVar47 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar47);
    }
  }
  uVar13 = local_128._8_4_;
  uVar14 = local_128._12_4_;
  uVar17 = local_128._12_4_ - 1;
  pbVar24 = (byte *)(ulong)uVar17;
  local_128._12_4_ = uVar17;
  iVar16 = uVar14 * 2 + -2;
  pbVar34 = (byte *)0x0;
  if (iVar16 < 0) {
    iVar16 = 0;
  }
  if ((int)uVar13 <= iVar16) goto LAB_002fb08c;
  uVar44 = 8;
  if (8 < (int)uVar17) {
    uVar44 = (ulong)uVar17;
  }
  if ((int)uVar13 <= (int)uVar44) goto LAB_002fb08c;
  pvVar28 = malloc(uVar44 << 3);
  uVar23 = local_128._0_8_;
  if ((int)uVar14 < 2) goto LAB_002fb569;
  uVar60 = (ulong)uVar17;
  if ((uVar17 < 4) ||
     ((pvVar28 < (void *)(local_128._0_8_ + uVar60 * 8) &&
      ((ulong)local_128._0_8_ < (void *)((long)pvVar28 + uVar60 * 8))))) {
    uVar55 = 0;
  }
  else {
    uVar55 = (ulong)(uVar17 & 0xfffffffc);
    uVar35 = (uVar55 - 4 >> 2) + 1;
    if (uVar55 - 4 == 0) {
      lVar32 = 0;
LAB_002fb5fb:
      puVar22 = (undefined8 *)(local_128._0_8_ + lVar32 * 8);
      uVar8 = puVar22[1];
      puVar29 = (undefined8 *)(local_128._0_8_ + lVar32 * 8 + 0x10);
      uVar9 = *puVar29;
      uVar10 = puVar29[1];
      puVar29 = (undefined8 *)((long)pvVar28 + lVar32 * 8);
      *puVar29 = *puVar22;
      puVar29[1] = uVar8;
      puVar22 = (undefined8 *)((long)pvVar28 + lVar32 * 8 + 0x10);
      *puVar22 = uVar9;
      puVar22[1] = uVar10;
      puVar25 = (undefined4 *)(local_128._0_8_ + lVar32 * 8);
      *puVar25 = (uint)local_118;
      puVar25[1] = local_118._4_4_;
      puVar25[2] = uStack_110;
      puVar25[3] = uStack_10c;
      puVar25 = (undefined4 *)(local_128._0_8_ + lVar32 * 8 + 0x10);
      *puVar25 = (uint)local_118;
      puVar25[1] = local_118._4_4_;
      puVar25[2] = uStack_110;
      puVar25[3] = uStack_10c;
    }
    else {
      uVar46 = uVar35 & 0xfffffffffffffffe;
      lVar32 = 0;
      do {
        puVar22 = (undefined8 *)(local_128._0_8_ + lVar32 * 8);
        uVar8 = puVar22[1];
        puVar29 = (undefined8 *)(local_128._0_8_ + lVar32 * 8 + 0x10);
        uVar9 = *puVar29;
        uVar10 = puVar29[1];
        puVar29 = (undefined8 *)((long)pvVar28 + lVar32 * 8);
        *puVar29 = *puVar22;
        puVar29[1] = uVar8;
        puVar22 = (undefined8 *)((long)pvVar28 + lVar32 * 8 + 0x10);
        *puVar22 = uVar9;
        puVar22[1] = uVar10;
        puVar25 = (undefined4 *)(local_128._0_8_ + lVar32 * 8);
        *puVar25 = (uint)local_118;
        puVar25[1] = local_118._4_4_;
        puVar25[2] = uStack_110;
        puVar25[3] = uStack_10c;
        puVar25 = (undefined4 *)(local_128._0_8_ + lVar32 * 8 + 0x10);
        *puVar25 = (uint)local_118;
        puVar25[1] = local_118._4_4_;
        puVar25[2] = uStack_110;
        puVar25[3] = uStack_10c;
        puVar22 = (undefined8 *)(local_128._0_8_ + lVar32 * 8 + 0x20);
        uVar8 = puVar22[1];
        puVar29 = (undefined8 *)(local_128._0_8_ + lVar32 * 8 + 0x30);
        uVar9 = *puVar29;
        uVar10 = puVar29[1];
        puVar29 = (undefined8 *)((long)pvVar28 + lVar32 * 8 + 0x20);
        *puVar29 = *puVar22;
        puVar29[1] = uVar8;
        puVar22 = (undefined8 *)((long)pvVar28 + lVar32 * 8 + 0x30);
        *puVar22 = uVar9;
        puVar22[1] = uVar10;
        puVar25 = (undefined4 *)(local_128._0_8_ + lVar32 * 8 + 0x20);
        *puVar25 = (uint)local_118;
        puVar25[1] = local_118._4_4_;
        puVar25[2] = uStack_110;
        puVar25[3] = uStack_10c;
        puVar25 = (undefined4 *)(local_128._0_8_ + lVar32 * 8 + 0x30);
        *puVar25 = (uint)local_118;
        puVar25[1] = local_118._4_4_;
        puVar25[2] = uStack_110;
        puVar25[3] = uStack_10c;
        lVar32 = lVar32 + 8;
        uVar46 = uVar46 - 2;
      } while (uVar46 != 0);
      if ((uVar35 & 1) != 0) goto LAB_002fb5fb;
    }
    if (uVar55 == uVar60) goto LAB_002fb569;
  }
  uVar46 = ~uVar55;
  uVar35 = uVar60 & 3;
  if ((uVar17 & 3) != 0) {
    do {
      *(undefined8 *)((long)pvVar28 + uVar55 * 8) = *(undefined8 *)(local_128._0_8_ + uVar55 * 8);
      *(undefined1 **)(local_128._0_8_ + uVar55 * 8) = &DAT_0061ac58;
      uVar55 = uVar55 + 1;
      uVar35 = uVar35 - 1;
    } while (uVar35 != 0);
  }
  if (2 < uVar46 + uVar60) {
    do {
      *(undefined8 *)((long)pvVar28 + uVar55 * 8) = *(undefined8 *)(local_128._0_8_ + uVar55 * 8);
      *(undefined1 **)(local_128._0_8_ + uVar55 * 8) = &DAT_0061ac58;
      *(undefined8 *)((long)pvVar28 + uVar55 * 8 + 8) =
           *(undefined8 *)(local_128._0_8_ + uVar55 * 8 + 8);
      *(undefined1 **)(local_128._0_8_ + uVar55 * 8 + 8) = &DAT_0061ac58;
      *(undefined8 *)((long)pvVar28 + uVar55 * 8 + 0x10) =
           *(undefined8 *)(local_128._0_8_ + uVar55 * 8 + 0x10);
      *(undefined1 **)(local_128._0_8_ + uVar55 * 8 + 0x10) = &DAT_0061ac58;
      *(undefined8 *)((long)pvVar28 + uVar55 * 8 + 0x18) =
           *(undefined8 *)(local_128._0_8_ + uVar55 * 8 + 0x18);
      *(undefined1 **)(local_128._0_8_ + uVar55 * 8 + 0x18) = &DAT_0061ac58;
      uVar55 = uVar55 + 4;
    } while (uVar60 != uVar55);
  }
LAB_002fb569:
  local_128._0_8_ = pvVar28;
  free((void *)uVar23);
  local_128._8_4_ = (int)uVar44;
  pbVar34 = extraout_RDX_06;
  goto LAB_002fb08c;
LAB_002fbcf0:
  local_a0 = CONCAT44(local_a0._4_4_,
                      piVar47[4] & 4U |
                      (uint)((byte)(*(byte *)(piVar47 + 6) << 7 | (*(byte *)(piVar47 + 6) & 3) << 5)
                            >> 6));
  local_118 = (byte *)CONCAT44(local_118._4_4_,uVar17);
LAB_002fbd03:
  pbVar24 = local_158;
  pbVar26 = (byte *)0x5e5178;
  do {
    uVar17 = uVar17 - 1;
    if ((int)uVar17 < 1) goto LAB_002fc110;
    pbVar27 = pbVar24 + 1;
    bVar50 = *pbVar24;
    uVar19 = (uint)bVar50;
    if ((char)bVar50 < '\0') {
      if ((bVar50 & 0x40) == 0) {
        uVar19 = bVar50 & 0x7f;
        goto LAB_002fbd64;
      }
      if ((bVar50 & 0x20) == 0) {
        uVar19 = 0x3f;
        lVar32 = 0;
        bVar7 = false;
        bVar11 = false;
      }
      else {
        bVar7 = true;
        if ((bVar50 & 0x10) == 0) {
          uVar19 = 0x1f;
          lVar32 = 1;
          bVar11 = false;
        }
        else {
          uVar19 = 0xf;
          lVar32 = 2;
          bVar11 = true;
        }
      }
      uVar19 = bVar50 & uVar19;
      if ((pbVar24[1] & 0xc0) != 0x80) {
LAB_002fbe50:
        bVar50 = *pbVar26;
        pbVar34 = pbVar27;
        goto joined_r0x002fbd73;
      }
      pbVar34 = pbVar24 + lVar32 + 2;
      uVar19 = pbVar24[1] & 0x3f | uVar19 << 6;
      if (bVar7) {
        pbVar27 = pbVar24 + 2;
        if ((*pbVar27 & 0xc0) != 0x80) goto LAB_002fbd64;
        uVar19 = *pbVar27 & 0x3f | uVar19 << 6;
        if (bVar11) {
          pbVar27 = pbVar24 + 3;
          if ((*pbVar27 & 0xffffffc0) != 0x80) goto LAB_002fbe50;
          uVar19 = uVar19 << 6 | *pbVar27 & 0x3f;
        }
      }
      pbVar27 = pbVar26 + 1;
      uVar52 = (uint)*pbVar26;
      if ((char)*pbVar26 < '\0') goto LAB_002fbe80;
LAB_002fbe5e:
      uVar58 = 0;
      if (uVar19 != uVar52) {
LAB_002fbf6b:
        wVar39 = towupper(uVar19);
        wVar18 = towupper(uVar52);
        uVar58 = (int)(wVar39 - wVar18) >> 0x1f | 1;
        if (wVar39 - wVar18 == 0) {
          uVar58 = 0;
        }
      }
    }
    else {
LAB_002fbd64:
      bVar50 = *pbVar26;
      pbVar34 = pbVar27;
joined_r0x002fbd73:
      uVar52 = (uint)bVar50;
      pbVar27 = pbVar26 + 1;
      if (-1 < (char)bVar50) goto LAB_002fbe5e;
LAB_002fbe80:
      pbVar27 = pbVar26 + 1;
      if ((uVar52 & 0x40) == 0) {
        uVar52 = uVar52 & 0x7f;
joined_r0x002fbf65:
        uVar58 = 0;
        if (uVar19 == uVar52) goto LAB_002fbd20;
        goto LAB_002fbf6b;
      }
      if ((uVar52 & 0x20) == 0) {
        uVar58 = 0x3f;
        lVar32 = 0;
        bVar7 = false;
        bVar11 = false;
      }
      else {
        bVar7 = true;
        if ((uVar52 & 0x10) == 0) {
          uVar58 = 0x1f;
          lVar32 = 1;
          bVar11 = false;
        }
        else {
          uVar58 = 0xf;
          lVar32 = 2;
          bVar11 = true;
        }
      }
      uVar52 = uVar52 & uVar58;
      if ((pbVar26[1] & 0xc0) != 0x80) goto joined_r0x002fbf65;
      uVar52 = pbVar26[1] & 0x3f | uVar52 << 6;
      if (bVar7) {
        pbVar27 = pbVar26 + 2;
        if ((*pbVar27 & 0xc0) != 0x80) goto LAB_002fbe5e;
        uVar52 = *pbVar27 & 0x3f | uVar52 << 6;
        if (bVar11) {
          pbVar27 = pbVar26 + 3;
          if ((*pbVar27 & 0xffffffc0) != 0x80) goto joined_r0x002fbf65;
          uVar52 = uVar52 << 6 | *pbVar27 & 0x3f;
        }
      }
      uVar58 = 0;
      pbVar27 = pbVar26 + lVar32 + 2;
      if (uVar19 != uVar52) goto LAB_002fbf6b;
    }
LAB_002fbd20:
    uVar54 = uVar54 & 0xffffffff;
    if (uVar58 != 0) {
      uVar54 = (ulong)uVar58;
    }
    cVar15 = (uVar19 == 0) * '\x03';
    if (uVar58 != 0) {
      cVar15 = '\x01';
    }
    pbVar24 = pbVar34;
    pbVar26 = pbVar27;
  } while (cVar15 == '\0');
  if ((cVar15 != '\x01') || ((int)uVar54 == 0)) {
LAB_002fc110:
    uVar17 = 8;
    goto LAB_002fc11f;
  }
  pbVar24 = local_158 + 1;
  bVar50 = *local_158;
  uVar52 = (uint)bVar50;
  uVar19 = (uint)local_118;
  uVar17 = (uint)local_118;
  if ((char)bVar50 < '\0') {
    if ((bVar50 & 0x40) == 0) {
      local_158 = pbVar24;
      if ((bVar50 & 0x7f) == 0) goto LAB_002fc0ef;
      goto LAB_002fbd03;
    }
    if ((bVar50 & 0x20) == 0) {
      uVar58 = 0x3f;
      lVar32 = 0;
      bVar7 = false;
      bVar11 = false;
    }
    else {
      bVar7 = true;
      if ((bVar50 & 0x10) == 0) {
        uVar58 = 0x1f;
        lVar32 = 1;
        bVar11 = false;
      }
      else {
        uVar58 = 0xf;
        lVar32 = 2;
        bVar11 = true;
      }
    }
    uVar52 = uVar52 & uVar58;
    uVar58 = local_158[1] & 0xffffffc0;
    uVar54 = (ulong)uVar58;
    if (uVar58 != 0x80) goto joined_r0x002fbfdd;
    pbVar26 = local_158 + lVar32 + 2;
    uVar52 = local_158[1] & 0x3f | uVar52 << 6;
    pbVar24 = pbVar26;
    if (bVar7) {
      pbVar24 = local_158 + 2;
      if ((*pbVar24 & 0xc0) == 0x80) {
        uVar52 = *pbVar24 & 0x3f | uVar52 << 6;
        pbVar24 = pbVar26;
        if (bVar11) {
          pbVar24 = local_158 + 3;
          if ((*pbVar24 & 0xc0) == 0x80) {
            local_158 = pbVar26;
            if (uVar52 == 0 && (*pbVar24 & 0x3f) == 0) goto LAB_002fc0ef;
            goto LAB_002fbd03;
          }
        }
      }
    }
  }
joined_r0x002fbfdd:
  local_158 = pbVar24;
  if (uVar52 == 0) goto LAB_002fc0ef;
  goto LAB_002fbd03;
LAB_002fc0ef:
  bVar50 = 0x56;
  iVar20 = 1;
  pbVar24 = (byte *)"Verdana";
  do {
    pbVar26 = pbVar24 + 1;
    if ((char)bVar50 < '\0') {
      do {
        bVar50 = pbVar24[1];
        pbVar26 = pbVar24 + 1;
        pbVar24 = pbVar26;
      } while ((bVar50 & 0xc0) == 0x80);
    }
    else {
      if (bVar50 == 0) break;
      bVar50 = *pbVar26;
    }
    iVar20 = iVar20 + 1;
    pbVar24 = pbVar26;
  } while( true );
  local_118 = (byte *)CONCAT44(local_118._4_4_,iVar20);
  pbVar24 = (byte *)puVar29[1];
LAB_002fc4e8:
  do {
    pbVar26 = pbVar24;
    pbVar27 = (byte *)"Verdana";
    do {
      iVar20 = iVar20 + -1;
      if (iVar20 < 1) goto LAB_002fd072;
      pbVar34 = pbVar26 + 1;
      bVar50 = *pbVar26;
      uVar17 = (uint)bVar50;
      if ((char)bVar50 < '\0') {
        if ((bVar50 & 0x40) == 0) {
          uVar17 = bVar50 & 0x7f;
          goto LAB_002fc610;
        }
        if ((bVar50 & 0x20) == 0) {
          uVar17 = 0x3f;
          lVar32 = 0;
          bVar7 = false;
          bVar11 = false;
        }
        else {
          bVar7 = true;
          if ((bVar50 & 0x10) == 0) {
            uVar17 = 0x1f;
            lVar32 = 1;
            bVar11 = false;
          }
          else {
            uVar17 = 0xf;
            lVar32 = 2;
            bVar11 = true;
          }
        }
        uVar17 = bVar50 & uVar17;
        if ((pbVar26[1] & 0xffffffc0) != 0x80) goto LAB_002fc610;
        pbVar34 = pbVar26 + lVar32 + 2;
        uVar17 = pbVar26[1] & 0x3f | uVar17 << 6;
        if (!bVar7) goto LAB_002fc610;
        pbVar53 = pbVar26 + 2;
        if ((*pbVar53 & 0xffffffc0) == 0x80) {
          uVar17 = *pbVar53 & 0x3f | uVar17 << 6;
          if (!bVar11) goto LAB_002fc610;
          pbVar53 = pbVar26 + 3;
          if ((*pbVar53 & 0xffffffc0) == 0x80) {
            uVar17 = uVar17 << 6 | *pbVar53 & 0x3f;
            goto LAB_002fc610;
          }
          goto LAB_002fc613;
        }
        pbVar26 = pbVar27 + 1;
        bVar50 = *pbVar27;
        wVar39 = (wint_t)bVar50;
        if ((char)bVar50 < '\0') goto LAB_002fc625;
LAB_002fc700:
        pbVar34 = pbVar26;
LAB_002fc703:
        uVar52 = 0;
        if (uVar17 != wVar39) {
LAB_002fc70e:
          wVar18 = towupper(uVar17);
          wVar39 = towupper(wVar39);
          uVar52 = (int)(wVar18 - wVar39) >> 0x1f | 1;
          if (wVar18 - wVar39 == 0) {
            uVar52 = 0;
          }
        }
      }
      else {
LAB_002fc610:
        pbVar53 = pbVar34;
LAB_002fc613:
        pbVar26 = pbVar27 + 1;
        bVar50 = *pbVar27;
        wVar39 = (wint_t)bVar50;
        if (-1 < (char)bVar50) goto LAB_002fc700;
LAB_002fc625:
        pbVar26 = pbVar27 + 1;
        if ((bVar50 & 0x40) == 0) {
          wVar39 = bVar50 & 0x7f;
          goto LAB_002fc700;
        }
        if ((bVar50 & 0x20) == 0) {
          uVar52 = 0x3f;
          lVar32 = 0;
          bVar7 = false;
          bVar11 = false;
        }
        else {
          bVar7 = true;
          if ((bVar50 & 0x10) == 0) {
            uVar52 = 0x1f;
            lVar32 = 1;
            bVar11 = false;
          }
          else {
            uVar52 = 0xf;
            lVar32 = 2;
            bVar11 = true;
          }
        }
        wVar39 = bVar50 & uVar52;
        if ((pbVar27[1] & 0xffffffc0) != 0x80) goto LAB_002fc700;
        pbVar26 = pbVar27 + lVar32 + 2;
        wVar39 = pbVar27[1] & 0x3f | wVar39 << 6;
        if (!bVar7) goto LAB_002fc700;
        pbVar34 = pbVar27 + 2;
        if ((*pbVar34 & 0xffffffc0) == 0x80) {
          wVar39 = *pbVar34 & 0x3f | wVar39 << 6;
          if (!bVar11) goto LAB_002fc700;
          pbVar34 = pbVar27 + 3;
          if ((*pbVar34 & 0xffffffc0) == 0x80) {
            wVar39 = wVar39 << 6 | *pbVar34 & 0x3f;
            goto LAB_002fc700;
          }
          goto LAB_002fc703;
        }
        uVar52 = 0;
        if (uVar17 != wVar39) goto LAB_002fc70e;
      }
      if (uVar52 != 0) {
        uVar19 = uVar52;
      }
      cVar15 = (uVar17 == 0) * '\x03';
      if (uVar52 != 0) {
        cVar15 = '\x01';
      }
      pbVar26 = pbVar53;
      pbVar27 = pbVar34;
    } while (cVar15 == '\0');
    if (cVar15 != '\x01') goto LAB_002fd072;
    if (uVar19 == 0) goto LAB_002fd086;
    bVar50 = *pbVar24;
    iVar20 = (uint)local_118;
    if ((char)bVar50 < '\0') {
      if ((bVar50 & 0x40) == 0) {
        bVar50 = bVar50 & 0x7f;
      }
      else {
        if ((bVar50 & 0x20) == 0) {
          bVar41 = 0x3f;
          lVar32 = 0;
          bVar7 = false;
          bVar11 = false;
        }
        else {
          bVar7 = true;
          if ((bVar50 & 0x10) == 0) {
            bVar41 = 0x1f;
            lVar32 = 1;
            bVar11 = false;
          }
          else {
            bVar41 = 0xf;
            lVar32 = 2;
            bVar11 = true;
          }
        }
        bVar50 = bVar50 & bVar41;
        bVar41 = pbVar24[1];
        if ((bVar41 & 0xc0) == 0x80) {
          pbVar26 = pbVar24 + lVar32 + 2;
          if (!bVar7) {
            pbVar24 = pbVar26;
            if ((bVar41 & 0x3f) == 0 && bVar50 == 0) break;
          }
          else {
            bVar3 = pbVar24[2];
            if ((bVar3 & 0xc0) == 0x80) {
              if (bVar11) {
                bVar4 = pbVar24[3];
                if ((bVar4 & 0xc0) == 0x80) {
                  pbVar24 = pbVar26;
                  if (((bVar3 & 0x3f) == 0 && ((bVar41 & 0x3f) == 0 && bVar50 == 0)) &&
                      (bVar4 & 0x3f) == 0) break;
                }
                else {
                  pbVar24 = pbVar24 + 3;
                  if ((bVar3 & 0x3f) == 0 && ((bVar41 & 0x3f) == 0 && bVar50 == 0)) break;
                }
              }
              else {
                pbVar24 = pbVar26;
                if (!((bVar3 & 0x3f) != 0 || ((bVar41 & 0x3f) != 0 || bVar50 != 0))) break;
              }
            }
            else {
              pbVar24 = pbVar24 + 2;
              if ((bVar41 & 0x3f) == 0 && bVar50 == 0) break;
            }
          }
          goto LAB_002fc4e8;
        }
      }
    }
    pbVar24 = pbVar24 + 1;
  } while (bVar50 != 0);
  bVar50 = 0x41;
  iVar20 = 1;
  pcVar36 = "Arial";
  do {
    if ((char)bVar50 < '\0') {
      do {
        bVar50 = pcVar36[1];
        pcVar36 = pcVar36 + 1;
      } while ((bVar50 & 0xc0) == 0x80);
    }
    else {
      if (bVar50 == 0) break;
      bVar50 = pcVar36[1];
      pcVar36 = pcVar36 + 1;
    }
    iVar20 = iVar20 + 1;
  } while( true );
  local_118 = (byte *)CONCAT44(local_118._4_4_,iVar20);
  pbVar24 = (byte *)puVar29[1];
LAB_002fc909:
  pbVar26 = pbVar24;
  pbVar27 = (byte *)"Arial";
  do {
    iVar20 = iVar20 + -1;
    if (iVar20 < 1) goto LAB_002fd072;
    pbVar34 = pbVar26 + 1;
    bVar50 = *pbVar26;
    uVar17 = (uint)bVar50;
    if ((char)bVar50 < '\0') {
      if ((bVar50 & 0x40) == 0) {
        uVar17 = bVar50 & 0x7f;
        goto LAB_002fca30;
      }
      if ((bVar50 & 0x20) == 0) {
        uVar17 = 0x3f;
        lVar32 = 0;
        bVar7 = false;
        bVar11 = false;
      }
      else {
        bVar7 = true;
        if ((bVar50 & 0x10) == 0) {
          uVar17 = 0x1f;
          lVar32 = 1;
          bVar11 = false;
        }
        else {
          uVar17 = 0xf;
          lVar32 = 2;
          bVar11 = true;
        }
      }
      uVar17 = bVar50 & uVar17;
      if ((pbVar26[1] & 0xffffffc0) != 0x80) goto LAB_002fca30;
      pbVar34 = pbVar26 + lVar32 + 2;
      uVar17 = pbVar26[1] & 0x3f | uVar17 << 6;
      if (!bVar7) goto LAB_002fca30;
      pbVar53 = pbVar26 + 2;
      if ((*pbVar53 & 0xffffffc0) == 0x80) {
        uVar17 = *pbVar53 & 0x3f | uVar17 << 6;
        if (!bVar11) goto LAB_002fca30;
        pbVar53 = pbVar26 + 3;
        if ((*pbVar53 & 0xffffffc0) == 0x80) {
          uVar17 = uVar17 << 6 | *pbVar53 & 0x3f;
          goto LAB_002fca30;
        }
        goto LAB_002fca33;
      }
      pbVar26 = pbVar27 + 1;
      bVar50 = *pbVar27;
      wVar39 = (wint_t)bVar50;
      if ((char)bVar50 < '\0') goto LAB_002fca45;
LAB_002fcb20:
      pbVar34 = pbVar26;
LAB_002fcb23:
      uVar52 = 0;
      if (uVar17 != wVar39) {
LAB_002fcb2e:
        wVar18 = towupper(uVar17);
        wVar39 = towupper(wVar39);
        uVar52 = (int)(wVar18 - wVar39) >> 0x1f | 1;
        if (wVar18 - wVar39 == 0) {
          uVar52 = 0;
        }
      }
    }
    else {
LAB_002fca30:
      pbVar53 = pbVar34;
LAB_002fca33:
      pbVar26 = pbVar27 + 1;
      bVar50 = *pbVar27;
      wVar39 = (wint_t)bVar50;
      if (-1 < (char)bVar50) goto LAB_002fcb20;
LAB_002fca45:
      pbVar26 = pbVar27 + 1;
      if ((bVar50 & 0x40) == 0) {
        wVar39 = bVar50 & 0x7f;
        goto LAB_002fcb20;
      }
      if ((bVar50 & 0x20) == 0) {
        uVar52 = 0x3f;
        lVar32 = 0;
        bVar7 = false;
        bVar11 = false;
      }
      else {
        bVar7 = true;
        if ((bVar50 & 0x10) == 0) {
          uVar52 = 0x1f;
          lVar32 = 1;
          bVar11 = false;
        }
        else {
          uVar52 = 0xf;
          lVar32 = 2;
          bVar11 = true;
        }
      }
      wVar39 = bVar50 & uVar52;
      if ((pbVar27[1] & 0xffffffc0) != 0x80) goto LAB_002fcb20;
      pbVar26 = pbVar27 + lVar32 + 2;
      wVar39 = pbVar27[1] & 0x3f | wVar39 << 6;
      if (!bVar7) goto LAB_002fcb20;
      pbVar34 = pbVar27 + 2;
      if ((*pbVar34 & 0xffffffc0) == 0x80) {
        wVar39 = *pbVar34 & 0x3f | wVar39 << 6;
        if (!bVar11) goto LAB_002fcb20;
        pbVar34 = pbVar27 + 3;
        if ((*pbVar34 & 0xffffffc0) == 0x80) {
          wVar39 = wVar39 << 6 | *pbVar34 & 0x3f;
          goto LAB_002fcb20;
        }
        goto LAB_002fcb23;
      }
      uVar52 = 0;
      if (uVar17 != wVar39) goto LAB_002fcb2e;
    }
    if (uVar52 != 0) {
      uVar19 = uVar52;
    }
    cVar15 = (uVar17 == 0) * '\x03';
    if (uVar52 != 0) {
      cVar15 = '\x01';
    }
    pbVar26 = pbVar53;
    pbVar27 = pbVar34;
  } while (cVar15 == '\0');
  if (cVar15 != '\x01') goto LAB_002fd072;
  if (uVar19 == 0) goto LAB_002fd086;
  pbVar26 = pbVar24 + 1;
  bVar50 = *pbVar24;
  uVar17 = (uint)bVar50;
  iVar20 = (uint)local_118;
  if ((char)bVar50 < '\0') {
    if ((bVar50 & 0x40) == 0) {
      pbVar24 = pbVar26;
      if ((bVar50 & 0x7f) == 0) goto LAB_002fcca3;
      goto LAB_002fc909;
    }
    if ((bVar50 & 0x20) == 0) {
      uVar52 = 0x3f;
      lVar32 = 0;
      bVar7 = false;
      bVar11 = false;
    }
    else {
      bVar7 = true;
      if ((bVar50 & 0x10) == 0) {
        uVar52 = 0x1f;
        lVar32 = 1;
        bVar11 = false;
      }
      else {
        uVar52 = 0xf;
        lVar32 = 2;
        bVar11 = true;
      }
    }
    uVar17 = uVar17 & uVar52;
    if ((pbVar24[1] & 0xffffffc0) != 0x80) goto joined_r0x002fcbae;
    pbVar27 = pbVar24 + lVar32 + 2;
    uVar17 = pbVar24[1] & 0x3f | uVar17 << 6;
    pbVar26 = pbVar27;
    if (bVar7) {
      pbVar26 = pbVar24 + 2;
      if ((*pbVar26 & 0xffffffc0) == 0x80) {
        uVar17 = *pbVar26 & 0x3f | uVar17 << 6;
        pbVar26 = pbVar27;
        if (bVar11) {
          pbVar26 = pbVar24 + 3;
          if ((*pbVar26 & 0xc0) == 0x80) {
            pbVar24 = pbVar27;
            if (uVar17 == 0 && (*pbVar26 & 0x3f) == 0) goto LAB_002fcca3;
            goto LAB_002fc909;
          }
        }
      }
    }
  }
joined_r0x002fcbae:
  pbVar24 = pbVar26;
  if (uVar17 == 0) goto LAB_002fcca3;
  goto LAB_002fc909;
LAB_002fcca3:
  pbVar24 = (byte *)puVar29[1];
  bVar50 = 0x55;
  iVar20 = 1;
  pbVar26 = &DAT_005e50ec;
  do {
    pbVar27 = pbVar26 + 1;
    if ((char)bVar50 < '\0') {
      do {
        bVar50 = pbVar26[1];
        pbVar27 = pbVar26 + 1;
        pbVar26 = pbVar27;
      } while ((bVar50 & 0xc0) == 0x80);
    }
    else {
      if (bVar50 == 0) break;
      bVar50 = *pbVar27;
    }
    iVar20 = iVar20 + 1;
    pbVar26 = pbVar27;
  } while( true );
  while( true ) {
    if (uVar19 == 0) goto LAB_002fd086;
    pbVar24 = local_118 + 1;
    bVar50 = *local_118;
    uVar52 = (uint)bVar50;
    if ((char)bVar50 < '\0') {
      if ((bVar50 & 0x40) == 0) {
        uVar52 = bVar50 & 0x7f;
      }
      else {
        if ((bVar50 & 0x20) == 0) {
          uVar52 = 0x3f;
          lVar32 = 0;
          bVar7 = false;
          bVar11 = false;
        }
        else {
          bVar7 = true;
          if ((bVar50 & 0x10) == 0) {
            uVar52 = 0x1f;
            lVar32 = 1;
            bVar11 = false;
          }
          else {
            uVar52 = 0xf;
            lVar32 = 2;
            bVar11 = true;
          }
        }
        uVar52 = bVar50 & uVar52;
        if ((local_118[1] & 0xffffffc0) == 0x80) {
          pbVar26 = local_118 + lVar32 + 2;
          uVar52 = local_118[1] & 0x3f | uVar52 << 6;
          pbVar24 = pbVar26;
          if (bVar7) {
            pbVar24 = local_118 + 2;
            if ((*pbVar24 & 0xffffffc0) == 0x80) {
              uVar52 = *pbVar24 & 0x3f | uVar52 << 6;
              pbVar24 = pbVar26;
              if (bVar11) {
                pbVar24 = local_118 + 3;
                if ((*pbVar24 & 0xffffffc0) == 0x80) {
                  uVar52 = uVar52 << 6 | *pbVar24 & 0x3f;
                  pbVar24 = pbVar26;
                }
              }
            }
          }
        }
      }
    }
    uVar17 = 0;
    if (uVar52 == 0) break;
    pbVar26 = &DAT_005e50ec;
    local_118 = pbVar24;
    iVar51 = iVar20;
    do {
      iVar51 = iVar51 + -1;
      if (iVar51 < 1) goto LAB_002fd072;
      pbVar27 = pbVar24 + 1;
      bVar50 = *pbVar24;
      uVar17 = (uint)bVar50;
      if ((char)bVar50 < '\0') {
        if ((bVar50 & 0x40) == 0) {
          uVar17 = bVar50 & 0x7f;
          goto LAB_002fce14;
        }
        if ((bVar50 & 0x20) == 0) {
          uVar17 = 0x3f;
          lVar32 = 0;
          bVar7 = false;
          bVar11 = false;
        }
        else {
          bVar7 = true;
          if ((bVar50 & 0x10) == 0) {
            uVar17 = 0x1f;
            lVar32 = 1;
            bVar11 = false;
          }
          else {
            uVar17 = 0xf;
            lVar32 = 2;
            bVar11 = true;
          }
        }
        uVar17 = bVar50 & uVar17;
        if ((pbVar24[1] & 0xffffffc0) != 0x80) goto LAB_002fce14;
        pbVar27 = pbVar24 + lVar32 + 2;
        uVar17 = pbVar24[1] & 0x3f | uVar17 << 6;
        if (!bVar7) goto LAB_002fce14;
        pbVar34 = pbVar24 + 2;
        if ((*pbVar34 & 0xffffffc0) == 0x80) {
          uVar17 = *pbVar34 & 0x3f | uVar17 << 6;
          if (!bVar11) goto LAB_002fce14;
          pbVar34 = pbVar24 + 3;
          if ((*pbVar34 & 0xffffffc0) == 0x80) {
            uVar17 = uVar17 << 6 | *pbVar34 & 0x3f;
            goto LAB_002fce14;
          }
          goto LAB_002fce17;
        }
        pbVar24 = pbVar26 + 1;
        bVar50 = *pbVar26;
        wVar39 = (wint_t)bVar50;
        if ((char)bVar50 < '\0') goto LAB_002fce29;
LAB_002fcf03:
        pbVar27 = pbVar24;
LAB_002fcf06:
        uVar52 = 0;
        if (uVar17 != wVar39) {
LAB_002fcf11:
          wVar18 = towupper(uVar17);
          wVar39 = towupper(wVar39);
          uVar52 = (int)(wVar18 - wVar39) >> 0x1f | 1;
          if (wVar18 - wVar39 == 0) {
            uVar52 = 0;
          }
        }
      }
      else {
LAB_002fce14:
        pbVar34 = pbVar27;
LAB_002fce17:
        pbVar24 = pbVar26 + 1;
        bVar50 = *pbVar26;
        wVar39 = (wint_t)bVar50;
        if (-1 < (char)bVar50) goto LAB_002fcf03;
LAB_002fce29:
        pbVar24 = pbVar26 + 1;
        if ((bVar50 & 0x40) == 0) {
          wVar39 = bVar50 & 0x7f;
          goto LAB_002fcf03;
        }
        if ((bVar50 & 0x20) == 0) {
          uVar52 = 0x3f;
          lVar32 = 0;
          bVar7 = false;
          bVar11 = false;
        }
        else {
          bVar7 = true;
          if ((bVar50 & 0x10) == 0) {
            uVar52 = 0x1f;
            lVar32 = 1;
            bVar11 = false;
          }
          else {
            uVar52 = 0xf;
            lVar32 = 2;
            bVar11 = true;
          }
        }
        wVar39 = bVar50 & uVar52;
        if ((pbVar26[1] & 0xffffffc0) != 0x80) goto LAB_002fcf03;
        pbVar24 = pbVar26 + lVar32 + 2;
        wVar39 = pbVar26[1] & 0x3f | wVar39 << 6;
        if (!bVar7) goto LAB_002fcf03;
        pbVar27 = pbVar26 + 2;
        if ((*pbVar27 & 0xffffffc0) == 0x80) {
          wVar39 = *pbVar27 & 0x3f | wVar39 << 6;
          if (!bVar11) goto LAB_002fcf03;
          pbVar27 = pbVar26 + 3;
          if ((*pbVar27 & 0xffffffc0) == 0x80) {
            wVar39 = wVar39 << 6 | *pbVar27 & 0x3f;
            goto LAB_002fcf03;
          }
          goto LAB_002fcf06;
        }
        uVar52 = 0;
        if (uVar17 != wVar39) goto LAB_002fcf11;
      }
      if (uVar52 != 0) {
        uVar19 = uVar52;
      }
      cVar15 = (uVar17 == 0) * '\x03';
      if (uVar52 != 0) {
        cVar15 = '\x01';
      }
      pbVar24 = pbVar34;
      pbVar26 = pbVar27;
    } while (cVar15 == '\0');
    if (cVar15 != '\x01') goto LAB_002fd072;
  }
LAB_002fc11f:
  *(uint *)((long)puVar29 + 0x1c) = (uint)local_a0 | uVar17;
  *puVar29 = &PTR__FileTypeface_00712460;
  puVar29[4] = puVar48;
  if (local_a8 != &emptyString) {
    LOCK();
    *local_a8 = *local_a8 + 1;
    UNLOCK();
  }
  puVar5 = *(undefined8 **)(local_130 + 0x18);
  if (puVar5 != *(undefined8 **)(local_130 + 0x20)) {
    *puVar5 = puVar29;
    *(long *)(local_130 + 0x18) = *(long *)(local_130 + 0x18) + 8;
    goto LAB_002fc40a;
  }
  puVar6 = *(undefined8 **)(local_130 + 0x10);
  lVar32 = (long)puVar5 - (long)puVar6;
  if (lVar32 == 0x7ffffffffffffff8) {
                    /* try { // try from 002fdfef to 002fdffa has its CatchHandler @ 002fe2d0 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar44 = lVar32 >> 3;
  uVar54 = uVar44;
  if (lVar32 == 0) {
    uVar54 = 1;
  }
  uVar60 = uVar54 + uVar44;
  if (0xfffffffffffffff < uVar60) {
    uVar60 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar54,uVar44)) {
    uVar60 = 0xfffffffffffffff;
  }
  if (uVar60 == 0) {
    puVar30 = (undefined8 *)0x0;
  }
  else {
                    /* try { // try from 002fc215 to 002fc219 has its CatchHandler @ 002fe29b */
    puVar30 = operator_new(uVar60 * 8);
  }
  puVar30[uVar44] = puVar29;
  puVar29 = puVar30;
  if (puVar6 != puVar5) {
    puVar31 = puVar6;
    if (0x17 < lVar32 - 8U) {
      uVar55 = (lVar32 - 8U >> 3) + 1;
      uVar54 = uVar55 & 0xfffffffffffffffc;
      uVar44 = (uVar54 - 4 >> 2) + 1;
      if (uVar54 - 4 == 0) {
        lVar32 = 0;
LAB_002fc368:
        uVar23 = (puVar6 + lVar32)[1];
        uVar8 = puVar6[lVar32 + 2];
        uVar9 = (puVar6 + lVar32 + 2)[1];
        puVar30[lVar32] = puVar6[lVar32];
        (puVar30 + lVar32)[1] = uVar23;
        puVar30[lVar32 + 2] = uVar8;
        (puVar30 + lVar32 + 2)[1] = uVar9;
        *(undefined1 (*) [16])(puVar6 + lVar32 + 2) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar6 + lVar32) = (undefined1  [16])0x0;
      }
      else {
        uVar46 = (uVar44 & 0x7ffffffffffffffe) - 2;
        uVar35 = (uVar46 >> 1) + 1;
        if (uVar46 == 0) {
          lVar32 = 0;
LAB_002fc484:
          uVar23 = (puVar6 + lVar32)[1];
          uVar8 = puVar6[lVar32 + 2];
          uVar9 = (puVar6 + lVar32 + 2)[1];
          puVar30[lVar32] = puVar6[lVar32];
          (puVar30 + lVar32)[1] = uVar23;
          puVar30[lVar32 + 2] = uVar8;
          (puVar30 + lVar32 + 2)[1] = uVar9;
          uVar35 = lVar32 * 8 | 0x20;
          puVar6[lVar32 + 2] = 0;
          (puVar6 + lVar32 + 2)[1] = 0;
          puVar6[lVar32] = 0;
          (puVar6 + lVar32)[1] = 0;
          uVar23 = ((undefined8 *)((long)puVar6 + uVar35))[1];
          puVar29 = (undefined8 *)((long)puVar6 + uVar35 + 0x10);
          uVar8 = *puVar29;
          uVar9 = puVar29[1];
          *(undefined8 *)((long)puVar30 + uVar35) = *(undefined8 *)((long)puVar6 + uVar35);
          ((undefined8 *)((long)puVar30 + uVar35))[1] = uVar23;
          puVar29 = (undefined8 *)((long)puVar30 + uVar35 + 0x10);
          *puVar29 = uVar8;
          puVar29[1] = uVar9;
          lVar32 = lVar32 + 8;
          puVar29 = (undefined8 *)((long)puVar6 + uVar35 + 0x10);
          *puVar29 = 0;
          puVar29[1] = 0;
          *(undefined8 *)((long)puVar6 + uVar35) = 0;
          ((undefined8 *)((long)puVar6 + uVar35))[1] = 0;
        }
        else {
          uVar46 = uVar35 & 0xfffffffffffffffe;
          lVar33 = 0;
          do {
            uVar23 = (puVar6 + lVar33)[1];
            uVar8 = puVar6[lVar33 + 2];
            uVar9 = (puVar6 + lVar33 + 2)[1];
            puVar30[lVar33] = puVar6[lVar33];
            (puVar30 + lVar33)[1] = uVar23;
            puVar30[lVar33 + 2] = uVar8;
            (puVar30 + lVar33 + 2)[1] = uVar9;
            puVar6[lVar33 + 2] = 0;
            (puVar6 + lVar33 + 2)[1] = 0;
            puVar6[lVar33] = 0;
            (puVar6 + lVar33)[1] = 0;
            uVar23 = (puVar6 + lVar33 + 4)[1];
            uVar8 = puVar6[lVar33 + 6];
            uVar9 = (puVar6 + lVar33 + 6)[1];
            puVar30[lVar33 + 4] = puVar6[lVar33 + 4];
            (puVar30 + lVar33 + 4)[1] = uVar23;
            puVar30[lVar33 + 6] = uVar8;
            (puVar30 + lVar33 + 6)[1] = uVar9;
            puVar6[lVar33 + 6] = 0;
            (puVar6 + lVar33 + 6)[1] = 0;
            puVar6[lVar33 + 4] = 0;
            (puVar6 + lVar33 + 4)[1] = 0;
            uVar23 = (puVar6 + lVar33 + 8)[1];
            uVar8 = puVar6[lVar33 + 10];
            uVar9 = (puVar6 + lVar33 + 10)[1];
            puVar30[lVar33 + 8] = puVar6[lVar33 + 8];
            (puVar30 + lVar33 + 8)[1] = uVar23;
            puVar30[lVar33 + 10] = uVar8;
            (puVar30 + lVar33 + 10)[1] = uVar9;
            puVar6[lVar33 + 10] = 0;
            (puVar6 + lVar33 + 10)[1] = 0;
            puVar6[lVar33 + 8] = 0;
            (puVar6 + lVar33 + 8)[1] = 0;
            uVar23 = (puVar6 + lVar33 + 0xc)[1];
            uVar8 = puVar6[lVar33 + 0xe];
            uVar9 = (puVar6 + lVar33 + 0xe)[1];
            puVar30[lVar33 + 0xc] = puVar6[lVar33 + 0xc];
            (puVar30 + lVar33 + 0xc)[1] = uVar23;
            puVar30[lVar33 + 0xe] = uVar8;
            (puVar30 + lVar33 + 0xe)[1] = uVar9;
            lVar32 = lVar33 + 0x10;
            puVar6[lVar33 + 0xe] = 0;
            (puVar6 + lVar33 + 0xe)[1] = 0;
            puVar6[lVar33 + 0xc] = 0;
            (puVar6 + lVar33 + 0xc)[1] = 0;
            uVar46 = uVar46 - 2;
            lVar33 = lVar32;
          } while (uVar46 != 0);
          if ((uVar35 & 1) != 0) goto LAB_002fc484;
        }
        if ((uVar44 & 1) != 0) goto LAB_002fc368;
      }
      puVar29 = puVar30 + uVar54;
      if (uVar55 == uVar54) goto LAB_002fc3cb;
      puVar31 = puVar6 + uVar54;
    }
    do {
      *puVar29 = *puVar31;
      *puVar31 = 0;
      puVar31 = puVar31 + 1;
      puVar29 = puVar29 + 1;
    } while (puVar31 != puVar5);
  }
LAB_002fc3cb:
  if (puVar6 != (undefined8 *)0x0) {
    operator_delete(puVar6);
  }
  *(undefined8 **)(local_130 + 0x10) = puVar30;
  *(undefined8 **)(local_130 + 0x18) = puVar29 + 1;
  *(undefined8 **)(local_130 + 0x20) = puVar30 + uVar60;
LAB_002fc40a:
  pbVar24 = local_f8;
  this = local_130;
LAB_002fc412:
  LOCK();
  piVar47 = (int *)(puVar22 + 1);
  *piVar47 = *piVar47 + -1;
  UNLOCK();
  if (*piVar47 == 0) {
    if (puVar22[5] != 0) {
                    /* try { // try from 002fc42e to 002fc432 has its CatchHandler @ 002fe331 */
      FT_Done_Face();
    }
    free((void *)puVar22[3]);
    pvVar28 = (void *)puVar22[2];
    if (pvVar28 != (void *)0x0) {
      LOCK();
      piVar47 = (int *)((long)pvVar28 + 8);
      *piVar47 = *piVar47 + -1;
      UNLOCK();
      if (*piVar47 == 0) {
        if (*(long *)((long)pvVar28 + 0x18) != 0) {
                    /* try { // try from 002fc45d to 002fc461 has its CatchHandler @ 002fe26d */
          FT_Done_FreeType();
        }
        if (*(long *)((long)pvVar28 + 0x10) != 0) {
                    /* try { // try from 002fc46f to 002fc473 has its CatchHandler @ 002fe28b */
          FcConfigDestroy();
        }
        operator_delete(pvVar28);
      }
    }
    operator_delete(puVar22);
  }
LAB_002fb9f0:
  pbVar24 = pbVar24 + 1;
  if ((long)iVar16 <= (long)pbVar24) goto LAB_002fd0a0;
  goto LAB_002fba02;
LAB_002fd072:
  uVar17 = 8;
  goto LAB_002fc11f;
LAB_002fd086:
  uVar17 = 8;
  goto LAB_002fc11f;
LAB_002fd0a0:
  if (local_a8 != &emptyString) {
    LOCK();
    iVar16 = *local_a8;
    *local_a8 = *local_a8 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(local_a8);
    }
  }
LAB_002fd0e0:
  lVar32 = 0;
  if ((DirectoryIterator *)local_f0._0_8_ == (DirectoryIterator *)0x0) goto LAB_002fb933;
                    /* try { // try from 002fd0f1 to 002fd129 has its CatchHandler @ 002fe293 */
  uVar54 = DirectoryIterator::next
                     ((DirectoryIterator *)local_f0._0_8_,(byte *)((long)&uStack_b1 + 1),
                      (char *)((long)&uStack_b1 + 2),(__off_t *)&uStack_b8,&local_c8,
                      (long *)&uStack_c0,(long)&uStack_b1 + 3);
  if ((char)uVar54 != '\0') {
    lVar32 = local_f0._0_8_;
    goto LAB_002fd220;
  }
  local_140 = 0;
  uStack_139 = 0;
  uVar23 = local_e0._8_8_;
  local_e0 = (undefined1  [16])0x0;
  if ((long *)uVar23 != (long *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      piVar47 = (int *)(uVar23 + 0xc);
      iVar16 = *piVar47;
      *piVar47 = *piVar47 + -1;
      UNLOCK();
    }
    else {
      iVar16 = *(int *)(uVar23 + 0xc);
      *(int *)(uVar23 + 0xc) = iVar16 + -1;
    }
    if (iVar16 == 1) {
      (**(code **)(*(long *)uVar23 + 0x18))();
    }
  }
  puVar48 = local_d0;
  local_d0 = &DAT_0061ac58;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bd = 0;
  uStack_b8 = (undefined3)local_140;
  uStack_b5 = (undefined4)((uint7)local_140 >> 0x18);
  uStack_b1 = uStack_139;
  piVar47 = (int *)(puVar48 + -0x10);
  if (piVar47 != &emptyString) {
    LOCK();
    iVar16 = *piVar47;
    *piVar47 = *piVar47 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar47);
    }
  }
  uVar23 = local_f0._8_8_;
  local_f0 = (undefined1  [16])0x0;
  lVar32 = 0;
  if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar23 !=
      (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_002fd290;
  goto LAB_002fb933;
  while (*(char *)(lVar32 + 0x35) != '\0') {
LAB_002fd220:
    lVar33 = lVar32;
    lVar32 = *(long *)(lVar33 + 0x38);
    if (lVar32 == 0) break;
  }
  puVar48 = *(undefined1 **)(lVar33 + 0x40);
  piVar47 = (int *)(puVar48 + -0x10);
  if (piVar47 != &emptyString) {
    LOCK();
    *piVar47 = *piVar47 + 1;
    UNLOCK();
    puVar48 = *(undefined1 **)(lVar33 + 0x40);
  }
  LOCK();
  UNLOCK();
  piVar47 = (int *)(local_d0 + -0x10);
  local_d0 = puVar48;
  if (piVar47 != &emptyString) {
    LOCK();
    iVar16 = *piVar47;
    *piVar47 = *piVar47 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar47);
    }
  }
  goto LAB_002fb8f9;
LAB_002fd290:
  if (*(long *)(uVar23 + 8) == 0x100000001) {
    *(undefined8 *)(uVar23 + 8) = 0;
    (**(code **)(*(long *)uVar23 + 0x10))(uVar23);
    (**(code **)(*(long *)uVar23 + 0x18))(uVar23);
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(uVar23 + 8);
      iVar16 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar16 = (int)*(long *)(uVar23 + 8);
      *(int *)(uVar23 + 8) = iVar16 + -1;
    }
    if (iVar16 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)uVar23);
    }
  }
  goto LAB_002fb8f9;
}


