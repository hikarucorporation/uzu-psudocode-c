// Function : expandExternalEntity
// Namespace: juce:XmlDocument
// Entry    : 00492fd0
// Prototype: undefined expandExternalEntity(String * param_1, byte * param_2, long * param_3, undefined8 param_4, byte * param_5, byte * param_6)
// Body     : 00492fd0 - 00495884


/* WARNING: Removing unreachable block (ram,0x0049425d) */
/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::XmlDocument::expandExternalEntity(juce::String const&) */

void __cdecl
juce::XmlDocument::expandExternalEntity
          (String *param_1,byte *param_2,long *param_3,undefined8 param_4,byte *param_5,
          byte *param_6)

{
  StringArray *this;
  char cVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  size_t sVar11;
  undefined4 *puVar12;
  void *pvVar13;
  undefined4 extraout_var;
  String *pSVar14;
  undefined1 *puVar15;
  byte bVar16;
  sbyte sVar17;
  uint uVar18;
  byte *pbVar19;
  long *plVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  int iVar23;
  uint uVar24;
  char *pcVar25;
  long *plVar26;
  byte *pbVar27;
  byte bVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  String *pSVar32;
  undefined8 *puVar33;
  ulong uVar34;
  long lVar35;
  int iVar36;
  ulong uVar37;
  int *piVar38;
  ulong uVar39;
  int *piVar40;
  byte *pbVar41;
  uint *puVar42;
  byte *pbVar43;
  bool bVar44;
  byte *local_e0;
  byte *local_d8;
  long *local_d0;
  undefined1 local_c8 [16];
  String *local_b0;
  byte *local_a8;
  long *local_a0;
  ulong local_98;
  byte *local_90;
  byte *local_88;
  ulong local_80;
  uint *local_78;
  long local_70;
  long *local_68;
  byte *local_60;
  ulong local_58;
  long *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_d8 = param_2;
  local_b0 = param_1;
  if (param_2[0x38] == 0) goto LAB_0049474f;
  if (**(byte **)(param_2 + 0x20) != 0) {
    pbVar43 = param_2 + 0x20;
    juce::String::trimCharactersAtEnd
              ((undefined8 *)local_c8,*(byte **)(param_2 + 0x20),(byte *)0x65e0de);
    lVar29 = *(long *)pbVar43;
    *(undefined8 *)pbVar43 = local_c8._0_8_;
    local_c8._0_8_ = lVar29;
    piVar38 = (int *)(lVar29 + -0x10);
    if (piVar38 != &emptyString) {
      LOCK();
      iVar23 = *piVar38;
      *piVar38 = *piVar38 + -1;
      UNLOCK();
      if (iVar23 == 0) {
        operator_delete__(piVar38);
      }
    }
    this = (StringArray *)(param_2 + 0x28);
    StringArray::addTokens(this,*(byte **)(param_2 + 0x20),&DAT_005e5e66,&DAT_006559ef);
    if ((ulong)(long)*(int *)(param_2 + 0x34) < 2) {
      puVar33 = &StringArray::operator[](int)::empty;
      if ((StringArray::operator[](int)::empty == '\0') &&
         (iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar23 != 0)) {
        StringArray::operator[](int)::empty = &DAT_0061ac58;
        puVar33 = &StringArray::operator[](int)::empty;
        __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
        __cxa_guard_release(&StringArray::operator[](int)::empty);
      }
    }
    else {
      puVar33 = (undefined8 *)(*(long *)this + (long)*(int *)(param_2 + 0x34) * 8 + -0x10);
    }
    puVar42 = (uint *)(local_d8 + 0x34);
    uVar8 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      ((byte *)*puVar33,(byte *)"system");
    local_a0 = param_3;
    local_78 = puVar42;
    if (uVar8 == 0) {
      if ((long)(int)*puVar42 == 0) {
        puVar33 = &StringArray::operator[](int)::empty;
        if ((StringArray::operator[](int)::empty == '\0') &&
           (iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar23 != 0)) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          puVar33 = &StringArray::operator[](int)::empty;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
        }
      }
      else {
        puVar33 = (undefined8 *)(*(long *)this + (long)(int)*puVar42 * 8 + -8);
      }
      pbVar41 = (byte *)*puVar33;
LAB_00493460:
      pbVar22 = pbVar41;
      bVar16 = *pbVar22;
      uVar8 = (uint)bVar16;
      if ((char)bVar16 < '\0') {
        uVar9 = (uint)bVar16;
        if ((bVar16 & 0x40) == 0) {
          iVar23 = iswspace(uVar9 & 0x7f);
          pbVar41 = local_d8;
        }
        else {
          uVar8 = uVar9 & 0x10 ^ 0x1f;
          if ((bVar16 & 0x20) == 0) {
            uVar8 = 0x3f;
          }
          uVar8 = uVar8 & uVar9;
          if ((pbVar22[1] & 0xffffffc0) != 0x80) goto LAB_00493520;
          uVar8 = pbVar22[1] & 0x3f | uVar8 << 6;
          if (((bVar16 & 0x20) == 0) || ((pbVar22[2] & 0xffffffc0) != 0x80)) {
            iVar23 = iswspace(uVar8);
            pbVar41 = local_d8;
          }
          else {
            uVar8 = pbVar22[2] & 0x3f | uVar8 << 6;
            if (((bVar16 >> 5 & (bVar16 & 0x10) == 0) != 0) || ((pbVar22[3] & 0xffffffc0) != 0x80))
            goto LAB_00493520;
            iVar23 = iswspace(uVar8 << 6 | pbVar22[3] & 0x3f);
            pbVar41 = local_d8;
          }
        }
      }
      else {
LAB_00493520:
        iVar23 = iswspace(uVar8);
        pbVar41 = local_d8;
      }
      local_d8 = pbVar41;
      if (iVar23 != 0) {
        bVar16 = *pbVar22;
        pbVar41 = pbVar22 + 1;
        if ((((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) &&
           (pbVar41 = pbVar22 + 2, (bVar16 & 0x20) != 0)) {
          pbVar41 = pbVar22 + (4 - (ulong)((bVar16 & 0x10) == 0));
        }
        goto LAB_00493460;
      }
      bVar16 = *pbVar22;
      uVar8 = (uint)bVar16;
      if ((char)bVar16 < '\0') {
        uVar8 = (uint)bVar16;
        if ((bVar16 & 0x40) == 0) {
          uVar8 = uVar8 & 0x7f;
        }
        else {
          uVar9 = 0x3f;
          if ((bVar16 & 0x20) != 0) {
            uVar9 = uVar8 & 0x10 ^ 0x1f;
          }
          uVar8 = uVar9 & uVar8;
          if ((((pbVar22[1] & 0xffffffc0) == 0x80) &&
              (uVar8 = pbVar22[1] & 0x3f | uVar8 << 6, (bVar16 & 0x20) != 0)) &&
             (((pbVar22[2] & 0xffffffc0) == 0x80 &&
              ((uVar8 = pbVar22[2] & 0x3f | uVar8 << 6, (bVar16 >> 5 & (bVar16 & 0x10) == 0) == 0 &&
               ((pbVar22[3] & 0xffffffc0) == 0x80)))))) {
            uVar8 = uVar8 << 6 | pbVar22[3] & 0x3f;
          }
        }
      }
      if ((uVar8 == 0x27) || (uVar8 == 0x22)) {
        if ((long)(int)*puVar42 == 0) {
          plVar30 = (long *)&StringArray::operator[](int)::empty;
          if ((StringArray::operator[](int)::empty == '\0') &&
             (iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar23 != 0)) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            plVar30 = (long *)&StringArray::operator[](int)::empty;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
          }
        }
        else {
          plVar30 = (long *)(*(long *)this + (long)(int)*puVar42 * 8 + -8);
        }
        local_c8._0_8_ = *plVar30;
        piVar38 = (int *)(*plVar30 + -0x10);
        if (piVar38 != &emptyString) {
          LOCK();
          *piVar38 = *piVar38 + 1;
          UNLOCK();
        }
        if (0 < (int)*puVar42) {
          lVar29 = 0;
          do {
            piVar38 = (int *)(*(long *)(*(long *)this + lVar29 * 8) + -0x10);
            if (piVar38 != &emptyString) {
              LOCK();
              iVar23 = *piVar38;
              *piVar38 = *piVar38 + -1;
              UNLOCK();
              if (iVar23 == 0) {
                operator_delete__(piVar38);
              }
            }
            lVar29 = lVar29 + 1;
          } while (lVar29 < (int)*puVar42);
        }
        pbVar41[0x34] = 0;
        pbVar41[0x35] = 0;
        pbVar41[0x36] = 0;
        pbVar41[0x37] = 0;
        if (*(int *)(pbVar41 + 0x30) != 0) {
          free(*(void **)this);
          *(undefined8 *)this = 0;
        }
        pbVar41[0x30] = 0;
        pbVar41[0x31] = 0;
        pbVar41[0x32] = 0;
        pbVar41[0x33] = 0;
                    /* try { // try from 004936d0 to 004936de has its CatchHandler @ 0049599d */
        getFileContents((XmlDocument *)&local_e0,*(long **)(pbVar41 + 0x40),(long *)local_c8);
                    /* try { // try from 004936e4 to 004936fa has its CatchHandler @ 00495970 */
        StringArray::addTokens(this,local_e0,&DAT_005e5e66,&DAT_006559ef);
        pbVar43 = local_e0 + -0x10;
        if (pbVar43 != (byte *)&emptyString) {
          LOCK();
          iVar23 = *(int *)pbVar43;
          *(int *)pbVar43 = *(int *)pbVar43 + -1;
          UNLOCK();
          if (iVar23 == 0) {
            operator_delete__(pbVar43);
          }
        }
        pbVar43 = (byte *)(local_c8._0_8_ + -0x10);
        param_2 = pbVar41;
        if (pbVar43 != (byte *)&emptyString) {
          LOCK();
          iVar23 = *(int *)pbVar43;
          *(int *)pbVar43 = *(int *)pbVar43 + -1;
          UNLOCK();
          if (iVar23 == 0) goto LAB_00493736;
        }
        goto LAB_0049373b;
      }
    }
    param_2 = local_d8;
    if (0 < (int)*puVar42) {
      lVar29 = 0;
      do {
        piVar38 = (int *)(*(long *)(*(long *)this + lVar29 * 8) + -0x10);
        if (piVar38 != &emptyString) {
          LOCK();
          iVar23 = *piVar38;
          *piVar38 = *piVar38 + -1;
          UNLOCK();
          if (iVar23 == 0) {
            operator_delete__(piVar38);
          }
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)*puVar42);
    }
    param_2[0x34] = 0;
    param_2[0x35] = 0;
    param_2[0x36] = 0;
    param_2[0x37] = 0;
    if (*(int *)(param_2 + 0x30) != 0) {
      free(*(void **)this);
      *(undefined8 *)this = 0;
    }
    pbVar41 = local_d8;
    param_2[0x30] = 0;
    param_2[0x31] = 0;
    param_2[0x32] = 0;
    param_2[0x33] = 0;
    param_5 = *(byte **)(param_2 + 0x20);
    bVar16 = *param_5;
    if (bVar16 != 0) {
      iVar23 = 0;
      pbVar22 = param_5;
      bVar28 = bVar16;
      do {
        pbVar27 = pbVar22 + 1;
        uVar8 = (uint)bVar28;
        param_2 = pbVar41;
        param_3 = local_a0;
        puVar42 = local_78;
        if ((char)bVar28 < '\0') {
          if ((bVar28 & 0x40) == 0) {
            uVar8 = uVar8 & 0x7f;
            goto joined_r0x0049326e;
          }
          if ((bVar28 & 0x20) == 0) {
            uVar9 = 0x3f;
            lVar29 = 0;
            bVar44 = false;
            param_6 = (byte *)0x0;
          }
          else {
            bVar44 = true;
            if ((bVar28 & 0x10) == 0) {
              uVar9 = 0x1f;
              lVar29 = 1;
              param_6 = (byte *)0x0;
            }
            else {
              uVar9 = 0xf;
              lVar29 = 2;
              param_6 = (byte *)CONCAT71((int7)((ulong)param_6 >> 8),1);
            }
          }
          bVar28 = pbVar22[1];
          if ((bVar28 & 0xc0) == 0x80) {
            pbVar19 = pbVar22 + lVar29 + 2;
            uVar8 = bVar28 & 0x3f | (uVar9 & uVar8) << 6;
            pbVar27 = pbVar19;
            if (bVar44) {
              pbVar27 = pbVar22 + 2;
              if ((*pbVar27 & 0xc0) == 0x80) {
                uVar8 = *pbVar27 & 0x3f | uVar8 << 6;
                pbVar27 = pbVar19;
                if ((char)param_6 != '\0') {
                  pbVar27 = pbVar22 + 3;
                  if ((*pbVar27 & 0xc0) == 0x80) {
                    uVar8 = uVar8 << 6 | *pbVar27 & 0x3f;
                    pbVar27 = pbVar19;
                  }
                }
              }
            }
            goto joined_r0x0049326e;
          }
        }
        else {
joined_r0x0049326e:
          if (uVar8 == 0x5b) {
            if (iVar23 != 0) {
              iVar10 = -1;
              iVar36 = 0;
              pbVar22 = param_5;
              goto LAB_004932ca;
            }
            break;
          }
          bVar28 = *pbVar27;
        }
        iVar23 = iVar23 + 1;
        pbVar22 = pbVar27;
      } while (bVar28 != 0);
    }
    goto LAB_0049373b;
  }
  goto LAB_0049474b;
LAB_00493ab2:
  pbVar43 = &DAT_0061ac58;
  if (2 < iVar10) {
    pbVar41 = (byte *)*puVar33;
    bVar16 = *pbVar41;
    pbVar43 = &DAT_0061ac58;
    if (bVar16 != 0) {
      pbVar22 = pbVar41 + 1;
      if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
        if ((bVar16 & 0x20) == 0) {
          pbVar22 = pbVar41 + 2;
        }
        else {
          pbVar22 = pbVar41 + (4 - (ulong)((bVar16 & 0x10) == 0));
        }
      }
      pbVar41 = pbVar22;
      do {
        bVar16 = *pbVar41;
        if (bVar16 == 0) break;
        pbVar43 = pbVar41 + 1;
        if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
          if ((bVar16 & 0x20) == 0) {
            pbVar43 = pbVar41 + 2;
          }
          else {
            pbVar43 = pbVar41 + (4 - (ulong)((bVar16 & 0x10) == 0));
          }
        }
        pbVar41 = pbVar43;
        iVar23 = iVar23 + -1;
      } while (iVar23 != 0);
      pbVar43 = &DAT_0061ac58;
      if (*pbVar22 != 0) {
        sVar11 = (long)pbVar41 - (long)pbVar22;
        uVar31 = sVar11 + 4 & 0xfffffffffffffffc;
        local_88 = pbVar22;
        puVar12 = operator_new__(uVar31 + 0x17);
        LOCK();
        *puVar12 = 0;
        UNLOCK();
        *(ulong *)(puVar12 + 2) = uVar31;
        pbVar43 = (byte *)(puVar12 + 4);
        memcpy(pbVar43,local_88,sVar11);
        *(undefined1 *)((long)puVar12 + sVar11 + 0x10) = 0;
      }
    }
  }
  uVar31 = (ulong)*puVar42;
  if (0 < (int)*puVar42) {
    lVar29 = 0x10;
    uVar8 = 2;
    uVar34 = 0;
    do {
      if (uVar34 < (uVar31 & 0xffffffff)) {
        puVar33 = (undefined8 *)(*(long *)(local_d8 + 0x28) + lVar29 + -0x10);
      }
      else {
        puVar33 = &StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          puVar33 = &StringArray::operator[](int)::empty;
          if (iVar23 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            puVar33 = &StringArray::operator[](int)::empty;
          }
        }
      }
      if (((byte *)*puVar33 == pbVar43) ||
         (uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)*puVar33,pbVar43), uVar9 == 0)) {
        if (uVar8 - 3 < *puVar42) {
          puVar33 = (undefined8 *)(*(long *)(local_d8 + 0x28) + lVar29 + -0x18);
        }
        else {
          puVar33 = &StringArray::operator[](int)::empty;
          if (StringArray::operator[](int)::empty == '\0') {
            iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
            puVar33 = &StringArray::operator[](int)::empty;
            if (iVar23 != 0) {
              StringArray::operator[](int)::empty = &DAT_0061ac58;
              __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle)
              ;
              __cxa_guard_release(&StringArray::operator[](int)::empty);
              puVar33 = &StringArray::operator[](int)::empty;
            }
          }
        }
        uVar9 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          ((byte *)*puVar33,&DAT_005d9593);
        if (uVar9 == 0) {
          if (uVar8 - 4 < *puVar42) {
            puVar33 = (undefined8 *)(*(long *)(local_d8 + 0x28) + lVar29 + -0x20);
          }
          else {
            puVar33 = &StringArray::operator[](int)::empty;
            if (StringArray::operator[](int)::empty == '\0') {
              iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
              puVar33 = &StringArray::operator[](int)::empty;
              if (iVar23 != 0) {
                StringArray::operator[](int)::empty = &DAT_0061ac58;
                __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                             &__dso_handle);
                __cxa_guard_release(&StringArray::operator[](int)::empty);
                puVar33 = &StringArray::operator[](int)::empty;
              }
            }
          }
          uVar9 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)*puVar33,(byte *)"<!entity");
          param_2 = local_d8;
          if (uVar9 == 0) {
            if (uVar8 - 1 < *puVar42) {
              puVar33 = (undefined8 *)(*(long *)(local_d8 + 0x28) + lVar29 + -8);
            }
            else {
              puVar33 = &StringArray::operator[](int)::empty;
              if (StringArray::operator[](int)::empty == '\0') {
                iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
                puVar33 = &StringArray::operator[](int)::empty;
                if (iVar23 != 0) {
                  StringArray::operator[](int)::empty = &DAT_0061ac58;
                  __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                               &__dso_handle);
                  __cxa_guard_release(&StringArray::operator[](int)::empty);
                  puVar33 = &StringArray::operator[](int)::empty;
                }
              }
            }
                    /* try { // try from 004943db to 004943eb has its CatchHandler @ 004959aa */
            juce::String::trimCharactersAtEnd
                      ((undefined8 *)local_c8,(byte *)*puVar33,(byte *)0x65e0de);
            uVar9 = CharacterFunctions::
                    compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                              ((byte *)local_c8._0_8_,(byte *)"system");
            if (uVar9 == 0) {
              if (uVar8 < *puVar42) {
                puVar33 = (undefined8 *)(lVar29 + *(long *)(param_2 + 0x28));
              }
              else {
                puVar33 = &StringArray::operator[](int)::empty;
                if (StringArray::operator[](int)::empty == '\0') {
                  iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
                  puVar33 = &StringArray::operator[](int)::empty;
                  if (iVar23 != 0) {
                    StringArray::operator[](int)::empty = &DAT_0061ac58;
                    puVar33 = &StringArray::operator[](int)::empty;
                    __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                                 &__dso_handle);
                    __cxa_guard_release(&StringArray::operator[](int)::empty);
                  }
                }
              }
                    /* try { // try from 00494471 to 00494484 has its CatchHandler @ 0049591d */
              juce::String::trimCharactersAtEnd(&local_e0,(byte *)*puVar33,(byte *)0x65e0de);
                    /* try { // try from 00494489 to 00494495 has its CatchHandler @ 0049591b */
              getFileContents((XmlDocument *)&local_a8,*(long **)(param_2 + 0x40),(long *)&local_e0)
              ;
            }
            else {
                    /* try { // try from 00494401 to 00494412 has its CatchHandler @ 00495944 */
              juce::String::trim((long *)&local_e0,(long *)local_c8);
                    /* try { // try from 00494413 to 0049441f has its CatchHandler @ 0049591f */
              juce::String::unquoted(&local_a8,&local_e0);
            }
            param_3 = local_a0;
            pbVar41 = local_e0 + -0x10;
            if (pbVar41 != (byte *)&emptyString) {
              LOCK();
              iVar23 = *(int *)pbVar41;
              *(int *)pbVar41 = *(int *)pbVar41 + -1;
              UNLOCK();
              if (iVar23 == 0) {
                operator_delete__(pbVar41);
              }
            }
            piVar38 = (int *)(local_c8._0_8_ + -0x10);
            if (piVar38 != &emptyString) {
              LOCK();
              iVar23 = *piVar38;
              *piVar38 = *piVar38 + -1;
              UNLOCK();
              if (iVar23 == 0) {
                operator_delete__(piVar38);
              }
            }
            goto LAB_00493dcd;
          }
        }
      }
      uVar34 = uVar34 + 1;
      uVar31 = (ulong)(int)*puVar42;
      lVar29 = lVar29 + 8;
      uVar8 = uVar8 + 1;
    } while ((long)uVar34 < (long)uVar31);
  }
  pbVar41 = pbVar43 + -0x10;
  param_2 = local_d8;
  param_3 = local_a0;
  local_a8 = pbVar43;
  if (pbVar41 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar41 = *(int *)pbVar41 + 1;
    UNLOCK();
  }
LAB_00493dcd:
  pbVar43 = pbVar43 + -0x10;
  if (pbVar43 != (byte *)&emptyString) {
    LOCK();
    iVar23 = *(int *)pbVar43;
    *(int *)pbVar43 = *(int *)pbVar43 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(pbVar43);
    }
  }
  local_c8 = (undefined1  [16])0x0;
                    /* try { // try from 00493dfb to 00493e12 has its CatchHandler @ 00495ae7 */
  StringArray::addTokens((StringArray *)local_c8,local_a8,&DAT_005e5e66,&DAT_006559ef);
  if (local_d0 < (long *)(ulong)*puVar42) {
    Array<juce::String,juce::DummyCriticalSection,0>::removeInternal
              ((Array<juce::String,juce::DummyCriticalSection,0> *)this,local_d0);
  }
  pbVar43 = (byte *)(ulong)(uint)local_c8._12_4_;
  if (0 < (int)local_c8._12_4_) {
    plVar30 = local_d0;
    param_6 = pbVar43;
    do {
      pbVar41 = param_6 + -1;
      if ((uint)pbVar41 < (uint)pbVar43) {
        plVar20 = (long *)(((ulong)pbVar41 & 0xffffffff) * 8 + local_c8._0_8_);
      }
      else {
        plVar20 = (long *)&StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          plVar20 = (long *)&StringArray::operator[](int)::empty;
          plVar30 = local_d0;
          if (iVar23 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            plVar20 = (long *)&StringArray::operator[](int)::empty;
            plVar30 = local_d0;
          }
        }
      }
      lVar29 = *plVar20;
      piVar38 = (int *)(lVar29 + -0x10);
      if (piVar38 != &emptyString) {
        LOCK();
        *piVar38 = *piVar38 + 1;
        UNLOCK();
      }
      uVar8 = *(uint *)(param_2 + 0x34);
      uVar31 = (ulong)uVar8;
      pbVar22 = param_6;
      if ((int)*(uint *)(param_2 + 0x30) <= (int)uVar8) {
        uVar9 = uVar8 + ((int)((uVar8 - ((int)(uVar8 + 1) >> 0x1f)) + 1) >> 1) + 9 & 0xfffffff8;
        if (*(uint *)(param_2 + 0x30) != uVar9) {
          local_88 = pbVar41;
          local_60 = param_6;
          if ((int)uVar9 < 1) {
            free(*(void **)this);
            *(undefined8 *)this = 0;
          }
          else {
            pvVar13 = malloc((ulong)uVar9 << 3);
            uVar6 = CONCAT44(uStack_44,local_48);
            uVar7 = CONCAT44(uStack_3c,uStack_40);
            if (0 < (int)uVar8) {
              pvVar2 = *(void **)this;
              if ((uVar8 < 4) ||
                 ((pvVar13 < (void *)((long)pvVar2 + uVar31 * 8) &&
                  (pvVar2 < (void *)((long)pvVar13 + uVar31 * 8))))) {
                uVar34 = 0;
              }
              else {
                uVar34 = (ulong)(uVar8 & 0xfffffffc);
                param_5 = (byte *)((uVar34 - 4 >> 2) + 1);
                if (uVar34 - 4 == 0) {
                  lVar35 = 0;
LAB_0049406b:
                  puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8);
                  uVar3 = puVar33[1];
                  puVar21 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x10);
                  uVar4 = *puVar21;
                  uVar5 = puVar21[1];
                  puVar21 = (undefined8 *)((long)pvVar13 + lVar35 * 8);
                  *puVar21 = *puVar33;
                  puVar21[1] = uVar3;
                  puVar33 = (undefined8 *)((long)pvVar13 + lVar35 * 8 + 0x10);
                  *puVar33 = uVar4;
                  puVar33[1] = uVar5;
                  puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8);
                  *puVar33 = uVar6;
                  puVar33[1] = uVar7;
                  puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x10);
                  *puVar33 = uVar6;
                  puVar33[1] = uVar7;
                }
                else {
                  uVar37 = (ulong)param_5 & 0xfffffffffffffffe;
                  lVar35 = 0;
                  do {
                    puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8);
                    uVar3 = puVar33[1];
                    puVar21 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x10);
                    uVar4 = *puVar21;
                    uVar5 = puVar21[1];
                    puVar21 = (undefined8 *)((long)pvVar13 + lVar35 * 8);
                    *puVar21 = *puVar33;
                    puVar21[1] = uVar3;
                    puVar33 = (undefined8 *)((long)pvVar13 + lVar35 * 8 + 0x10);
                    *puVar33 = uVar4;
                    puVar33[1] = uVar5;
                    puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8);
                    *puVar33 = uVar6;
                    puVar33[1] = uVar7;
                    puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x10);
                    *puVar33 = uVar6;
                    puVar33[1] = uVar7;
                    puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x20);
                    uVar3 = puVar33[1];
                    puVar21 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x30);
                    uVar4 = *puVar21;
                    uVar5 = puVar21[1];
                    puVar21 = (undefined8 *)((long)pvVar13 + lVar35 * 8 + 0x20);
                    *puVar21 = *puVar33;
                    puVar21[1] = uVar3;
                    puVar33 = (undefined8 *)((long)pvVar13 + lVar35 * 8 + 0x30);
                    *puVar33 = uVar4;
                    puVar33[1] = uVar5;
                    puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x20);
                    *puVar33 = uVar6;
                    puVar33[1] = uVar7;
                    puVar33 = (undefined8 *)((long)pvVar2 + lVar35 * 8 + 0x30);
                    *puVar33 = uVar6;
                    puVar33[1] = uVar7;
                    lVar35 = lVar35 + 8;
                    uVar37 = uVar37 - 2;
                  } while (uVar37 != 0);
                  if (((ulong)param_5 & 1) != 0) goto LAB_0049406b;
                }
                if (uVar34 == uVar31) goto LAB_00494091;
              }
              uVar37 = ~uVar34;
              uVar39 = uVar31 & 3;
              if ((uVar8 & 3) != 0) {
                do {
                  *(undefined8 *)((long)pvVar13 + uVar34 * 8) =
                       *(undefined8 *)((long)pvVar2 + uVar34 * 8);
                  *(undefined1 **)((long)pvVar2 + uVar34 * 8) = &DAT_0061ac58;
                  uVar34 = uVar34 + 1;
                  uVar39 = uVar39 - 1;
                } while (uVar39 != 0);
              }
              param_2 = local_d8;
              if (2 < uVar37 + uVar31) {
                do {
                  *(undefined8 *)((long)pvVar13 + uVar34 * 8) =
                       *(undefined8 *)((long)pvVar2 + uVar34 * 8);
                  *(undefined1 **)((long)pvVar2 + uVar34 * 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar13 + uVar34 * 8 + 8) =
                       *(undefined8 *)((long)pvVar2 + uVar34 * 8 + 8);
                  *(undefined1 **)((long)pvVar2 + uVar34 * 8 + 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar13 + uVar34 * 8 + 0x10) =
                       *(undefined8 *)((long)pvVar2 + uVar34 * 8 + 0x10);
                  *(undefined1 **)((long)pvVar2 + uVar34 * 8 + 0x10) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar13 + uVar34 * 8 + 0x18) =
                       *(undefined8 *)((long)pvVar2 + uVar34 * 8 + 0x18);
                  *(undefined1 **)((long)pvVar2 + uVar34 * 8 + 0x18) = &DAT_0061ac58;
                  uVar34 = uVar34 + 4;
                } while (uVar31 != uVar34);
              }
            }
LAB_00494091:
            pvVar2 = *(void **)this;
            *(void **)this = pvVar13;
            free(pvVar2);
          }
          plVar30 = local_d0;
          pbVar41 = local_88;
          param_6 = local_60;
        }
        *(uint *)(param_2 + 0x30) = uVar9;
        uVar8 = *(uint *)(param_2 + 0x34);
        pbVar22 = param_6;
      }
      param_6 = pbVar41;
      puVar42 = local_78;
      lVar35 = *(long *)this;
      plVar20 = (long *)(lVar35 + (long)(int)uVar8 * 8);
      if (plVar30 < (long *)(ulong)uVar8) {
        uVar9 = uVar8 - (int)plVar30;
        if (0 < (int)uVar9) {
          plVar26 = plVar20 + 1;
          if (2 < (int)local_58 + uVar8) {
            if (3 < uVar9 - 4) {
              uVar24 = ((int)local_80 + uVar8 >> 2) + 1 & 0xfffffffe;
              do {
                plVar26 = plVar20;
                *plVar26 = plVar26[-1];
                lVar35 = plVar26[-2];
                plVar26[-2] = plVar26[-3];
                plVar26[-1] = lVar35;
                lVar35 = plVar26[-4];
                plVar26[-4] = plVar26[-5];
                plVar26[-3] = lVar35;
                lVar35 = plVar26[-6];
                plVar26[-6] = plVar26[-7];
                plVar26[-5] = lVar35;
                plVar26[-7] = plVar26[-8];
                plVar26[-8] = (long)&DAT_0061ac58;
                plVar20 = plVar26 + -8;
                uVar24 = uVar24 - 2;
              } while (uVar24 != 0);
              plVar26 = plVar26 + -7;
            }
            if (((uVar9 - 4 >> 2) + 1 & 1) != 0) {
              plVar26[-1] = plVar20[-1];
              plVar20[-1] = (long)&DAT_0061ac58;
              plVar26[-2] = plVar20[-2];
              plVar20[-2] = (long)&DAT_0061ac58;
              plVar26[-3] = plVar20[-3];
              plVar20[-3] = (long)&DAT_0061ac58;
              plVar26[-4] = plVar20[-4];
              plVar20[-4] = (long)&DAT_0061ac58;
              plVar20 = plVar20 + -4;
              plVar26 = plVar26 + -4;
            }
          }
          if ((uVar9 & 3) != 0) {
            lVar35 = 0;
            do {
              plVar26[lVar35 + -1] = plVar20[lVar35 + -1];
              plVar20[lVar35 + -1] = (long)&DAT_0061ac58;
              lVar35 = lVar35 + -1;
            } while (-((int)local_80 + uVar8 & 3) != (int)lVar35);
          }
          lVar35 = *(long *)this;
          param_5 = param_2;
        }
        plVar20 = (long *)(lVar35 + (long)plVar30 * 8);
      }
      *plVar20 = lVar29;
      if (piVar38 == &emptyString) {
        *local_78 = uVar8 + 1;
      }
      else {
        LOCK();
        *piVar38 = *piVar38 + 1;
        UNLOCK();
        *local_78 = *local_78 + 1;
        LOCK();
        iVar23 = *piVar38;
        *piVar38 = *piVar38 + -1;
        UNLOCK();
        if (iVar23 == 0) {
          operator_delete__(piVar38);
          plVar30 = local_d0;
        }
      }
      param_3 = local_a0;
      pbVar43 = (byte *)(ulong)(uint)local_c8._12_4_;
    } while (1 < (long)pbVar22);
    if (0 < (int)local_c8._12_4_) {
      lVar29 = 0;
      do {
        piVar38 = (int *)(*(long *)(local_c8._0_8_ + lVar29 * 8) + -0x10);
        if (piVar38 != &emptyString) {
          LOCK();
          iVar23 = *piVar38;
          *piVar38 = *piVar38 + -1;
          UNLOCK();
          if (iVar23 == 0) {
            operator_delete__(piVar38);
          }
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 < (int)local_c8._12_4_);
    }
  }
  free((void *)local_c8._0_8_);
  pbVar43 = local_a8 + -0x10;
  if (pbVar43 != (byte *)&emptyString) {
    LOCK();
    iVar23 = *(int *)pbVar43;
    *(int *)pbVar43 = *(int *)pbVar43 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(pbVar43);
    }
  }
  uVar31 = local_98;
LAB_00494370:
  if ((long)local_50 < 2) goto LAB_0049474b;
  plVar30 = (long *)(ulong)*puVar42;
  uVar31 = (ulong)((int)uVar31 + 1);
  uVar8 = (int)local_80 + 1;
  goto LAB_00493790;
LAB_00494a30:
  pbVar41 = pbVar43 + 1;
  pbVar22 = (byte *)(ulong)bVar16;
  if ((char)bVar16 < '\0') {
    if ((bVar16 & 0x40) == 0) {
      pbVar22 = (byte *)(ulong)(bVar16 & 0x7f);
      goto LAB_00494b03;
    }
    if ((bVar16 & 0x20) == 0) {
      uVar9 = 0x3f;
      lVar29 = 0;
      bVar44 = false;
      param_5 = (byte *)0x0;
    }
    else {
      bVar44 = true;
      if ((bVar16 & 0x10) == 0) {
        uVar9 = 0x1f;
        lVar29 = 1;
        param_5 = (byte *)0x0;
      }
      else {
        uVar9 = 0xf;
        lVar29 = 2;
        param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),1);
      }
    }
    uVar9 = bVar16 & uVar9;
    pbVar22 = (byte *)(ulong)uVar9;
    if ((pbVar43[1] & 0xc0) != 0x80) goto LAB_00494b03;
    pbVar27 = pbVar43 + lVar29 + 2;
    uVar9 = pbVar43[1] & 0x3f | uVar9 << 6;
    pbVar22 = (byte *)(ulong)uVar9;
    pbVar41 = pbVar27;
    if (!bVar44) goto LAB_00494b03;
    bVar16 = pbVar43[2];
    pbVar41 = pbVar43 + 2;
    if ((bVar16 & 0xc0) == 0x80) {
      uVar9 = bVar16 & 0x3f | uVar9 << 6;
      pbVar22 = (byte *)(ulong)uVar9;
      pbVar41 = pbVar27;
      if ((char)param_5 != '\0') {
        pbVar41 = pbVar43 + 3;
        if ((*pbVar41 & 0xffffffc0) == 0x80) {
          pbVar22 = (byte *)(ulong)(uVar9 << 6 | *pbVar41 & 0x3f);
          pbVar41 = pbVar27;
        }
      }
      goto LAB_00494b03;
    }
  }
  else {
LAB_00494b03:
    uVar9 = (uint)pbVar22;
  }
  pbVar43 = pbVar41;
  if (uVar9 == 0x26) goto LAB_00494b39;
  iVar23 = iVar23 + 1;
  bVar16 = *pbVar43;
  if (bVar16 == 0) {
    return;
  }
  goto LAB_00494a30;
LAB_00494b39:
  pSVar32 = local_b0;
  iVar10 = juce::String::indexOf(local_b0,uVar8,(byte *)0x656033,pbVar22,param_5,param_6);
  if (iVar10 < 0) {
                    /* try { // try from 00495640 to 00495649 has its CatchHandler @ 00495916 */
    piVar38 = operator_new__(0x3f);
    pbVar41 = local_d8;
    LOCK();
    *piVar38 = 0;
    UNLOCK();
    piVar38[2] = 0x28;
    piVar38[3] = 0;
    bVar16 = 0x65;
    lVar29 = 2;
    pbVar43 = (byte *)(piVar38 + 4);
    while( true ) {
      if ((char)bVar16 < '\0') {
        *pbVar43 = bVar16 >> 6 | 0xc0;
        pbVar43[1] = bVar16 & 0x3f | 0x80;
        pbVar22 = pbVar43 + 2;
        pbVar43 = pbVar43 + 1;
      }
      else {
        *pbVar43 = bVar16;
        pbVar22 = pbVar43 + 1;
      }
      if (lVar29 == 0x26) break;
      bVar16 = "<!entity"[lVar29 + 8];
      if ((char)bVar16 < '\0') {
        pbVar43[1] = bVar16 >> 6 | 0xc0;
        pbVar43[2] = bVar16 & 0x3f | 0x80;
      }
      else {
        *pbVar22 = bVar16;
        pbVar22 = pbVar43;
      }
      pbVar43 = pbVar22 + 2;
      bVar16 = "entity without terminating semi-colon"[lVar29];
      lVar29 = lVar29 + 2;
    }
    *pbVar22 = 0;
    LOCK();
    *piVar38 = *piVar38 + 1;
    UNLOCK();
    LOCK();
    lVar29 = *(long *)(local_d8 + 0x18);
    *(int **)(local_d8 + 0x18) = piVar38 + 4;
    UNLOCK();
    piVar40 = (int *)(lVar29 + -0x10);
    if (piVar40 != &emptyString) {
      LOCK();
      iVar23 = *piVar40;
      *piVar40 = *piVar40 + -1;
      UNLOCK();
      if (iVar23 == 0) {
        operator_delete__(piVar40);
      }
    }
    pbVar41[0x11] = 1;
    LOCK();
    iVar23 = *piVar38;
    *piVar38 = *piVar38 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(piVar38);
      return;
    }
    return;
  }
                    /* try { // try from 00494b58 to 00494b6e has its CatchHandler @ 00495abd */
  local_d0 = (long *)CONCAT44(extraout_var,iVar10);
  juce::String::substring(&local_a8,(undefined8 *)pSVar32,uVar8,iVar10);
  pbVar43 = local_a8;
  uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                    (local_a8,&DAT_0065b466);
  if (uVar9 == 0) {
                    /* try { // try from 00494c10 to 00494db4 has its CatchHandler @ 00495a14 */
    puVar12 = operator_new__(0x1b);
LAB_00494c1a:
    LOCK();
    *puVar12 = 0;
    UNLOCK();
    *(undefined8 *)(puVar12 + 2) = 4;
    local_e0 = (byte *)(puVar12 + 4);
    *(undefined2 *)(puVar12 + 4) = 0x26;
  }
  else {
    uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (pbVar43,&DAT_005e5f3e);
    if (uVar9 == 0) {
      puVar12 = operator_new__(0x1b);
      LOCK();
      *puVar12 = 0;
      UNLOCK();
      *(undefined8 *)(puVar12 + 2) = 4;
      local_e0 = (byte *)(puVar12 + 4);
      *(undefined2 *)(puVar12 + 4) = 0x22;
    }
    else {
      uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                        (pbVar43,&DAT_005e5f43);
      if (uVar9 == 0) {
        puVar12 = operator_new__(0x1b);
        LOCK();
        *puVar12 = 0;
        UNLOCK();
        *(undefined8 *)(puVar12 + 2) = 4;
        local_e0 = (byte *)(puVar12 + 4);
        *(undefined2 *)(puVar12 + 4) = 0x27;
      }
      else {
        uVar9 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          (pbVar43,(byte *)0x5e42e4);
        if (uVar9 == 0) {
          puVar12 = operator_new__(0x1b);
          LOCK();
          *puVar12 = 0;
          UNLOCK();
          *(undefined8 *)(puVar12 + 2) = 4;
          local_e0 = (byte *)(puVar12 + 4);
          *(undefined2 *)(puVar12 + 4) = 0x3c;
        }
        else {
          uVar9 = CharacterFunctions::
                  compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            (pbVar43,&DAT_005e5f48);
          pbVar41 = local_d8;
          if (uVar9 == 0) {
            puVar12 = operator_new__(0x1b);
            LOCK();
            *puVar12 = 0;
            UNLOCK();
            *(undefined8 *)(puVar12 + 2) = 4;
            local_e0 = (byte *)(puVar12 + 4);
            *(undefined2 *)(puVar12 + 4) = 0x3e;
          }
          else {
            bVar16 = *pbVar43;
            uVar9 = (uint)bVar16;
            uVar31 = (ulong)uVar9;
            if ((char)bVar16 < '\0') {
              if ((bVar16 & 0x40) == 0) {
                uVar31 = (ulong)(uVar9 & 0x7f);
              }
              else {
                uVar9 = uVar9 & 0x10 ^ 0x1f;
                if ((bVar16 & 0x20) == 0) {
                  uVar9 = 0x3f;
                }
                uVar9 = uVar9 & bVar16;
                uVar31 = (ulong)uVar9;
                if ((pbVar43[1] & 0xffffffc0) == 0x80) {
                  uVar9 = pbVar43[1] & 0x3f | uVar9 << 6;
                  uVar31 = (ulong)uVar9;
                  if ((bVar16 & 0x20) != 0) {
                    if ((pbVar43[2] & 0xffffffc0) == 0x80) {
                      uVar9 = pbVar43[2] & 0x3f | uVar9 << 6;
                      uVar31 = (ulong)uVar9;
                      if ((bVar16 >> 5 & (bVar16 & 0x10) == 0) == 0) {
                        pSVar32 = local_b0;
                        if ((pbVar43[3] & 0xffffffc0) == 0x80) {
                          uVar31 = (ulong)(uVar9 << 6 | pbVar43[3] & 0x3f);
                        }
                      }
                      else {
                        pSVar32 = local_b0;
                      }
                    }
                  }
                }
              }
            }
            if ((int)uVar31 == 0x23) {
              pbVar22 = pbVar43 + 1;
              if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
                if ((bVar16 & 0x20) == 0) {
                  pbVar22 = pbVar43 + 2;
                }
                else {
                  pbVar22 = pbVar43 + (4 - (ulong)((bVar16 & 0x10) == 0));
                }
              }
              bVar28 = *pbVar22;
              uVar9 = (uint)bVar28;
              if ((char)bVar28 < '\0') {
                uVar9 = (uint)bVar28;
                if ((bVar28 & 0x40) == 0) {
                  uVar9 = uVar9 & 0x7f;
                }
                else {
                  bVar44 = (bVar28 & 0x10) == 0;
                  param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),bVar44);
                  uVar24 = uVar9 & 0x10 ^ 0x1f;
                  if ((bVar28 & 0x20) == 0) {
                    uVar24 = 0x3f;
                  }
                  uVar9 = uVar24 & uVar9;
                  if (((((pbVar22[1] & 0xffffffc0) == 0x80) &&
                       (uVar9 = pbVar22[1] & 0x3f | uVar9 << 6, (bVar28 & 0x20) != 0)) &&
                      ((pbVar22[2] & 0xc0) == 0x80)) &&
                     (uVar9 = pbVar22[2] & 0x3f | uVar9 << 6, (bVar28 >> 5 & bVar44) == 0)) {
                    pSVar32 = local_b0;
                    if ((pbVar22[3] & 0xffffffc0) == 0x80) {
                      uVar9 = uVar9 << 6 | pbVar22[3] & 0x3f;
                    }
                  }
                  else {
                    pSVar32 = local_b0;
                  }
                }
              }
              if ((uVar9 & 0xffffffdf) == 0x58) {
                pbVar41 = &DAT_0061ac58;
                if (bVar16 != 0) {
                  pbVar22 = pbVar43 + 1;
                  if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
                    if ((bVar16 & 0x20) == 0) {
                      pbVar22 = pbVar43 + 2;
                    }
                    else {
                      pbVar22 = pbVar43 + (4 - (ulong)((bVar16 & 0x10) == 0));
                    }
                  }
                  bVar16 = *pbVar22;
                  pbVar41 = &DAT_0061ac58;
                  if (bVar16 != 0) {
                    pbVar43 = pbVar22 + 1;
                    if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
                      if ((bVar16 & 0x20) == 0) {
                        pbVar43 = pbVar22 + 2;
                      }
                      else {
                        pbVar43 = pbVar22 + (4 - (ulong)((bVar16 & 0x10) == 0));
                      }
                    }
                    pbVar41 = (byte *)StringHolderUtils::
                                      createFromCharPointer<juce::CharPointer_UTF8>(pbVar43);
                  }
                }
                bVar16 = *pbVar41;
                uVar9 = 0;
                if (bVar16 != 0) {
                  pbVar43 = pbVar41;
                  do {
                    pbVar22 = pbVar43 + 1;
                    uVar24 = (uint)bVar16;
                    if ((char)bVar16 < '\0') {
                      if ((bVar16 & 0x40) == 0) {
                        uVar24 = uVar24 & 0x7f;
                      }
                      else {
                        if ((bVar16 & 0x20) == 0) {
                          uVar18 = 0x3f;
                          lVar29 = 0;
                          param_6 = (byte *)0x0;
                          param_5 = (byte *)0x0;
                        }
                        else {
                          param_6 = (byte *)CONCAT71((int7)((ulong)param_6 >> 8),1);
                          if ((bVar16 & 0x10) == 0) {
                            uVar18 = 0x1f;
                            lVar29 = 1;
                            param_5 = (byte *)0x0;
                          }
                          else {
                            uVar18 = 0xf;
                            lVar29 = 2;
                            param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),1);
                          }
                        }
                        uVar24 = uVar24 & uVar18;
                        if ((pbVar43[1] & 0xc0) == 0x80) {
                          pbVar27 = pbVar43 + lVar29 + 2;
                          uVar24 = pbVar43[1] & 0x3f | uVar24 << 6;
                          pbVar22 = pbVar27;
                          if ((char)param_6 != '\0') {
                            uVar18 = (uint)pbVar43[2];
                            pbVar22 = pbVar43 + 2;
                            if ((uVar18 & 0xffffffc0) == 0x80) {
                              uVar24 = uVar18 & 0x3f | uVar24 << 6;
                              pbVar22 = pbVar27;
                              if ((char)param_5 != '\0') {
                                uVar18 = (uint)pbVar43[3];
                                pbVar22 = pbVar43 + 3;
                                if ((uVar18 & 0xffffffc0) == 0x80) {
                                  uVar24 = uVar18 & 0x3f | uVar24 << 6;
                                  pbVar22 = pbVar27;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    pbVar43 = pbVar22;
                    uVar18 = uVar24 - 0x30;
                    if (9 < uVar18) {
                      if (uVar24 - 0x61 < 6) {
                        uVar18 = uVar24 - 0x57;
                      }
                      else if (uVar24 - 0x41 < 6) {
                        uVar18 = uVar24 - 0x37;
                      }
                      else {
                        uVar18 = 0xffffffff;
                      }
                    }
                    if (-1 < (int)uVar18) {
                      uVar9 = uVar9 << 4 | uVar18;
                    }
                    bVar16 = *pbVar43;
                  } while (bVar16 != 0);
                }
                    /* try { // try from 00495519 to 0049551d has its CatchHandler @ 004958e2 */
                puVar12 = operator_new__((ulong)(0xffff < uVar9) * 4 + 0x1b);
                pSVar32 = local_b0;
                LOCK();
                *puVar12 = 0;
                UNLOCK();
                local_e0 = (byte *)(puVar12 + 4);
                *(ulong *)(puVar12 + 2) = (ulong)(0xffff < uVar9) * 4 + 4;
                if (uVar9 < 0x80) {
                  *(char *)(puVar12 + 4) = (char)uVar9;
                  puVar15 = (undefined1 *)((long)puVar12 + 0x11);
LAB_004955f7:
                  *puVar15 = 0;
                }
                else {
                  uVar24 = 0xffff < uVar9 | 2;
                  if (uVar9 < 0x800) {
                    uVar24 = 1;
                  }
                  bVar16 = (byte)uVar24;
                  sVar17 = bVar16 * '\x06';
                  *(byte *)(puVar12 + 4) = (byte)(uVar9 >> sVar17) | (byte)(0xff << (bVar16 ^ 7));
                  *(byte *)((long)puVar12 + 0x11) =
                       (byte)(uVar9 >> ((bVar16 * '\x02' + -2) * '\x03' & 0x1f)) & 0x3f | 0x80;
                  if (uVar9 < 0x800) {
                    puVar15 = (undefined1 *)((long)puVar12 + 0x12);
                    goto LAB_004955f7;
                  }
                  *(byte *)((long)puVar12 + 0x12) =
                       (byte)(uVar9 >> (sVar17 - 0xcU & 0x1f)) & 0x3f | 0x80;
                  if (uVar24 - 1 < 2) {
                    *(undefined1 *)((long)puVar12 + 0x13) = 0;
                  }
                  else {
                    *(byte *)((long)puVar12 + 0x13) =
                         (byte)(uVar9 >> (sVar17 - 0x12U & 0x1f)) & 0x3f | 0x80;
                    *(undefined1 *)(puVar12 + 5) = 0;
                  }
                }
                if (pbVar41 != &DAT_0061ac58) {
                  pbVar41 = pbVar41 + -0x10;
                  LOCK();
                  iVar10 = *(int *)pbVar41;
                  *(int *)pbVar41 = *(int *)pbVar41 + -1;
                  UNLOCK();
                  if (iVar10 == 0) {
                    operator_delete__(pbVar41);
                  }
                }
              }
              else {
                if (9 < uVar9 - 0x30) {
                    /* try { // try from 004952f0 to 004953b4 has its CatchHandler @ 00495a14 */
                  juce::String::String((String *)local_c8,(byte *)"illegal escape sequence");
                  piVar38 = (int *)(local_c8._0_8_ + -0x10);
                  if (piVar38 != &emptyString) {
                    LOCK();
                    *piVar38 = *piVar38 + 1;
                    UNLOCK();
                  }
                  LOCK();
                  pbVar43 = pbVar41 + 0x18;
                  lVar29 = *(long *)pbVar43;
                  *(undefined8 *)pbVar43 = local_c8._0_8_;
                  UNLOCK();
                  piVar38 = (int *)(lVar29 + -0x10);
                  if (piVar38 != &emptyString) {
                    LOCK();
                    iVar10 = *piVar38;
                    *piVar38 = *piVar38 + -1;
                    UNLOCK();
                    if (iVar10 == 0) {
                      operator_delete__(piVar38);
                    }
                  }
                  pbVar41[0x11] = 1;
                  piVar38 = (int *)(local_c8._0_8_ + -0x10);
                  if (piVar38 != &emptyString) {
                    LOCK();
                    iVar10 = *piVar38;
                    *piVar38 = *piVar38 + -1;
                    UNLOCK();
                    if (iVar10 == 0) {
                      operator_delete__(piVar38);
                    }
                  }
                  puVar12 = operator_new__(0x1b);
                  goto LAB_00494c1a;
                }
                    /* try { // try from 00495290 to 004952a3 has its CatchHandler @ 00495a14 */
                juce::String::substring((long *)local_c8,(long *)&local_a8,1);
                uVar6 = local_c8._0_8_;
                lVar29 = strtol((char *)local_c8._0_8_,(char **)0x0,10);
                    /* try { // try from 004952b8 to 004952c3 has its CatchHandler @ 00495885 */
                juce::String::charToString((String *)&local_e0,(uint)lVar29);
                piVar38 = (int *)(uVar6 + -0x10);
                if (piVar38 != &emptyString) {
                  LOCK();
                  iVar10 = *piVar38;
                  *piVar38 = *piVar38 + -1;
                  UNLOCK();
                  if (iVar10 == 0) {
                    operator_delete__(piVar38);
                  }
                }
              }
            }
            else {
              expandExternalEntity
                        ((String *)&local_e0,local_d8,(long *)&local_a8,uVar31,param_5,param_6);
            }
          }
        }
      }
    }
  }
  pbVar43 = local_a8 + -0x10;
  if (pbVar43 == (byte *)&emptyString) {
LAB_00494ddf:
    if (iVar23 != 0) goto LAB_00494de8;
LAB_00494ede:
    local_90 = &DAT_0061ac58;
  }
  else {
    LOCK();
    iVar10 = *(int *)pbVar43;
    *(int *)pbVar43 = *(int *)pbVar43 + -1;
    UNLOCK();
    if (iVar10 != 0) goto LAB_00494ddf;
    operator_delete__(pbVar43);
    if (iVar23 == 0) goto LAB_00494ede;
LAB_00494de8:
    pbVar43 = *(byte **)pSVar32;
    pbVar41 = pbVar43;
    do {
      bVar16 = *pbVar41;
      if (bVar16 == 0) {
        pbVar41 = pbVar43 + -0x10;
        local_90 = pbVar43;
        if (pbVar41 != (byte *)&emptyString) {
          LOCK();
          *(int *)pbVar41 = *(int *)pbVar41 + 1;
          UNLOCK();
        }
        goto LAB_00494eea;
      }
      pbVar22 = pbVar41 + 1;
      if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
        if ((bVar16 & 0x20) == 0) {
          pbVar22 = pbVar41 + 2;
        }
        else {
          pbVar22 = pbVar41 + (4 - (ulong)((bVar16 & 0x10) == 0));
        }
      }
      iVar23 = iVar23 + -1;
      pbVar41 = pbVar22;
    } while (iVar23 != 0);
    pbVar41 = &DAT_0061ac58;
    if (pbVar43 != (byte *)0x0) {
      pbVar41 = &DAT_0061ac58;
      if (*pbVar43 != 0) {
        sVar11 = (long)pbVar22 - (long)pbVar43;
        uVar31 = sVar11 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 00494e88 to 00494e8c has its CatchHandler @ 004959c6 */
        puVar12 = operator_new__(uVar31 + 0x17);
        LOCK();
        *puVar12 = 0;
        UNLOCK();
        *(ulong *)(puVar12 + 2) = uVar31;
        pbVar41 = (byte *)(puVar12 + 4);
        memcpy(pbVar41,pbVar43,sVar11);
        *(undefined1 *)((long)puVar12 + sVar11 + 0x10) = 0;
        pSVar32 = local_b0;
      }
    }
    local_90 = pbVar41;
  }
LAB_00494eea:
                    /* try { // try from 00494eea to 00494ef8 has its CatchHandler @ 00495a6a */
  pSVar14 = juce::String::operator+=((String *)&local_90,(String *)&local_e0);
  local_70 = *(long *)pSVar14;
  piVar38 = (int *)(local_70 + -0x10);
  if (piVar38 != &emptyString) {
    LOCK();
    *piVar38 = *piVar38 + 1;
    UNLOCK();
  }
  pbVar43 = *(byte **)pSVar32;
  iVar23 = (int)local_d0 + 2;
  pbVar41 = pbVar43;
  do {
    bVar16 = *pbVar41;
    if (bVar16 == 0) {
      puVar12 = (undefined4 *)&DAT_0061ac58;
      goto LAB_00494f75;
    }
    pbVar22 = pbVar41 + 1;
    if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
      if ((bVar16 & 0x20) == 0) {
        pbVar22 = pbVar41 + 2;
      }
      else {
        pbVar22 = pbVar41 + (4 - (ulong)((bVar16 & 0x10) == 0));
      }
    }
    iVar23 = iVar23 + -1;
    pbVar41 = pbVar22;
  } while (1 < iVar23);
                    /* try { // try from 00494f70 to 00494f74 has its CatchHandler @ 00495a0f */
  puVar12 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar22);
LAB_00494f75:
  local_c8._0_8_ = puVar12;
                    /* try { // try from 00494f7a to 00494f88 has its CatchHandler @ 00495a1e */
  pSVar14 = juce::String::operator+=((String *)&local_70,(String *)local_c8);
  lVar29 = *(long *)pSVar14;
  pbVar22 = (byte *)(lVar29 + -0x10);
  if (pbVar22 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar22 = *(int *)pbVar22 + 1;
    UNLOCK();
    pbVar43 = *(byte **)pSVar32;
  }
  *(long *)pSVar32 = lVar29;
  pbVar43 = pbVar43 + -0x10;
  if (pbVar43 != (byte *)&emptyString) {
    LOCK();
    iVar23 = *(int *)pbVar43;
    *(int *)pbVar43 = *(int *)pbVar43 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(pbVar43);
    }
  }
  piVar38 = (int *)(local_c8._0_8_ + -0x10);
  if (piVar38 != &emptyString) {
    LOCK();
    iVar23 = *piVar38;
    *piVar38 = *piVar38 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(piVar38);
    }
  }
  plVar30 = local_d0;
  piVar38 = (int *)(local_70 + -0x10);
  if (piVar38 != &emptyString) {
    LOCK();
    iVar23 = *piVar38;
    *piVar38 = *piVar38 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(piVar38);
    }
  }
  pbVar43 = local_90 + -0x10;
  if (pbVar43 != (byte *)&emptyString) {
    LOCK();
    iVar23 = *(int *)pbVar43;
    *(int *)pbVar43 = *(int *)pbVar43 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(pbVar43);
    }
  }
  bVar16 = **(byte **)pSVar32;
  iVar23 = -1;
  if (bVar16 != 0) {
    pbVar43 = *(byte **)pSVar32;
    iVar10 = 0;
    do {
      iVar23 = iVar10;
      pbVar22 = pbVar43 + 1;
      if ((int)plVar30 < iVar23) {
        uVar9 = (uint)bVar16;
        if ((char)bVar16 < '\0') {
          if ((bVar16 & 0x40) == 0) {
            uVar9 = uVar9 & 0x7f;
          }
          else {
            if ((bVar16 & 0x20) == 0) {
              uVar24 = 0x3f;
              lVar29 = 0;
              param_6 = (byte *)0x0;
              param_5 = (byte *)0x0;
            }
            else {
              param_6 = (byte *)CONCAT71((int7)((ulong)param_6 >> 8),1);
              if ((bVar16 & 0x10) == 0) {
                uVar24 = 0x1f;
                lVar29 = 1;
                param_5 = (byte *)0x0;
              }
              else {
                uVar24 = 0xf;
                lVar29 = 2;
                param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),1);
              }
            }
            uVar9 = uVar9 & uVar24;
            if ((pbVar43[1] & 0xffffffc0) == 0x80) {
              pbVar41 = pbVar43 + lVar29 + 2;
              uVar9 = pbVar43[1] & 0x3f | uVar9 << 6;
              pbVar22 = pbVar41;
              if ((char)param_6 != '\0') {
                pbVar22 = pbVar43 + 2;
                if ((*pbVar22 & 0xffffffc0) == 0x80) {
                  uVar9 = *pbVar22 & 0x3f | uVar9 << 6;
                  pbVar22 = pbVar41;
                  if ((char)param_5 != '\0') {
                    pbVar22 = pbVar43 + 3;
                    if ((*pbVar22 & 0xffffffc0) == 0x80) {
                      uVar9 = uVar9 << 6 | *pbVar22 & 0x3f;
                      pbVar22 = pbVar41;
                    }
                  }
                }
              }
            }
            plVar30 = local_d0;
          }
        }
        if (uVar9 == 0x26) break;
      }
      else if (((char)bVar16 < '\0') && ((bVar16 & 0x40) != 0)) {
        if ((bVar16 & 0x20) == 0) {
          pbVar22 = pbVar43 + 2;
        }
        else {
          pbVar22 = pbVar43 + (4 - (ulong)((bVar16 & 0x10) == 0));
        }
      }
      iVar10 = iVar23 + 1;
      bVar16 = *pbVar22;
      pbVar43 = pbVar22;
      iVar23 = -1;
    } while (bVar16 != 0);
  }
  pbVar43 = local_e0 + -0x10;
  if (pbVar43 != (byte *)&emptyString) {
    LOCK();
    iVar10 = *(int *)pbVar43;
    *(int *)pbVar43 = *(int *)pbVar43 + -1;
    UNLOCK();
    if (iVar10 == 0) {
      operator_delete__(pbVar43);
    }
  }
  if (iVar23 < 0) {
    return;
  }
  goto LAB_00494b39;
LAB_004932ca:
  do {
    param_5 = pbVar22 + 1;
    uVar8 = (uint)bVar16;
    if ((char)bVar16 < '\0') {
      if ((bVar16 & 0x40) == 0) {
        uVar8 = uVar8 & 0x7f;
        goto LAB_004933b0;
      }
      if ((bVar16 & 0x20) == 0) {
        uVar9 = 0x3f;
        lVar29 = 0;
        bVar44 = false;
        param_6 = (byte *)0x0;
      }
      else {
        bVar44 = true;
        if ((bVar16 & 0x10) == 0) {
          uVar9 = 0x1f;
          lVar29 = 1;
          param_6 = (byte *)0x0;
        }
        else {
          uVar9 = 0xf;
          lVar29 = 2;
          param_6 = (byte *)CONCAT71((int7)((ulong)param_6 >> 8),1);
        }
      }
      uVar8 = uVar9 & uVar8;
      bVar16 = pbVar22[1];
      if ((bVar16 & 0xc0) == 0x80) {
        pbVar27 = pbVar22 + lVar29 + 2;
        uVar8 = bVar16 & 0x3f | uVar8 << 6;
        if (!bVar44) {
          param_5 = pbVar27;
        }
        else {
          param_5 = pbVar22 + 2;
          bVar16 = *param_5;
          if ((bVar16 & 0xffffffc0) != 0x80) goto LAB_004932b0;
          uVar8 = bVar16 & 0x3f | uVar8 << 6;
          param_5 = pbVar27;
          if ((char)param_6 != '\0') {
            param_5 = pbVar22 + 3;
            bVar16 = *param_5;
            if ((bVar16 & 0xc0) != 0x80) goto LAB_004932b0;
            uVar8 = uVar8 << 6 | bVar16 & 0x3f;
            param_5 = pbVar27;
          }
        }
        goto LAB_004933b0;
      }
    }
    else {
LAB_004933b0:
      bVar16 = *param_5;
    }
LAB_004932b0:
    if (uVar8 == 0x5d) {
      iVar10 = iVar36;
    }
    iVar36 = iVar36 + 1;
    pbVar22 = param_5;
  } while (bVar16 != 0);
  if (iVar23 < iVar10) {
    juce::String::substring((undefined8 *)local_c8,(undefined8 *)pbVar43,iVar23 + 1,iVar10);
    uVar6 = local_c8._0_8_;
                    /* try { // try from 004933f8 to 00493411 has its CatchHandler @ 004958b9 */
    StringArray::addTokens(this,(byte *)local_c8._0_8_,&DAT_005e5e66,&DAT_006559ef);
    pbVar43 = (byte *)(uVar6 + -0x10);
    if (pbVar43 != (byte *)&emptyString) {
      LOCK();
      iVar23 = *(int *)pbVar43;
      *(int *)pbVar43 = *(int *)pbVar43 + -1;
      UNLOCK();
      if (iVar23 == 0) {
LAB_00493736:
        operator_delete__(pbVar43);
        param_2 = pbVar41;
      }
    }
  }
LAB_0049373b:
  uVar8 = *puVar42;
  plVar30 = (long *)(ulong)uVar8;
  local_68 = plVar30;
  if (0 < (int)uVar8) {
    uVar8 = -uVar8 - 3;
    uVar31 = 0;
    local_48 = 0x61ac58;
    uStack_44 = 0;
    uStack_40 = 0x61ac58;
    uStack_3c = 0;
    local_d0 = plVar30;
LAB_00493790:
    local_80 = (ulong)uVar8;
    plVar20 = (long *)((long)local_d0 - 1);
    local_50 = local_d0;
    if (plVar20 < plVar30) {
      puVar33 = (undefined8 *)((long)plVar20 * 8 + *(long *)this);
    }
    else {
      puVar33 = &StringArray::operator[](int)::empty;
      if (StringArray::operator[](int)::empty == '\0') {
        local_d0 = plVar20;
        iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
        puVar33 = &StringArray::operator[](int)::empty;
        plVar20 = local_d0;
        if (iVar23 != 0) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
          puVar33 = &StringArray::operator[](int)::empty;
          plVar20 = local_d0;
        }
      }
    }
    local_d0 = plVar20;
    pbVar43 = (byte *)*puVar33;
    bVar16 = *pbVar43;
    uVar8 = (uint)bVar16;
    if ((char)bVar16 < '\0') {
      if ((bVar16 & 0x40) == 0) {
        uVar8 = uVar8 & 0x7f;
      }
      else {
        bVar44 = (bVar16 & 0x10) == 0;
        param_5 = (byte *)CONCAT71((int7)((ulong)param_5 >> 8),bVar44);
        uVar9 = uVar8 & 0x10 ^ 0x1f;
        if ((bVar16 & 0x20) == 0) {
          uVar9 = 0x3f;
        }
        uVar8 = uVar9 & uVar8;
        if (((((pbVar43[1] & 0xffffffc0) == 0x80) &&
             (uVar8 = pbVar43[1] & 0x3f | uVar8 << 6, (bVar16 & 0x20) != 0)) &&
            ((pbVar43[2] & 0xffffffc0) == 0x80)) &&
           ((uVar8 = pbVar43[2] & 0x3f | uVar8 << 6, (bVar16 >> 5 & bVar44) == 0 &&
            ((pbVar43[3] & 0xffffffc0) == 0x80)))) {
          uVar8 = uVar8 << 6 | pbVar43[3] & 0x3f;
        }
      }
    }
    if (uVar8 == 0x25) {
      if (local_d0 < (long *)(ulong)*puVar42) {
        puVar33 = (undefined8 *)((long)local_d0 * 8 + *(long *)this);
      }
      else {
        puVar33 = &StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          puVar33 = &StringArray::operator[](int)::empty;
          if (iVar23 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            puVar33 = &StringArray::operator[](int)::empty;
          }
        }
      }
      pcVar25 = (char *)*puVar33;
      if (*pcVar25 != '\0') {
        local_98 = uVar31;
        sVar11 = strlen(pcVar25);
        plVar30 = local_d0;
        lVar29 = sVar11 - 1;
        bVar16 = pcVar25[sVar11 - 1];
        if ((bVar16 & 0xc0) == 0x80) {
          bVar16 = pcVar25[sVar11 - 2];
          lVar29 = sVar11 - 2;
          if ((bVar16 & 0xc0) == 0x80) {
            bVar16 = pcVar25[sVar11 - 3];
            lVar29 = sVar11 - 3;
            if ((bVar16 & 0xc0) == 0x80) {
              bVar16 = pcVar25[sVar11 - 4];
              lVar29 = sVar11 - 4;
            }
          }
        }
        uVar8 = (uint)bVar16;
        pcVar25 = pcVar25 + lVar29;
        if ((char)bVar16 < '\0') {
          if ((bVar16 & 0x40) == 0) {
            uVar8 = uVar8 & 0x7f;
          }
          else {
            uVar9 = uVar8 & 0x10 ^ 0x1f;
            if ((bVar16 & 0x20) == 0) {
              uVar9 = 0x3f;
            }
            uVar8 = uVar8 & uVar9;
            if (((((byte)pcVar25[1] & 0xffffffc0) == 0x80) &&
                (uVar8 = (byte)pcVar25[1] & 0x3f | uVar8 << 6, (bVar16 & 0x20) != 0)) &&
               ((((byte)pcVar25[2] & 0xffffffc0) == 0x80 &&
                ((uVar8 = (byte)pcVar25[2] & 0x3f | uVar8 << 6,
                 (bVar16 >> 5 & (bVar16 & 0x10) == 0) == 0 &&
                 (((byte)pcVar25[3] & 0xffffffc0) == 0x80)))))) {
              uVar8 = uVar8 << 6 | (byte)pcVar25[3] & 0x3f;
            }
          }
        }
        param_5 = &DAT_0061ac58;
        uVar31 = local_98;
        if (uVar8 == 0x3b) {
          if (local_d0 < (long *)(ulong)*puVar42) {
            puVar33 = (undefined8 *)((long)local_d0 * 8 + *(long *)this);
          }
          else {
            puVar33 = &StringArray::operator[](int)::empty;
            if (StringArray::operator[](int)::empty == '\0') {
              iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
              puVar33 = &StringArray::operator[](int)::empty;
              if (iVar23 != 0) {
                StringArray::operator[](int)::empty = &DAT_0061ac58;
                puVar33 = &StringArray::operator[](int)::empty;
                __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                             &__dso_handle);
                __cxa_guard_release(&StringArray::operator[](int)::empty);
              }
            }
          }
          iVar23 = (int)local_98;
          if (plVar30 < (long *)(ulong)*puVar42) {
            puVar21 = (undefined8 *)((long)plVar30 * 8 + *(long *)this);
          }
          else {
            puVar21 = &StringArray::operator[](int)::empty;
            if (StringArray::operator[](int)::empty == '\0') {
              iVar10 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
              iVar23 = (int)local_98;
              puVar21 = &StringArray::operator[](int)::empty;
              if (iVar10 != 0) {
                StringArray::operator[](int)::empty = &DAT_0061ac58;
                __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,
                             &__dso_handle);
                __cxa_guard_release(&StringArray::operator[](int)::empty);
                iVar23 = (int)local_98;
                puVar21 = &StringArray::operator[](int)::empty;
              }
            }
          }
          param_5 = &DAT_0061ac58;
          local_58 = (ulong)(uint)(iVar23 - (int)local_68);
          pcVar25 = (char *)*puVar21;
          iVar23 = -2;
          iVar10 = 0;
          do {
            cVar1 = *pcVar25;
            if (cVar1 < '\0') {
              do {
                pbVar43 = (byte *)(pcVar25 + 1);
                pcVar25 = pcVar25 + 1;
              } while ((*pbVar43 & 0xc0) == 0x80);
            }
            else {
              pcVar25 = pcVar25 + 1;
              if (cVar1 == '\0') goto LAB_00493ab2;
            }
            iVar10 = iVar10 + 1;
            iVar23 = iVar23 + 1;
          } while( true );
        }
      }
    }
    goto LAB_00494370;
  }
LAB_0049474b:
  param_2[0x38] = 0;
LAB_0049474f:
  pSVar32 = local_b0;
  uVar31 = (ulong)*(uint *)(param_2 + 0x34);
  if (0 < (int)*(uint *)(param_2 + 0x34)) {
    lVar29 = 8;
    uVar34 = 0;
    do {
      if (uVar34 < (uVar31 & 0xffffffff)) {
        puVar33 = (undefined8 *)(*(long *)(local_d8 + 0x28) + lVar29 + -8);
      }
      else {
        puVar33 = &StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          puVar33 = &StringArray::operator[](int)::empty;
          if (iVar23 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            puVar33 = &StringArray::operator[](int)::empty;
          }
        }
      }
      if (((byte *)*puVar33 == (byte *)*param_3) ||
         (uVar8 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                            ((byte *)*puVar33,(byte *)*param_3), uVar8 == 0)) {
        if ((int)uVar34 - 1U < *(uint *)(local_d8 + 0x34)) {
          puVar33 = (undefined8 *)(*(long *)(local_d8 + 0x28) + lVar29 + -0x10);
        }
        else {
          puVar33 = &StringArray::operator[](int)::empty;
          if (StringArray::operator[](int)::empty == '\0') {
            iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
            puVar33 = &StringArray::operator[](int)::empty;
            if (iVar23 != 0) {
              StringArray::operator[](int)::empty = &DAT_0061ac58;
              __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle)
              ;
              __cxa_guard_release(&StringArray::operator[](int)::empty);
              puVar33 = &StringArray::operator[](int)::empty;
            }
          }
        }
        uVar8 = CharacterFunctions::compareIgnoreCase<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                          ((byte *)*puVar33,(byte *)"<!entity");
        if (uVar8 == 0) {
          uVar8 = (int)uVar34 + 1;
          if (uVar8 < *(uint *)(local_d8 + 0x34)) {
            puVar33 = (undefined8 *)(lVar29 + *(long *)(local_d8 + 0x28));
          }
          else {
            puVar33 = &StringArray::operator[](int)::empty;
            if ((StringArray::operator[](int)::empty == '\0') &&
               (iVar23 = __cxa_guard_acquire(&StringArray::operator[](int)::empty), iVar23 != 0)) {
              StringArray::operator[](int)::empty = &DAT_0061ac58;
              puVar33 = &StringArray::operator[](int)::empty;
              __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle)
              ;
              __cxa_guard_release(&StringArray::operator[](int)::empty);
            }
          }
          juce::String::trimCharactersAtEnd(&local_e0,(byte *)*puVar33,(byte *)0x65e0de);
                    /* try { // try from 004949bd to 004949c9 has its CatchHandler @ 00495a02 */
          juce::String::trim((long *)local_c8,(long *)&local_e0);
                    /* try { // try from 004949ca to 004949d6 has its CatchHandler @ 004959ce */
          juce::String::unquoted((undefined8 *)pSVar32,(undefined8 *)local_c8);
          piVar38 = (int *)(local_c8._0_8_ + -0x10);
          if (piVar38 != &emptyString) {
            LOCK();
            iVar23 = *piVar38;
            *piVar38 = *piVar38 + -1;
            UNLOCK();
            if (iVar23 == 0) {
              operator_delete__(piVar38);
            }
          }
          pbVar43 = local_e0 + -0x10;
          if (pbVar43 != (byte *)&emptyString) {
            LOCK();
            iVar23 = *(int *)pbVar43;
            *(int *)pbVar43 = *(int *)pbVar43 + -1;
            UNLOCK();
            if (iVar23 == 0) {
              operator_delete__(pbVar43);
            }
          }
          pbVar43 = *(byte **)pSVar32;
          bVar16 = *pbVar43;
          if (bVar16 == 0) {
            return;
          }
          iVar23 = 0;
          goto LAB_00494a30;
        }
      }
      uVar34 = uVar34 + 1;
      uVar31 = (ulong)*(int *)(local_d8 + 0x34);
      lVar29 = lVar29 + 8;
    } while ((long)uVar34 < (long)uVar31);
  }
  piVar38 = operator_new__(0x27);
  LOCK();
  *piVar38 = 0;
  UNLOCK();
  piVar38[2] = 0x10;
  piVar38[3] = 0;
  piVar38[4] = 0x6e6b6e75;
  piVar38[5] = 0x206e776f;
  piVar38[6] = 0x69746e65;
  *(undefined2 *)(piVar38 + 7) = 0x7974;
  *(undefined1 *)((long)piVar38 + 0x1e) = 0;
  LOCK();
  *piVar38 = *piVar38 + 1;
  UNLOCK();
  LOCK();
  lVar29 = *(long *)(local_d8 + 0x18);
  *(int **)(local_d8 + 0x18) = piVar38 + 4;
  UNLOCK();
  piVar40 = (int *)(lVar29 + -0x10);
  if (piVar40 != &emptyString) {
    LOCK();
    iVar23 = *piVar40;
    *piVar40 = *piVar40 + -1;
    UNLOCK();
    if (iVar23 == 0) {
      operator_delete__(piVar40);
    }
  }
  local_d8[0x11] = 0;
  LOCK();
  iVar23 = *piVar38;
  *piVar38 = *piVar38 + -1;
  UNLOCK();
  if (iVar23 == 0) {
    operator_delete__(piVar38);
  }
  lVar29 = *param_3;
  *(long *)local_b0 = lVar29;
  piVar38 = (int *)(lVar29 + -0x10);
  if (piVar38 != &emptyString) {
    LOCK();
    *piVar38 = *piVar38 + 1;
    UNLOCK();
  }
  return;
}


