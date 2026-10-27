// Function : mouseDown
// Namespace: juce:TextEditor
// Entry    : 0026d4e0
// Prototype: undefined mouseDown(TextEditor * this, long param_1, undefined8 param_2, undefined8 param_3, uint * param_4, ulong param_5)
// Body     : 0026d4e0 - 0026de19


/* juce::TextEditor::mouseDown(juce::MouseEvent const&) */

void __thiscall
juce::TextEditor::mouseDown
          (TextEditor *this,long param_1,undefined8 param_2,undefined8 param_3,uint *param_4,
          ulong param_5)

{
  long *plVar1;
  TextEditor TVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  uint uVar13;
  Desktop *pDVar14;
  TextEditor *pTVar15;
  LookAndFeel_V4 *pLVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  ulong extraout_RDX_03;
  TextEditor *pTVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  int *piVar26;
  undefined4 uVar27;
  code *pcVar28;
  code *pcVar29;
  float fVar30;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  void *local_188;
  undefined8 uStack_180;
  long *local_178;
  float local_16c;
  long *local_168;
  undefined8 uStack_160;
  code *local_158;
  code *pcStack_150;
  timespec local_148;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d0 [16];
  long *local_c0;
  long *local_b8;
  long *local_b0;
  long *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  Options local_80 [16];
  long *local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0026d51e to 0026d525 has its CatchHandler @ 0026def8 */
    Desktop::Desktop(pDVar14);
    uVar24 = *(ulong *)(pDVar14 + 0x40);
    iVar3 = *(int *)(uVar24 + 0x10);
    Desktop::instance = pDVar14;
  }
  else {
    uVar24 = *(ulong *)(Desktop::instance + 0x40);
    iVar3 = *(int *)(uVar24 + 0x10);
  }
  if (iVar3 != 100) {
    *(undefined4 *)(uVar24 + 0x10) = 100;
    if (iVar3 == 0) {
                    /* try { // try from 0026d54f to 0026d553 has its CatchHandler @ 0026de7d */
      Timer::TimerThread::addTimer(*(TimerThread **)(uVar24 + 0x18),uVar24);
    }
    else {
      Timer::TimerThread::resetTimerCounter(*(TimerThread **)(uVar24 + 0x18),uVar24);
    }
  }
  uVar21 = (ulong)_ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
  if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
    clock_gettime(1,&local_148);
    uVar24 = local_148.tv_sec * 1000000;
    auVar8 = SEXT816((long)(local_148.tv_nsec / 1000 + uVar24)) * SEXT816(0x20c49ba5e353f7cf);
    uVar20 = (int)(auVar8._8_8_ >> 7) - (auVar8._12_4_ >> 0x1f);
    uVar21 = (ulong)uVar20;
    if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar20) ||
       (uVar20 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
      LOCK();
      UNLOCK();
      _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar20;
    }
  }
  *(int *)(this + 0x280) = (int)uVar21;
  this[0x260] = (TextEditor)0x1;
  LOCK();
  lVar25 = *(long *)(this + 0x248);
  *(undefined1 **)(this + 0x248) = &DAT_0061ac58;
  UNLOCK();
  piVar26 = (int *)(lVar25 + -0x10);
  if (piVar26 == &emptyString) {
LAB_0026d606:
    TVar2 = this[0x1d0];
  }
  else {
    LOCK();
    iVar3 = *piVar26;
    *piVar26 = *piVar26 + -1;
    UNLOCK();
    if (iVar3 != 0) goto LAB_0026d606;
    operator_delete__(piVar26);
    TVar2 = this[0x1d0];
    uVar21 = extraout_RDX_03;
  }
  if ((TVar2 == (TextEditor)0x0) && (this[0x1ce] != (TextEditor)0x0)) {
    return;
  }
  if ((this[0x1cd] == (TextEditor)0x0) || ((*(byte *)(param_1 + 0x10) & 0x20) == 0)) {
    iVar3 = *(int *)(this + 0x348);
    *(undefined4 *)(this + 0x348) = 0;
    if (iVar3 != 0) {
      uVar13 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
      uVar20 = *(uint *)(this + 0x340);
      uVar27 = 0;
      if ((int)uVar20 < 0) {
        uVar20 = 0;
      }
      if (uVar13 < uVar20) {
        uVar20 = uVar13;
      }
      uVar21 = extraout_RDX;
      if (uVar20 != 0) {
        ParagraphsModel::getText
                  (&local_148.tv_sec,*(long *)(*(long *)(this + 0x338) + 0x330) + 0x60);
        uVar24 = (ulong)(uVar20 - 1);
        uVar13 = juce::String::operator[]((String *)&local_148,uVar20 - 1);
        piVar26 = (int *)(local_148.tv_sec + -0x10);
        uVar21 = extraout_RDX_00;
        if (piVar26 != &emptyString) {
          LOCK();
          iVar3 = *piVar26;
          *piVar26 = *piVar26 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            operator_delete__(piVar26);
            uVar21 = extraout_RDX_01;
          }
        }
        if (uVar13 != 10) {
          uVar13 = (**(code **)(**(long **)(this + 0x338) + 0x50))();
          uVar27 = 1;
          uVar21 = extraout_RDX_02;
          if (uVar20 != uVar13) {
            uVar27 = *(undefined4 *)(this + 0x348);
          }
        }
      }
      *(undefined4 *)(this + 0x344) = uVar27;
    }
    iVar3 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_1 + 0xc);
    iVar5 = *(int *)(this + 0x278);
    iVar6 = *(int *)(this + 0x19c);
    local_16c = (float)*(int *)(this + 0x198) + (float)*(int *)(this + 0x27c);
    iVar7 = *(int *)(*(long *)(this + 0x188) + 0x208);
    fVar30 = getYOffset(this,uVar24,uVar21,*(long *)(this + 0x188),param_4,param_5);
    lVar25 = *(long *)(this + 0x188);
    fVar30 = (float)((iVar4 + *(int *)(lVar25 + 0x20c)) -
                    SUB84((double)(fVar30 + local_16c) + DAT_005d9098,0));
    uVar24 = indexAtPosition((float)((iVar3 - (iVar5 + iVar6)) + iVar7),fVar30,this);
    moveCaretTo(CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),fVar30,this,(uint)uVar24,
                (ulong)(*(uint *)(param_1 + 0x10) & 1),lVar25,param_4,param_5);
    pTVar22 = this + 8;
    while ((*(ushort *)(pTVar22 + 0xe8) & 1) == 0) {
      pTVar22 = *(TextEditor **)(pTVar22 + 0x30);
      if (pTVar22 == (TextEditor *)0x0) {
        return;
      }
    }
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026d7bc to 0026d7c5 has its CatchHandler @ 0026de51 */
      pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0026d7c9 to 0026d7d0 has its CatchHandler @ 0026de3e */
      Desktop::Desktop(pDVar14);
      Desktop::instance = pDVar14;
    }
    if ((long)*(int *)(Desktop::instance + 0xdc) == 0) {
      return;
    }
    lVar25 = 0;
    do {
      if ((TextEditor *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar25))[1] == pTVar22) {
        (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar25) + 0xf8))();
        return;
      }
      lVar25 = lVar25 + 8;
    } while ((long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar25);
    return;
  }
  local_188 = (void *)0x0;
  uStack_180 = 0;
  local_178 = (long *)0x0;
  pTVar22 = this + 8;
  pTVar15 = pTVar22;
  do {
    if ((*(long *)(pTVar15 + 0x68) != 0) &&
       (pLVar16 = *(LookAndFeel_V4 **)(*(long *)(pTVar15 + 0x68) + 0x10),
       pLVar16 != (LookAndFeel_V4 *)0x0)) {
      plVar17 = *(long **)(pLVar16 + 0x120);
      goto joined_r0x0026d865;
    }
    pTVar15 = *(TextEditor **)(pTVar15 + 0x30);
  } while (pTVar15 != (TextEditor *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026d879 to 0026d882 has its CatchHandler @ 0026de1c */
    pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0026d886 to 0026d88d has its CatchHandler @ 0026de1a */
    Desktop::Desktop(pDVar14);
    Desktop::instance = pDVar14;
  }
  pLVar16 = Desktop::getDefaultLookAndFeel(Desktop::instance);
  plVar17 = *(long **)(pLVar16 + 0x120);
joined_r0x0026d865:
  if (plVar17 == (long *)0x0) {
                    /* try { // try from 0026d8ac to 0026d8b5 has its CatchHandler @ 0026de85 */
    plVar17 = operator_new(0x18);
    *(undefined4 *)(plVar17 + 1) = 0;
    *plVar17 = (long)&PTR__ReferenceCountedObject_00710ff8;
    plVar17[2] = (long)pLVar16;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    plVar18 = *(long **)(pLVar16 + 0x120);
    *(long **)(pLVar16 + 0x120) = plVar17;
    if (plVar18 == (long *)0x0) goto LAB_0026d900;
    LOCK();
    plVar17 = plVar18 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*plVar18 + 8))();
    }
    plVar18 = local_178;
    plVar17 = *(long **)(pLVar16 + 0x120);
    if (plVar17 != (long *)0x0) goto LAB_0026d900;
    local_178 = (long *)0x0;
    plVar17 = local_178;
  }
  else {
LAB_0026d900:
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    plVar18 = local_178;
  }
  local_178 = plVar17;
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar17 = plVar18 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*plVar18 + 8))();
    }
  }
                    /* try { // try from 0026d925 to 0026d930 has its CatchHandler @ 0026de85 */
  (**(code **)(*(long *)this + 0x70))(this,&local_188,param_1);
  this[0x1d3] = (TextEditor)0x1;
                    /* try { // try from 0026d938 to 0026d944 has its CatchHandler @ 0026de78 */
  PopupMenu::Options::Options(local_80);
                    /* try { // try from 0026d945 to 0026d95c has its CatchHandler @ 0026de73 */
  PopupMenu::Options::withTargetComponent(&local_d0,(undefined8 *)local_80,(long)pTVar22);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0026d969 to 0026d972 has its CatchHandler @ 0026de36 */
    pDVar14 = operator_new(0x1d0);
                    /* try { // try from 0026d976 to 0026d97d has its CatchHandler @ 0026de26 */
    Desktop::Desktop(pDVar14);
    Desktop::instance = pDVar14;
  }
  uVar9 = detail::MouseInputSourceImpl::getScreenPosition
                    ((MouseInputSourceImpl *)
                     **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28));
  plVar19 = local_b0;
  plVar18 = local_b8;
  plVar17 = local_c0;
  dVar11 = (double)(float)uVar9 + DAT_005d9098;
  dVar10 = (double)(float)((ulong)uVar9 >> 0x20) + DAT_005d9098;
  if (local_c0 != (long *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  if (local_b8 != (long *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  if (local_b0 != (long *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  local_148.tv_sec = (long)dVar10 << 0x20 | (ulong)dVar11 & 0xffffffff;
  if (local_a8 != (long *)0x0) {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
  }
  local_e8 = local_90;
  uStack_e0 = uStack_88;
  local_f8 = local_a0;
  uVar9 = local_f8;
  uStack_f0 = uStack_98;
  uVar12 = uStack_f0;
  local_148.tv_nsec = 0;
  local_138 = local_c0;
  if (local_c0 != (long *)0x0) {
    LOCK();
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    UNLOCK();
  }
  local_130 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    *(int *)(local_b8 + 1) = (int)local_b8[1] + 1;
    UNLOCK();
  }
  local_128 = local_b0;
  if (local_b0 != (long *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  local_120 = local_a8;
  local_f8._0_4_ = (undefined4)local_a0;
  local_f8._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
  uStack_f0._0_4_ = (undefined4)uStack_98;
  uStack_f0._4_4_ = (undefined4)((ulong)uStack_98 >> 0x20);
  local_f8 = uVar9;
  uStack_f0 = uVar12;
  if (local_a8 == (long *)0x0) {
    local_108 = local_90;
    uStack_100 = uStack_88;
    local_118 = (undefined4)local_f8;
    uStack_114 = local_f8._4_4_;
    uStack_110 = (undefined4)uStack_f0;
    uStack_10c = uStack_f0._4_4_;
  }
  else {
    LOCK();
    *(int *)(local_a8 + 1) = (int)local_a8[1] + 1;
    UNLOCK();
    local_108 = local_90;
    uStack_100 = uStack_88;
    local_118 = (undefined4)local_f8;
    uStack_114 = local_f8._4_4_;
    uStack_110 = (undefined4)uStack_f0;
    uStack_10c = uStack_f0._4_4_;
    LOCK();
    plVar1 = local_a8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  if (plVar19 != (long *)0x0) {
    LOCK();
    plVar1 = plVar19 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar19 + 8))(plVar19);
    }
  }
  if (plVar18 != (long *)0x0) {
    LOCK();
    plVar19 = plVar18 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)(*plVar18 + 8))(plVar18);
    }
  }
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar18 = plVar17 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  plVar17 = *(long **)(this + 0xe0);
  if (plVar17 == (long *)0x0) {
                    /* try { // try from 0026dd81 to 0026dd8a has its CatchHandler @ 0026de1e */
    plVar17 = operator_new(0x18);
    *(undefined4 *)(plVar17 + 1) = 0;
    *plVar17 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar17[2] = (long)pTVar22;
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    plVar18 = *(long **)(this + 0xe0);
    *(long **)(this + 0xe0) = plVar17;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar17 = plVar18 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)(*plVar18 + 8))();
      }
      plVar17 = *(long **)(this + 0xe0);
      if (plVar17 == (long *)0x0) {
        plVar17 = (long *)0x0;
        goto LAB_0026db22;
      }
    }
  }
  LOCK();
  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
  UNLOCK();
LAB_0026db22:
  local_158 = (code *)0x0;
  pcStack_150 = (code *)0x0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
                    /* try { // try from 0026db2f to 0026db38 has its CatchHandler @ 0026de6e */
  plVar18 = operator_new(8);
  *plVar18 = (long)plVar17;
  if (plVar17 != (long *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  pcStack_150 = std::
                _Function_handler<void(int),juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148>
                ::_M_invoke;
  local_158 = std::
              _Function_handler<void(int),juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148>
              ::_M_manager;
  local_168 = plVar18;
                    /* try { // try from 0026db67 to 0026db70 has its CatchHandler @ 0026de8a */
  plVar19 = operator_new(0x28);
  *plVar19 = (long)&PTR__Callable_007112f0;
  plVar19[1] = 0;
  plVar19[2] = 0;
  plVar19[3] = 0;
  plVar19[4] = 0;
  lVar25 = *plVar18;
                    /* try { // try from 0026db8d to 0026db96 has its CatchHandler @ 0026de61 */
  plVar18 = operator_new(8);
  *plVar18 = lVar25;
  pcVar28 = std::
            _Function_handler<void(int),juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148>
            ::_M_invoke;
  pcVar29 = std::
            _Function_handler<void(int),juce::TextEditor::mouseDown(juce::MouseEvent_const&)::$_148>
            ::_M_manager;
  if (lVar25 != 0) {
    LOCK();
    *(int *)(lVar25 + 8) = *(int *)(lVar25 + 8) + 1;
    UNLOCK();
    pcVar28 = pcStack_150;
    pcVar29 = local_158;
  }
  plVar19[1] = (long)plVar18;
  plVar19[4] = (long)pcVar28;
  plVar19[3] = (long)pcVar29;
                    /* try { // try from 0026dbba to 0026dbc9 has its CatchHandler @ 0026de8a */
  PopupMenu::showWithOptionalCallback((long *)&local_188,&local_148.tv_sec,plVar19);
  if (local_158 != (code *)0x0) {
                    /* try { // try from 0026dbd4 to 0026dbe2 has its CatchHandler @ 0026de59 */
    (*local_158)(&local_168,&local_168,3);
  }
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar18 = plVar17 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  if (local_120 != (long *)0x0) {
    LOCK();
    plVar17 = local_120 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_120 + 8))();
    }
  }
  if (local_128 != (long *)0x0) {
    LOCK();
    plVar17 = local_128 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_128 + 8))();
    }
  }
  if (local_130 != (long *)0x0) {
    LOCK();
    plVar17 = local_130 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_130 + 8))();
    }
  }
  if (local_138 != (long *)0x0) {
    LOCK();
    plVar17 = local_138 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_138 + 8))();
    }
  }
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar17 = local_a8 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_a8 + 8))();
    }
  }
  if (local_b0 != (long *)0x0) {
    LOCK();
    plVar17 = local_b0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_b0 + 8))();
    }
  }
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar17 = local_b8 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_b8 + 8))();
    }
  }
  if (local_c0 != (long *)0x0) {
    LOCK();
    plVar17 = local_c0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_c0 + 8))();
    }
  }
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar17 = local_58 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_58 + 8))();
    }
  }
  if (local_60 != (long *)0x0) {
    LOCK();
    plVar17 = local_60 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_60 + 8))();
    }
  }
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar17 = local_68 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_68 + 8))();
    }
  }
  if (local_70 != (long *)0x0) {
    LOCK();
    plVar17 = local_70 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_70 + 8))();
    }
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
  if (0 < uStack_180._4_4_) {
    lVar25 = 0;
    lVar23 = 0;
    do {
      PopupMenu::Item::~Item((Item *)((long)local_188 + lVar25));
      lVar23 = lVar23 + 1;
      lVar25 = lVar25 + 0x70;
    } while (lVar23 < uStack_180._4_4_);
  }
  uStack_180 = uStack_180 & 0xffffffff;
  free(local_188);
  return;
}


