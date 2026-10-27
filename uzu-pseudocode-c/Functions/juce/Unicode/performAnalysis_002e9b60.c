// Function : performAnalysis
// Namespace: juce:Unicode
// Entry    : 002e9b60
// Prototype: undefined performAnalysis(Unicode * this, undefined8 * param_1)
// Body     : 002e9b60 - 002eb030


/* WARNING: Type propagation algorithm not settling */
/* juce::Unicode::performAnalysis(juce::String const&) */

void __thiscall juce::Unicode::performAnalysis(Unicode *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  pthread_mutex_t *__mutex;
  void *pvVar3;
  _Rb_tree_node_base *p_Var4;
  wchar_t *pwVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  _Rb_tree_node_base *p_Var11;
  byte bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  long lVar16;
  _List_node_base *p_Var17;
  size_t sVar18;
  ulong uVar19;
  undefined4 *puVar20;
  ulong *puVar21;
  ulong *puVar22;
  ulong *puVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  _Rb_tree_node_base *p_Var26;
  _Rb_tree_node_base *p_Var27;
  _Rb_tree_node_base *p_Var28;
  void *pvVar29;
  byte *pbVar30;
  byte *pbVar31;
  wchar_t wVar32;
  ulong uVar33;
  wchar_t *pwVar34;
  _Rb_tree_node_base *p_Var35;
  char cVar36;
  uint uVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  long lVar41;
  wchar_t *pwVar42;
  byte *pbVar43;
  int *piVar44;
  char cVar45;
  wchar_t *in_R10;
  byte bVar46;
  ulong uVar47;
  bool bVar48;
  bool bVar49;
  ulong uVar50;
  ulong *puVar51;
  ulong *puVar52;
  byte *pbVar53;
  bool bVar54;
  undefined8 *local_98;
  uint local_40;
  
  pbVar53 = (byte *)*param_1;
  if (*pbVar53 == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    return;
  }
  lVar16 = __tls_get_addr(&PTR_007153d8);
  if (*(char *)(lVar16 + 0x68) == '\0') {
    LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
    ::LruCache();
    __cxa_thread_atexit(LruCache<juce::String,juce::Array<juce::Unicode::Codepoint,juce::DummyCriticalSection,0>,128ul>
                        ::~LruCache,lVar16 + 0x10,&__dso_handle);
    *(undefined1 *)(lVar16 + 0x68) = 1;
    pbVar53 = (byte *)*param_1;
  }
  pbVar43 = pbVar53 + -0x10;
  if (pbVar43 != (byte *)&emptyString) {
    LOCK();
    *(int *)pbVar43 = *(int *)pbVar43 + 1;
    UNLOCK();
  }
  __mutex = *(pthread_mutex_t **)(lVar16 + 0x60);
  iVar13 = pthread_mutex_lock(__mutex);
  if (iVar13 != 0) {
                    /* try { // try from 002eb010 to 002eb01b has its CatchHandler @ 002eb076 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar13);
  }
  p_Var35 = *(_Rb_tree_node_base **)(lVar16 + 0x20);
  if (p_Var35 != (_Rb_tree_node_base *)0x0) {
    p_Var26 = (_Rb_tree_node_base *)(lVar16 + 0x18);
    do {
      uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (*(byte **)(p_Var35 + 0x20),pbVar53);
      p_Var27 = p_Var35 + 0x18;
      if (-1 < (int)uVar14) {
        p_Var27 = p_Var35 + 0x10;
        p_Var26 = p_Var35;
      }
      p_Var35 = *(_Rb_tree_node_base **)p_Var27;
    } while (p_Var35 != (_Rb_tree_node_base *)0x0);
    if (p_Var26 != (_Rb_tree_node_base *)(lVar16 + 0x18)) {
      uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar53,*(byte **)(p_Var26 + 0x20));
      if ((int)uVar14 < 0) {
        p_Var26 = (_Rb_tree_node_base *)(lVar16 + 0x18);
      }
      if (p_Var26 != (_Rb_tree_node_base *)(lVar16 + 0x18)) {
        pvVar3 = *(void **)(p_Var26 + 0x38);
        *(long *)(lVar16 + 0x50) = *(long *)(lVar16 + 0x50) + -1;
        std::__detail::_List_node_base::_M_unhook();
        operator_delete(pvVar3);
                    /* try { // try from 002e9c77 to 002e9c80 has its CatchHandler @ 002eb042 */
        p_Var17 = operator_new(0x18);
        *(_Rb_tree_node_base **)(p_Var17 + 0x10) = p_Var26;
        std::__detail::_List_node_base::_M_hook(p_Var17);
        *(long *)(lVar16 + 0x50) = *(long *)(lVar16 + 0x50) + 1;
        *(_List_node_base **)(p_Var26 + 0x38) = p_Var17;
        goto LAB_002eaf29;
      }
    }
  }
  iVar13 = *(int *)(lVar16 + 0x58);
  pthread_mutex_unlock(__mutex);
  bVar12 = *pbVar53;
  if (bVar12 != 0) {
    lVar38 = 0;
    pbVar30 = pbVar53;
    do {
      pbVar31 = pbVar30 + 1;
      if ((char)bVar12 < '\0') {
        do {
          bVar12 = pbVar30[1];
          pbVar31 = pbVar30 + 1;
          pbVar30 = pbVar31;
        } while ((bVar12 & 0xc0) == 0x80);
      }
      else {
        if (bVar12 == 0) goto LAB_002e9d20;
        bVar12 = *pbVar31;
      }
      lVar38 = lVar38 + 1;
      pbVar30 = pbVar31;
    } while( true );
  }
  pwVar34 = L"";
LAB_002e9f3e:
  sVar18 = wcslen(pwVar34);
  if (sVar18 >> 0x3c != 0) {
                    /* try { // try from 002eb01e to 002eb029 has its CatchHandler @ 002eb07d */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::reserve");
  }
  if (sVar18 == 0) {
    puVar23 = (ulong *)0x0;
    puVar21 = (ulong *)0x0;
  }
  else {
                    /* try { // try from 002e9f77 to 002e9f7b has its CatchHandler @ 002eb07d */
    puVar21 = operator_new(sVar18 * 8);
    puVar52 = puVar21 + sVar18;
    pwVar42 = pwVar34 + sVar18;
    puVar23 = puVar21;
    do {
      wVar32 = *pwVar34;
      if ((UnicodeDataTable::getDataForCodepoint(unsigned_int)::data == '\0') &&
         (iVar40 = __cxa_guard_acquire(), iVar40 != 0)) {
                    /* try { // try from 002ea1d6 to 002ea1da has its CatchHandler @ 002eb031 */
        UnicodeDataTable::getDataForCodepoint(unsigned_int)::{lambda()#1}::operator()();
        __cxa_atexit(Array<juce::UnicodeEntry,juce::DummyCriticalSection,0>::~Array,
                     &UnicodeDataTable::getDataForCodepoint(unsigned_int)::data,&__dso_handle);
        __cxa_guard_release();
      }
      if ((uint)wVar32 < (uint)DAT_0071ccbc) {
        uVar39 = CONCAT44(*(undefined4 *)
                           (UnicodeDataTable::getDataForCodepoint(unsigned_int)::data +
                           (long)wVar32 * 4),wVar32);
        if (puVar23 != puVar52) goto LAB_002e9fac;
LAB_002ea007:
        lVar38 = (long)puVar52 - (long)puVar21;
        if (lVar38 == 0x7ffffffffffffff8) {
                    /* try { // try from 002eb004 to 002eb00f has its CatchHandler @ 002eb07d */
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar50 = lVar38 >> 3;
        uVar19 = uVar50;
        if (lVar38 == 0) {
          uVar19 = 1;
        }
        uVar33 = uVar19 + uVar50;
        if (0xfffffffffffffff < uVar33) {
          uVar33 = 0xfffffffffffffff;
        }
        if (CARRY8(uVar19,uVar50)) {
          uVar33 = 0xfffffffffffffff;
        }
        if (uVar33 == 0) {
          puVar22 = (ulong *)0x0;
        }
        else {
                    /* try { // try from 002ea064 to 002ea068 has its CatchHandler @ 002eb07b */
          puVar22 = operator_new(uVar33 * 8);
        }
        puVar22[uVar50] = uVar39;
        puVar51 = puVar22;
        if (puVar21 != puVar52) {
          uVar39 = (long)puVar23 + (-8 - (long)puVar21);
          puVar23 = puVar21;
          if (0x17 < uVar39) {
            uVar47 = (uVar39 >> 3) + 1;
            uVar39 = uVar47 & 0xfffffffffffffffc;
            uVar50 = (uVar39 - 4 >> 2) + 1;
            uVar19 = (ulong)((uint)uVar50 & 3);
            if (uVar39 - 4 < 0xc) {
              lVar38 = 0;
            }
            else {
              uVar50 = uVar50 & 0x7ffffffffffffffc;
              lVar38 = 0;
              do {
                uVar6 = (puVar21 + lVar38)[1];
                uVar7 = puVar21[lVar38 + 2];
                uVar8 = (puVar21 + lVar38 + 2)[1];
                puVar22[lVar38] = puVar21[lVar38];
                (puVar22 + lVar38)[1] = uVar6;
                puVar22[lVar38 + 2] = uVar7;
                (puVar22 + lVar38 + 2)[1] = uVar8;
                uVar6 = (puVar21 + lVar38 + 4)[1];
                uVar7 = puVar21[lVar38 + 6];
                uVar8 = (puVar21 + lVar38 + 6)[1];
                puVar22[lVar38 + 4] = puVar21[lVar38 + 4];
                (puVar22 + lVar38 + 4)[1] = uVar6;
                puVar22[lVar38 + 6] = uVar7;
                (puVar22 + lVar38 + 6)[1] = uVar8;
                uVar6 = (puVar21 + lVar38 + 8)[1];
                uVar7 = puVar21[lVar38 + 10];
                uVar8 = (puVar21 + lVar38 + 10)[1];
                puVar22[lVar38 + 8] = puVar21[lVar38 + 8];
                (puVar22 + lVar38 + 8)[1] = uVar6;
                puVar22[lVar38 + 10] = uVar7;
                (puVar22 + lVar38 + 10)[1] = uVar8;
                uVar6 = (puVar21 + lVar38 + 0xc)[1];
                uVar7 = puVar21[lVar38 + 0xe];
                uVar8 = (puVar21 + lVar38 + 0xe)[1];
                puVar22[lVar38 + 0xc] = puVar21[lVar38 + 0xc];
                (puVar22 + lVar38 + 0xc)[1] = uVar6;
                puVar22[lVar38 + 0xe] = uVar7;
                (puVar22 + lVar38 + 0xe)[1] = uVar8;
                lVar38 = lVar38 + 0x10;
                uVar50 = uVar50 - 4;
              } while (uVar50 != 0);
            }
            if (uVar19 != 0) {
              lVar41 = 0;
              do {
                puVar1 = (undefined8 *)((long)puVar21 + lVar41 + lVar38 * 8);
                uVar25 = puVar1[1];
                puVar24 = (undefined8 *)((long)puVar21 + lVar41 + lVar38 * 8 + 0x10);
                uVar9 = *puVar24;
                uVar10 = puVar24[1];
                puVar24 = (undefined8 *)((long)puVar22 + lVar41 + lVar38 * 8);
                *puVar24 = *puVar1;
                puVar24[1] = uVar25;
                puVar24 = (undefined8 *)((long)puVar22 + lVar41 + lVar38 * 8 + 0x10);
                *puVar24 = uVar9;
                puVar24[1] = uVar10;
                lVar41 = lVar41 + 0x20;
              } while (uVar19 * 0x20 != lVar41);
            }
            puVar51 = puVar22 + uVar39;
            if (uVar47 == uVar39) goto LAB_002ea1a4;
            puVar23 = puVar21 + uVar39;
          }
          do {
            *puVar51 = *puVar23;
            puVar23 = puVar23 + 1;
            puVar51 = puVar51 + 1;
          } while (puVar23 != puVar52);
        }
LAB_002ea1a4:
        if (puVar21 != (ulong *)0x0) {
          operator_delete(puVar21);
        }
        puVar52 = puVar22 + uVar33;
        puVar23 = puVar51;
        puVar21 = puVar22;
      }
      else {
        uVar39 = (ulong)(uint)wVar32;
        if (puVar23 == puVar52) goto LAB_002ea007;
LAB_002e9fac:
        *puVar23 = uVar39;
      }
      puVar23 = puVar23 + 1;
      pwVar34 = pwVar34 + 1;
    } while (pwVar34 != pwVar42);
  }
  uVar14 = 0;
  uVar39 = (long)puVar23 - (long)puVar21;
  local_40 = (uint)(uVar39 >> 3);
  if ((int)local_40 < 1) {
    local_40 = 0;
    local_98 = (undefined8 *)0x0;
  }
  else {
    uVar14 = ((int)(((uint)(uVar39 >> 0x22) & 1) + local_40) >> 1) + local_40 + 8 & 0xfffffff8;
    if ((int)uVar14 < 1) {
      local_98 = (undefined8 *)0x0;
    }
    else {
      local_98 = malloc((ulong)uVar14 * 0xc);
    }
    puVar24 = local_98;
    if (2 < local_40 - 1) {
      uVar37 = local_40 & 0xfffffffc;
      do {
        *(undefined4 *)(puVar24 + 1) = 0;
        *puVar24 = 0;
        *(undefined4 *)((long)puVar24 + 0x14) = 0;
        *(undefined8 *)((long)puVar24 + 0xc) = 0;
        *(undefined4 *)(puVar24 + 4) = 0;
        puVar24[3] = 0;
        *(undefined8 *)((long)puVar24 + 0x24) = 0;
        *(undefined4 *)((long)puVar24 + 0x2c) = 0;
        puVar24 = puVar24 + 6;
        uVar37 = uVar37 - 4;
      } while (uVar37 != 0);
    }
    if ((uVar39 >> 3 & 3) != 0) {
      lVar38 = 0;
      do {
        *(undefined4 *)((long)puVar24 + lVar38 + 8) = 0;
        *(undefined8 *)((long)puVar24 + lVar38) = 0;
        lVar38 = lVar38 + 0xc;
      } while ((local_40 & 3) * 0xc != (int)lVar38);
    }
  }
  if (uVar39 != 0) {
    uVar50 = (long)uVar39 >> 3;
    uVar19 = 1;
    if (1 < uVar50) {
      uVar19 = uVar50;
    }
    if (uVar39 < 0x10) {
      uVar33 = 0;
    }
    else {
      lVar38 = 0;
      uVar33 = 0;
      do {
        *(uint *)((long)local_98 + (lVar38 >> 0x20) * 0xc) = (uint)puVar21[uVar33];
        *(uint *)((long)local_98 + (lVar38 + 0x100000000 >> 0x20) * 0xc) = (uint)puVar21[uVar33 + 1]
        ;
        uVar33 = uVar33 + 2;
        lVar38 = lVar38 + 0x200000000;
      } while ((uVar19 & 0xfffffffffffffffe) != uVar33);
    }
    if ((uVar19 & 1) != 0) {
      *(uint *)((long)local_98 + (long)(int)uVar33 * 0xc) = (uint)puVar21[uVar33];
    }
    uVar37 = (uint)*puVar21;
    cVar36 = '\x03';
    if (uVar37 < 0xe01f0) {
      cVar36 = '\x02';
      if (PrimaryScriptData
          [(ulong)(uVar37 & 0xf) +
           (ulong)*(ushort *)
                   (MainScriptIndexes +
                   ((ulong)(uVar37 >> 4 & 0x1f) +
                   (ulong)*(ushort *)(BranchScriptIndexes + (ulong)(uVar37 >> 9) * 2)) * 2)] !=
          '\x01') {
        cVar36 = PrimaryScriptData
                 [(ulong)(uVar37 & 0xf) +
                  (ulong)*(ushort *)
                          (MainScriptIndexes +
                          ((ulong)(uVar37 >> 4 & 0x1f) +
                          (ulong)*(ushort *)(BranchScriptIndexes + (ulong)(uVar37 >> 9) * 2)) * 2)];
      }
    }
    uVar25 = TR24::mapTextScript(cVar36);
    *(int *)(local_98 + 1) = (int)uVar25;
    lVar38 = 0x100000000;
    if (uVar39 != 8) {
      lVar41 = 8;
      do {
        uVar37 = *(uint *)((long)puVar21 + lVar41);
        cVar45 = '\x03';
        if (uVar37 < 0xe01f0) {
          cVar45 = PrimaryScriptData
                   [(ulong)(uVar37 & 0xf) +
                    (ulong)*(ushort *)
                            (MainScriptIndexes +
                            ((ulong)(uVar37 >> 4 & 0x1f) +
                            (ulong)*(ushort *)(BranchScriptIndexes + (ulong)(uVar37 >> 9) * 2)) * 2)
                   ];
        }
        if ((byte)(cVar45 - 1U) < 2) {
          cVar45 = cVar36;
        }
        cVar36 = cVar45;
        uVar25 = TR24::mapTextScript(cVar36);
        *(int *)((long)local_98 + (lVar38 >> 0x20) * 0xc + 8) = (int)uVar25;
        lVar38 = lVar38 + 0x100000000;
        lVar41 = lVar41 + 8;
      } while (uVar50 * 8 != lVar41);
    }
    if (uVar39 != 0) {
      bVar54 = false;
      uVar39 = 0;
      cVar36 = '\0';
      iVar40 = 0;
      bVar48 = false;
      do {
        bVar12 = *(byte *)((long)puVar21 + uVar39 * 8 + 4);
        pwVar34 = (wchar_t *)(ulong)bVar12;
        pwVar42 = (wchar_t *)0x0;
        switch(bVar12) {
        case 0xb:
        case 0x28:
        case 0x2a:
          break;
        default:
          pwVar42 = pwVar34;
          break;
        case 0x10:
          pwVar42 = (wchar_t *)0x20;
          break;
        case 0x27:
          uVar37 = (uint)puVar21[uVar39];
          bVar12 = 0x1e;
          if (uVar37 < 0x110000) {
            bVar12 = PrimaryGeneralCategoryData
                     [(ulong)(uVar37 & 0xf) +
                      (ulong)*(ushort *)
                              (MainGeneralCategoryIndexes +
                              ((ulong)(uVar37 >> 4 & 0x3f) +
                              (ulong)*(ushort *)
                                      (BranchGeneralCategoryIndexes + (ulong)(uVar37 >> 10) * 2)) *
                              2)];
          }
          pwVar42 = (wchar_t *)(ulong)(byte)(((bVar12 & 0xfe) == 6) * '\x02');
        }
        if (uVar39 == 0) {
          uVar37 = (int)pwVar42 - 5;
          if ((byte)uVar37 < 3) {
            pwVar42 = (wchar_t *)(ulong)(0x80101 >> ((byte)((uVar37 & 0xff) << 3) & 0x1f));
          }
        }
        else {
          pwVar5 = in_R10;
          if (cVar36 == '\0') {
            pwVar5 = pwVar42;
          }
          pwVar42 = (wchar_t *)((ulong)pwVar5 & 0xff);
        }
        bVar12 = (byte)pwVar42;
        if (uVar39 == uVar50 - 1) {
          uVar15 = 1;
          if ((byte)(bVar12 - 3) < 4) {
            uVar15 = *(undefined4 *)(&DAT_005de380 + (long)(char)(bVar12 - 3) * 4);
          }
          *(undefined4 *)((long)local_98 + (long)iVar40 * 0xc + 4) = uVar15;
          goto LAB_002ea96b;
        }
        bVar46 = *(byte *)((long)puVar21 + uVar39 * 8 + 0xc);
        uVar19 = 0;
        switch(bVar46) {
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x29:
          uVar19 = (ulong)bVar46;
          break;
        case 0x10:
          uVar19 = 0x20;
          goto joined_r0x002ea680;
        case 0x27:
          uVar37 = (uint)puVar21[uVar39 + 1];
          bVar46 = 0x1e;
          if (uVar37 < 0x110000) {
            bVar46 = PrimaryGeneralCategoryData
                     [(ulong)(uVar37 & 0xf) +
                      (ulong)*(ushort *)
                              (MainGeneralCategoryIndexes +
                              ((ulong)(uVar37 >> 4 & 0x3f) +
                              (ulong)*(ushort *)
                                      (BranchGeneralCategoryIndexes + (ulong)(uVar37 >> 10) * 2)) *
                              2)];
          }
          uVar19 = (ulong)(byte)(((bVar46 & 0xfe) == 6) * '\x02');
joined_r0x002ea680:
          uVar37 = 2;
          if (bVar12 != 1) goto LAB_002ea51d;
          goto LAB_002ea6b0;
        default:
          uVar19 = (ulong)bVar46;
        case 0xb:
        case 0x28:
        case 0x2a:
        }
        uVar37 = 2;
        if (bVar12 == 1) {
LAB_002ea6b0:
          cVar36 = '\0';
          bVar49 = bVar48;
          goto switchD_002ea76b_caseD_0;
        }
LAB_002ea51d:
        uVar37 = 2;
        bVar46 = (byte)uVar19;
        if ((bVar12 == 3) && (bVar46 == 5)) {
LAB_002ea529:
          uVar37 = 0;
          goto LAB_002ea6b0;
        }
        if ((bVar12 < 7) && ((0x68U >> ((uint)pwVar42 & 0x1f) & 1) != 0)) goto LAB_002ea6b0;
        if ((bVar46 < 10) && ((0x2eaUL >> (uVar19 & 0x3f) & 1) != 0)) goto LAB_002ea529;
        if (((bVar12 == 10) || ((bVar46 < 0x2a && ((0x20008260000U >> (uVar19 & 0x3f) & 1) != 0))))
           || ((bVar54 && ((bVar12 == 0xd || (bVar12 == 0x19)))))) {
          uVar37 = 0;
          goto LAB_002ea6b0;
        }
        bVar54 = bVar12 == 0x18;
        bVar49 = false;
        if (((bVar12 == 0x26) && (bVar49 = (bool)(bVar48 ^ 1), bVar46 == 0x26)) && (!bVar49)) {
          cVar36 = '\0';
          uVar37 = 1;
          bVar49 = false;
          goto switchD_002ea76b_caseD_0;
        }
        cVar36 = BreakPairTable::table[uVar19 + ((ulong)pwVar42 & 0xff) * 0x2c];
        uVar37 = 1;
        switch(cVar36) {
        case '\0':
          break;
        case '\x01':
          uVar37 = (uint)(bVar46 == 2);
          cVar36 = '\0';
          break;
        case '\x02':
          uVar37 = 0;
          cVar36 = '\0';
          break;
        case '\x03':
        case '\x04':
          if ((bVar12 == 9) || (cVar36 = '\x01', bVar12 == 7)) {
            cVar36 = '\0';
            pwVar42 = (wchar_t *)((ulong)in_R10 & 0xffffffff);
          }
          if (uVar39 < uVar50) {
            while( true ) {
              *(undefined4 *)((long)local_98 + (long)iVar40 * 0xc + 4) = 0;
              cVar45 = (char)pwVar34;
              if (((cVar45 != '\x02') && (cVar45 != '\n')) &&
                 ((cVar45 != '\'' ||
                  ((uVar2 = (uint)puVar21[uVar39], 0x10ffff < uVar2 ||
                   ((PrimaryGeneralCategoryData
                     [(ulong)(uVar2 & 0xf) +
                      (ulong)*(ushort *)
                              (MainGeneralCategoryIndexes +
                              ((ulong)(uVar2 >> 4 & 0x3f) +
                              (ulong)*(ushort *)
                                      (BranchGeneralCategoryIndexes + (ulong)(uVar2 >> 10) * 2)) * 2
                              )] & 0xfe) != 6)))))) {
                iVar40 = iVar40 + 1;
                goto LAB_002ea6c5;
              }
              if ((2 - uVar50) + uVar39 == 0) break;
              pwVar34 = (wchar_t *)(ulong)*(byte *)((long)puVar21 + uVar39 * 8 + 0xc);
              iVar40 = iVar40 + 1;
              uVar39 = uVar39 + 1;
            }
            iVar40 = iVar40 + 1;
            uVar39 = uVar50;
            in_R10 = pwVar42;
            break;
          }
          goto LAB_002ea6c5;
        default:
          cVar36 = '\0';
          goto LAB_002ea6c2;
        }
switchD_002ea76b_caseD_0:
        lVar38 = (long)iVar40;
        iVar40 = iVar40 + 1;
        *(uint *)((long)local_98 + lVar38 * 0xc + 4) = uVar37;
LAB_002ea6c2:
        pwVar42 = (wchar_t *)((ulong)in_R10 & 0xffffffff);
LAB_002ea6c5:
        uVar39 = uVar39 + 1;
        in_R10 = pwVar42;
        bVar48 = bVar49;
      } while (uVar39 < uVar50);
    }
  }
  if (puVar21 != (ulong *)0x0) {
LAB_002ea96b:
    operator_delete(puVar21);
  }
  iVar40 = pthread_mutex_lock(__mutex);
  if (iVar40 != 0) {
                    /* try { // try from 002eb02a to 002eb030 has its CatchHandler @ 002eb067 */
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar40);
  }
  iVar40 = *(int *)(lVar16 + 0x58);
  if ((iVar13 == iVar40) ||
     (p_Var35 = *(_Rb_tree_node_base **)(lVar16 + 0x20), p_Var35 == (_Rb_tree_node_base *)0x0)) {
LAB_002eaa2c:
    *(int *)(lVar16 + 0x58) = iVar40 + 1;
    uVar39 = *(ulong *)(lVar16 + 0x38);
    while (0x7f < uVar39) {
      pvVar3 = *(void **)(lVar16 + 0x40);
      pvVar29 = (void *)std::_Rb_tree_rebalance_for_erase
                                  (*(_Rb_tree_node_base **)((long)pvVar3 + 0x10),
                                   (_Rb_tree_node_base *)(lVar16 + 0x18));
      *(undefined4 *)((long)pvVar29 + 0x34) = 0;
      free(*(void **)((long)pvVar29 + 0x28));
      piVar44 = (int *)(*(long *)((long)pvVar29 + 0x20) + -0x10);
      if (piVar44 != &emptyString) {
        LOCK();
        iVar13 = *piVar44;
        *piVar44 = *piVar44 + -1;
        UNLOCK();
        if (iVar13 == 0) {
          operator_delete__(piVar44);
        }
      }
      operator_delete(pvVar29);
      *(long *)(lVar16 + 0x38) = *(long *)(lVar16 + 0x38) + -1;
      *(long *)(lVar16 + 0x50) = *(long *)(lVar16 + 0x50) + -1;
      std::__detail::_List_node_base::_M_unhook();
      operator_delete(pvVar3);
      uVar39 = *(ulong *)(lVar16 + 0x38);
    }
    p_Var35 = *(_Rb_tree_node_base **)(lVar16 + 0x20);
    if (p_Var35 == (_Rb_tree_node_base *)0x0) {
      p_Var35 = (_Rb_tree_node_base *)(lVar16 + 0x18);
LAB_002eab6a:
                    /* try { // try from 002eab6a to 002eab73 has its CatchHandler @ 002eb044 */
      p_Var26 = operator_new(0x40);
      *(byte **)(p_Var26 + 0x20) = pbVar53;
      *(undefined8 **)(p_Var26 + 0x28) = local_98;
      *(uint *)(p_Var26 + 0x30) = uVar14;
      *(uint *)(p_Var26 + 0x34) = local_40;
      *(undefined8 *)(p_Var26 + 0x38) = 0;
      if (p_Var35 == (_Rb_tree_node_base *)(lVar16 + 0x18)) {
        if (*(long *)(lVar16 + 0x38) == 0) {
LAB_002eac0f:
          p_Var27 = *(_Rb_tree_node_base **)(lVar16 + 0x20);
          if (*(_Rb_tree_node_base **)(lVar16 + 0x20) != (_Rb_tree_node_base *)0x0) {
            do {
              p_Var35 = p_Var27;
              uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 (pbVar53,*(byte **)(p_Var35 + 0x20));
              p_Var27 = *(_Rb_tree_node_base **)(p_Var35 + (ulong)(-1 < (int)uVar14) * 8 + 0x10);
            } while (*(_Rb_tree_node_base **)(p_Var35 + (ulong)(-1 < (int)uVar14) * 8 + 0x10) !=
                     (_Rb_tree_node_base *)0x0);
            p_Var28 = p_Var35;
            if ((int)uVar14 < 0) goto LAB_002ead63;
LAB_002ead7f:
            pbVar43 = *(byte **)(p_Var28 + 0x20);
            goto LAB_002eaddd;
          }
          p_Var35 = (_Rb_tree_node_base *)(lVar16 + 0x18);
LAB_002ead63:
          if (p_Var35 != *(_Rb_tree_node_base **)(lVar16 + 0x28)) goto LAB_002ead74;
LAB_002eae1f:
          p_Var11 = (_Rb_tree_node_base *)0x0;
          goto joined_r0x002eae99;
        }
        p_Var27 = *(_Rb_tree_node_base **)(lVar16 + 0x30);
        uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (*(byte **)(p_Var27 + 0x20),pbVar53);
        if (-1 < (int)uVar14) goto LAB_002eac0f;
        p_Var28 = (_Rb_tree_node_base *)0x0;
LAB_002eae29:
        bVar54 = true;
        if ((p_Var28 == (_Rb_tree_node_base *)0x0) &&
           (p_Var27 != (_Rb_tree_node_base *)(lVar16 + 0x18))) {
          uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             (pbVar53,*(byte **)(p_Var27 + 0x20));
          bVar54 = SUB41(uVar14 >> 0x1f,0);
        }
        std::_Rb_tree_insert_and_rebalance
                  (bVar54,p_Var26,p_Var27,(_Rb_tree_node_base *)(lVar16 + 0x18));
        *(long *)(lVar16 + 0x38) = *(long *)(lVar16 + 0x38) + 1;
      }
      else {
        pbVar43 = *(byte **)(p_Var35 + 0x20);
        uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (pbVar53,pbVar43);
        if ((int)uVar14 < 0) {
          p_Var4 = *(_Rb_tree_node_base **)(lVar16 + 0x28);
          p_Var11 = p_Var35;
          if (p_Var4 != p_Var35) {
            p_Var27 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var35);
            uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (*(byte **)(p_Var27 + 0x20),pbVar53);
            if ((int)uVar14 < 0) {
              if (*(long *)(p_Var27 + 0x18) == 0) {
                p_Var28 = (_Rb_tree_node_base *)0x0;
                goto LAB_002eae29;
              }
              goto joined_r0x002eae99;
            }
            p_Var27 = *(_Rb_tree_node_base **)(lVar16 + 0x20);
            if (*(_Rb_tree_node_base **)(lVar16 + 0x20) == (_Rb_tree_node_base *)0x0) {
              p_Var35 = (_Rb_tree_node_base *)(lVar16 + 0x18);
LAB_002eadc0:
              if (p_Var35 == p_Var4) {
                p_Var35 = p_Var4;
                p_Var11 = (_Rb_tree_node_base *)0x0;
                goto joined_r0x002eae99;
              }
              p_Var28 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var35);
            }
            else {
              do {
                p_Var35 = p_Var27;
                uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                   (pbVar53,*(byte **)(p_Var35 + 0x20));
                p_Var27 = *(_Rb_tree_node_base **)(p_Var35 + (ulong)(-1 < (int)uVar14) * 8 + 0x10);
              } while (*(_Rb_tree_node_base **)(p_Var35 + (ulong)(-1 < (int)uVar14) * 8 + 0x10) !=
                       (_Rb_tree_node_base *)0x0);
              p_Var28 = p_Var35;
              if ((int)uVar14 < 0) goto LAB_002eadc0;
            }
            pbVar43 = *(byte **)(p_Var28 + 0x20);
LAB_002eaddd:
            uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                               (pbVar43,pbVar53);
            p_Var11 = (_Rb_tree_node_base *)0x0;
            if (-1 < (int)uVar14) goto LAB_002eae9b;
          }
joined_r0x002eae99:
          p_Var28 = p_Var11;
          p_Var27 = p_Var35;
          if (p_Var35 != (_Rb_tree_node_base *)0x0) goto LAB_002eae29;
        }
        else {
          uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                             (pbVar43,pbVar53);
          if ((int)uVar14 < 0) {
            if (*(_Rb_tree_node_base **)(lVar16 + 0x30) != p_Var35) {
              p_Var28 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var35);
              uVar14 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                 (pbVar53,*(byte **)(p_Var28 + 0x20));
              if ((int)uVar14 < 0) {
                p_Var27 = p_Var28;
                if (*(long *)(p_Var35 + 0x18) != 0) goto LAB_002eae29;
                p_Var11 = (_Rb_tree_node_base *)0x0;
                goto joined_r0x002eae99;
              }
              p_Var27 = *(_Rb_tree_node_base **)(lVar16 + 0x20);
              if (*(_Rb_tree_node_base **)(lVar16 + 0x20) != (_Rb_tree_node_base *)0x0) {
                do {
                  p_Var35 = p_Var27;
                  uVar14 = CharacterFunctions::
                           compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                                     (pbVar53,*(byte **)(p_Var35 + 0x20));
                  p_Var27 = *(_Rb_tree_node_base **)(p_Var35 + (ulong)(-1 < (int)uVar14) * 8 + 0x10)
                  ;
                } while (*(_Rb_tree_node_base **)(p_Var35 + (ulong)(-1 < (int)uVar14) * 8 + 0x10) !=
                         (_Rb_tree_node_base *)0x0);
                p_Var28 = p_Var35;
                if ((int)uVar14 < 0) goto LAB_002eae0e;
                goto LAB_002ead7f;
              }
              p_Var35 = (_Rb_tree_node_base *)(lVar16 + 0x18);
LAB_002eae0e:
              if (p_Var35 == *(_Rb_tree_node_base **)(lVar16 + 0x28)) goto LAB_002eae1f;
LAB_002ead74:
              p_Var28 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var35);
              goto LAB_002ead7f;
            }
            goto LAB_002eae1f;
          }
          p_Var28 = p_Var35;
        }
LAB_002eae9b:
        *(undefined4 *)(p_Var26 + 0x34) = 0;
        free(local_98);
        piVar44 = (int *)(*(long *)(p_Var26 + 0x20) + -0x10);
        if (piVar44 != &emptyString) {
          LOCK();
          iVar13 = *piVar44;
          *piVar44 = *piVar44 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            operator_delete__(piVar44);
          }
        }
        operator_delete(p_Var26);
        p_Var26 = p_Var28;
      }
      pbVar53 = &DAT_0061ac58;
      local_98 = (undefined8 *)0x0;
    }
    else {
      p_Var26 = (_Rb_tree_node_base *)(lVar16 + 0x18);
      do {
        uVar37 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                           (*(byte **)(p_Var35 + 0x20),pbVar53);
        p_Var27 = p_Var35 + 0x18;
        if (-1 < (int)uVar37) {
          p_Var27 = p_Var35 + 0x10;
          p_Var26 = p_Var35;
        }
        p_Var35 = *(_Rb_tree_node_base **)p_Var27;
      } while (p_Var35 != (_Rb_tree_node_base *)0x0);
      p_Var35 = (_Rb_tree_node_base *)(lVar16 + 0x18);
      if (p_Var26 == (_Rb_tree_node_base *)(lVar16 + 0x18)) goto LAB_002eab6a;
      uVar37 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (pbVar53,*(byte **)(p_Var26 + 0x20));
      p_Var35 = p_Var26;
      if ((int)uVar37 < 0) goto LAB_002eab6a;
    }
    free(local_98);
                    /* try { // try from 002eaeee to 002eaef7 has its CatchHandler @ 002eb053 */
    p_Var17 = operator_new(0x18);
    *(_Rb_tree_node_base **)(p_Var17 + 0x10) = p_Var26;
    std::__detail::_List_node_base::_M_hook(p_Var17);
    *(long *)(lVar16 + 0x50) = *(long *)(lVar16 + 0x50) + 1;
    *(_List_node_base **)(p_Var26 + 0x38) = p_Var17;
    local_98 = (undefined8 *)0x0;
  }
  else {
    p_Var26 = (_Rb_tree_node_base *)(lVar16 + 0x18);
    do {
      uVar37 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                         (*(byte **)(p_Var35 + 0x20),pbVar53);
      p_Var27 = p_Var35 + 0x18;
      if (-1 < (int)uVar37) {
        p_Var27 = p_Var35 + 0x10;
        p_Var26 = p_Var35;
      }
      p_Var35 = *(_Rb_tree_node_base **)p_Var27;
    } while (p_Var35 != (_Rb_tree_node_base *)0x0);
    if (p_Var26 == (_Rb_tree_node_base *)(lVar16 + 0x18)) goto LAB_002eaa2c;
    uVar37 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                       (pbVar53,*(byte **)(p_Var26 + 0x20));
    if ((int)uVar37 < 0) {
      p_Var26 = (_Rb_tree_node_base *)(lVar16 + 0x18);
    }
    if (p_Var26 == (_Rb_tree_node_base *)(lVar16 + 0x18)) goto LAB_002eaa2c;
  }
  free(local_98);
LAB_002eaf29:
  pthread_mutex_unlock(__mutex);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar14 = *(uint *)(p_Var26 + 0x34);
  if (0 < (int)uVar14) {
    pvVar3 = *(void **)(p_Var26 + 0x28);
    uVar37 = uVar14 + (uVar14 >> 1) + 8 & 0xfffffff8;
    if ((int)uVar37 < 1) {
      pvVar29 = (void *)0x0;
    }
    else {
      pvVar29 = malloc((ulong)uVar37 * 0xc);
      *(void **)this = pvVar29;
    }
    *(uint *)(this + 8) = uVar37;
    memcpy(pvVar29,pvVar3,(ulong)uVar14 * 0xc);
  }
  *(uint *)(this + 0xc) = uVar14;
  pbVar53 = pbVar53 + -0x10;
  if (pbVar53 != (byte *)&emptyString) {
    LOCK();
    iVar13 = *(int *)pbVar53;
    *(int *)pbVar53 = *(int *)pbVar53 + -1;
    UNLOCK();
    if (iVar13 == 0) {
      operator_delete__(pbVar53);
      return;
    }
  }
  return;
LAB_002e9d20:
  sVar18 = strlen((char *)pbVar53);
  uVar14 = (int)sVar18 + 4U & 0xfffffffc;
  if (pbVar43 == (byte *)&emptyString) {
    lVar38 = (ulong)uVar14 + lVar38 * 4;
                    /* try { // try from 002e9dd0 to 002e9dd4 has its CatchHandler @ 002eb076 */
    puVar20 = operator_new__(lVar38 + 0x1f);
    LOCK();
    *puVar20 = 0;
    UNLOCK();
    *(long *)(puVar20 + 2) = lVar38 + 8;
    pbVar30 = (byte *)(puVar20 + 4);
    *(undefined1 *)(puVar20 + 4) = 0;
  }
  else {
    uVar19 = (ulong)uVar14 + lVar38 * 4 + 5;
    uVar39 = *(ulong *)(pbVar53 + -8);
    if (uVar19 <= uVar39) {
      pbVar30 = pbVar53;
      if (*(int *)pbVar43 < 1) goto LAB_002e9dec;
      uVar39 = *(ulong *)(pbVar53 + -8);
    }
    if (uVar39 < uVar19) {
      uVar39 = uVar19;
    }
    uVar39 = uVar39 + 3 & 0xfffffffffffffffc;
                    /* try { // try from 002e9d72 to 002e9d76 has its CatchHandler @ 002eb076 */
    puVar20 = operator_new__(uVar39 + 0x17);
    LOCK();
    *puVar20 = 0;
    UNLOCK();
    *(ulong *)(puVar20 + 2) = uVar39;
    pbVar30 = (byte *)(puVar20 + 4);
    memcpy(pbVar30,pbVar53,*(size_t *)(pbVar53 + -8));
    LOCK();
    pbVar53 = pbVar53 + -0x10;
    iVar40 = *(int *)pbVar53;
    *(int *)pbVar53 = *(int *)pbVar53 + -1;
    UNLOCK();
    if (iVar40 == 0) {
      operator_delete__(pbVar43);
    }
  }
LAB_002e9dec:
  pwVar34 = (wchar_t *)(pbVar30 + (int)uVar14);
  bVar12 = *pbVar30;
  pwVar42 = pwVar34;
  pbVar53 = pbVar30;
  while( true ) {
    wVar32 = (wchar_t)bVar12;
    pbVar43 = (byte *)((long)pbVar53 + 1);
    if ((char)bVar12 < '\0') {
      if ((bVar12 & 0x40) == 0) {
        wVar32 = wVar32 & 0x7f;
      }
      else {
        if ((bVar12 & 0x20) == 0) {
          uVar14 = 0x3f;
          lVar38 = 0;
          bVar54 = false;
          bVar48 = false;
        }
        else {
          bVar54 = true;
          if ((bVar12 & 0x10) == 0) {
            uVar14 = 0x1f;
            lVar38 = 1;
            bVar48 = false;
          }
          else {
            uVar14 = 0xf;
            lVar38 = 2;
            bVar48 = true;
          }
        }
        wVar32 = wVar32 & uVar14;
        if ((*(byte *)((long)pbVar53 + 1) & 0xffffffc0) == 0x80) {
          pbVar31 = (byte *)((long)pbVar53 + lVar38 + 2);
          wVar32 = *(byte *)((long)pbVar53 + 1) & 0x3f | wVar32 << 6;
          pbVar43 = pbVar31;
          if (bVar54) {
            uVar14 = (uint)*(byte *)((long)pbVar53 + 2);
            pbVar43 = (byte *)((long)pbVar53 + 2);
            if ((uVar14 & 0xffffffc0) == 0x80) {
              wVar32 = uVar14 & 0x3f | wVar32 << 6;
              pbVar43 = pbVar31;
              if (bVar48) {
                uVar14 = (uint)*(byte *)((long)pbVar53 + 3);
                pbVar43 = (byte *)((long)pbVar53 + 3);
                if ((uVar14 & 0xffffffc0) == 0x80) {
                  wVar32 = wVar32 << 6 | uVar14 & 0x3f;
                  pbVar43 = pbVar31;
                }
              }
            }
          }
        }
      }
    }
    if (wVar32 == L'\0') break;
    *pwVar42 = wVar32;
    pwVar42 = (wchar_t *)((long)pwVar42 + 4);
    bVar12 = *pbVar43;
    pbVar53 = pbVar43;
  }
  *pwVar42 = L'\0';
  in_R10 = pwVar34;
  pbVar53 = pbVar30;
  goto LAB_002e9f3e;
}


