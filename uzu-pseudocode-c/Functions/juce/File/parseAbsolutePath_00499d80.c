// Function : parseAbsolutePath
// Namespace: juce:File
// Entry    : 00499d80
// Prototype: undefined parseAbsolutePath(File * this, uint * param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 00499d80 - 0049bc84


/* WARNING: Removing unreachable block (ram,0x0049a3b0) */
/* WARNING: Type propagation algorithm not settling */
/* juce::File::parseAbsolutePath(juce::String const&) */

void __thiscall
juce::File::parseAbsolutePath
          (File *this,uint *param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  File *pFVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined *puVar17;
  uint *puVar18;
  void *pvVar19;
  byte *pbVar20;
  String *pSVar21;
  undefined4 *extraout_RAX;
  uint *extraout_RAX_00;
  uint *puVar22;
  passwd *ppVar23;
  undefined4 *puVar24;
  size_t sVar25;
  char cVar26;
  byte bVar27;
  undefined8 *puVar28;
  byte *pbVar29;
  int iVar30;
  ulong uVar31;
  uint *puVar32;
  uint *puVar33;
  char *pcVar34;
  undefined8 *puVar35;
  long lVar36;
  long lVar37;
  ulong uVar38;
  uint uVar39;
  uint *puVar40;
  int iVar41;
  ulong uVar42;
  int *piVar43;
  undefined7 uVar44;
  byte bVar45;
  uint uVar46;
  int iVar47;
  undefined8 uVar48;
  uint uVar49;
  uint uVar50;
  uint *puVar51;
  uint *puVar52;
  int iVar53;
  long *plVar54;
  byte *pbVar55;
  bool bVar56;
  uint *local_e0;
  undefined1 local_d8 [16];
  uint *local_c8;
  int local_bc;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  undefined4 local_9c;
  uint *local_98;
  byte *local_90;
  byte *local_88;
  uint *local_80;
  uint *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  File *local_60;
  ulong local_58;
  long local_50;
  long local_48;
  byte *local_40;
  uint *local_38;
  
  puVar22 = *(uint **)param_1;
  if ((char)*puVar22 == '\0') {
    *(undefined1 **)this = &DAT_0061ac58;
    return;
  }
  puVar17 = &DAT_0065be93;
  uVar38 = CONCAT71((int7)((ulong)param_3 >> 8),0x2e);
  iVar53 = 0;
  do {
    if ((char)uVar38 < '\0') {
      do {
        pbVar20 = puVar17 + 1;
        uVar38 = (ulong)*pbVar20;
        puVar17 = puVar17 + 1;
      } while ((*pbVar20 & 0xc0) == 0x80);
    }
    else {
      if ((char)uVar38 == '\0') break;
      uVar38 = CONCAT71((int7)(uVar38 >> 8),puVar17[1]);
      puVar17 = puVar17 + 1;
    }
    iVar53 = iVar53 + 1;
  } while( true );
  puVar32 = puVar22;
  local_60 = this;
  do {
    uVar14 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       ((byte *)puVar32,&DAT_0065be93,iVar53,uVar38,param_4,(uint)param_5);
    if (uVar14 == 0) {
      local_d8 = (undefined1  [16])0x0;
                    /* try { // try from 00499f0b to 00499f25 has its CatchHandler @ 0049be19 */
      StringArray::addTokens
                ((StringArray *)local_d8,(byte *)puVar22,&DAT_0065be94,(byte *)&DAT_005d9058);
      if ((int)local_d8._12_4_ < 2) goto LAB_0049a54b;
      plVar54 = (long *)0x1;
      local_78 = (uint *)&DAT_0061ac58;
      uStack_70 = 0x61ac58;
      uStack_6c = 0;
      bVar56 = false;
      local_b8 = param_1;
      goto LAB_00499f75;
    }
    puVar33 = (uint *)((long)puVar32 + 1);
    bVar45 = (byte)*puVar32;
    uVar38 = (ulong)bVar45;
    if ((char)bVar45 < '\0') {
      if ((bVar45 & 0x40) == 0) {
        uVar38 = (ulong)(bVar45 & 0x7f);
      }
      else {
        if ((bVar45 & 0x20) == 0) {
          uVar14 = 0x3f;
          lVar37 = 0;
          param_5 = 0;
          param_4 = (uint *)0x0;
        }
        else {
          param_5 = CONCAT71((int7)(param_5 >> 8),1);
          if ((bVar45 & 0x10) == 0) {
            uVar14 = 0x1f;
            lVar37 = 1;
            param_4 = (uint *)0x0;
          }
          else {
            uVar14 = 0xf;
            lVar37 = 2;
            param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),1);
          }
        }
        uVar14 = bVar45 & uVar14;
        uVar38 = (ulong)uVar14;
        if ((*(byte *)((long)puVar32 + 1) & 0xc0) == 0x80) {
          puVar18 = (uint *)((long)puVar32 + lVar37 + 2);
          uVar14 = *(byte *)((long)puVar32 + 1) & 0x3f | uVar14 << 6;
          uVar38 = (ulong)uVar14;
          puVar33 = puVar18;
          if ((char)param_5 != '\0') {
            puVar33 = (uint *)((long)puVar32 + 2);
            if ((*(byte *)puVar33 & 0xffffffc0) == 0x80) {
              uVar14 = *(byte *)puVar33 & 0x3f | uVar14 << 6;
              uVar38 = (ulong)uVar14;
              puVar33 = puVar18;
              if ((char)param_4 != '\0') {
                puVar33 = (uint *)((long)puVar32 + 3);
                if ((*(byte *)puVar33 & 0xffffffc0) == 0x80) {
                  uVar38 = (ulong)(uVar14 << 6 | *(byte *)puVar33 & 0x3f);
                  puVar33 = puVar18;
                }
              }
            }
          }
        }
      }
    }
    puVar32 = puVar33;
  } while ((int)uVar38 != 0);
  goto LAB_0049a5c8;
LAB_00499f75:
  do {
    uVar14 = (uint)plVar54;
    if (uVar14 < (uint)local_d8._12_4_) {
      puVar35 = (undefined8 *)((long)(int)uVar14 * 8 + local_d8._0_8_);
    }
    else {
      puVar35 = &StringArray::operator[](int)::empty;
      if (StringArray::operator[](int)::empty == '\0') {
        iVar53 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
        puVar35 = &StringArray::operator[](int)::empty;
        if (iVar53 != 0) {
          StringArray::operator[](int)::empty = &DAT_0061ac58;
          puVar35 = &StringArray::operator[](int)::empty;
          __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
          __cxa_guard_release(&StringArray::operator[](int)::empty);
        }
      }
    }
    pbVar20 = (byte *)*puVar35;
    uVar39 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       (pbVar20,(byte *)0x65a264);
    if (uVar39 == 0) {
      uVar39 = uVar14 - 1;
      if (uVar39 < (uint)local_d8._12_4_) {
        puVar28 = (undefined8 *)((long)(int)uVar39 * 8 + local_d8._0_8_);
      }
      else {
        puVar28 = &StringArray::operator[](int)::empty;
        if (StringArray::operator[](int)::empty == '\0') {
          iVar53 = __cxa_guard_acquire(&StringArray::operator[](int)::empty);
          puVar28 = &StringArray::operator[](int)::empty;
          if (iVar53 != 0) {
            StringArray::operator[](int)::empty = &DAT_0061ac58;
            __cxa_atexit(juce::String::~String,&StringArray::operator[](int)::empty,&__dso_handle);
            __cxa_guard_release(&StringArray::operator[](int)::empty);
            puVar28 = &StringArray::operator[](int)::empty;
          }
        }
      }
      uVar50 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         ((byte *)*puVar28,(byte *)0x65a264);
      if (uVar50 == 0) {
        pbVar20 = (byte *)*puVar35;
        goto LAB_00499fbc;
      }
      param_4 = (uint *)(ulong)(uint)local_d8._12_4_;
      uVar50 = uVar14 + 1;
      if ((int)local_d8._12_4_ < (int)(uVar14 + 1)) {
        uVar50 = local_d8._12_4_;
      }
      if ((int)uVar14 < -1) {
        uVar50 = 0;
      }
      if ((int)local_d8._12_4_ < (int)uVar39) {
        uVar39 = local_d8._12_4_;
      }
      if ((int)uVar14 < 1) {
        uVar39 = 0;
      }
      uVar49 = uVar50 - uVar39;
      if (0 < (int)uVar49) {
        uVar46 = local_d8._12_4_ - uVar50;
        param_5 = (ulong)uVar46;
        lVar37 = (long)(int)uVar39;
        puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8);
        uVar38 = (ulong)uVar49;
        if (0 < (int)uVar46) {
          puVar28 = puVar35 + uVar38;
          uVar39 = ~uVar50 + local_d8._12_4_;
          pbVar20 = (byte *)0x0;
          if ((2 < uVar39) &&
             ((lVar36 = lVar37 + (ulong)uVar39,
              (undefined8 *)(local_d8._0_8_ + (lVar36 + uVar38) * 8 + 8) <= puVar35 ||
              ((undefined8 *)(local_d8._0_8_ + lVar36 * 8 + 8) <= puVar28)))) {
            local_88 = (byte *)((ulong)uVar39 + 1);
            pbVar20 = (byte *)((ulong)local_88 & 0xfffffffffffffffc);
            local_a8 = (uint *)(((ulong)(pbVar20 + -4) >> 2) + 1);
            if (pbVar20 + -4 == (byte *)0x0) {
              lVar37 = 0;
LAB_0049a35f:
              uVar48 = puVar35[lVar37];
              uVar6 = (puVar35 + lVar37)[1];
              uVar7 = puVar35[lVar37 + 2];
              uVar8 = (puVar35 + lVar37 + 2)[1];
              uVar9 = (puVar28 + lVar37)[1];
              uVar10 = puVar28[lVar37 + 2];
              uVar11 = (puVar28 + lVar37 + 2)[1];
              puVar35[lVar37] = puVar28[lVar37];
              (puVar35 + lVar37)[1] = uVar9;
              puVar35[lVar37 + 2] = uVar10;
              (puVar35 + lVar37 + 2)[1] = uVar11;
              puVar28[lVar37] = uVar48;
              (puVar28 + lVar37)[1] = uVar6;
              puVar28[lVar37 + 2] = uVar7;
              (puVar28 + lVar37 + 2)[1] = uVar8;
            }
            else {
              uVar31 = (ulong)local_a8 & 0xfffffffffffffffe;
              lVar36 = local_d8._0_8_ + lVar37 * 8;
              lVar1 = lVar36 + uVar38 * 8;
              lVar37 = 0;
              do {
                puVar2 = (undefined8 *)(lVar36 + lVar37 * 8);
                uVar48 = *puVar2;
                uVar6 = puVar2[1];
                puVar2 = (undefined8 *)(lVar36 + 0x10 + lVar37 * 8);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar3 = (undefined8 *)(lVar1 + lVar37 * 8);
                uVar9 = puVar3[1];
                puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar37 * 8);
                uVar10 = *puVar2;
                uVar11 = puVar2[1];
                puVar2 = (undefined8 *)(lVar36 + lVar37 * 8);
                *puVar2 = *puVar3;
                puVar2[1] = uVar9;
                puVar2 = (undefined8 *)(lVar36 + 0x10 + lVar37 * 8);
                *puVar2 = uVar10;
                puVar2[1] = uVar11;
                puVar2 = (undefined8 *)(lVar1 + lVar37 * 8);
                *puVar2 = uVar48;
                puVar2[1] = uVar6;
                puVar2 = (undefined8 *)(lVar1 + 0x10 + lVar37 * 8);
                *puVar2 = uVar7;
                puVar2[1] = uVar8;
                puVar2 = (undefined8 *)(lVar36 + 0x20 + lVar37 * 8);
                uVar48 = *puVar2;
                uVar6 = puVar2[1];
                puVar2 = (undefined8 *)(lVar36 + 0x30 + lVar37 * 8);
                uVar7 = *puVar2;
                uVar8 = puVar2[1];
                puVar3 = (undefined8 *)(lVar1 + 0x20 + lVar37 * 8);
                uVar9 = puVar3[1];
                puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar37 * 8);
                uVar10 = *puVar2;
                uVar11 = puVar2[1];
                puVar2 = (undefined8 *)(lVar36 + 0x20 + lVar37 * 8);
                *puVar2 = *puVar3;
                puVar2[1] = uVar9;
                puVar2 = (undefined8 *)(lVar36 + 0x30 + lVar37 * 8);
                *puVar2 = uVar10;
                puVar2[1] = uVar11;
                puVar2 = (undefined8 *)(lVar1 + 0x20 + lVar37 * 8);
                *puVar2 = uVar48;
                puVar2[1] = uVar6;
                puVar2 = (undefined8 *)(lVar1 + 0x30 + lVar37 * 8);
                *puVar2 = uVar7;
                puVar2[1] = uVar8;
                lVar37 = lVar37 + 8;
                uVar31 = uVar31 - 2;
              } while (uVar31 != 0);
              if (((ulong)local_a8 & 1) != 0) goto LAB_0049a35f;
            }
            puVar35 = puVar35 + (long)pbVar20;
            if (local_88 == pbVar20) goto LAB_0049a18c;
            puVar28 = puVar28 + (long)pbVar20;
          }
          iVar53 = (int)pbVar20;
          uVar39 = uVar39 - iVar53;
          uVar50 = local_d8._12_4_ - (uVar50 + iVar53) & 3;
          param_4 = (uint *)(ulong)uVar50;
          if (uVar50 != 0) {
            uVar15 = uVar50;
            do {
              uVar48 = *puVar35;
              *puVar35 = *puVar28;
              puVar35 = puVar35 + 1;
              *puVar28 = uVar48;
              puVar28 = puVar28 + 1;
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            iVar53 = iVar53 + uVar50;
          }
          if (2 < uVar39) {
            param_5 = (ulong)(uVar46 - iVar53);
            lVar37 = 0;
            do {
              uVar48 = *puVar35;
              *puVar35 = puVar28[lVar37];
              puVar28[lVar37] = uVar48;
              uVar48 = puVar35[1];
              puVar35[1] = puVar28[lVar37 + 1];
              puVar28[lVar37 + 1] = uVar48;
              uVar48 = puVar35[2];
              puVar35[2] = puVar28[lVar37 + 2];
              puVar28[lVar37 + 2] = uVar48;
              uVar48 = puVar35[3];
              puVar35[3] = puVar28[lVar37 + 3];
              puVar35 = puVar35 + 4;
              puVar28[lVar37 + 3] = uVar48;
              lVar37 = lVar37 + 4;
            } while (uVar46 - iVar53 != (uint)lVar37);
          }
        }
LAB_0049a18c:
        lVar37 = 0;
        do {
          piVar43 = (int *)(puVar35[lVar37] + -0x10);
          if (piVar43 != &emptyString) {
            LOCK();
            iVar53 = *piVar43;
            *piVar43 = *piVar43 + -1;
            UNLOCK();
            if (iVar53 == 0) {
              operator_delete__(piVar43);
            }
          }
          lVar37 = lVar37 + 1;
        } while (uVar49 != (uint)lVar37);
        uVar12 = local_d8._8_4_;
        uVar49 = local_d8._12_4_ - uVar49;
        local_d8._12_4_ = uVar49;
        iVar53 = uVar49 * 2;
        if (iVar53 < 0) {
          iVar53 = 0;
        }
        if (iVar53 < (int)uVar12) {
          uVar39 = 8;
          if (8 < (int)uVar49) {
            uVar39 = uVar49;
          }
          if ((int)uVar39 < (int)uVar12) {
            pvVar19 = malloc((ulong)uVar39 << 3);
            uVar48 = CONCAT44(uStack_6c,uStack_70);
            uVar6 = local_d8._0_8_;
            if (0 < (int)uVar49) {
              param_5 = (ulong)uVar49;
              if ((uVar49 < 4) ||
                 ((pvVar19 < (void *)(local_d8._0_8_ + param_5 * 8) &&
                  ((ulong)local_d8._0_8_ < (void *)((long)pvVar19 + param_5 * 8))))) {
                uVar38 = 0;
              }
              else {
                uVar38 = (ulong)(uVar49 & 0xfffffffc);
                param_4 = (uint *)((uVar38 - 4 >> 2) + 1);
                if (uVar38 - 4 == 0) {
                  lVar37 = 0;
                }
                else {
                  uVar31 = (ulong)param_4 & 0xfffffffffffffffe;
                  lVar37 = 0;
                  do {
                    puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8);
                    uVar7 = puVar35[1];
                    puVar28 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x10);
                    uVar8 = *puVar28;
                    uVar9 = puVar28[1];
                    puVar28 = (undefined8 *)((long)pvVar19 + lVar37 * 8);
                    *puVar28 = *puVar35;
                    puVar28[1] = uVar7;
                    puVar35 = (undefined8 *)((long)pvVar19 + lVar37 * 8 + 0x10);
                    *puVar35 = uVar8;
                    puVar35[1] = uVar9;
                    puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8);
                    *puVar35 = local_78;
                    puVar35[1] = uVar48;
                    puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x10);
                    *puVar35 = local_78;
                    puVar35[1] = uVar48;
                    puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x20);
                    uVar7 = puVar35[1];
                    puVar28 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x30);
                    uVar8 = *puVar28;
                    uVar9 = puVar28[1];
                    puVar28 = (undefined8 *)((long)pvVar19 + lVar37 * 8 + 0x20);
                    *puVar28 = *puVar35;
                    puVar28[1] = uVar7;
                    puVar35 = (undefined8 *)((long)pvVar19 + lVar37 * 8 + 0x30);
                    *puVar35 = uVar8;
                    puVar35[1] = uVar9;
                    puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x20);
                    *puVar35 = local_78;
                    puVar35[1] = uVar48;
                    puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x30);
                    *puVar35 = local_78;
                    puVar35[1] = uVar48;
                    lVar37 = lVar37 + 8;
                    uVar31 = uVar31 - 2;
                  } while (uVar31 != 0);
                }
                if (((ulong)param_4 & 1) != 0) {
                  puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8);
                  uVar7 = puVar35[1];
                  puVar28 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x10);
                  uVar8 = *puVar28;
                  uVar9 = puVar28[1];
                  puVar28 = (undefined8 *)((long)pvVar19 + lVar37 * 8);
                  *puVar28 = *puVar35;
                  puVar28[1] = uVar7;
                  puVar35 = (undefined8 *)((long)pvVar19 + lVar37 * 8 + 0x10);
                  *puVar35 = uVar8;
                  puVar35[1] = uVar9;
                  puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8);
                  *puVar35 = local_78;
                  puVar35[1] = uVar48;
                  puVar35 = (undefined8 *)(local_d8._0_8_ + lVar37 * 8 + 0x10);
                  *puVar35 = local_78;
                  puVar35[1] = uVar48;
                }
                if (uVar38 == param_5) goto LAB_0049a455;
              }
              uVar42 = ~uVar38;
              uVar31 = param_5 & 3;
              if ((uVar49 & 3) != 0) {
                do {
                  *(undefined8 *)((long)pvVar19 + uVar38 * 8) =
                       *(undefined8 *)(local_d8._0_8_ + uVar38 * 8);
                  *(undefined1 **)(local_d8._0_8_ + uVar38 * 8) = &DAT_0061ac58;
                  uVar38 = uVar38 + 1;
                  uVar31 = uVar31 - 1;
                } while (uVar31 != 0);
              }
              if (2 < uVar42 + param_5) {
                do {
                  *(undefined8 *)((long)pvVar19 + uVar38 * 8) =
                       *(undefined8 *)(local_d8._0_8_ + uVar38 * 8);
                  *(undefined1 **)(local_d8._0_8_ + uVar38 * 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar19 + uVar38 * 8 + 8) =
                       *(undefined8 *)(local_d8._0_8_ + uVar38 * 8 + 8);
                  *(undefined1 **)(local_d8._0_8_ + uVar38 * 8 + 8) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar19 + uVar38 * 8 + 0x10) =
                       *(undefined8 *)(local_d8._0_8_ + uVar38 * 8 + 0x10);
                  *(undefined1 **)(local_d8._0_8_ + uVar38 * 8 + 0x10) = &DAT_0061ac58;
                  *(undefined8 *)((long)pvVar19 + uVar38 * 8 + 0x18) =
                       *(undefined8 *)(local_d8._0_8_ + uVar38 * 8 + 0x18);
                  *(undefined1 **)(local_d8._0_8_ + uVar38 * 8 + 0x18) = &DAT_0061ac58;
                  uVar38 = uVar38 + 4;
                } while (param_5 != uVar38);
              }
            }
LAB_0049a455:
            local_d8._0_8_ = pvVar19;
            free((void *)uVar6);
            local_d8._8_4_ = uVar39;
          }
        }
      }
      if ((int)uVar14 < 3) {
        uVar14 = 2;
      }
      uVar14 = uVar14 - 2;
      bVar56 = true;
    }
    else {
LAB_00499fbc:
      uVar39 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar20,&DAT_005db3b5);
      if (uVar39 == 0) {
        uVar39 = uVar14 - 1;
        bVar56 = true;
        bVar5 = uVar14 < (uint)local_d8._12_4_;
        uVar14 = uVar39;
        if (bVar5) {
          Array<juce::String,juce::DummyCriticalSection,0>::removeInternal
                    ((Array<juce::String,juce::DummyCriticalSection,0> *)local_d8,plVar54);
        }
      }
    }
    uVar39 = local_d8._12_4_;
    plVar54 = (long *)(ulong)(uVar14 + 1);
  } while ((int)(uVar14 + 1) < (int)local_d8._12_4_);
  if (bVar56) {
                    /* try { // try from 0049a594 to 0049a5a9 has its CatchHandler @ 0049bd19 */
    StringArray::joinIntoString((long *)&local_80,(long *)local_d8,"/");
    bVar56 = false;
    param_1 = local_b8;
  }
  else {
    param_1 = local_b8;
LAB_0049a54b:
    bVar56 = true;
    uVar39 = local_d8._12_4_;
  }
  if (0 < (int)uVar39) {
    lVar37 = 0;
    do {
      piVar43 = (int *)(*(long *)(local_d8._0_8_ + lVar37 * 8) + -0x10);
      if (piVar43 != &emptyString) {
        LOCK();
        iVar53 = *piVar43;
        *piVar43 = *piVar43 + -1;
        UNLOCK();
        if (iVar53 == 0) {
          operator_delete__(piVar43);
        }
      }
      lVar37 = lVar37 + 1;
    } while (lVar37 < (int)local_d8._12_4_);
  }
  free((void *)local_d8._0_8_);
  if (!bVar56) goto LAB_0049a5e2;
  puVar22 = *(uint **)param_1;
LAB_0049a5c8:
  puVar32 = puVar22 + -4;
  local_80 = puVar22;
  if (puVar32 != &emptyString) {
    LOCK();
    *puVar32 = *puVar32 + 1;
    UNLOCK();
  }
LAB_0049a5e2:
  local_e0 = local_80;
  puVar22 = local_80 + -4;
  if (puVar22 != &emptyString) {
    LOCK();
    *puVar22 = *puVar22 + 1;
    UNLOCK();
  }
                    /* try { // try from 0049a600 to 0049a60b has its CatchHandler @ 0049be4d */
  local_90 = (byte *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(&DAT_0065be94)
  ;
  pbVar20 = local_90 + -0x10;
  if (pbVar20 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar20 = *(int *)pbVar20 + 1;
    UNLOCK();
  }
                    /* try { // try from 0049a62d to 0049a63e has its CatchHandler @ 0049be2b */
  local_40 = local_90;
  pSVar21 = juce::String::operator+=((String *)&local_40,(String *)&local_90);
  puVar32 = *(uint **)pSVar21;
  puVar22 = puVar32 + -4;
  if (puVar22 != &emptyString) {
    LOCK();
    *puVar22 = *puVar22 + 1;
    UNLOCK();
  }
  pbVar20 = local_40 + -0x10;
  if (pbVar20 != (byte *)&emptyString) {
    LOCK();
    iVar53 = *(int *)pbVar20;
    *(int *)pbVar20 = *(int *)pbVar20 + -1;
    UNLOCK();
    if (iVar53 == 0) {
      operator_delete__(pbVar20);
    }
  }
  iVar53 = 0;
  puVar33 = puVar32;
  do {
    if ((char)*puVar33 < '\0') {
      do {
        uVar14 = *puVar33;
        puVar33 = (uint *)((long)puVar33 + 1);
        puVar18 = puVar33;
      } while ((uVar14 & 0xc000) == 0x8000);
    }
    else {
      puVar18 = (uint *)((long)puVar33 + 1);
      if ((char)*puVar33 == '\0') break;
    }
    iVar53 = iVar53 + 1;
    puVar33 = puVar18;
  } while( true );
  puVar18 = local_e0;
  uVar14 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     ((byte *)local_e0,(byte *)puVar32,iVar53,puVar33,param_4,(uint)param_5);
  local_b0 = puVar22;
  if (uVar14 == 0) {
                    /* try { // try from 0049a6e5 to 0049a6f6 has its CatchHandler @ 0049be07 */
    juce::String::fromFirstOccurrenceOf
              ((long *)local_d8,(long *)&local_e0,(byte *)puVar32,puVar33,param_4,param_5);
    iVar53 = 0;
    pbVar20 = local_90;
    do {
      if ((char)*pbVar20 < '\0') {
        do {
          pbVar29 = pbVar20 + 1;
          pbVar20 = pbVar20 + 1;
          pbVar55 = pbVar20;
        } while ((*pbVar29 & 0xc0) == 0x80);
      }
      else {
        pbVar55 = pbVar20 + 1;
        if (*pbVar20 == 0) goto LAB_0049a742;
      }
      iVar53 = iVar53 + 1;
      pbVar20 = pbVar55;
    } while( true );
  }
LAB_0049a6d8:
  local_9c = 0;
LAB_0049a7cb:
  local_78 = puVar32;
LAB_0049a7e0:
  pFVar13 = local_60;
  puVar22 = local_b0;
  uVar44 = (undefined7)((ulong)param_4 >> 8);
  param_4 = (uint *)CONCAT71(uVar44,(char)*puVar32);
  if ((char)*puVar32 != '\0') {
    iVar53 = 1;
    uVar38 = (ulong)param_4 & 0xffffffff;
    puVar32 = local_78;
    do {
      if ((char)uVar38 < '\0') {
        do {
          bVar45 = *(byte *)((long)puVar32 + 1);
          puVar32 = (uint *)((long)puVar32 + 1);
        } while ((bVar45 & 0xc0) == 0x80);
      }
      else {
        if ((char)uVar38 == '\0') goto LAB_0049a850;
        bVar45 = *(byte *)((long)puVar32 + 1);
        puVar32 = (uint *)((long)puVar32 + 1);
      }
      uVar38 = (ulong)bVar45;
      iVar53 = iVar53 + 1;
    } while( true );
  }
LAB_0049abb0:
  local_88 = local_90;
  uVar38 = (ulong)param_4 & 0xffffffff;
  iVar53 = 0;
  puVar22 = local_78;
  do {
    if ((char)uVar38 < '\0') {
      do {
        bVar45 = *(byte *)((long)puVar22 + 1);
        puVar22 = (uint *)((long)puVar22 + 1);
      } while ((bVar45 & 0xc0) == 0x80);
    }
    else {
      if ((char)uVar38 == '\0') goto LAB_0049ac10;
      bVar45 = *(byte *)((long)puVar22 + 1);
      puVar22 = (uint *)((long)puVar22 + 1);
    }
    uVar38 = (ulong)bVar45;
    iVar53 = iVar53 + 1;
  } while( true );
LAB_0049a742:
  uVar48 = local_d8._0_8_;
  puVar18 = (uint *)local_d8._0_8_;
  uVar14 = CharacterFunctions::compareUpTo<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                     ((byte *)local_d8._0_8_,local_90,iVar53,pbVar20,param_4,(uint)param_5);
  puVar22 = (uint *)(uVar48 + -0x10);
  if (puVar22 != &emptyString) {
    LOCK();
    uVar39 = *puVar22;
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (uVar39 == 0) {
      operator_delete__(puVar22);
      puVar18 = puVar22;
    }
  }
  if (uVar14 != 0) {
                    /* try { // try from 0049a77d to 0049a78e has its CatchHandler @ 0049bd5e */
    juce::String::fromFirstOccurrenceOf
              ((long *)local_d8,(long *)&local_e0,(byte *)puVar32,pbVar20,param_4,param_5);
    puVar18 = local_e0;
    local_e0 = (uint *)local_d8._0_8_;
    local_d8._0_8_ = puVar18;
    puVar18 = puVar18 + -4;
    puVar24 = &emptyString;
    if (puVar18 != &emptyString) {
      LOCK();
      uVar14 = *puVar18;
      puVar24 = (undefined4 *)(ulong)uVar14;
      *puVar18 = *puVar18 - 1;
      UNLOCK();
      if (uVar14 == 0) {
        operator_delete__(puVar18);
        puVar24 = extraout_RAX;
      }
    }
    local_9c = (undefined4)CONCAT71((int7)((ulong)puVar24 >> 8),1);
    goto LAB_0049a7cb;
  }
  goto LAB_0049a6d8;
LAB_0049a850:
  local_b8 = local_e0;
  puVar32 = local_e0;
LAB_0049a855:
  do {
    puVar40 = local_78;
    puVar33 = puVar32;
    iVar30 = iVar53;
    do {
      iVar30 = iVar30 + -1;
      if (iVar30 < 1) goto LAB_0049abb0;
      puVar51 = (uint *)((long)puVar33 + 1);
      bVar45 = (byte)*puVar33;
      uVar14 = (uint)bVar45;
      if ((char)bVar45 < '\0') {
        if ((bVar45 & 0x40) == 0) {
          uVar14 = uVar14 & 0x7f;
          goto LAB_0049a8ba;
        }
        if ((bVar45 & 0x20) == 0) {
          uVar39 = 0x3f;
          lVar37 = 0;
          bVar56 = false;
          bVar5 = false;
        }
        else {
          bVar56 = true;
          if ((bVar45 & 0x10) == 0) {
            uVar39 = 0x1f;
            lVar37 = 1;
            bVar5 = false;
          }
          else {
            uVar39 = 0xf;
            lVar37 = 2;
            bVar5 = true;
          }
        }
        uVar14 = uVar14 & uVar39;
        if ((*(byte *)((long)puVar33 + 1) & 0xc0) == 0x80) {
          uVar14 = *(byte *)((long)puVar33 + 1) & 0x3f | uVar14 << 6;
          if (bVar56) {
            puVar51 = (uint *)((long)puVar33 + 2);
            if ((*(byte *)puVar51 & 0xffffffc0) != 0x80) goto LAB_0049aa54;
            uVar14 = *(byte *)puVar51 & 0x3f | uVar14 << 6;
            if (bVar5) {
              uVar39 = (uint)*(byte *)((long)puVar33 + 3);
              puVar51 = (uint *)((long)puVar33 + 3);
              if ((uVar39 & 0xffffffc0) != 0x80) goto LAB_0049aa54;
              uVar14 = uVar14 << 6 | uVar39 & 0x3f;
            }
          }
          puVar51 = (uint *)((long)puVar33 + lVar37 + 2);
        }
LAB_0049aa54:
        bVar45 = (byte)*puVar40;
        puVar33 = puVar51;
      }
      else {
LAB_0049a8ba:
        bVar45 = (byte)*puVar40;
        puVar33 = puVar51;
      }
      uVar39 = (uint)bVar45;
      puVar51 = (uint *)((long)puVar40 + 1);
      if ((char)bVar45 < '\0') {
        puVar51 = (uint *)((long)puVar40 + 1);
        if ((bVar45 & 0x40) == 0) {
          uVar39 = uVar39 & 0x7f;
        }
        else {
          if ((bVar45 & 0x20) == 0) {
            uVar50 = 0x3f;
            lVar37 = 0;
            bVar56 = false;
            bVar5 = false;
          }
          else {
            bVar56 = true;
            if ((bVar45 & 0x10) == 0) {
              uVar50 = 0x1f;
              lVar37 = 1;
              bVar5 = false;
            }
            else {
              uVar50 = 0xf;
              lVar37 = 2;
              bVar5 = true;
            }
          }
          uVar39 = uVar39 & uVar50;
          if ((*(byte *)((long)puVar40 + 1) & 0xffffffc0) == 0x80) {
            puVar51 = (uint *)((long)puVar40 + lVar37 + 2);
            uVar39 = *(byte *)((long)puVar40 + 1) & 0x3f | uVar39 << 6;
            if (bVar56) {
              uVar50 = (uint)*(byte *)((long)puVar40 + 2);
              if ((uVar50 & 0xffffffc0) == 0x80) {
                uVar39 = uVar50 & 0x3f | uVar39 << 6;
                if (bVar5) {
                  uVar50 = (uint)*(byte *)((long)puVar40 + 3);
                  if ((uVar50 & 0xffffffc0) == 0x80) {
                    uVar39 = uVar39 << 6 | uVar50 & 0x3f;
                  }
                  else {
                    puVar51 = (uint *)((long)puVar40 + 3);
                  }
                }
              }
              else {
                puVar51 = (uint *)((long)puVar40 + 2);
              }
            }
          }
        }
      }
      puVar40 = puVar51;
      iVar16 = uVar14 - uVar39;
      puVar18 = (uint *)((ulong)puVar18 & 0xffffffff);
      if (iVar16 != 0) {
        puVar18 = (uint *)(ulong)(iVar16 >> 0x1f | 1);
      }
      cVar26 = (uVar14 == 0) * '\x03';
      if (iVar16 != 0) {
        cVar26 = '\x01';
      }
    } while (cVar26 == '\0');
    if ((cVar26 != '\x01') || ((int)puVar18 == 0)) goto LAB_0049abb0;
    puVar33 = (uint *)((long)puVar32 + 1);
    bVar45 = (byte)*puVar32;
    puVar40 = puVar33;
    uVar14 = (uint)bVar45;
    if (-1 < (char)bVar45) goto joined_r0x0049aab2;
    if ((bVar45 & 0x40) == 0) goto code_r0x0049aac2;
    if ((bVar45 & 0x20) == 0) {
      uVar39 = 0x3f;
      lVar37 = 0;
      puVar18 = (uint *)0x0;
      bVar56 = false;
    }
    else {
      puVar18 = (uint *)CONCAT71((int7)((ulong)puVar18 >> 8),1);
      if ((bVar45 & 0x10) == 0) {
        uVar39 = 0x1f;
        lVar37 = 1;
        bVar56 = false;
      }
      else {
        uVar39 = 0xf;
        lVar37 = 2;
        bVar56 = true;
      }
    }
    uVar39 = bVar45 & uVar39;
    bVar45 = *(byte *)((long)puVar32 + 1);
    uVar14 = uVar39;
    if ((bVar45 & 0xc0) == 0x80) {
      puVar33 = (uint *)((long)puVar32 + lVar37 + 2);
      uVar14 = bVar45 & 0x3f | uVar39 << 6;
      puVar40 = puVar33;
      if ((char)puVar18 == '\0') goto joined_r0x0049aab2;
      puVar18 = (uint *)((long)puVar32 + 2);
      bVar27 = *(byte *)puVar18;
      puVar40 = puVar18;
      if ((bVar27 & 0xc0) != 0x80) goto joined_r0x0049aab2;
      uVar14 = bVar27 & 0x3f | uVar14 << 6;
      puVar40 = puVar33;
      if (!bVar56) goto joined_r0x0049aab2;
      bVar4 = *(byte *)((long)puVar32 + 3);
      puVar40 = (uint *)((long)puVar32 + 3);
      if ((bVar4 & 0xc0) != 0x80) goto joined_r0x0049aab2;
      puVar32 = puVar33;
      if (!(((bVar27 & 0x3f) != 0 || ((bVar45 & 0x3f) != 0 || uVar39 != 0)) || (bVar4 & 0x3f) != 0))
      break;
      goto LAB_0049a855;
    }
joined_r0x0049aab2:
    puVar33 = puVar40;
    puVar32 = puVar33;
  } while (uVar14 != 0);
  goto LAB_0049b193;
code_r0x0049aac2:
  puVar32 = puVar33;
  if ((bVar45 & 0x7f) != 0) goto LAB_0049a855;
LAB_0049b193:
  if ((char)local_9c == '\0') {
    local_c8 = local_e0;
    puVar32 = local_e0 + -4;
    if (puVar32 != &emptyString) {
      LOCK();
      *puVar32 = *puVar32 + 1;
      UNLOCK();
    }
  }
  else {
    local_d8._0_8_ = local_78;
    if (local_b0 != &emptyString) {
      LOCK();
      *local_b0 = *local_b0 + 1;
      UNLOCK();
    }
                    /* try { // try from 0049b1c1 to 0049b1cf has its CatchHandler @ 0049be0f */
    pSVar21 = juce::String::operator+=((String *)local_d8,(String *)&local_e0);
    local_c8 = *(uint **)pSVar21;
    puVar18 = local_c8 + -4;
    puVar32 = &emptyString;
    if (puVar18 != &emptyString) {
      LOCK();
      *puVar18 = *puVar18 + 1;
      UNLOCK();
    }
    piVar43 = (int *)(local_d8._0_8_ + -0x10);
    if (piVar43 != &emptyString) {
      LOCK();
      iVar53 = *piVar43;
      *piVar43 = *piVar43 + -1;
      UNLOCK();
      if (iVar53 == 0) {
        operator_delete__(piVar43);
      }
    }
  }
  if (puVar22 != &emptyString) {
    LOCK();
    uVar14 = *puVar22;
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar22);
    }
  }
  pbVar20 = local_90 + -0x10;
  if (pbVar20 != (byte *)&emptyString) {
    LOCK();
    iVar53 = *(int *)pbVar20;
    *(int *)pbVar20 = *(int *)pbVar20 + -1;
    UNLOCK();
    if (iVar53 == 0) {
      operator_delete__(pbVar20);
    }
  }
  puVar22 = local_e0 + -4;
  if (puVar22 != &emptyString) {
    LOCK();
    uVar14 = *puVar22;
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar22);
    }
  }
  puVar22 = local_80 + -4;
  if (puVar22 == &emptyString) {
LAB_0049b2d1:
    uVar39 = (uint)(byte)*local_c8;
    uVar14 = uVar39;
    if (-1 < (char)(byte)*local_c8) goto LAB_0049b2dd;
LAB_0049b311:
    if ((uVar14 & 0x40) != 0) {
      uVar39 = 0x3f;
      if ((uVar14 & 0x20) != 0) {
        uVar39 = uVar14 & 0x10 ^ 0x1f;
      }
      uVar39 = uVar39 & uVar14;
      if ((*(byte *)((long)local_c8 + 1) & 0xffffffc0) != 0x80) goto LAB_0049b44e;
      puVar18 = (uint *)((long)local_c8 + 1);
      uVar39 = uVar39 * 0x40;
      puVar32 = (uint *)(ulong)uVar39;
      uVar50 = *(byte *)((long)local_c8 + 1) & 0x3f;
      uVar49 = uVar50 + uVar39;
      if ((uVar14 & 0x20) == 0) {
        if (uVar49 != 0x7e) {
          uVar39 = uVar50 | uVar39;
          goto LAB_0049b44e;
        }
LAB_0049b402:
        puVar22 = (uint *)((long)local_c8 + 2);
      }
      else {
        bVar45 = (byte)uVar14 >> 5 & (uVar14 & 0x10) == 0;
        param_4 = (uint *)(ulong)bVar45;
        if ((((*(byte *)((long)local_c8 + 2) & 0xc0) == 0x80) &&
            (uVar49 = *(byte *)((long)local_c8 + 2) & 0x3f | uVar49 * 0x40, bVar45 == 0)) &&
           ((*(byte *)((long)local_c8 + 3) & 0xc0) == 0x80)) {
          uVar49 = uVar49 << 6 | *(byte *)((long)local_c8 + 3) & 0x3f;
        }
        if (uVar49 != 0x7e) {
          uVar39 = uVar39 | uVar50;
          if ((((uVar14 & 0x20) != 0) && ((*(byte *)((long)local_c8 + 2) & 0xffffffc0) == 0x80)) &&
             ((uVar39 = *(byte *)((long)local_c8 + 2) & 0x3f | uVar39 << 6, bVar45 == 0 &&
              ((*(byte *)((long)local_c8 + 3) & 0xffffffc0) == 0x80)))) {
            uVar39 = *(byte *)((long)local_c8 + 3) & 0x3f | uVar39 << 6;
          }
          goto LAB_0049b44e;
        }
        if ((uVar14 & 0x20) == 0) goto LAB_0049b402;
        puVar22 = (uint *)((long)local_c8 + (4 - (ulong)((uVar14 & 0x10) == 0)));
      }
      uVar48 = 0;
      bVar45 = (byte)*puVar22;
      goto joined_r0x0049b512;
    }
    uVar39 = uVar14 & 0x7f;
    if (uVar39 != 0x7e) goto LAB_0049b44e;
    puVar22 = (uint *)((long)local_c8 + 1);
    uVar48 = 0;
    bVar45 = *(byte *)puVar22;
    uVar39 = (uint)bVar45;
    puVar32 = (uint *)0x7e;
    puVar18 = puVar22;
    puVar33 = local_c8;
    if ((char)bVar45 < '\0') {
      puVar32 = (uint *)0x7e;
      goto LAB_0049b518;
    }
  }
  else {
    LOCK();
    uVar14 = *puVar22;
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (uVar14 != 0) goto LAB_0049b2d1;
    operator_delete__(puVar22);
    uVar39 = (uint)(byte)*local_c8;
    uVar14 = uVar39;
    if ((char)(byte)*local_c8 < '\0') goto LAB_0049b311;
LAB_0049b2dd:
    if ((char)uVar39 != '~') {
LAB_0049b44e:
      puVar22 = local_c8;
      if (uVar39 != 0x2f) {
                    /* try { // try from 0049b457 to 0049b460 has its CatchHandler @ 0049bd83 */
        getCurrentWorkingDirectory((File *)&local_e0);
                    /* try { // try from 0049b461 to 0049b472 has its CatchHandler @ 0049bd66 */
        getChildFile((File *)local_d8,&local_e0,(byte *)puVar22);
        *(undefined8 *)pFVar13 = local_d8._0_8_;
        piVar43 = (int *)(local_d8._0_8_ + -0x10);
        if (piVar43 != &emptyString) {
          LOCK();
          *piVar43 = *piVar43 + 1;
          UNLOCK();
        }
        piVar43 = (int *)(local_d8._0_8_ + -0x10);
        if (piVar43 != &emptyString) {
          LOCK();
          iVar53 = *piVar43;
          *piVar43 = *piVar43 + -1;
          UNLOCK();
          if (iVar53 == 0) {
            operator_delete__(piVar43);
          }
        }
        puVar22 = local_e0 + -4;
        if (puVar22 != &emptyString) {
          LOCK();
          uVar14 = *puVar22;
          *puVar22 = *puVar22 - 1;
          UNLOCK();
          if (uVar14 == 0) {
            operator_delete__(puVar22);
          }
        }
        puVar22 = local_c8 + -4;
        if (puVar22 == &emptyString) {
          return;
        }
        LOCK();
        uVar14 = *puVar22;
        *puVar22 = *puVar22 - 1;
        UNLOCK();
        if (uVar14 == 0) {
          operator_delete__(puVar22);
          return;
        }
        return;
      }
      goto LAB_0049ba60;
    }
    puVar18 = (uint *)((long)local_c8 + 1);
    uVar48 = CONCAT71((int7)((ulong)puVar33 >> 8),1);
    bVar45 = *(byte *)puVar18;
    puVar22 = puVar18;
    uVar14 = uVar39;
joined_r0x0049b512:
    uVar39 = (uint)bVar45;
    puVar33 = local_c8;
    if ((char)bVar45 < '\0') {
LAB_0049b518:
      uVar39 = (uint)bVar45;
      puVar33 = local_c8;
      if ((bVar45 & 0x40) == 0) {
        uVar39 = uVar39 & 0x7f;
      }
      else {
        bVar56 = (bVar45 & 0x10) == 0;
        param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),bVar56);
        uVar50 = 0x3f;
        if ((bVar45 & 0x20) != 0) {
          uVar50 = uVar39 & 0x10 ^ 0x1f;
        }
        uVar39 = uVar50 & uVar39;
        puVar32 = (uint *)(ulong)uVar39;
        if ((*(byte *)((long)puVar22 + 1) & 0xc0) == 0x80) {
          uVar50 = uVar39 << 6;
          uVar39 = *(byte *)((long)puVar22 + 1) & 0x3f | uVar50;
          if ((bVar45 & 0x20) != 0) {
            uVar50 = *(byte *)((long)puVar22 + 2) & 0xffffffc0;
            if (uVar50 == 0x80) {
              bVar45 = bVar45 >> 5 & bVar56;
              puVar32 = (uint *)(ulong)bVar45;
              uVar39 = *(byte *)((long)puVar22 + 2) & 0x3f | uVar39 << 6;
              if (bVar45 == 0) {
                bVar45 = *(byte *)((long)puVar22 + 3);
                puVar32 = (uint *)(ulong)bVar45;
                uVar50 = bVar45 & 0xffffffc0;
                puVar22 = (uint *)(ulong)uVar50;
                if (uVar50 == 0x80) {
                  uVar50 = bVar45 & 0x3f;
                  puVar32 = (uint *)(ulong)uVar50;
                  uVar39 = uVar39 << 6 | uVar50;
                }
              }
              goto joined_r0x0049b5ba;
            }
          }
          puVar32 = (uint *)(ulong)uVar50;
        }
      }
    }
  }
joined_r0x0049b5ba:
  local_c8 = puVar33;
  if (uVar39 == 0x2f) goto LAB_0049b6c4;
  bVar56 = (uVar14 & 0x40) == 0;
  puVar32 = (uint *)CONCAT71((int7)((ulong)puVar32 >> 8),bVar56);
  bVar45 = (byte)uVar48 | bVar56;
  uVar48 = CONCAT71((int7)((ulong)uVar48 >> 8),bVar45);
  puVar40 = puVar18;
  if (bVar45 == 0) {
    if ((uVar14 & 0x20) == 0) {
      puVar40 = (uint *)((long)puVar33 + 2);
      goto LAB_0049b5e2;
    }
    puVar32 = (uint *)(ulong)(uVar14 & 0x10);
    puVar40 = (uint *)((long)puVar33 + (4 - (ulong)((uVar14 & 0x10) == 0)));
    bVar27 = (byte)*puVar40;
  }
  else {
LAB_0049b5e2:
    bVar27 = (byte)*puVar40;
  }
  puVar22 = (uint *)(ulong)bVar27;
  if ((char)bVar27 < '\0') {
    uVar39 = (uint)bVar27;
    if ((bVar27 & 0x40) == 0) {
      puVar22 = (uint *)(ulong)(uVar39 & 0x7f);
    }
    else {
      bVar56 = (bVar27 & 0x10) == 0;
      param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),bVar56);
      uVar50 = 0x3f;
      if ((bVar27 & 0x20) != 0) {
        uVar50 = uVar39 & 0x10 ^ 0x1f;
      }
      puVar32 = (uint *)(ulong)(uVar50 & uVar39);
      if ((*(byte *)((long)puVar40 + 1) & 0xc0) == 0x80) {
        uVar39 = (uVar50 & uVar39) << 6;
        uVar50 = *(byte *)((long)puVar40 + 1) & 0x3f | uVar39;
        if ((bVar27 & 0x20) != 0) {
          uVar39 = *(byte *)((long)puVar40 + 2) & 0xffffffc0;
          if (uVar39 == 0x80) {
            bVar27 = bVar27 >> 5 & bVar56;
            puVar32 = (uint *)(ulong)bVar27;
            uVar39 = *(byte *)((long)puVar40 + 2) & 0x3f | uVar50 << 6;
            puVar22 = (uint *)(ulong)uVar39;
            if (bVar27 == 0) {
              bVar27 = *(byte *)((long)puVar40 + 3);
              puVar32 = (uint *)(ulong)bVar27;
              if ((bVar27 & 0xffffffc0) == 0x80) {
                uVar50 = bVar27 & 0x3f;
                puVar32 = (uint *)(ulong)uVar50;
                puVar22 = (uint *)(ulong)(uVar39 << 6 | uVar50);
              }
            }
            goto LAB_0049b6ad;
          }
        }
        puVar32 = (uint *)(ulong)uVar39;
        puVar22 = (uint *)(ulong)uVar50;
      }
      else {
        puVar22 = puVar32;
      }
    }
  }
LAB_0049b6ad:
  if ((int)puVar22 != 0) {
    if (bVar45 == 0) {
      if ((uVar14 & 0x20) == 0) {
        puVar18 = (uint *)((long)puVar33 + 2);
      }
      else {
        puVar18 = (uint *)((long)puVar33 + (4 - (ulong)((uVar14 & 0x10) == 0)));
      }
    }
                    /* try { // try from 0049b73f to 0049b743 has its CatchHandler @ 0049bd54 */
    puVar22 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>((byte *)puVar18);
                    /* try { // try from 0049b74c to 0049b761 has its CatchHandler @ 0049bd1e */
    local_e0 = puVar22;
    juce::String::upToFirstOccurrenceOf
              ((undefined8 *)local_d8,&local_e0,&DAT_0065be94,puVar32,param_4,uVar48);
    puVar22 = puVar22 + -4;
    if (puVar22 != &emptyString) {
      LOCK();
      uVar14 = *puVar22;
      *puVar22 = *puVar22 - 1;
      UNLOCK();
      if (uVar14 == 0) {
        operator_delete__(puVar22);
      }
    }
    pcVar34 = (char *)local_d8._0_8_;
    ppVar23 = getpwnam((char *)local_d8._0_8_);
    if (ppVar23 != (passwd *)0x0) {
      pbVar20 = (byte *)ppVar23->pw_dir;
      pbVar55 = &DAT_0061ac58;
      if ((pbVar20 != (byte *)0x0) && (bVar45 = *pbVar20, bVar45 != 0)) {
        pbVar29 = pbVar20 + 1;
        lVar37 = 0;
        do {
          lVar36 = lVar37 + (ulong)(bVar45 >> 7);
          lVar37 = lVar36 + 1;
          bVar45 = *pbVar29;
          pbVar29 = pbVar29 + 1;
        } while (bVar45 != 0);
        uVar38 = lVar36 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 0049b7f4 to 0049b7f8 has its CatchHandler @ 0049bc85 */
        puVar24 = operator_new__(uVar38 + 0x17);
        LOCK();
        *puVar24 = 0;
        UNLOCK();
        *(ulong *)(puVar24 + 2) = uVar38;
        pbVar55 = (byte *)(puVar24 + 4);
        puVar32 = (uint *)CONCAT71((int7)((ulong)pbVar29 >> 8),*pbVar20);
        pbVar29 = pbVar55;
        if (*pbVar20 != 0) {
          do {
            pbVar20 = pbVar20 + 1;
            bVar45 = (byte)puVar32;
            if ((char)bVar45 < '\0') {
              *pbVar29 = (byte)(((ulong)puVar32 & 0xffffffff) >> 6) & 3 | 0xc0;
              pbVar29[1] = bVar45 & 0x3f | 0x80;
              pbVar29 = pbVar29 + 1;
            }
            else {
              *pbVar29 = bVar45;
            }
            pbVar29 = pbVar29 + 1;
            puVar32 = (uint *)(ulong)*pbVar20;
          } while (*pbVar20 != 0);
        }
        *pbVar29 = 0;
      }
                    /* try { // try from 0049b851 to 0049b860 has its CatchHandler @ 0049bce8 */
      addTrailingSeparator((File *)&local_50,(char *)pbVar55);
                    /* try { // try from 0049b861 to 0049b876 has its CatchHandler @ 0049bcb9 */
      juce::String::fromFirstOccurrenceOf
                ((long *)&local_e0,(long *)&local_c8,&DAT_0065be94,puVar32,param_4,uVar48);
                    /* try { // try from 0049b877 to 0049b888 has its CatchHandler @ 0049bc8d */
      pSVar21 = juce::String::operator+=((String *)&local_50,(String *)&local_e0);
      puVar32 = *(uint **)pSVar21;
      puVar22 = puVar32 + -4;
      if (puVar22 != &emptyString) {
        LOCK();
        *puVar22 = *puVar22 + 1;
        UNLOCK();
      }
      puVar22 = local_c8 + -4;
      local_c8 = puVar32;
      if (puVar22 != &emptyString) {
        LOCK();
        uVar14 = *puVar22;
        *puVar22 = *puVar22 - 1;
        UNLOCK();
        if (uVar14 == 0) {
          operator_delete__(puVar22);
        }
      }
      puVar22 = local_e0 + -4;
      if (puVar22 != &emptyString) {
        LOCK();
        uVar14 = *puVar22;
        *puVar22 = *puVar22 - 1;
        UNLOCK();
        if (uVar14 == 0) {
          operator_delete__(puVar22);
        }
      }
      piVar43 = (int *)(local_50 + -0x10);
      if (piVar43 != &emptyString) {
        LOCK();
        iVar53 = *piVar43;
        *piVar43 = *piVar43 + -1;
        UNLOCK();
        if (iVar53 == 0) {
          operator_delete__(piVar43);
        }
      }
      pbVar55 = pbVar55 + -0x10;
      if (pbVar55 != (byte *)&emptyString) {
        LOCK();
        iVar53 = *(int *)pbVar55;
        *(int *)pbVar55 = *(int *)pbVar55 + -1;
        UNLOCK();
        if (iVar53 == 0) {
          operator_delete__(pbVar55);
        }
      }
      pcVar34 = (char *)local_d8._0_8_;
    }
    piVar43 = (int *)(pcVar34 + -0x10);
    if (piVar43 != &emptyString) {
      LOCK();
      iVar53 = *piVar43;
      *piVar43 = *piVar43 + -1;
      UNLOCK();
      if (iVar53 == 0) {
LAB_0049ba5b:
        operator_delete__(piVar43);
      }
    }
LAB_0049ba60:
    bVar45 = (byte)*local_c8;
    puVar22 = local_c8;
joined_r0x0049ba6a:
    if (bVar45 != 0) {
      local_c8 = puVar22;
      sVar25 = strlen((char *)puVar22);
      lVar37 = (long)puVar22 + (sVar25 - 1);
      bVar27 = *(byte *)((long)puVar22 + (sVar25 - 1));
      if ((bVar27 & 0xc0) == 0x80) {
        bVar27 = *(byte *)((long)puVar22 + (sVar25 - 2));
        lVar37 = (long)puVar22 + (sVar25 - 2);
        if ((bVar27 & 0xc0) == 0x80) {
          bVar27 = *(byte *)((long)puVar22 + (sVar25 - 3));
          lVar37 = (long)puVar22 + (sVar25 - 3);
          if ((bVar27 & 0xc0) == 0x80) {
            bVar27 = *(byte *)((long)puVar22 + (sVar25 - 4));
            lVar37 = (long)puVar22 + (sVar25 - 4);
          }
        }
      }
      uVar14 = (uint)bVar27;
      if ((char)bVar27 < '\0') {
        if ((bVar27 & 0x40) == 0) {
          uVar14 = bVar27 & 0x7f;
        }
        else {
          uVar39 = uVar14 & 0x10 ^ 0x1f;
          if ((bVar27 & 0x20) == 0) {
            uVar39 = 0x3f;
          }
          uVar14 = uVar14 & uVar39;
          if (((((*(byte *)(lVar37 + 1) & 0xffffffc0) == 0x80) &&
               (uVar14 = *(byte *)(lVar37 + 1) & 0x3f | uVar14 << 6, (bVar27 & 0x20) != 0)) &&
              ((*(byte *)(lVar37 + 2) & 0xc0) == 0x80)) &&
             ((uVar14 = *(byte *)(lVar37 + 2) & 0x3f | uVar14 << 6,
              (bVar27 >> 5 & (bVar27 & 0x10) == 0) == 0 &&
              ((*(byte *)(lVar37 + 3) & 0xffffffc0) == 0x80)))) {
            uVar14 = uVar14 << 6 | *(byte *)(lVar37 + 3) & 0x3f;
          }
        }
      }
      if ((uVar14 == 0x2f) &&
         (uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             ((byte *)puVar22,&DAT_0065be94), uVar14 != 0)) {
        iVar53 = 0;
        puVar32 = puVar22;
        do {
          if ((char)bVar45 < '\0') {
            do {
              bVar45 = *(byte *)((long)puVar32 + 1);
              puVar32 = (uint *)((long)puVar32 + 1);
            } while ((bVar45 & 0xc0) == 0x80);
          }
          else {
            if (bVar45 == 0) goto LAB_0049bbf0;
            bVar45 = *(byte *)((long)puVar32 + 1);
            puVar32 = (uint *)((long)puVar32 + 1);
          }
          iVar53 = iVar53 + 1;
        } while( true );
      }
    }
    *(uint **)local_60 = puVar22;
    return;
  }
LAB_0049b6c4:
                    /* try { // try from 0049b6c4 to 0049b6cf has its CatchHandler @ 0049be05 */
  getSpecialLocation((File *)local_d8,0,puVar22,puVar32,param_4,uVar48);
  local_48 = local_d8._0_8_;
  piVar43 = (int *)(local_d8._0_8_ + -0x10);
  if (piVar43 != &emptyString) {
    LOCK();
    *piVar43 = *piVar43 + 1;
    UNLOCK();
    puVar33 = local_c8;
  }
  bVar45 = (byte)*puVar33;
  if (bVar45 == 0) {
    local_e0 = (uint *)&DAT_0061ac58;
  }
  else {
    pbVar20 = (byte *)((long)puVar33 + 1);
    if (((char)bVar45 < '\0') && ((bVar45 & 0x40) != 0)) {
      if ((bVar45 & 0x20) == 0) {
        pbVar20 = (byte *)((long)puVar33 + 2);
      }
      else {
        pbVar20 = (byte *)((long)puVar33 + (4 - (ulong)((bVar45 & 0x10) == 0)));
      }
    }
                    /* try { // try from 0049b986 to 0049b98a has its CatchHandler @ 0049bd59 */
    local_e0 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(pbVar20);
  }
                    /* try { // try from 0049b990 to 0049b9a1 has its CatchHandler @ 0049bd88 */
  pSVar21 = juce::String::operator+=((String *)&local_48,(String *)&local_e0);
  puVar32 = *(uint **)pSVar21;
  puVar22 = puVar32 + -4;
  if (puVar22 != &emptyString) {
    LOCK();
    *puVar22 = *puVar22 + 1;
    UNLOCK();
    puVar33 = local_c8;
  }
  puVar33 = puVar33 + -4;
  local_c8 = puVar32;
  if (puVar33 != &emptyString) {
    LOCK();
    uVar14 = *puVar33;
    *puVar33 = *puVar33 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar33);
    }
  }
  puVar22 = local_e0 + -4;
  if (puVar22 != &emptyString) {
    LOCK();
    uVar14 = *puVar22;
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar22);
    }
  }
  piVar43 = (int *)(local_48 + -0x10);
  if (piVar43 != &emptyString) {
    LOCK();
    iVar53 = *piVar43;
    *piVar43 = *piVar43 + -1;
    UNLOCK();
    if (iVar53 == 0) {
      operator_delete__(piVar43);
    }
  }
  piVar43 = (int *)(local_d8._0_8_ + -0x10);
  if (piVar43 == &emptyString) goto LAB_0049ba60;
  LOCK();
  iVar53 = *piVar43;
  *piVar43 = *piVar43 + -1;
  UNLOCK();
  if (iVar53 != 0) goto LAB_0049ba60;
  goto LAB_0049ba5b;
LAB_0049bbf0:
  uVar38 = (ulong)(iVar53 - 1);
  if (iVar53 < 2) {
    uVar38 = 0;
  }
                    /* try { // try from 0049bbfa to 0049bc01 has its CatchHandler @ 0049be55 */
  local_c8 = (uint *)StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>
                               ((byte *)puVar22,uVar38);
  puVar22 = (uint *)((long)puVar22 + 0xfffffffffffffff0);
  if (puVar22 != &emptyString) {
    LOCK();
    uVar14 = *puVar22;
    *puVar22 = *puVar22 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar22);
    }
  }
  bVar45 = (byte)*local_c8;
  puVar22 = local_c8;
  goto joined_r0x0049ba6a;
LAB_0049ac10:
  iVar30 = 0;
  pbVar20 = local_90;
  do {
    bVar45 = *pbVar20;
    if ((char)bVar45 < '\0') {
      do {
        pbVar55 = pbVar20 + 1;
        pbVar20 = pbVar20 + 1;
      } while ((*pbVar55 & 0xc0) == 0x80);
    }
    else {
      pbVar20 = pbVar20 + 1;
      if (bVar45 == 0) break;
    }
    iVar30 = iVar30 + 1;
  } while( true );
  local_98 = local_e0;
  puVar22 = local_e0 + -4;
  if (puVar22 != &emptyString) {
    LOCK();
    *puVar22 = *puVar22 + 1;
    UNLOCK();
    param_4 = (uint *)CONCAT71(uVar44,(char)*local_78);
  }
  puVar32 = local_78;
  if ((char)param_4 != '\0') {
    uVar38 = 0;
LAB_0049aca2:
    puVar33 = local_98;
    iVar16 = (int)uVar38;
    puVar18 = local_98;
    if (0 < iVar16) {
      puVar22 = (uint *)(ulong)(iVar16 + 1);
      do {
        bVar45 = (byte)*puVar18;
        if (bVar45 == 0) goto LAB_0049b150;
        puVar40 = (uint *)((long)puVar18 + 1);
        if (((char)bVar45 < '\0') && ((bVar45 & 0x40) != 0)) {
          if ((bVar45 & 0x20) == 0) {
            puVar40 = (uint *)((long)puVar18 + 2);
          }
          else {
            puVar40 = (uint *)((long)puVar18 + (4 - (ulong)((bVar45 & 0x10) == 0)));
          }
        }
        puVar18 = puVar40;
        uVar14 = (int)puVar22 - 1;
        puVar22 = (uint *)(ulong)uVar14;
      } while (1 < (int)uVar14);
    }
    iVar47 = 1;
    puVar40 = puVar32;
    do {
      puVar51 = (uint *)((long)puVar40 + 1);
      if ((char)param_4 < '\0') {
        do {
          pbVar20 = (byte *)((long)puVar40 + 1);
          param_4 = (uint *)(ulong)*pbVar20;
          puVar51 = (uint *)((long)puVar40 + 1);
          puVar40 = puVar51;
        } while ((*pbVar20 & 0xc0) == 0x80);
      }
      else {
        if ((char)param_4 == '\0') goto LAB_0049ad60;
        param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),*(undefined1 *)puVar51);
      }
      iVar47 = iVar47 + 1;
      puVar40 = puVar51;
    } while( true );
  }
LAB_0049b150:
  puVar18 = local_e0;
  local_e0 = local_98;
  local_98 = puVar18;
  puVar18 = puVar18 + -4;
  if (puVar18 != &emptyString) {
    LOCK();
    uVar14 = *puVar18;
    *puVar18 = *puVar18 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar18);
    }
  }
  goto LAB_0049a7e0;
LAB_0049ad60:
  local_a8 = local_98;
  local_bc = 0;
  local_38 = puVar18;
  puVar18 = puVar32;
LAB_0049ad6d:
  puVar40 = local_38;
  puVar32 = puVar18;
  iVar41 = iVar47;
  do {
    iVar41 = iVar41 + -1;
    local_58 = uVar38;
    if (iVar41 < 1) goto LAB_0049b0e5;
    puVar52 = (uint *)((long)puVar40 + 1);
    bVar45 = (byte)*puVar40;
    uVar14 = (uint)bVar45;
    if ((char)bVar45 < '\0') {
      if ((bVar45 & 0x40) == 0) {
        uVar14 = uVar14 & 0x7f;
        goto LAB_0049addb;
      }
      if ((bVar45 & 0x20) == 0) {
        uVar39 = 0x3f;
        lVar37 = 0;
        param_4 = (uint *)0x0;
        bVar56 = false;
      }
      else {
        param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),1);
        if ((bVar45 & 0x10) == 0) {
          uVar39 = 0x1f;
          lVar37 = 1;
          bVar56 = false;
        }
        else {
          uVar39 = 0xf;
          lVar37 = 2;
          bVar56 = true;
        }
      }
      uVar14 = uVar14 & uVar39;
      if ((*(byte *)((long)puVar40 + 1) & 0xffffffc0) == 0x80) {
        puVar22 = (uint *)0x0;
        uVar14 = *(byte *)((long)puVar40 + 1) & 0x3f | uVar14 << 6;
        if ((char)param_4 != '\0') {
          puVar52 = (uint *)((long)puVar40 + 2);
          if ((*(byte *)puVar52 & 0xc0) != 0x80) goto LAB_0049af82;
          puVar22 = (uint *)(ulong)(uVar14 << 6);
          uVar14 = *(byte *)puVar52 & 0x3f | uVar14 << 6;
          if (bVar56) {
            bVar45 = *(byte *)((long)puVar40 + 3);
            puVar22 = (uint *)0x0;
            puVar52 = (uint *)((long)puVar40 + 3);
            if ((bVar45 & 0xc0) != 0x80) goto LAB_0049af85;
            uVar14 = uVar14 << 6 | bVar45 & 0x3f;
          }
        }
        puVar52 = (uint *)((long)puVar40 + lVar37 + 2);
      }
      else {
LAB_0049af82:
        puVar22 = (uint *)0x0;
      }
LAB_0049af85:
      bVar45 = (byte)*puVar18;
      puVar40 = puVar52;
    }
    else {
LAB_0049addb:
      bVar45 = (byte)*puVar18;
      puVar40 = puVar52;
    }
    uVar39 = (uint)bVar45;
    puVar52 = (uint *)((long)puVar18 + 1);
    if ((char)bVar45 < '\0') {
      puVar52 = (uint *)((long)puVar18 + 1);
      if ((bVar45 & 0x40) == 0) {
        uVar39 = uVar39 & 0x7f;
      }
      else {
        if ((bVar45 & 0x20) == 0) {
          uVar50 = 0x3f;
          lVar37 = 0;
          param_4 = (uint *)0x0;
          local_b8 = (uint *)0x0;
        }
        else {
          param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),1);
          if ((bVar45 & 0x10) == 0) {
            uVar50 = 0x1f;
            lVar37 = 1;
            local_b8 = (uint *)0x0;
          }
          else {
            uVar50 = 0xf;
            lVar37 = 2;
            local_b8 = (uint *)CONCAT71((int7)((ulong)puVar22 >> 8),1);
          }
        }
        uVar39 = uVar39 & uVar50;
        puVar32 = local_78;
        if ((*(byte *)((long)puVar18 + 1) & 0xc0) == 0x80) {
          puVar52 = (uint *)((long)puVar18 + lVar37 + 2);
          uVar39 = *(byte *)((long)puVar18 + 1) & 0x3f | uVar39 << 6;
          if ((char)param_4 != '\0') {
            param_4 = (uint *)((long)puVar18 + 2);
            if ((*(byte *)param_4 & 0xc0) == 0x80) {
              uVar39 = *(byte *)param_4 & 0x3f | uVar39 << 6;
              if ((char)local_b8 != '\0') {
                bVar45 = *(byte *)((long)puVar18 + 3);
                if ((bVar45 & 0xc0) == 0x80) {
                  uVar39 = uVar39 << 6 | bVar45 & 0x3f;
                }
                else {
                  puVar52 = (uint *)((long)puVar18 + 3);
                }
              }
            }
            else {
              puVar52 = param_4;
            }
          }
        }
      }
    }
    puVar18 = puVar52;
    uVar39 = uVar14 - uVar39;
    puVar22 = (uint *)(ulong)uVar39;
    puVar51 = (uint *)((ulong)puVar51 & 0xffffffff);
    if (uVar39 != 0) {
      puVar51 = (uint *)(ulong)((int)uVar39 >> 0x1f | 1);
    }
    cVar26 = (uVar14 == 0) * '\x03';
    if (uVar39 != 0) {
      cVar26 = '\x01';
    }
  } while (cVar26 == '\0');
  if ((cVar26 != '\x01') || ((int)puVar51 == 0)) goto LAB_0049b0e5;
  puVar18 = (uint *)((long)local_38 + 1);
  bVar45 = (byte)*local_38;
  uVar14 = (uint)bVar45;
  puVar40 = puVar18;
  puVar51 = local_38;
  if ((char)bVar45 < '\0') {
    if ((bVar45 & 0x40) == 0) {
      if ((bVar45 & 0x7f) == 0) goto LAB_0049b150;
      goto LAB_0049afe1;
    }
    if ((bVar45 & 0x20) == 0) {
      uVar39 = 0x3f;
      lVar37 = 0;
      bVar56 = false;
      param_4 = (uint *)0x0;
    }
    else {
      bVar56 = true;
      if ((bVar45 & 0x10) == 0) {
        uVar39 = 0x1f;
        lVar37 = 1;
        param_4 = (uint *)0x0;
      }
      else {
        uVar39 = 0xf;
        lVar37 = 2;
        param_4 = (uint *)CONCAT71((int7)((ulong)param_4 >> 8),1);
      }
    }
    uVar39 = uVar14 & uVar39;
    bVar45 = *(byte *)((long)local_38 + 1);
    uVar50 = bVar45 & 0xffffffc0;
    uVar14 = uVar39;
    if (uVar50 != 0x80) {
LAB_0049b0b0:
      puVar22 = (uint *)(ulong)uVar50;
      puVar40 = puVar18;
      goto joined_r0x0049afdb;
    }
    puVar18 = (uint *)((long)local_38 + lVar37 + 2);
    uVar50 = uVar39 << 6;
    uVar14 = bVar45 & 0x3f | uVar50;
    if (!bVar56) goto LAB_0049b0b0;
    bVar27 = *(byte *)((long)local_38 + 2);
    puVar22 = (uint *)0x0;
    puVar40 = (uint *)((long)local_38 + 2);
    if ((bVar27 & 0xc0) == 0x80) {
      puVar22 = (uint *)(ulong)(uVar14 << 6);
      uVar14 = bVar27 & 0x3f | uVar14 << 6;
      puVar40 = puVar18;
      if ((char)param_4 == '\0') goto joined_r0x0049afdb;
      puVar51 = (uint *)((long)local_38 + 3);
      puVar22 = (uint *)0x0;
      puVar40 = puVar51;
      if ((*(byte *)puVar51 & 0xc0) == 0x80) {
        if (((bVar27 & 0x3f) != 0 || ((bVar45 & 0x3f) != 0 || uVar39 != 0)) ||
            (*(byte *)puVar51 & 0x3f) != 0) goto LAB_0049afe1;
        goto LAB_0049b150;
      }
    }
  }
joined_r0x0049afdb:
  puVar18 = puVar40;
  if (uVar14 == 0) goto LAB_0049b150;
LAB_0049afe1:
  local_bc = local_bc + 1;
  local_38 = puVar18;
  puVar18 = puVar32;
  goto LAB_0049ad6d;
LAB_0049b0e5:
  iVar16 = local_bc + iVar16;
  if (iVar16 < 0) goto LAB_0049b150;
                    /* try { // try from 0049b0f5 to 0049b10d has its CatchHandler @ 0049be76 */
  pbVar20 = local_88;
  juce::String::replaceSection((long *)local_d8,&local_98,iVar16,iVar53,local_88);
  local_98 = (uint *)local_d8._0_8_;
  local_d8._0_8_ = puVar33;
  puVar33 = puVar33 + -4;
  puVar22 = &emptyString;
  if (puVar33 != &emptyString) {
    LOCK();
    uVar14 = *puVar33;
    puVar22 = (uint *)(ulong)uVar14;
    *puVar33 = *puVar33 - 1;
    UNLOCK();
    if (uVar14 == 0) {
      operator_delete__(puVar33);
      puVar22 = extraout_RAX_00;
    }
  }
  param_4 = (uint *)CONCAT71((int7)((ulong)pbVar20 >> 8),(char)*puVar32);
  uVar38 = (ulong)(uint)(iVar16 + iVar30);
  if ((char)*puVar32 == '\0') goto LAB_0049b150;
  goto LAB_0049aca2;
}


