// Function : set
// Namespace: juce:TextEditor:ParagraphsModel
// Entry    : 00243dc0
// Prototype: undefined set(undefined8 * param_1, ulong param_2, ulong param_3, String * param_4)
// Body     : 00243dc0 - 00244973


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TextEditor::ParagraphsModel::set(juce::Range<long long>, juce::String const&) */

void __cdecl
juce::TextEditor::ParagraphsModel::set
          (undefined8 *param_1,ulong param_2,ulong param_3,String *param_4)

{
  Ranges *this;
  char cVar1;
  default_delete<juce::TextEditor::ParagraphStorage> dVar2;
  byte *__src;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  int *piVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  String *pSVar11;
  default_delete<juce::TextEditor::ParagraphStorage> *pdVar12;
  char *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  byte *pbVar16;
  long *plVar17;
  ulong uVar18;
  byte bVar19;
  default_delete<juce::TextEditor::ParagraphStorage> *pdVar20;
  int *piVar21;
  long *plVar22;
  long lVar23;
  undefined8 *puVar24;
  size_t sVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  int iVar31;
  default_delete<juce::TextEditor::ParagraphStorage> *pdVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  default_delete<juce::TextEditor::ParagraphStorage> *local_f0;
  undefined8 *local_e8;
  default_delete<juce::TextEditor::ParagraphStorage> *local_e0;
  int local_d4;
  long *local_d0;
  int *local_c8;
  int *piStack_c0;
  int *local_b8;
  vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>
  *local_b0;
  long *local_a8;
  long *plStack_a0;
  undefined8 local_98;
  undefined8 *local_90;
  String *local_88;
  char *local_80;
  char *local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  default_delete<juce::TextEditor::ParagraphStorage> *local_50;
  long local_48;
  default_delete<juce::TextEditor::ParagraphStorage> *local_40;
  byte *local_38;
  
  local_88 = param_4;
  getTextInRange((String *)&local_78,(long)param_1,param_2 - 1,param_2);
  local_a8 = (long *)0x0;
  plStack_a0 = (long *)0x0;
  local_98 = 0;
  this = (Ranges *)(param_1 + 1);
                    /* try { // try from 00243e0b to 00243ea0 has its CatchHandler @ 00244b47 */
  detail::Ranges::erase(this,param_2,param_3,&local_a8);
  detail::Ranges::shift(this,param_3,param_2 - param_3,&local_a8);
  pbVar16 = *(byte **)local_88;
  bVar19 = *pbVar16;
  if (bVar19 != 0) {
    iVar31 = 0;
    do {
      if ((char)bVar19 < '\0') {
        do {
          bVar19 = pbVar16[1];
          pbVar16 = pbVar16 + 1;
        } while ((bVar19 & 0xc0) == 0x80);
      }
      else {
        if (bVar19 == 0) goto LAB_00243e84;
        bVar19 = pbVar16[1];
        pbVar16 = pbVar16 + 1;
      }
      iVar31 = iVar31 + 1;
    } while( true );
  }
LAB_00243f2c:
  plVar22 = (long *)param_1[1];
  uVar27 = (long)param_1[2] - (long)plVar22;
  plVar17 = plVar22;
  if (0 < (long)uVar27) {
    uVar27 = uVar27 >> 4;
    do {
      uVar9 = uVar27 >> 1;
      uVar18 = uVar9;
      if (plVar17[uVar9 * 2 + 1] <= (long)param_2) {
        uVar18 = ~uVar9 + uVar27;
        plVar17 = plVar17 + uVar9 * 2 + 2;
      }
      uVar27 = uVar18;
    } while (0 < (long)uVar18);
  }
  if ((plVar17 != (long *)param_1[2]) && (*plVar17 <= (long)param_2)) {
                    /* try { // try from 00243f89 to 00243f95 has its CatchHandler @ 0024497c */
    detail::Ranges::mergeBack(this,(long)plVar17 - (long)plVar22 >> 4,&local_a8);
  }
  cVar1 = *local_78;
  local_80 = local_78;
  piVar10 = (int *)(local_78 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
                    /* try { // try from 00243fbe to 00243fcc has its CatchHandler @ 00244a2c */
  pSVar11 = juce::String::operator+=((String *)&local_80,local_88);
  local_f0 = *(default_delete<juce::TextEditor::ParagraphStorage> **)pSVar11;
  pdVar12 = local_f0 + -0x10;
  if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString) {
    LOCK();
    *(int *)pdVar12 = *(int *)pdVar12 + 1;
    UNLOCK();
  }
  local_c8 = (int *)0x0;
  piStack_c0 = (int *)0x0;
  local_b8 = (int *)0x0;
                    /* try { // try from 00243fff to 0024400d has its CatchHandler @ 00244a24 */
  local_e8 = param_1;
  Unicode::performAnalysis((Unicode *)&local_e0,&local_f0);
  pdVar12 = local_e0;
  if ((long)local_d4 != 0) {
    pdVar20 = local_e0 + (long)local_d4 * 0xc;
    iVar31 = 0;
    pdVar32 = local_e0;
    do {
      local_58 = CONCAT44(local_58._4_4_,iVar31);
      local_50 = pdVar32;
      if (*(int *)(pdVar32 + 4) == 2) {
        if (piStack_c0 == local_b8) {
                    /* try { // try from 0024407c to 0024408d has its CatchHandler @ 00244b4c */
          std::vector<int,std::allocator<int>>::_M_realloc_insert<int_const&>
                    ((vector<int,std::allocator<int>> *)&local_c8,piStack_c0,(undefined4 *)&local_58
                    );
        }
        else {
          *piStack_c0 = iVar31;
          piStack_c0 = piStack_c0 + 1;
        }
      }
      iVar31 = iVar31 + 1;
      pdVar32 = pdVar32 + 0xc;
    } while (pdVar32 != pdVar20);
  }
  free(pdVar12);
  pdVar12 = local_f0 + -0x10;
  if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString) {
    LOCK();
    iVar31 = *(int *)pdVar12;
    *(int *)pdVar12 = *(int *)pdVar12 + -1;
    UNLOCK();
    if (iVar31 == 0) {
      operator_delete__(pdVar12);
    }
  }
  piVar10 = (int *)(local_80 + -0x10);
  if (piVar10 == &emptyString) {
LAB_002440e5:
    piVar10 = local_c8;
    if (local_c8 == piStack_c0) goto LAB_0024411a;
  }
  else {
    LOCK();
    iVar31 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar31 != 0) goto LAB_002440e5;
    operator_delete__(piVar10);
    piVar10 = local_c8;
    if (local_c8 == piStack_c0) goto LAB_0024411a;
  }
  piVar6 = piStack_c0;
  piVar10 = local_c8;
  piVar21 = local_c8;
  do {
                    /* try { // try from 00244106 to 00244110 has its CatchHandler @ 00244bb6 */
    detail::Ranges::split(this,(long)*piVar21 + param_2 + (cVar1 == '\0'),&local_a8);
    piVar21 = piVar21 + 1;
  } while (piVar21 != piVar6);
LAB_0024411a:
  if (piVar10 != (int *)0x0) {
    operator_delete(piVar10);
  }
  if (local_a8 == plStack_a0) {
LAB_002448d7:
    puVar29 = (undefined8 *)local_e8[1];
    puVar34 = (undefined8 *)local_e8[2];
    if (puVar29 != puVar34) {
      lVar30 = 0;
      do {
        lVar4 = *(long *)(local_e8[4] + lVar30);
        uVar3 = puVar29[1];
        *(undefined8 *)(lVar4 + 0x20) = *puVar29;
        *(undefined8 *)(lVar4 + 0x28) = uVar3;
        puVar29 = puVar29 + 2;
        lVar30 = lVar30 + 8;
      } while (puVar29 != puVar34);
    }
    if (local_a8 != (long *)0x0) {
      operator_delete(local_a8);
    }
    piVar10 = (int *)(local_78 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      iVar31 = *piVar10;
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (iVar31 == 0) {
        operator_delete__(piVar10);
      }
    }
    return;
  }
  local_b0 = (vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>
              *)(local_e8 + 4);
  local_d0 = plStack_a0;
  plVar22 = plStack_a0;
  plVar17 = local_a8;
LAB_0024416d:
  if (plVar17 == (long *)0x0) goto switchD_0024418c_default;
  switch((char)plVar17[5]) {
  case '\0':
    lVar30 = *(long *)local_b0;
    lVar4 = *plVar17;
    local_58 = *(long *)local_88;
    piVar10 = (int *)(local_58 + -0x10);
    if (piVar10 != &emptyString) {
      LOCK();
      *piVar10 = *piVar10 + 1;
      UNLOCK();
    }
    local_c8 = (int *)*local_e8;
                    /* try { // try from 002441cb to 002441e4 has its CatchHandler @ 00244b26 */
    std::
    make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
              (&local_e0,&local_58,&local_c8);
                    /* try { // try from 002441e9 to 002441f5 has its CatchHandler @ 00244b09 */
    std::
    vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>
    ::_M_insert_rval(local_b0,(undefined8 *)(lVar30 + lVar4 * 8),&local_e0);
    plVar22 = local_d0;
    if (local_e0 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
      std::default_delete<juce::TextEditor::ParagraphStorage>::operator()(local_e0);
    }
    local_e0 = (default_delete<juce::TextEditor::ParagraphStorage> *)0x0;
    pdVar12 = (default_delete<juce::TextEditor::ParagraphStorage> *)(local_58 + -0x10);
    if (pdVar12 == (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString) break;
    goto LAB_002448bc;
  case '\x01':
    puVar29 = *(undefined8 **)(*(long *)local_b0 + *plVar17 * 8);
    uVar27 = plVar17[2] - plVar17[1];
    if ((long)uVar27 < 0) {
      uVar27 = 0;
    }
    uVar18 = (uVar27 - plVar17[3]) + plVar17[4];
    if ((long)uVar18 <= (long)uVar27) {
      uVar18 = uVar27;
    }
    pbVar16 = &DAT_0061ac58;
    if (0 < (int)uVar27) {
      __src = (byte *)*puVar29;
      uVar9 = uVar27 & 0xffffffff;
      pbVar16 = __src;
      do {
        bVar19 = *pbVar16;
        if (bVar19 == 0) {
          if (__src != &DAT_0061ac58) {
            LOCK();
            *(int *)(__src + -0x10) = *(int *)(__src + -0x10) + 1;
            UNLOCK();
          }
          pbVar16 = __src;
          goto LAB_00244488;
        }
        pbVar33 = pbVar16 + 1;
        if (((char)bVar19 < '\0') && ((bVar19 & 0x40) != 0)) {
          if ((bVar19 & 0x20) == 0) {
            pbVar33 = pbVar16 + 2;
          }
          else {
            pbVar33 = pbVar16 + (4 - (ulong)((bVar19 & 0x10) == 0));
          }
        }
        uVar7 = (int)uVar9 - 1;
        uVar9 = (ulong)uVar7;
        pbVar16 = pbVar33;
      } while (uVar7 != 0);
      pbVar16 = &DAT_0061ac58;
      if (__src != (byte *)0x0) {
        pbVar16 = &DAT_0061ac58;
        if (*__src != 0) {
          sVar25 = (long)pbVar33 - (long)__src;
          uVar9 = sVar25 + 4 & 0xfffffffffffffffc;
          local_90 = puVar29;
          puVar14 = operator_new__(uVar9 + 0x17);
          LOCK();
          *puVar14 = 0;
          UNLOCK();
          *(ulong *)(puVar14 + 2) = uVar9;
          memcpy(puVar14 + 4,__src,sVar25);
          *(undefined1 *)((long)puVar14 + sVar25 + 0x10) = 0;
          pbVar16 = (byte *)(puVar14 + 4);
          puVar29 = local_90;
        }
      }
    }
LAB_00244488:
                    /* try { // try from 00244488 to 00244496 has its CatchHandler @ 00244ad4 */
    juce::String::substring(&local_e0,puVar29,(int)uVar27,(int)uVar18);
    puVar29 = local_e8;
    local_c8 = (int *)*local_e8;
                    /* try { // try from 002444ac to 002444c5 has its CatchHandler @ 00244a7c */
    local_38 = pbVar16;
    std::
    make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
              (&local_f0,&local_38,&local_c8);
    pdVar12 = *(default_delete<juce::TextEditor::ParagraphStorage> **)
               (*(long *)local_b0 + *plVar17 * 8);
    *(default_delete<juce::TextEditor::ParagraphStorage> **)(*(long *)local_b0 + *plVar17 * 8) =
         local_f0;
    if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
      std::default_delete<juce::TextEditor::ParagraphStorage>::operator()(pdVar12);
    }
    local_f0 = (default_delete<juce::TextEditor::ParagraphStorage> *)0x0;
    pbVar16 = pbVar16 + -0x10;
    if (pbVar16 != (byte *)&emptyString) {
      LOCK();
      iVar31 = *(int *)pbVar16;
      *(int *)pbVar16 = *(int *)pbVar16 + -1;
      UNLOCK();
      if (iVar31 == 0) {
        operator_delete__(pbVar16);
      }
    }
    pdVar12 = local_e0;
    lVar30 = puVar29[4];
    lVar4 = *plVar17;
    local_40 = local_e0;
    local_e0 = (default_delete<juce::TextEditor::ParagraphStorage> *)&DAT_0061ac58;
    local_c8 = (int *)*puVar29;
                    /* try { // try from 00244543 to 00244557 has its CatchHandler @ 00244a56 */
    std::
    make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
              (&local_f0,&local_40,&local_c8);
                    /* try { // try from 00244563 to 0024456f has its CatchHandler @ 00244a39 */
    std::
    vector<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>,std::allocator<std::unique_ptr<juce::TextEditor::ParagraphStorage,std::default_delete<juce::TextEditor::ParagraphStorage>>>>
    ::_M_insert_rval(local_b0,(undefined8 *)(lVar4 * 8 + 8 + lVar30),&local_f0);
    plVar22 = local_d0;
    if (local_f0 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
      std::default_delete<juce::TextEditor::ParagraphStorage>::operator()(local_f0);
    }
    local_f0 = (default_delete<juce::TextEditor::ParagraphStorage> *)0x0;
    pdVar12 = pdVar12 + -0x10;
    if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString) {
      LOCK();
      iVar31 = *(int *)pdVar12;
      *(int *)pdVar12 = *(int *)pdVar12 + -1;
      UNLOCK();
      if (iVar31 == 0) {
        operator_delete__(pdVar12);
      }
    }
    pdVar12 = local_e0 + -0x10;
    if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString)
    goto LAB_002448bc;
    break;
  case '\x02':
    lVar30 = *plVar17;
    lVar4 = plVar17[1];
    if (lVar30 != lVar4) {
      lVar23 = local_e8[4];
      puVar29 = (undefined8 *)(lVar23 + lVar4 * 8);
      uVar27 = (long)local_e8[5] - (long)puVar29;
      if (uVar27 == 0) {
        puVar34 = puVar29;
      }
      else if ((long)uVar27 < 1) {
        puVar34 = (undefined8 *)local_e8[5];
      }
      else {
        lVar28 = (uVar27 >> 3) + 1;
        local_90 = puVar29;
        local_48 = lVar23;
        do {
          uVar3 = *(undefined8 *)(lVar23 + lVar4 * 8);
          *(undefined8 *)(lVar23 + lVar4 * 8) = 0;
          pdVar12 = *(default_delete<juce::TextEditor::ParagraphStorage> **)(lVar23 + lVar30 * 8);
          *(undefined8 *)(lVar23 + lVar30 * 8) = uVar3;
          if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
            std::default_delete<juce::TextEditor::ParagraphStorage>::operator()(pdVar12);
          }
          lVar28 = lVar28 + -1;
          lVar23 = lVar23 + 8;
        } while (1 < lVar28);
        puVar29 = local_90;
        lVar23 = local_48;
        plVar22 = local_d0;
        puVar34 = (undefined8 *)local_e8[5];
      }
      puVar5 = local_e8;
      puVar29 = (undefined8 *)((long)puVar34 + ((lVar23 + lVar30 * 8) - (long)puVar29));
      if (puVar34 != puVar29) {
        puVar24 = puVar29;
        do {
          if ((default_delete<juce::TextEditor::ParagraphStorage> *)*puVar24 !=
              (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
            std::default_delete<juce::TextEditor::ParagraphStorage>::operator()
                      ((default_delete<juce::TextEditor::ParagraphStorage> *)*puVar24);
          }
          *puVar24 = 0;
          puVar24 = puVar24 + 1;
        } while (puVar24 != puVar34);
        puVar5[5] = puVar29;
        plVar22 = local_d0;
      }
    }
    break;
  case '\x03':
    if (plVar17[2] - plVar17[1] != plVar17[4] - plVar17[3]) {
      iVar31 = (int)plVar17[3] - (int)plVar17[1];
      iVar26 = (int)plVar17[4] - (int)plVar17[2];
      lVar30 = *plVar17;
      lVar4 = local_e8[4];
      puVar29 = *(undefined8 **)(lVar4 + lVar30 * 8);
      if (iVar26 < 1) {
        pcVar13 = (char *)*puVar29;
        iVar15 = 0;
        do {
          cVar1 = *pcVar13;
          if (cVar1 < '\0') {
            do {
              pbVar16 = (byte *)(pcVar13 + 1);
              pcVar13 = pcVar13 + 1;
            } while ((*pbVar16 & 0xc0) == 0x80);
          }
          else {
            pcVar13 = pcVar13 + 1;
            if (cVar1 == '\0') goto LAB_00244692;
          }
          iVar15 = iVar15 + 1;
        } while( true );
      }
      pcVar13 = (char *)*puVar29;
      iVar15 = 0;
      do {
        cVar1 = *pcVar13;
        if (cVar1 < '\0') {
          do {
            pbVar16 = (byte *)(pcVar13 + 1);
            pcVar13 = pcVar13 + 1;
          } while ((*pbVar16 & 0xc0) == 0x80);
        }
        else {
          pcVar13 = pcVar13 + 1;
          if (cVar1 == '\0') goto LAB_002443f9;
        }
        iVar15 = iVar15 + 1;
      } while( true );
    }
  }
  goto switchD_0024418c_default;
LAB_00243e84:
  uVar27 = (long)iVar31 + param_2;
  if ((long)((long)iVar31 + param_2) <= (long)param_2) {
    uVar27 = param_2;
  }
  detail::Ranges::insert(this,param_2,uVar27,&local_a8);
  plVar22 = (long *)param_1[1];
  uVar27 = (long)param_1[2] - (long)plVar22;
  plVar17 = plVar22;
  if (0 < (long)uVar27) {
    uVar18 = uVar27 >> 4;
    do {
      uVar8 = uVar18 >> 1;
      uVar9 = uVar8;
      if (plVar17[uVar8 * 2 + 1] <= (long)param_2) {
        uVar9 = ~uVar8 + uVar18;
        plVar17 = plVar17 + uVar8 * 2 + 2;
      }
      uVar18 = uVar9;
    } while (0 < (long)uVar9);
  }
  uVar18 = uVar27;
  if ((plVar17 != (long *)param_1[2]) && (*plVar17 <= (long)param_2)) {
    uVar18 = (long)plVar17 - (long)plVar22;
  }
  uVar18 = ((long)uVar18 >> 4) + 1;
  if (uVar18 < (ulong)((long)uVar27 >> 4)) {
                    /* try { // try from 00243f1f to 00243f2b has its CatchHandler @ 00244981 */
    detail::Ranges::mergeBack(this,uVar18,&local_a8);
  }
  goto LAB_00243f2c;
LAB_00244692:
                    /* try { // try from 00244694 to 002446a0 has its CatchHandler @ 00244a34 */
  juce::String::substring(&local_60,puVar29,iVar31,iVar15 + iVar26);
  local_c8 = (int *)*local_e8;
                    /* try { // try from 002446ae to 002446c4 has its CatchHandler @ 00244986 */
  std::
  make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
            (&local_e0,&local_60,&local_c8);
  plVar22 = local_d0;
  pdVar12 = *(default_delete<juce::TextEditor::ParagraphStorage> **)(lVar4 + lVar30 * 8);
  *(default_delete<juce::TextEditor::ParagraphStorage> **)(lVar4 + lVar30 * 8) = local_e0;
  if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
    std::default_delete<juce::TextEditor::ParagraphStorage>::operator()(pdVar12);
  }
  local_e0 = (default_delete<juce::TextEditor::ParagraphStorage> *)0x0;
  pdVar12 = (default_delete<juce::TextEditor::ParagraphStorage> *)(local_60 + -0x10);
  if (pdVar12 == (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString)
  goto switchD_0024418c_default;
  goto LAB_002448bc;
LAB_002443f9:
                    /* try { // try from 002443f9 to 0024445c has its CatchHandler @ 00244a34 */
  juce::String::substring(&local_70,puVar29,iVar31,iVar15);
  if (iVar26 < 1) {
    local_f0 = (default_delete<juce::TextEditor::ParagraphStorage> *)&DAT_0061ac58;
  }
  else {
    pdVar12 = (default_delete<juce::TextEditor::ParagraphStorage> *)
              **(undefined8 **)(local_e8[4] + 8 + *plVar17 * 8);
    pdVar32 = pdVar12;
    do {
      dVar2 = *pdVar32;
      if (dVar2 == (default_delete<juce::TextEditor::ParagraphStorage>)0x0) {
        pdVar32 = pdVar12 + -0x10;
        local_f0 = pdVar12;
        if (pdVar32 != (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString) {
          LOCK();
          *(int *)pdVar32 = *(int *)pdVar32 + 1;
          UNLOCK();
        }
        goto LAB_002447d5;
      }
      pdVar20 = pdVar32 + 1;
      if (((char)dVar2 < '\0') && (((byte)dVar2 & 0x40) != 0)) {
        if (((byte)dVar2 & 0x20) == 0) {
          pdVar20 = pdVar32 + 2;
        }
        else {
          pdVar20 = pdVar32 + (4 - (ulong)(((byte)dVar2 & 0x10) == 0));
        }
      }
      iVar26 = iVar26 + -1;
      pdVar32 = pdVar20;
    } while (iVar26 != 0);
    pdVar32 = (default_delete<juce::TextEditor::ParagraphStorage> *)&DAT_0061ac58;
    if ((pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) &&
       (pdVar32 = (default_delete<juce::TextEditor::ParagraphStorage> *)&DAT_0061ac58,
       *pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage>)0x0)) {
      sVar25 = (long)pdVar20 - (long)pdVar12;
      uVar27 = sVar25 + 4 & 0xfffffffffffffffc;
                    /* try { // try from 002447a5 to 002447a9 has its CatchHandler @ 00244974 */
      puVar14 = operator_new__(uVar27 + 0x17);
      LOCK();
      *puVar14 = 0;
      UNLOCK();
      *(ulong *)(puVar14 + 2) = uVar27;
      pdVar32 = (default_delete<juce::TextEditor::ParagraphStorage> *)(puVar14 + 4);
      memcpy(pdVar32,pdVar12,sVar25);
      *(undefined1 *)((long)puVar14 + sVar25 + 0x10) = 0;
    }
    local_f0 = pdVar32;
  }
LAB_002447d5:
                    /* try { // try from 002447d5 to 002447e6 has its CatchHandler @ 002449d9 */
  pSVar11 = juce::String::operator+=((String *)&local_70,(String *)&local_f0);
  plVar22 = local_d0;
  local_68 = *(long *)pSVar11;
  piVar10 = (int *)(local_68 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    *piVar10 = *piVar10 + 1;
    UNLOCK();
  }
  local_c8 = (int *)*local_e8;
                    /* try { // try from 00244818 to 0024482e has its CatchHandler @ 002449aa */
  std::
  make_unique<juce::TextEditor::ParagraphStorage,juce::String&,juce::TextEditor::TextEditorStorage_const*>
            (&local_e0,&local_68,&local_c8);
  pdVar12 = *(default_delete<juce::TextEditor::ParagraphStorage> **)(lVar4 + lVar30 * 8);
  *(default_delete<juce::TextEditor::ParagraphStorage> **)(lVar4 + lVar30 * 8) = local_e0;
  if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)0x0) {
    std::default_delete<juce::TextEditor::ParagraphStorage>::operator()(pdVar12);
  }
  local_e0 = (default_delete<juce::TextEditor::ParagraphStorage> *)0x0;
  piVar10 = (int *)(local_68 + -0x10);
  if (piVar10 != &emptyString) {
    LOCK();
    iVar31 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar31 == 0) {
      operator_delete__(piVar10);
    }
  }
  pdVar12 = local_f0 + -0x10;
  if (pdVar12 != (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString) {
    LOCK();
    iVar31 = *(int *)pdVar12;
    *(int *)pdVar12 = *(int *)pdVar12 + -1;
    UNLOCK();
    if (iVar31 == 0) {
      operator_delete__(pdVar12);
    }
  }
  pdVar12 = (default_delete<juce::TextEditor::ParagraphStorage> *)(local_70 + -0x10);
  if (pdVar12 == (default_delete<juce::TextEditor::ParagraphStorage> *)&emptyString)
  goto switchD_0024418c_default;
LAB_002448bc:
  LOCK();
  iVar31 = *(int *)pdVar12;
  *(int *)pdVar12 = *(int *)pdVar12 + -1;
  UNLOCK();
  if (iVar31 == 0) {
    operator_delete__(pdVar12);
  }
switchD_0024418c_default:
  plVar17 = plVar17 + 6;
  if (plVar17 == plVar22) goto LAB_002448d7;
  goto LAB_0024416d;
}


