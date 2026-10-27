// Function : fromPattern
// Namespace: juce:FreeTypeTypeface
// Entry    : 00300050
// Prototype: undefined fromPattern(FreeTypeTypeface * this, undefined8 param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 00300050 - 00300bfd


/* juce::FreeTypeTypeface::fromPattern(_FcPattern*) */

void __thiscall
juce::FreeTypeTypeface::fromPattern
          (FreeTypeTypeface *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          uint *param_4,ulong param_5)

{
  FreeTypeTypeface *pFVar1;
  long *plVar2;
  TypefaceFileAndIndex *this_00;
  _Rb_tree_node_base *p_Var3;
  long *plVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  DeletedAtShutdown *pDVar8;
  long lVar9;
  undefined4 *puVar10;
  ulong uVar11;
  _List_node_base *p_Var12;
  FTTypefaceList *pFVar13;
  hb_font_t *phVar14;
  FreeTypeTypeface *this_01;
  byte *pbVar15;
  void *pvVar16;
  _Rb_tree_node_base *p_Var17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  undefined8 extraout_RDX;
  _Rb_tree_node_base *p_Var20;
  byte bVar21;
  void *pvVar22;
  long lVar23;
  long lVar24;
  TypefaceFileAndIndex *this_02;
  int *piVar25;
  int *piVar26;
  void *pvVar27;
  byte *pbVar28;
  FreeTypeTypeface *pFVar29;
  undefined4 *local_b8;
  int local_b0;
  _Rb_tree_node_base *local_a8;
  int *local_a0;
  int local_94;
  FreeTypeTypeface *local_90;
  _Rb_tree_node_base *local_88;
  void *local_80;
  int local_74;
  pthread_mutex_t *local_70;
  undefined4 *local_68;
  byte *local_60;
  hb_font_t *local_58;
  void *local_50;
  byte *local_48;
  long local_40;
  byte *local_38;
  
  pDVar8 = SingletonHolder<juce::TypefaceFileCache,juce::DummyCriticalSection,false>::
           getWithoutChecking();
  if (pDVar8 == (DeletedAtShutdown *)0x0) {
    *(undefined8 *)this = 0;
    return;
  }
  if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
    pFVar13 = operator_new(0x28);
                    /* try { // try from 003000ad to 003000b4 has its CatchHandler @ 00300e19 */
    FTTypefaceList::FTTypefaceList(pFVar13);
    LOCK();
    UNLOCK();
    pvVar27 = *(void **)(pFVar13 + 8);
    pvVar22 = pvVar27;
    FTTypefaceList::singletonHolder = pFVar13;
    if (pvVar27 == (void *)0x0) goto LAB_003000c8;
LAB_00300089:
    LOCK();
    *(int *)((long)pvVar22 + 8) = *(int *)((long)pvVar22 + 8) + 1;
    UNLOCK();
    pvVar27 = pvVar22;
  }
  else {
    pvVar27 = *(void **)(FTTypefaceList::singletonHolder + 8);
    pvVar22 = pvVar27;
    if (pvVar27 != (void *)0x0) goto LAB_00300089;
LAB_003000c8:
    pvVar22 = (void *)0x0;
  }
                    /* try { // try from 003000ce to 003000df has its CatchHandler @ 00300e36 */
  FcConfigSubstitute(*(undefined8 *)((long)pvVar22 + 0x10),param_1,0);
  FcDefaultSubstitute(param_1);
  local_74 = 0;
                    /* try { // try from 003000ec to 003000f8 has its CatchHandler @ 00300e34 */
  lVar9 = FcFontMatch(*(undefined8 *)((long)pvVar22 + 0x10),param_1,&local_74);
  local_40 = lVar9;
  if (local_74 == 0) {
    local_48 = (byte *)0x0;
                    /* try { // try from 00300117 to 0030012f has its CatchHandler @ 00300e07 */
    iVar6 = FcPatternGetString(lVar9,"file",0,&local_48);
    if (iVar6 == 0) {
      local_94 = 0;
                    /* try { // try from 0030013c to 00300151 has its CatchHandler @ 00300dde */
      piVar25 = &local_94;
      iVar6 = FcPatternGetInteger(lVar9,"index",0);
      if (iVar6 == 0) {
                    /* try { // try from 003001b5 to 003001b9 has its CatchHandler @ 00300d5c */
        puVar10 = StringHolderUtils::createFromCharPointer<juce::CharPointer_UTF8>(local_48);
                    /* try { // try from 003001c2 to 003001d0 has its CatchHandler @ 00300d2e */
        local_b8 = puVar10;
        File::parseAbsolutePath
                  ((File *)&local_68,(uint *)&local_b8,extraout_RDX,piVar25,param_4,param_5);
        piVar25 = puVar10 + -4;
        if (piVar25 != &emptyString) {
          LOCK();
          iVar6 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            operator_delete__(piVar25);
          }
        }
        local_a0 = local_68 + -4;
        if (local_a0 != &emptyString) {
          LOCK();
          local_68[-4] = local_68[-4] + 1;
          UNLOCK();
          LOCK();
          local_68[-4] = local_68[-4] + 1;
          UNLOCK();
        }
        local_b8 = local_68;
        local_b0 = local_94;
        local_70 = *(pthread_mutex_t **)(pDVar8 + 0x58);
        local_90 = this;
        iVar6 = pthread_mutex_lock(local_70);
        if (iVar6 != 0) {
                    /* try { // try from 00300bf0 to 00300bf6 has its CatchHandler @ 00300d61 */
                    /* WARNING: Subroutine does not return */
          std::__throw_system_error(iVar6);
        }
        p_Var18 = *(_Rb_tree_node_base **)(pDVar8 + 0x18);
        p_Var3 = (_Rb_tree_node_base *)(pDVar8 + 0x10);
        if (p_Var18 == (_Rb_tree_node_base *)0x0) {
LAB_0030030c:
          iVar6 = *(int *)(pDVar8 + 0x50);
          pthread_mutex_unlock(local_70);
          if (FTTypefaceList::singletonHolder == (FTTypefaceList *)0x0) {
                    /* try { // try from 00300327 to 00300330 has its CatchHandler @ 00300d61 */
            pFVar13 = operator_new(0x28);
                    /* try { // try from 00300334 to 0030033b has its CatchHandler @ 00300c15 */
            FTTypefaceList::FTTypefaceList(pFVar13);
            LOCK();
            UNLOCK();
            FTTypefaceList::singletonHolder = pFVar13;
          }
                    /* try { // try from 0030034e to 0030035f has its CatchHandler @ 00300d61 */
          FTFaceWrapper::from((FTFaceWrapper *)&local_80,
                              (long *)(FTTypefaceList::singletonHolder + 8),&local_b8,local_b0);
          pvVar22 = local_80;
          if (local_80 == (void *)0x0) {
            this_01 = (FreeTypeTypeface *)0x0;
            local_80 = (void *)0x0;
          }
          else {
                    /* try { // try from 00300376 to 0030037a has its CatchHandler @ 00300cc7 */
            local_a8 = (_Rb_tree_node_base *)
                       hb_ft_face_create_referenced(*(long *)((long)local_80 + 0x28));
                    /* try { // try from 0030037e to 0030038a has its CatchHandler @ 00300cb8 */
            phVar14 = hb_font_create((int *)local_a8);
            if (phVar14 == (hb_font_t *)0x0) {
              this_01 = (FreeTypeTypeface *)0x0;
            }
            else {
                    /* try { // try from 00300397 to 003003a0 has its CatchHandler @ 00300cab */
              this_01 = operator_new(0x38);
              local_50 = pvVar22;
              LOCK();
              piVar25 = (int *)((long)pvVar22 + 8);
              *piVar25 = *piVar25 + 1;
              UNLOCK();
              lVar24 = *(long *)((long)local_80 + 0x28);
              pbVar28 = *(byte **)(lVar24 + 0x28);
              local_58 = phVar14;
              if (pbVar28 == (byte *)0x0) {
                local_60 = &DAT_0061ac58;
              }
              else {
                bVar21 = *pbVar28;
                local_60 = &DAT_0061ac58;
                if (bVar21 != 0) {
                  lVar24 = 0;
                  pbVar15 = pbVar28;
                  do {
                    pbVar15 = pbVar15 + 1;
                    lVar23 = lVar24 + (ulong)(bVar21 >> 7);
                    lVar24 = lVar23 + 1;
                    bVar21 = *pbVar15;
                  } while (bVar21 != 0);
                  uVar11 = lVar23 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 00300410 to 00300414 has its CatchHandler @ 00300c03 */
                  puVar10 = operator_new__(uVar11 + 0x17);
                  LOCK();
                  *puVar10 = 0;
                  UNLOCK();
                  *(ulong *)(puVar10 + 2) = uVar11;
                  local_60 = (byte *)(puVar10 + 4);
                  bVar21 = *pbVar28;
                  pbVar15 = local_60;
                  if (bVar21 != 0) {
                    do {
                      pbVar28 = pbVar28 + 1;
                      if ((char)bVar21 < '\0') {
                        *pbVar15 = bVar21 >> 6 | 0xc0;
                        pbVar15[1] = bVar21 & 0x3f | 0x80;
                        pbVar15 = pbVar15 + 1;
                      }
                      else {
                        *pbVar15 = bVar21;
                      }
                      pbVar15 = pbVar15 + 1;
                      bVar21 = *pbVar28;
                    } while (bVar21 != 0);
                  }
                  *pbVar15 = 0;
                  lVar24 = *(long *)((long)local_80 + 0x28);
                }
              }
              local_38 = &DAT_0061ac58;
              pbVar28 = *(byte **)(lVar24 + 0x30);
              if ((pbVar28 != (byte *)0x0) && (bVar21 = *pbVar28, bVar21 != 0)) {
                lVar24 = 0;
                pbVar15 = pbVar28;
                do {
                  pbVar15 = pbVar15 + 1;
                  lVar23 = lVar24 + (ulong)(bVar21 >> 7);
                  lVar24 = lVar23 + 1;
                  bVar21 = *pbVar15;
                } while (bVar21 != 0);
                uVar11 = lVar23 + 5U & 0xfffffffffffffffc;
                    /* try { // try from 003004d1 to 003004d5 has its CatchHandler @ 00300bfe */
                puVar10 = operator_new__(uVar11 + 0x17);
                LOCK();
                *puVar10 = 0;
                UNLOCK();
                *(ulong *)(puVar10 + 2) = uVar11;
                local_38 = (byte *)(puVar10 + 4);
                bVar21 = *pbVar28;
                pbVar15 = local_38;
                if (bVar21 != 0) {
                  do {
                    pbVar28 = pbVar28 + 1;
                    if ((char)bVar21 < '\0') {
                      *pbVar15 = bVar21 >> 6 | 0xc0;
                      pbVar15[1] = bVar21 & 0x3f | 0x80;
                      pbVar15 = pbVar15 + 1;
                    }
                    else {
                      *pbVar15 = bVar21;
                    }
                    pbVar15 = pbVar15 + 1;
                    bVar21 = *pbVar28;
                  } while (bVar21 != 0);
                }
                *pbVar15 = 0;
              }
                    /* try { // try from 00300530 to 0030055e has its CatchHandler @ 00300c2d */
              FreeTypeTypeface(this_01,0,(long *)&local_50,(long *)&local_58,(long *)&local_60,
                               (long *)&local_38);
              LOCK();
              *(int *)(this_01 + 8) = *(int *)(this_01 + 8) + 1;
              UNLOCK();
              pbVar28 = local_38 + -0x10;
              if (pbVar28 != (byte *)&emptyString) {
                LOCK();
                iVar7 = *(int *)pbVar28;
                *(int *)pbVar28 = *(int *)pbVar28 + -1;
                UNLOCK();
                if (iVar7 == 0) {
                  operator_delete__(pbVar28);
                }
              }
              pbVar28 = local_60 + -0x10;
              if (pbVar28 != (byte *)&emptyString) {
                LOCK();
                iVar7 = *(int *)pbVar28;
                *(int *)pbVar28 = *(int *)pbVar28 + -1;
                UNLOCK();
                if (iVar7 == 0) {
                  operator_delete__(pbVar28);
                }
              }
              if (local_58 != (hb_font_t *)0x0) {
                    /* try { // try from 003005c2 to 003005c6 has its CatchHandler @ 00300c08 */
                hb_font_destroy((int *)local_58);
              }
              ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_50);
            }
            if (local_a8 != (_Rb_tree_node_base *)0x0) {
                    /* try { // try from 003005de to 003005e2 has its CatchHandler @ 00300c25 */
              hb_face_destroy((int *)local_a8);
            }
          }
          ReferenceCountedObjectPtr<juce::FTFaceWrapper>::decIfNotNull(local_80);
          iVar7 = pthread_mutex_lock(local_70);
          if (iVar7 != 0) {
                    /* try { // try from 00300bf7 to 00300bfd has its CatchHandler @ 00300d0a */
                    /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar7);
          }
          if ((iVar6 == *(int *)(pDVar8 + 0x50)) ||
             (p_Var18 = *(_Rb_tree_node_base **)(pDVar8 + 0x18),
             p_Var18 == (_Rb_tree_node_base *)0x0)) {
LAB_003006a9:
            *(int *)(pDVar8 + 0x50) = *(int *)(pDVar8 + 0x50) + 1;
            uVar11 = *(ulong *)(pDVar8 + 0x30);
            while (0x7f < uVar11) {
              pvVar22 = *(void **)(pDVar8 + 0x38);
              pvVar16 = (void *)std::_Rb_tree_rebalance_for_erase
                                          (*(_Rb_tree_node_base **)((long)pvVar22 + 0x10),p_Var3);
              plVar4 = *(long **)((long)pvVar16 + 0x30);
              if (plVar4 != (long *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)(*plVar4 + 8))();
                }
              }
              piVar25 = (int *)(*(long *)((long)pvVar16 + 0x20) + -0x10);
              if (piVar25 != &emptyString) {
                LOCK();
                iVar6 = *piVar25;
                *piVar25 = *piVar25 + -1;
                UNLOCK();
                if (iVar6 == 0) {
                  operator_delete__(piVar25);
                }
              }
              operator_delete(pvVar16);
              *(long *)(pDVar8 + 0x30) = *(long *)(pDVar8 + 0x30) + -1;
              *(long *)(pDVar8 + 0x48) = *(long *)(pDVar8 + 0x48) + -1;
              std::__detail::_List_node_base::_M_unhook();
              operator_delete(pvVar22);
              uVar11 = *(ulong *)(pDVar8 + 0x30);
            }
            p_Var18 = *(_Rb_tree_node_base **)(pDVar8 + 0x18);
            if (p_Var18 == (_Rb_tree_node_base *)0x0) {
LAB_003007cc:
              local_88 = p_Var3;
LAB_003007d1:
                    /* try { // try from 003007d1 to 003007da has its CatchHandler @ 00300cd7 */
              local_a8 = operator_new(0x40);
              p_Var18 = local_88;
              this_02 = (TypefaceFileAndIndex *)(local_a8 + 0x20);
              *(undefined4 **)(local_a8 + 0x20) = local_b8;
              local_b8 = (undefined4 *)&DAT_0061ac58;
              *(int *)(local_a8 + 0x28) = local_b0;
              *(FreeTypeTypeface **)(local_a8 + 0x30) = this_01;
              *(undefined8 *)(local_a8 + 0x38) = 0;
              if (local_88 == p_Var3) {
                if ((*(long *)(pDVar8 + 0x30) != 0) &&
                   (uVar11 = TypefaceFileAndIndex::operator<
                                       ((TypefaceFileAndIndex *)(*(long *)(pDVar8 + 0x28) + 0x20),
                                        (undefined8 *)this_02), (char)uVar11 != '\0')) {
                  p_Var18 = (_Rb_tree_node_base *)0x0;
                  p_Var20 = *(_Rb_tree_node_base **)(pDVar8 + 0x28);
                  goto joined_r0x003009f1;
                }
                p_Var18 = *(_Rb_tree_node_base **)(pDVar8 + 0x18);
                p_Var20 = p_Var3;
                if (*(_Rb_tree_node_base **)(pDVar8 + 0x18) == (_Rb_tree_node_base *)0x0) {
LAB_00300a3a:
                  if (p_Var20 == *(_Rb_tree_node_base **)(pDVar8 + 0x20)) goto joined_r0x003009f1;
                  p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var20);
                }
                else {
                  do {
                    p_Var19 = p_Var18;
                    uVar11 = TypefaceFileAndIndex::operator<(this_02,(undefined8 *)(p_Var19 + 0x20))
                    ;
                    bVar21 = (byte)uVar11;
                    p_Var18 = *(_Rb_tree_node_base **)(p_Var19 + (ulong)(bVar21 ^ 1) * 8 + 0x10);
                  } while (*(_Rb_tree_node_base **)(p_Var19 + (ulong)(bVar21 ^ 1) * 8 + 0x10) !=
                           (_Rb_tree_node_base *)0x0);
LAB_00300a27:
                  p_Var20 = p_Var19;
                  if (bVar21 != 0) goto LAB_00300a3a;
                }
                uVar11 = TypefaceFileAndIndex::operator<
                                   ((TypefaceFileAndIndex *)(p_Var19 + 0x20),(undefined8 *)this_02);
                p_Var18 = (_Rb_tree_node_base *)0x0;
                if ((char)uVar11 != '\0') goto joined_r0x003009f1;
              }
              else {
                this_00 = (TypefaceFileAndIndex *)(local_88 + 0x20);
                uVar11 = TypefaceFileAndIndex::operator<(this_02,(undefined8 *)this_00);
                if ((char)uVar11 != '\0') {
                  p_Var20 = p_Var18;
                  if (*(_Rb_tree_node_base **)(pDVar8 + 0x20) == p_Var18) goto joined_r0x003009f1;
                  p_Var17 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var18);
                  uVar11 = TypefaceFileAndIndex::operator<
                                     ((TypefaceFileAndIndex *)(p_Var17 + 0x20),(undefined8 *)this_02
                                     );
                  if ((char)uVar11 == '\0') {
                    p_Var18 = *(_Rb_tree_node_base **)(pDVar8 + 0x18);
                    if (*(_Rb_tree_node_base **)(pDVar8 + 0x18) != (_Rb_tree_node_base *)0x0) {
                      do {
                        p_Var19 = p_Var18;
                        uVar11 = TypefaceFileAndIndex::operator<
                                           (this_02,(undefined8 *)(p_Var19 + 0x20));
                        bVar21 = (byte)uVar11;
                        p_Var18 = *(_Rb_tree_node_base **)(p_Var19 + (ulong)(bVar21 ^ 1) * 8 + 0x10)
                        ;
                      } while (*(_Rb_tree_node_base **)(p_Var19 + (ulong)(bVar21 ^ 1) * 8 + 0x10) !=
                               (_Rb_tree_node_base *)0x0);
                      goto LAB_00300a27;
                    }
                    p_Var20 = p_Var3;
                    goto LAB_00300a3a;
                  }
                  if (*(long *)(p_Var17 + 0x18) != 0) goto joined_r0x003009f1;
                  p_Var18 = (_Rb_tree_node_base *)0x0;
LAB_00300a70:
                  pFVar29 = local_90;
                  p_Var19 = local_a8;
                  uVar5 = true;
                  if ((p_Var18 == (_Rb_tree_node_base *)0x0) && (p_Var17 != p_Var3)) {
                    uVar11 = TypefaceFileAndIndex::operator<(this_02,(undefined8 *)(p_Var17 + 0x20))
                    ;
                    uVar5 = (undefined1)uVar11;
                  }
                  std::_Rb_tree_insert_and_rebalance((bool)uVar5,p_Var19,p_Var17,p_Var3);
                  *(long *)(pDVar8 + 0x30) = *(long *)(pDVar8 + 0x30) + 1;
                  goto LAB_00300b22;
                }
                uVar11 = TypefaceFileAndIndex::operator<(this_00,(undefined8 *)this_02);
                p_Var17 = local_88;
                if ((char)uVar11 == '\0') {
                  p_Var19 = local_88;
                }
                else {
                  p_Var20 = local_88;
                  if (*(_Rb_tree_node_base **)(pDVar8 + 0x28) != local_88) {
                    p_Var18 = (_Rb_tree_node_base *)std::_Rb_tree_increment(local_88);
                    uVar11 = TypefaceFileAndIndex::operator<(this_02,(undefined8 *)(p_Var18 + 0x20))
                    ;
                    if ((char)uVar11 == '\0') {
                      p_Var18 = *(_Rb_tree_node_base **)(pDVar8 + 0x18);
                      if (*(_Rb_tree_node_base **)(pDVar8 + 0x18) != (_Rb_tree_node_base *)0x0) {
                        do {
                          p_Var19 = p_Var18;
                          uVar11 = TypefaceFileAndIndex::operator<
                                             (this_02,(undefined8 *)(p_Var19 + 0x20));
                          bVar21 = (byte)uVar11;
                          p_Var18 = *(_Rb_tree_node_base **)
                                     (p_Var19 + (ulong)(bVar21 ^ 1) * 8 + 0x10);
                        } while (*(_Rb_tree_node_base **)(p_Var19 + (ulong)(bVar21 ^ 1) * 8 + 0x10)
                                 != (_Rb_tree_node_base *)0x0);
                        goto LAB_00300a27;
                      }
                      p_Var20 = p_Var3;
                      goto LAB_00300a3a;
                    }
                    p_Var20 = p_Var18;
                    if (*(long *)(p_Var17 + 0x18) == 0) {
                      p_Var18 = (_Rb_tree_node_base *)0x0;
                      goto LAB_00300a70;
                    }
                    goto joined_r0x003009f1;
                  }
joined_r0x003009f1:
                  p_Var18 = (_Rb_tree_node_base *)0x0;
joined_r0x003009f1:
                  p_Var17 = p_Var20;
                  p_Var19 = p_Var18;
                  if (p_Var17 != (_Rb_tree_node_base *)0x0) goto LAB_00300a70;
                }
              }
              plVar4 = *(long **)(local_a8 + 0x30);
              if (plVar4 != (long *)0x0) {
                LOCK();
                plVar2 = plVar4 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
                  (**(code **)(*plVar4 + 8))();
                }
              }
              pFVar29 = local_90;
              piVar25 = (int *)(*(long *)this_02 + -0x10);
              if (piVar25 != &emptyString) {
                LOCK();
                iVar6 = *piVar25;
                *piVar25 = *piVar25 + -1;
                UNLOCK();
                if (iVar6 == 0) {
                  operator_delete__(piVar25);
                }
              }
              operator_delete(local_a8);
            }
            else {
              p_Var19 = p_Var3;
              do {
                uVar11 = TypefaceFileAndIndex::operator<
                                   ((TypefaceFileAndIndex *)(p_Var18 + 0x20),&local_b8);
                p_Var20 = p_Var18 + 0x18;
                if ((char)uVar11 == '\0') {
                  p_Var20 = p_Var18 + 0x10;
                  p_Var19 = p_Var18;
                }
                p_Var18 = *(_Rb_tree_node_base **)p_Var20;
              } while (p_Var18 != (_Rb_tree_node_base *)0x0);
              if (p_Var19 == p_Var3) goto LAB_003007cc;
              uVar11 = TypefaceFileAndIndex::operator<
                                 ((TypefaceFileAndIndex *)&local_b8,(undefined8 *)(p_Var19 + 0x20));
              pFVar29 = local_90;
              if ((char)uVar11 != '\0') {
                local_88 = p_Var19;
                goto LAB_003007d1;
              }
              if (this_01 != (FreeTypeTypeface *)0x0) {
                LOCK();
                pFVar1 = this_01 + 8;
                *(int *)pFVar1 = *(int *)pFVar1 + -1;
                UNLOCK();
                if (*(int *)pFVar1 == 0) {
                  (**(code **)(*(long *)this_01 + 8))();
                }
              }
            }
LAB_00300b22:
                    /* try { // try from 00300b22 to 00300b2b has its CatchHandler @ 00300cfb */
            p_Var12 = operator_new(0x18);
            *(_Rb_tree_node_base **)(p_Var12 + 0x10) = p_Var19;
            std::__detail::_List_node_base::_M_hook(p_Var12);
            *(long *)(pDVar8 + 0x48) = *(long *)(pDVar8 + 0x48) + 1;
            *(_List_node_base **)(p_Var19 + 0x38) = p_Var12;
          }
          else {
            p_Var19 = p_Var3;
            do {
              uVar11 = TypefaceFileAndIndex::operator<
                                 ((TypefaceFileAndIndex *)(p_Var18 + 0x20),&local_b8);
              p_Var20 = p_Var18 + 0x18;
              if ((char)uVar11 == '\0') {
                p_Var20 = p_Var18 + 0x10;
                p_Var19 = p_Var18;
              }
              p_Var18 = *(_Rb_tree_node_base **)p_Var20;
            } while (p_Var18 != (_Rb_tree_node_base *)0x0);
            if (p_Var19 == p_Var3) goto LAB_003006a9;
            uVar11 = TypefaceFileAndIndex::operator<
                               ((TypefaceFileAndIndex *)&local_b8,(undefined8 *)(p_Var19 + 0x20));
            pFVar29 = local_90;
            piVar25 = local_a0;
            if ((char)uVar11 != '\0') {
              p_Var19 = p_Var3;
            }
            if (p_Var19 == p_Var3) goto LAB_003006a9;
            if (this_01 != (FreeTypeTypeface *)0x0) {
              LOCK();
              pFVar1 = this_01 + 8;
              *(int *)pFVar1 = *(int *)pFVar1 + -1;
              UNLOCK();
              if (*(int *)pFVar1 == 0) {
                (**(code **)(*(long *)this_01 + 8))();
              }
              goto LAB_00300b51;
            }
          }
          piVar25 = local_a0;
        }
        else {
          p_Var19 = p_Var3;
          do {
            uVar11 = TypefaceFileAndIndex::operator<
                               ((TypefaceFileAndIndex *)(p_Var18 + 0x20),&local_b8);
            p_Var20 = p_Var18 + 0x18;
            if ((char)uVar11 == '\0') {
              p_Var20 = p_Var18 + 0x10;
              p_Var19 = p_Var18;
            }
            p_Var18 = *(_Rb_tree_node_base **)p_Var20;
          } while (p_Var18 != (_Rb_tree_node_base *)0x0);
          if (p_Var19 == p_Var3) goto LAB_0030030c;
          uVar11 = TypefaceFileAndIndex::operator<
                             ((TypefaceFileAndIndex *)&local_b8,(undefined8 *)(p_Var19 + 0x20));
          if ((char)uVar11 != '\0') {
            p_Var19 = p_Var3;
          }
          if (p_Var19 == p_Var3) goto LAB_0030030c;
          pvVar22 = *(void **)(p_Var19 + 0x38);
          *(long *)(pDVar8 + 0x48) = *(long *)(pDVar8 + 0x48) + -1;
          std::__detail::_List_node_base::_M_unhook();
          operator_delete(pvVar22);
                    /* try { // try from 003002d3 to 003002dc has its CatchHandler @ 00300c10 */
          p_Var12 = operator_new(0x18);
          *(_Rb_tree_node_base **)(p_Var12 + 0x10) = p_Var19;
          std::__detail::_List_node_base::_M_hook(p_Var12);
          *(long *)(pDVar8 + 0x48) = *(long *)(pDVar8 + 0x48) + 1;
          *(_List_node_base **)(p_Var19 + 0x38) = p_Var12;
          piVar25 = local_a0;
          pFVar29 = local_90;
        }
LAB_00300b51:
        pthread_mutex_unlock(local_70);
        lVar24 = *(long *)(p_Var19 + 0x30);
        *(long *)pFVar29 = lVar24;
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
          lVar9 = local_40;
        }
        piVar26 = local_b8 + -4;
        if (piVar26 != &emptyString) {
          LOCK();
          iVar6 = *piVar26;
          *piVar26 = *piVar26 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            operator_delete__(piVar26);
          }
        }
        if (piVar25 != &emptyString) {
          LOCK();
          iVar6 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            operator_delete__(piVar25);
          }
        }
        piVar25 = local_68 + -4;
        if (piVar25 != &emptyString) {
          LOCK();
          iVar6 = *piVar25;
          *piVar25 = *piVar25 + -1;
          UNLOCK();
          if (iVar6 == 0) {
            operator_delete__(piVar25);
          }
        }
        goto LAB_0030015d;
      }
    }
  }
  *(undefined8 *)this = 0;
LAB_0030015d:
  if (lVar9 != 0) {
                    /* try { // try from 00300162 to 00300169 has its CatchHandler @ 00300e2c */
    FcPatternDestroy(lVar9);
  }
  if (pvVar27 != (void *)0x0) {
    LOCK();
    piVar25 = (int *)((long)pvVar27 + 8);
    *piVar25 = *piVar25 + -1;
    UNLOCK();
    if (*piVar25 == 0) {
      if (*(long *)((long)pvVar27 + 0x18) != 0) {
                    /* try { // try from 00300180 to 00300184 has its CatchHandler @ 00300de8 */
        FT_Done_FreeType();
      }
      if (*(long *)((long)pvVar27 + 0x10) != 0) {
                    /* try { // try from 0030018e to 00300192 has its CatchHandler @ 00300de0 */
        FcConfigDestroy();
      }
      operator_delete(pvVar27);
    }
  }
  return;
}


