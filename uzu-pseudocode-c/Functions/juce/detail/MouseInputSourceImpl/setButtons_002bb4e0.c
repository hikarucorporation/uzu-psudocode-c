// Function : setButtons
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 002bb4e0
// Prototype: bool setButtons(undefined8 param_1_00, undefined8 param_2, MouseInputSourceImpl * this, undefined8 * param_4, undefined8 param_5, uint param_6)
// Body     : 002bb4e0 - 002bda46


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::MouseInputSourceImpl::setButtons(juce::detail::PointerState const&, juce::Time,
   juce::ModifierKeys) */

bool __thiscall
juce::detail::MouseInputSourceImpl::setButtons
          (undefined8 param_1_00,undefined8 param_2,MouseInputSourceImpl *this,undefined8 *param_4,
          long param_5,uint param_6)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  float fVar3;
  vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *pvVar4;
  long lVar5;
  Component *this_00;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  char cVar11;
  Desktop *pDVar12;
  long *plVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  long lVar20;
  MouseInputSourceImpl *pMVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auVar25 [16];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  float fVar26;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  float fVar27;
  undefined8 uVar28;
  undefined1 in_XMM2 [16];
  float fVar29;
  undefined1 auVar30 [16];
  int local_230;
  int local_22c;
  long *local_228;
  long *local_220;
  undefined1 local_218 [16];
  undefined8 local_208;
  long lStack_200;
  int *local_1f8;
  long local_1e8;
  long *local_1e0;
  long *local_1d8;
  long *local_1d0;
  float local_1c0;
  float fStack_1bc;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  uint local_19c;
  undefined8 local_198;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined1 local_168;
  char local_167;
  int local_15c;
  undefined8 local_158;
  HierarchyChecker *pHStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined8 uStack_13c;
  uint local_134;
  undefined8 local_130;
  long local_128;
  long local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined1 local_100;
  undefined1 local_ff;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined4 local_dc;
  undefined8 local_d8;
  float local_c0;
  float fStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  uint local_b0;
  undefined8 local_ac;
  undefined8 uStack_a4;
  undefined4 local_9c;
  undefined8 local_98;
  long *local_90;
  long *local_88;
  long local_80;
  long local_78;
  MouseInputSourceImpl *local_70;
  byte local_68;
  undefined1 local_67;
  MouseInputSourceImpl *local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = param_1_00;
  uVar23 = *(uint *)(this + 0x3c);
  if (uVar23 == param_6) {
    return false;
  }
  local_f8 = param_4;
  if (((uVar23 & 0x1f0) != 0) && ((param_6 & 0x1f0) == 0)) {
    local_d8 = CONCAT44(local_d8._4_4_,param_6);
    local_15c = *(int *)(this + 0x68);
LAB_002bb59a:
    uVar28 = in_XMM2._0_8_;
    pMVar21 = this + 0x68;
    if ((*(long *)(this + 0x48) != 0) &&
       (plVar17 = *(long **)(*(long *)(this + 0x48) + 0x10), plVar17 != (long *)0x0)) {
      uVar22 = ModifierKeys::currentModifiers & 0xfffffe0f;
      *(float *)(this + 0x3c) = (float)local_d8;
      uVar15 = CONCAT44((float)((ulong)*param_4 >> 0x20) +
                        (float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20),
                        (float)*param_4 + (float)*(undefined8 *)(this + 0x18));
      local_48 = param_4[1];
      uStack_40 = param_4[2];
      local_dc = *(undefined4 *)(param_4 + 3);
      local_228 = (long *)plVar17[0x1b];
      local_1e8 = param_5;
      if (local_228 == (long *)0x0) {
        local_218._8_8_ = 0;
        local_218._0_8_ = uVar15;
        local_228 = operator_new(0x18);
        *(undefined4 *)(local_228 + 1) = 0;
        *local_228 = (long)&PTR__ReferenceCountedObject_00714b80;
        local_228[2] = (long)plVar17;
        LOCK();
        *(int *)(local_228 + 1) = (int)local_228[1] + 1;
        UNLOCK();
        plVar14 = (long *)plVar17[0x1b];
        plVar17[0x1b] = (long)local_228;
        if (plVar14 == (long *)0x0) {
          uVar15 = local_218._0_8_;
          goto LAB_002bb60c;
        }
        LOCK();
        plVar18 = plVar14 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
        local_228 = (long *)plVar17[0x1b];
        uVar15 = local_218._0_8_;
        if (local_228 != (long *)0x0) goto LAB_002bb611;
      }
      else {
LAB_002bb60c:
LAB_002bb611:
        LOCK();
        *(int *)(local_228 + 1) = (int)local_228[1] + 1;
        UNLOCK();
      }
                    /* try { // try from 002bb616 to 002bb628 has its CatchHandler @ 002bdd44 */
      local_58 = ScalingHelpers::screenPosToLocalPos(uVar15,plVar17);
      plVar17 = local_228;
      if (local_228 == (long *)0x0) {
LAB_002bb6cf:
        plVar14 = (long *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_228 + 1) = (int)local_228[1] + 1;
        UNLOCK();
        if (local_228 == (long *)0x0) goto LAB_002bb6cf;
        plVar14 = (long *)local_228[2];
      }
      local_218._8_8_ = 0;
      local_218._0_8_ = *(ulong *)(this + 0x70);
      local_60 = pMVar21;
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002bb6e8 to 002bb6f1 has its CatchHandler @ 002bdc84 */
        pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bb6f5 to 002bb6fc has its CatchHandler @ 002bdc71 */
        Desktop::Desktop(pDVar12);
        Desktop::instance = pDVar12;
      }
      fVar3 = *(float *)(Desktop::instance + 0x130);
      fVar26 = (float)(_DAT_005d91c0 & (uint)fVar3);
      if (fVar26 == DAT_005d94c8) {
        if ((fVar3 != DAT_005d9038) || (NAN(fVar3) || NAN(DAT_005d9038))) {
LAB_002bb75c:
          auVar25._4_4_ = fVar3;
          auVar25._0_4_ = fVar3;
          auVar25._8_4_ = fVar3;
          auVar25._12_4_ = fVar3;
          local_218 = divps(local_218,auVar25);
        }
      }
      else {
        fVar27 = (float)((uint)(DAT_005d9054 + fVar3) & _DAT_005d91c0);
        in_XMM2 = ZEXT416((uint)fVar27);
        if (DAT_005d94cc < fVar27) {
          fVar29 = DAT_005d9038;
          if (DAT_005d9038 <= fVar26) {
            fVar29 = fVar26;
          }
          if (fVar29 * DAT_005d94d0 < fVar27) goto LAB_002bb75c;
        }
      }
      plVar18 = plVar14;
      do {
        plVar13 = plVar18;
        plVar18 = (long *)plVar13[6];
      } while ((long *)plVar13[6] != (long *)0x0);
                    /* try { // try from 002bb78c to 002bb7ab has its CatchHandler @ 002bdd5d */
      uVar24 = ComponentHelpers::convertFromParentSpace<juce::Point<float>>(local_218._0_8_,plVar13)
      ;
      uVar28 = extraout_XMM0_Qb;
      if (plVar13 != plVar14) {
        uVar24 = ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                           (uVar24,(long)plVar13,plVar14);
        uVar28 = extraout_XMM0_Qb_00;
      }
      local_218._8_8_ = uVar28;
      local_218._0_8_ = uVar24;
      lVar20 = *(long *)(this + 0x78);
      local_68 = getNumberOfMultipleClicks(this);
      param_5 = local_1e8;
      local_67 = lVar20 + 300 < *(long *)(this + 0xf0) || this[0xf8] != (MouseInputSourceImpl)0x0;
      uStack_b8 = SUB84((double)(float)local_58 + _DAT_005d9a90,0);
      uStack_b4 = SUB84((double)local_58._4_4_ + _UNK_005d9a98,0);
      local_c0 = (float)local_58;
      fStack_bc = local_58._4_4_;
      local_ac = local_48;
      uStack_a4 = uStack_40;
      local_9c = local_dc;
      local_98 = local_218._0_8_;
      local_80 = local_1e8;
                    /* try { // try from 002bb87c to 002bb892 has its CatchHandler @ 002bdd42 */
      local_b0 = uVar22 | uVar23;
      local_90 = plVar14;
      local_88 = plVar14;
      local_78 = lVar20;
      local_70 = this;
      HierarchyChecker::HierarchyChecker
                ((HierarchyChecker *)&local_1e0,(long *)&local_228,(undefined8 *)&local_c0);
      if (local_228 == (long *)0x0) {
        if ((DAT_000000ea & 2) != 0) {
          plVar14 = (long *)0x0;
          goto joined_r0x002bb8fd;
        }
      }
      else {
        plVar14 = (long *)local_228[2];
        if ((*(byte *)((long)plVar14 + 0xea) & 2) != 0) {
joined_r0x002bb8fd:
          if ((ModalComponentManager::singletonHolder != 0) &&
             (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
            uVar15 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
            do {
              lVar20 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                                (ulong)((int)uVar15 - 2) * 8);
              if (*(char *)(lVar20 + 0x5c) != '\0') {
                plVar18 = *(long **)(lVar20 + 0x40);
                if ((plVar18 != (long *)0x0) && (plVar18 != plVar14)) goto LAB_002bb944;
                break;
              }
              uVar15 = uVar15 - 1;
            } while (1 < uVar15);
          }
        }
      }
LAB_002bb965:
      plVar14 = (long *)local_228[2];
      if ((*(ushort *)(plVar14 + 0x1d) & 0x4000) != 0) {
        Component::internalRepaintUnchecked((long)plVar14,0,plVar14[8],'\x01');
        plVar14 = (long *)local_228[2];
      }
      auVar30 = (**(code **)(*plVar14 + 0x38))();
      plVar14 = local_1e0;
      uVar28 = auVar30._8_8_;
      for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
        if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
          puVar16 = *(undefined8 **)(lVar20 + 0xd8);
          if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bba94 to 002bba9d has its CatchHandler @ 002bdd49 */
            puVar16 = operator_new(0x18);
            auVar30._8_8_ = uVar28;
            auVar30._0_8_ = extraout_XMM0_Qa;
            *(undefined4 *)(puVar16 + 1) = 0;
            *puVar16 = &PTR__ReferenceCountedObject_00714b80;
            puVar16[2] = lVar20;
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            plVar18 = *(long **)(lVar20 + 0xd8);
            *(undefined8 **)(lVar20 + 0xd8) = puVar16;
            if (plVar18 != (long *)0x0) {
              LOCK();
              plVar13 = plVar18 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                auVar30 = (**(code **)(*plVar18 + 8))();
              }
              puVar16 = *(undefined8 **)(lVar20 + 0xd8);
              if (puVar16 == (undefined8 *)0x0) break;
            }
          }
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar18 = (long *)*plVar14;
          *plVar14 = (long)puVar16;
          goto joined_r0x002bb9ed;
        }
      }
      plVar18 = (long *)*plVar14;
      *plVar14 = 0;
joined_r0x002bb9ed:
      if (plVar18 != (long *)0x0) {
        LOCK();
        plVar14 = plVar18 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          auVar30 = (**(code **)(*plVar18 + 8))();
        }
      }
      if (*local_1e0 != 0) {
        if (*(long *)(*local_1e0 + 0x10) != 0) {
          if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002bba38 to 002bba41 has its CatchHandler @ 002bdca9 */
            pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bba45 to 002bba4c has its CatchHandler @ 002bdc47 */
            Desktop::Desktop(pDVar12);
            Desktop::instance = pDVar12;
          }
                    /* try { // try from 002bba54 to 002bba5b has its CatchHandler @ 002bdca9 */
          pDVar12 = Desktop::instance;
          Desktop::resetTimer(Desktop::instance);
          uVar28 = extraout_XMM1_Qa;
          if (*(int *)(pDVar12 + 0x68) == 2) {
            local_220 = plVar17;
            plVar17 = *(long **)(pDVar12 + 0x48);
            lVar20 = *(long *)(pDVar12 + 0x50);
            if (lVar20 != 0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
              }
            }
            local_218._0_8_ = lVar20;
            local_230 = 0;
            local_22c = *(int *)((long)plVar17 + 0xc);
            pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                       **)(pDVar12 + 0x58);
            plVar14 = *(long **)(pvVar4 + 8);
            local_158 = &local_230;
            if (plVar14 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002bbb31 to 002bbb3d has its CatchHandler @ 002bdc0d */
              std::
              vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
              ::
              _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                        (pvVar4,plVar14,&local_158);
            }
            else {
              *plVar14 = (long)&local_230;
              *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
            }
            local_208 = *(undefined8 *)(pDVar12 + 0x58);
            lStack_200 = *(long *)(pDVar12 + 0x60);
            if (lStack_200 != 0) {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
                UNLOCK();
              }
              else {
                *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
              }
            }
            local_1f8 = &local_230;
            if (local_230 < local_22c) {
              do {
                plVar14 = local_1e0;
                for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
                  if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
                    puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                    if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bbd4f to 002bbd58 has its CatchHandler @ 002bdc27 */
                      puVar16 = operator_new(0x18);
                      *(undefined4 *)(puVar16 + 1) = 0;
                      *puVar16 = &PTR__ReferenceCountedObject_00714b80;
                      puVar16[2] = lVar20;
                      LOCK();
                      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                      UNLOCK();
                      plVar18 = *(long **)(lVar20 + 0xd8);
                      *(undefined8 **)(lVar20 + 0xd8) = puVar16;
                      if (plVar18 != (long *)0x0) {
                        LOCK();
                        plVar13 = plVar18 + 1;
                        *(int *)plVar13 = (int)*plVar13 + -1;
                        UNLOCK();
                        if ((int)*plVar13 == 0) {
                          (**(code **)(*plVar18 + 8))();
                        }
                        puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                        if (puVar16 == (undefined8 *)0x0) break;
                      }
                    }
                    LOCK();
                    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                    UNLOCK();
                    goto LAB_002bbc2d;
                  }
                }
                puVar16 = (undefined8 *)0x0;
LAB_002bbc2d:
                param_5 = local_1e8;
                plVar18 = (long *)*plVar14;
                *plVar14 = (long)puVar16;
                if (plVar18 != (long *)0x0) {
                  LOCK();
                  plVar14 = plVar18 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    (**(code **)(*plVar18 + 8))();
                  }
                }
                if ((*local_1e0 == 0) || (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 == 0))
                break;
                plVar14 = *(long **)(*plVar17 + (long)local_230 * 8);
                if (plVar14 != (long *)0x0) {
                  in_XMM2 = ZEXT416(local_19c);
                  local_ff = local_167 != '\0';
                  local_158 = (int *)CONCAT44(fStack_1bc,local_1c0);
                  pHStack_150 = (HierarchyChecker *)
                                CONCAT44(SUB84((double)fStack_1bc + _UNK_005d9a98,0),
                                         SUB84((double)local_1c0 + _DAT_005d9a90,0));
                  local_148 = local_1b0;
                  local_144 = local_1ac;
                  uStack_13c = uStack_1a4;
                  local_134 = local_19c;
                  local_130 = local_198;
                  local_118 = local_180;
                  uStack_114 = uStack_17c;
                  uStack_110 = uStack_178;
                  uStack_10c = uStack_174;
                  local_108 = local_170;
                  local_100 = local_168;
                    /* try { // try from 002bbd3b to 002bbd45 has its CatchHandler @ 002bdcb3 */
                  local_128 = lVar20;
                  local_120 = lVar20;
                  (**(code **)(*plVar14 + 0x38))((double)local_1c0 + _DAT_005d9a90);
                }
                local_230 = local_230 + 1;
              } while (local_230 < local_22c);
            }
            ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_44&&)::{lambda()#1}>
            ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::__44,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::__44&&)::_lambda()_1_>
                           *)&local_208);
            plVar17 = local_220;
            uVar24 = local_218._0_8_;
            uVar28 = extraout_XMM1_Qa_00;
            if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_218._0_8_ !=
                (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
              uVar15 = *(ulong *)(local_218._0_8_ + 8);
              if (uVar15 == 0x100000001) {
                *(undefined8 *)(local_218._0_8_ + 8) = 0;
                (**(code **)(*(long *)local_218._0_8_ + 0x10))(local_218._0_8_);
                (**(code **)(*(long *)uVar24 + 0x18))(uVar24);
                uVar28 = extraout_XMM1_Qa_01;
              }
              else {
                if (*PTR___libc_single_threaded_00715c50 == '\0') {
                  LOCK();
                  p_Var6 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)(local_218._0_8_ + 8);
                  uVar15 = (ulong)*(uint *)p_Var6;
                  *(uint *)p_Var6 = *(uint *)p_Var6 - 1;
                  UNLOCK();
                }
                else {
                  *(int *)(local_218._0_8_ + 8) = (int)uVar15 + -1;
                }
                if ((int)uVar15 == 1) {
                  std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                            ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_218._0_8_);
                  uVar28 = extraout_XMM1_Qa_04;
                }
              }
            }
          }
          local_208 = _DAT_005dd270;
          lStack_200 = _UNK_005dd278;
          local_158 = (int *)&local_208;
          pHStack_150 = (HierarchyChecker *)&local_1e0;
          uVar24 = _DAT_005dd270;
          if ((*local_1e0 != 0) && (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 != 0)) {
                    /* try { // try from 002bbe0f to 002bbe1b has its CatchHandler @ 002bdc5c */
            bVar10 = Component::MouseListenerList::
                     sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                     ::{lambda(auto:1&,auto:2)#1}::operator()(&local_158,lVar20);
            uVar24 = extraout_XMM0_Qa_00;
            if ((bVar10) &&
               ((*local_1e0 != 0 && (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 != 0)))) {
              do {
                lVar20 = *(long *)(lVar20 + 0x30);
                if (lVar20 == 0) break;
                    /* try { // try from 002bbe47 to 002bbe51 has its CatchHandler @ 002bdc8c */
                bVar10 = Component::MouseListenerList::
                         sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                         ::{lambda(auto:1&,auto:2)#1}::operator()(&local_158,lVar20);
                uVar24 = extraout_XMM0_Qa_01;
              } while (bVar10);
            }
          }
          plVar14 = local_1e0;
          auVar30._8_8_ = uVar28;
          auVar30._0_8_ = uVar24;
          for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
            if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
              puVar16 = *(undefined8 **)(lVar20 + 0xd8);
              if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bbf30 to 002bbf39 has its CatchHandler @ 002bdca9 */
                puVar16 = operator_new(0x18);
                auVar30._8_8_ = uVar28;
                auVar30._0_8_ = extraout_XMM0_Qa_02;
                *(undefined4 *)(puVar16 + 1) = 0;
                *puVar16 = &PTR__ReferenceCountedObject_00714b80;
                puVar16[2] = lVar20;
                LOCK();
                *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                UNLOCK();
                plVar18 = *(long **)(lVar20 + 0xd8);
                *(undefined8 **)(lVar20 + 0xd8) = puVar16;
                if (plVar18 != (long *)0x0) {
                  LOCK();
                  plVar13 = plVar18 + 1;
                  *(int *)plVar13 = (int)*plVar13 + -1;
                  UNLOCK();
                  if ((int)*plVar13 == 0) {
                    auVar30 = (**(code **)(*plVar18 + 8))();
                  }
                  puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                  if (puVar16 == (undefined8 *)0x0) break;
                }
              }
              LOCK();
              *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
              UNLOCK();
              plVar18 = (long *)*plVar14;
              *plVar14 = (long)puVar16;
              goto joined_r0x002bbead;
            }
          }
          plVar18 = (long *)*plVar14;
          *plVar14 = 0;
joined_r0x002bbead:
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar14 = plVar18 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              auVar30 = (**(code **)(*plVar18 + 8))();
            }
          }
          if (*local_1e0 != 0) {
            if (*(long *)(*local_1e0 + 0x10) != 0) {
              if (1 < local_68) {
                if (plVar17 == (long *)0x0) {
                  if (local_228 == (long *)0x0) {
LAB_002bbfbd:
                    plVar14 = (long *)0x0;
                    goto LAB_002bbfbf;
                  }
                  if (local_228[2] == 0) goto LAB_002bbfad;
                }
                else {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                  if (local_228 == (long *)0x0) {
                    lVar20 = 0;
                  }
                  else {
                    lVar20 = local_228[2];
                  }
                  lVar5 = plVar17[2];
                  LOCK();
                  plVar14 = plVar17 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    auVar30 = (**(code **)(*plVar17 + 8))();
                  }
                  if (lVar20 == lVar5) {
LAB_002bbfad:
                    if (local_228 == (long *)0x0) goto LAB_002bbfbd;
                    plVar14 = (long *)local_228[2];
LAB_002bbfbf:
                    if (*local_1e0 == 0) {
                      local_128 = 0;
                    }
                    else {
                      local_128 = *(long *)(*local_1e0 + 0x10);
                    }
                    local_ff = local_167 != '\0';
                    in_XMM2._0_8_ = (double)local_1c0 + _DAT_005d9a90;
                    in_XMM2._8_8_ = (double)fStack_1bc + _UNK_005d9a98;
                    local_158 = (int *)CONCAT44(fStack_1bc,local_1c0);
                    pHStack_150 = (HierarchyChecker *)
                                  CONCAT44(SUB84(in_XMM2._8_8_,0),SUB84(in_XMM2._0_8_,0));
                    local_148 = local_1b0;
                    local_144 = local_1ac;
                    uStack_13c = uStack_1a4;
                    local_134 = local_19c;
                    local_130 = local_198;
                    local_118 = local_180;
                    uStack_114 = uStack_17c;
                    uStack_110 = uStack_178;
                    uStack_10c = uStack_174;
                    local_108 = local_170;
                    local_100 = local_168;
                    /* try { // try from 002bc08e to 002bc098 has its CatchHandler @ 002bdb85 */
                    local_120 = local_128;
                    auVar30 = (**(code **)(*plVar14 + 0x40))();
                  }
                }
                plVar14 = local_1e0;
                uVar28 = auVar30._8_8_;
                for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
                  if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
                    puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                    if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bc1d0 to 002bc1d9 has its CatchHandler @ 002bdca9 */
                      puVar16 = operator_new(0x18);
                      auVar30._8_8_ = uVar28;
                      auVar30._0_8_ = extraout_XMM0_Qa_03;
                      *(undefined4 *)(puVar16 + 1) = 0;
                      *puVar16 = &PTR__ReferenceCountedObject_00714b80;
                      puVar16[2] = lVar20;
                      LOCK();
                      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                      UNLOCK();
                      plVar18 = *(long **)(lVar20 + 0xd8);
                      *(undefined8 **)(lVar20 + 0xd8) = puVar16;
                      if (plVar18 != (long *)0x0) {
                        LOCK();
                        plVar13 = plVar18 + 1;
                        *(int *)plVar13 = (int)*plVar13 + -1;
                        UNLOCK();
                        if ((int)*plVar13 == 0) {
                          auVar30 = (**(code **)(*plVar18 + 8))();
                        }
                        puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                        if (puVar16 == (undefined8 *)0x0) break;
                      }
                    }
                    LOCK();
                    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                    UNLOCK();
                    plVar18 = (long *)*plVar14;
                    *plVar14 = (long)puVar16;
                    goto joined_r0x002bc0e2;
                  }
                }
                plVar18 = (long *)*plVar14;
                *plVar14 = 0;
joined_r0x002bc0e2:
                if (plVar18 != (long *)0x0) {
                  LOCK();
                  plVar14 = plVar18 + 1;
                  *(int *)plVar14 = (int)*plVar14 + -1;
                  UNLOCK();
                  if ((int)*plVar14 == 0) {
                    auVar30 = (**(code **)(*plVar18 + 8))();
                  }
                }
                uVar28 = auVar30._8_8_;
                if (*local_1e0 != 0) {
                  if (*(long *)(*local_1e0 + 0x10) != 0) {
                    if (*(int *)(pDVar12 + 0x68) == 2) {
                      plVar14 = *(long **)(pDVar12 + 0x48);
                      lVar20 = *(long *)(pDVar12 + 0x50);
                      if (lVar20 != 0) {
                        if (*PTR___libc_single_threaded_00715c50 == '\0') {
                          LOCK();
                          *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                          UNLOCK();
                        }
                        else {
                          *(int *)(lVar20 + 8) = *(int *)(lVar20 + 8) + 1;
                        }
                      }
                      local_218._0_8_ = lVar20;
                      local_230 = 0;
                      local_22c = *(int *)((long)plVar14 + 0xc);
                      pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                                 **)(pDVar12 + 0x58);
                      plVar18 = *(long **)(pvVar4 + 8);
                      local_220 = plVar17;
                      local_158 = &local_230;
                      if (plVar18 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002bc26d to 002bc279 has its CatchHandler @ 002bdae5 */
                        std::
                        vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                        ::
                        _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                                  (pvVar4,plVar18,&local_158);
                      }
                      else {
                        *plVar18 = (long)&local_230;
                        *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
                      }
                      local_208 = *(undefined8 *)(pDVar12 + 0x58);
                      lStack_200 = *(long *)(pDVar12 + 0x60);
                      if (lStack_200 != 0) {
                        if (*PTR___libc_single_threaded_00715c50 == '\0') {
                          LOCK();
                          *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
                          UNLOCK();
                        }
                        else {
                          *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
                        }
                      }
                      local_1f8 = &local_230;
                      if (local_230 < local_22c) {
                        do {
                          plVar17 = local_1e0;
                          for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
                            if ((*plVar18 != 0) &&
                               (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
                              puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                              if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bc446 to 002bc44f has its CatchHandler @ 002bdaed */
                                puVar16 = operator_new(0x18);
                                *(undefined4 *)(puVar16 + 1) = 0;
                                *puVar16 = &PTR__ReferenceCountedObject_00714b80;
                                puVar16[2] = lVar20;
                                LOCK();
                                *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                                UNLOCK();
                                plVar18 = *(long **)(lVar20 + 0xd8);
                                *(undefined8 **)(lVar20 + 0xd8) = puVar16;
                                if (plVar18 != (long *)0x0) {
                                  LOCK();
                                  plVar13 = plVar18 + 1;
                                  *(int *)plVar13 = (int)*plVar13 + -1;
                                  UNLOCK();
                                  if ((int)*plVar13 == 0) {
                                    (**(code **)(*plVar18 + 8))();
                                  }
                                  puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                                  if (puVar16 == (undefined8 *)0x0) break;
                                }
                              }
                              LOCK();
                              *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                              UNLOCK();
                              goto LAB_002bc32d;
                            }
                          }
                          puVar16 = (undefined8 *)0x0;
LAB_002bc32d:
                          param_5 = local_1e8;
                          plVar18 = (long *)*plVar17;
                          *plVar17 = (long)puVar16;
                          if (plVar18 != (long *)0x0) {
                            LOCK();
                            plVar17 = plVar18 + 1;
                            *(int *)plVar17 = (int)*plVar17 + -1;
                            UNLOCK();
                            if ((int)*plVar17 == 0) {
                              (**(code **)(*plVar18 + 8))();
                            }
                          }
                          if ((*local_1e0 == 0) ||
                             (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 == 0)) break;
                          plVar17 = *(long **)(*plVar14 + (long)local_230 * 8);
                          if (plVar17 != (long *)0x0) {
                            in_XMM2 = ZEXT416(local_19c);
                            local_ff = local_167 != '\0';
                            local_158 = (int *)CONCAT44(fStack_1bc,local_1c0);
                            pHStack_150 = (HierarchyChecker *)
                                          CONCAT44(SUB84((double)fStack_1bc + _UNK_005d9a98,0),
                                                   SUB84((double)local_1c0 + _DAT_005d9a90,0));
                            local_148 = local_1b0;
                            local_144 = local_1ac;
                            uStack_13c = uStack_1a4;
                            local_134 = local_19c;
                            local_130 = local_198;
                            local_118 = local_180;
                            uStack_114 = uStack_17c;
                            uStack_110 = uStack_178;
                            uStack_10c = uStack_174;
                            local_108 = local_170;
                            local_100 = local_168;
                    /* try { // try from 002bc43b to 002bc440 has its CatchHandler @ 002bdc15 */
                            local_128 = lVar20;
                            local_120 = lVar20;
                            (**(code **)(*plVar17 + 0x40))((double)local_1c0 + _DAT_005d9a90);
                          }
                          local_230 = local_230 + 1;
                        } while (local_230 < local_22c);
                      }
                      ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_45&&)::{lambda()#1}>
                      ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::__45,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::__45&&)::_lambda()_1_>
                                     *)&local_208);
                      plVar17 = local_220;
                      uVar24 = local_218._0_8_;
                      uVar28 = extraout_XMM1_Qa_02;
                      if ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)local_218._0_8_ !=
                          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
                        uVar15 = *(ulong *)(local_218._0_8_ + 8);
                        if (uVar15 == 0x100000001) {
                          *(undefined8 *)(local_218._0_8_ + 8) = 0;
                          (**(code **)(*(long *)local_218._0_8_ + 0x10))(local_218._0_8_);
                          (**(code **)(*(long *)uVar24 + 0x18))(uVar24);
                          uVar28 = extraout_XMM1_Qa_03;
                        }
                        else {
                          if (*PTR___libc_single_threaded_00715c50 == '\0') {
                            LOCK();
                            p_Var6 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                                     (local_218._0_8_ + 8);
                            uVar15 = (ulong)*(uint *)p_Var6;
                            *(uint *)p_Var6 = *(uint *)p_Var6 - 1;
                            UNLOCK();
                          }
                          else {
                            *(int *)(local_218._0_8_ + 8) = (int)uVar15 + -1;
                          }
                          if ((int)uVar15 == 1) {
                            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::
                            _M_release_last_use_cold
                                      ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)
                                       local_218._0_8_);
                            uVar28 = extraout_XMM1_Qa_05;
                          }
                        }
                      }
                    }
                    auVar7._8_8_ = uVar28;
                    auVar7._0_8_ = _DAT_005dd280;
                    auVar30._8_8_ = uVar28;
                    auVar30._0_8_ = _DAT_005dd280;
                    local_208 = _DAT_005dd280;
                    lStack_200 = _UNK_005dd288;
                    local_158 = (int *)&local_208;
                    pHStack_150 = (HierarchyChecker *)&local_1e0;
                    if (*local_1e0 != 0) {
                      lVar20 = *(long *)(*local_1e0 + 0x10);
                      auVar30 = auVar7;
                      if (lVar20 != 0) {
                    /* try { // try from 002bc556 to 002bc562 has its CatchHandler @ 002bdafc */
                        bVar10 = Component::MouseListenerList::
                                 sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                                 ::{lambda(auto:1&,auto:2)#1}::operator()(&local_158,lVar20);
                        auVar9._8_8_ = uVar28;
                        auVar9._0_8_ = extraout_XMM0_Qa_04;
                        auVar8._8_8_ = uVar28;
                        auVar8._0_8_ = extraout_XMM0_Qa_04;
                        auVar30._8_8_ = uVar28;
                        auVar30._0_8_ = extraout_XMM0_Qa_04;
                        if (bVar10) {
                          auVar30 = auVar8;
                          if (*local_1e0 != 0) {
                            lVar20 = *(long *)(*local_1e0 + 0x10);
                            auVar30 = auVar9;
                            if (lVar20 != 0) {
                              uVar24 = extraout_XMM0_Qa_04;
                              do {
                                auVar30._8_8_ = uVar28;
                                auVar30._0_8_ = uVar24;
                                lVar20 = *(long *)(lVar20 + 0x30);
                                if (lVar20 == 0) break;
                    /* try { // try from 002bc59e to 002bc5a8 has its CatchHandler @ 002bdc08 */
                                bVar10 = Component::MouseListenerList::
                                         sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                                         ::{lambda(auto:1&,auto:2)#1}::operator()(&local_158,lVar20)
                                ;
                                auVar30._8_8_ = uVar28;
                                auVar30._0_8_ = extraout_XMM0_Qa_05;
                                uVar24 = extraout_XMM0_Qa_05;
                              } while (bVar10);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_002bc899:
      plVar14 = local_1d0;
      plVar18 = local_1d8;
      if (local_1d8 != local_1d0) goto LAB_002bc8e9;
      goto LAB_002bc906;
    }
    goto LAB_002bc959;
  }
  auVar30 = setPointerState(param_1_00,param_2,this,(float *)param_4,param_5,'\0');
  uVar23 = *(uint *)(this + 0x3c);
  if (((uVar23 & 0x1f0) != 0) == ((param_6 & 0x1f0) != 0)) {
    *(uint *)(this + 0x3c) = param_6;
    return false;
  }
  local_d8 = CONCAT44(local_d8._4_4_,param_6);
  pMVar21 = this + 0x68;
  local_15c = *(int *)(this + 0x68);
  if ((uVar23 & 0x1f0) != 0) goto LAB_002bb59a;
  goto LAB_002bc963;
  while (plVar14 = (long *)plVar14[6], plVar14 != plVar18) {
LAB_002bb944:
    if (plVar14 == (long *)0x0) {
                    /* try { // try from 002bb957 to 002bb9a2 has its CatchHandler @ 002bdd49 */
      cVar11 = (**(code **)(*plVar18 + 0x170))();
      if (cVar11 == '\0') {
        if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002bc16f to 002bc178 has its CatchHandler @ 002bdaf7 */
          pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bc17c to 002bc183 has its CatchHandler @ 002bdad3 */
          Desktop::Desktop(pDVar12);
          Desktop::instance = pDVar12;
        }
                    /* try { // try from 002bc18b to 002bc192 has its CatchHandler @ 002bdaf7 */
        pDVar12 = Desktop::instance;
        auVar30 = Desktop::resetTimer(Desktop::instance);
        if (*(int *)(pDVar12 + 0x68) != 2) goto LAB_002bc899;
        local_220 = plVar17;
        plVar17 = *(long **)(pDVar12 + 0x48);
        p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar12 + 0x50);
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
          }
        }
        local_230 = 0;
        local_22c = *(int *)((long)plVar17 + 0xc);
        pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                   **)(pDVar12 + 0x58);
        plVar14 = *(long **)(pvVar4 + 8);
        local_158 = &local_230;
        if (plVar14 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002bc5ee to 002bc5fa has its CatchHandler @ 002bdacc */
          std::
          vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
          ::
          _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                    (pvVar4,plVar14,&local_158);
        }
        else {
          *plVar14 = (long)&local_230;
          *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
        }
        local_208 = *(undefined8 *)(pDVar12 + 0x58);
        lStack_200 = *(long *)(pDVar12 + 0x60);
        if (lStack_200 != 0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
          }
        }
        local_1f8 = &local_230;
        if (local_230 < local_22c) goto LAB_002bc6aa;
        goto LAB_002bc638;
      }
      break;
    }
  }
  goto LAB_002bb965;
  while( true ) {
    plVar14 = *(long **)(*plVar17 + (long)local_230 * 8);
    if (plVar14 != (long *)0x0) {
      in_XMM2 = ZEXT416(local_19c);
      local_ff = local_167 != '\0';
      local_158 = (int *)CONCAT44(fStack_1bc,local_1c0);
      pHStack_150 = (HierarchyChecker *)
                    CONCAT44(SUB84((double)fStack_1bc + _UNK_005d9a98,0),
                             SUB84((double)local_1c0 + _DAT_005d9a90,0));
      local_148 = local_1b0;
      local_144 = local_1ac;
      uStack_13c = uStack_1a4;
      local_134 = local_19c;
      local_130 = local_198;
      local_118 = local_180;
      uStack_114 = uStack_17c;
      uStack_110 = uStack_178;
      uStack_10c = uStack_174;
      local_108 = local_170;
      local_100 = local_168;
                    /* try { // try from 002bc801 to 002bc80b has its CatchHandler @ 002bdb01 */
      local_128 = lVar20;
      local_120 = lVar20;
      (**(code **)(*plVar14 + 0x38))((double)local_1c0 + _DAT_005d9a90);
    }
    local_230 = local_230 + 1;
    if (local_22c <= local_230) break;
LAB_002bc6aa:
    plVar14 = local_1e0;
    for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
      if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
        puVar16 = *(undefined8 **)(lVar20 + 0xd8);
        if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bc815 to 002bc81e has its CatchHandler @ 002bdad1 */
          puVar16 = operator_new(0x18);
          *(undefined4 *)(puVar16 + 1) = 0;
          *puVar16 = &PTR__ReferenceCountedObject_00714b80;
          puVar16[2] = lVar20;
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar18 = *(long **)(lVar20 + 0xd8);
          *(undefined8 **)(lVar20 + 0xd8) = puVar16;
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar13 = plVar18 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
            puVar16 = *(undefined8 **)(lVar20 + 0xd8);
            if (puVar16 == (undefined8 *)0x0) break;
          }
        }
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        goto LAB_002bc6f3;
      }
    }
    puVar16 = (undefined8 *)0x0;
LAB_002bc6f3:
    param_5 = local_1e8;
    plVar18 = (long *)*plVar14;
    *plVar14 = (long)puVar16;
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar14 = plVar18 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)(*plVar18 + 8))();
      }
    }
    if ((*local_1e0 == 0) || (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 == 0)) break;
  }
LAB_002bc638:
  auVar30 = ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::$_43&&)::{lambda()#1}>
            ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::__43,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseUp(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time,juce::ModifierKeys)::__43&&)::_lambda()_1_>
                           *)&local_208);
  plVar17 = local_220;
  if (p_Var6 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) goto LAB_002bc899;
  uVar15 = *(ulong *)(p_Var6 + 8);
  if (uVar15 == 0x100000001) {
    *(undefined8 *)(p_Var6 + 8) = 0;
    (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
    auVar30 = (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
    plVar14 = local_1d0;
    plVar18 = local_1d8;
    if (local_1d8 == local_1d0) goto LAB_002bc906;
LAB_002bc8e9:
    do {
      plVar13 = (long *)*plVar18;
      if (plVar13 != (long *)0x0) {
        LOCK();
        plVar1 = plVar13 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          auVar30 = (**(code **)(*plVar13 + 8))();
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar14);
  }
  else {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var2 = p_Var6 + 8;
      uVar15 = (ulong)*(uint *)p_Var2;
      *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
      UNLOCK();
    }
    else {
      *(int *)(p_Var6 + 8) = (int)uVar15 + -1;
    }
    if ((int)uVar15 != 1) goto LAB_002bc899;
    auVar30 = std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
    plVar14 = local_1d0;
    plVar18 = local_1d8;
    if (local_1d8 != local_1d0) goto LAB_002bc8e9;
  }
LAB_002bc906:
  pMVar21 = local_60;
  uVar28 = auVar30._8_8_;
  if (local_1d8 != (long *)0x0) {
    operator_delete(local_1d8);
    auVar30._8_8_ = uVar28;
    auVar30._0_8_ = extraout_XMM0_Qa_06;
  }
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar14 = plVar17 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      auVar30 = (**(code **)(*plVar17 + 8))(plVar17);
    }
  }
  uVar28 = in_XMM2._0_8_;
  if (local_228 != (long *)0x0) {
    LOCK();
    plVar17 = local_228 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      auVar30 = (**(code **)(*local_228 + 8))();
      uVar28 = in_XMM2._0_8_;
    }
  }
  if (local_15c != *(int *)pMVar21) {
    return true;
  }
LAB_002bc959:
  enableUnboundedMouseMovement(auVar30._0_8_,auVar30._8_8_,uVar28,this,0);
LAB_002bc963:
  *(float *)(this + 0x3c) = (float)local_d8;
  pDVar12 = Desktop::instance;
  if ((local_d8 & 0x1f0) == 0) goto LAB_002bd65c;
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bc9a7 to 002bc9ae has its CatchHandler @ 002bdc96 */
    Desktop::Desktop(pDVar12);
    Desktop::instance = pDVar12;
    *(int *)(pDVar12 + 0xf0) = *(int *)(pDVar12 + 0xf0) + 1;
    lVar20 = *(long *)(this + 0x48);
  }
  else {
    *(int *)(Desktop::instance + 0xf0) = *(int *)(Desktop::instance + 0xf0) + 1;
    lVar20 = *(long *)(this + 0x48);
  }
  if ((lVar20 == 0) || (plVar17 = *(long **)(lVar20 + 0x10), plVar17 == (long *)0x0))
  goto LAB_002bd65c;
  uVar28 = *local_f8;
  *(undefined8 *)(this + 0xd0) = *(undefined8 *)(this + 0xb0);
  *(undefined8 *)(this + 0xd8) = *(undefined8 *)(this + 0xb8);
  *(undefined8 *)(this + 0xd9) = *(undefined8 *)(this + 0xb9);
  *(undefined8 *)(this + 0xe1) = *(undefined8 *)(this + 0xc1);
  *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0x90);
  *(undefined8 *)(this + 0xb8) = *(undefined8 *)(this + 0x98);
  *(undefined8 *)(this + 0xb9) = *(undefined8 *)(this + 0x99);
  *(undefined8 *)(this + 0xc1) = *(undefined8 *)(this + 0xa1);
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x98) = *(undefined8 *)(this + 0x78);
  *(undefined8 *)(this + 0x99) = *(undefined8 *)(this + 0x79);
  *(undefined8 *)(this + 0xa1) = *(undefined8 *)(this + 0x81);
  *(undefined8 *)(this + 0x70) = uVar28;
  *(long *)(this + 0x78) = param_5;
  *(uint *)(this + 0x80) = *(uint *)(this + 0x3c) & 0x1f0;
  this[0x88] = (MouseInputSourceImpl)(*(int *)(this + 0x14) == 1);
  plVar14 = plVar17;
  do {
    if ((*(ushort *)(plVar14 + 0x1d) & 1) != 0) {
      if (pDVar12 == (Desktop *)0x0) {
                    /* try { // try from 002bca8b to 002bca94 has its CatchHandler @ 002bdc3f */
        pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bca98 to 002bca9f has its CatchHandler @ 002bdc2c */
        Desktop::Desktop(pDVar12);
        Desktop::instance = pDVar12;
      }
      if ((long)*(int *)(pDVar12 + 0xdc) != 0) {
        lVar20 = 0;
        goto LAB_002bcad0;
      }
      break;
    }
    plVar14 = (long *)plVar14[6];
  } while (plVar14 != (long *)0x0);
  uVar19 = 0;
LAB_002bcaf5:
  puVar16 = local_f8;
  *(undefined4 *)(this + 0x84) = uVar19;
  this[0xf8] = (MouseInputSourceImpl)0x0;
  plVar14 = *(long **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar18 = plVar14 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)(*plVar14 + 8))();
    }
  }
  plVar14 = (long *)plVar17[0x1b];
  if (plVar14 == (long *)0x0) {
    plVar14 = operator_new(0x18);
    *(undefined4 *)(plVar14 + 1) = 0;
    *plVar14 = (long)&PTR__ReferenceCountedObject_00714b80;
    plVar14[2] = (long)plVar17;
    LOCK();
    *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
    UNLOCK();
    plVar18 = (long *)plVar17[0x1b];
    plVar17[0x1b] = (long)plVar14;
    if (plVar18 == (long *)0x0) goto LAB_002bcb2f;
    LOCK();
    plVar14 = plVar18 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)(*plVar18 + 8))();
    }
    local_228 = (long *)plVar17[0x1b];
    if (local_228 != (long *)0x0) goto LAB_002bcb34;
  }
  else {
LAB_002bcb2f:
    local_228 = plVar14;
LAB_002bcb34:
    LOCK();
    *(int *)(local_228 + 1) = (int)local_228[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 002bcb3e to 002bcb7a has its CatchHandler @ 002bdd40 */
  local_d8 = ScalingHelpers::screenPosToLocalPos(*puVar16,plVar17);
  local_f8 = (undefined8 *)puVar16[1];
  uStack_f0 = puVar16[2];
  local_1e8 = CONCAT44(local_1e8._4_4_,*(undefined4 *)(puVar16 + 3));
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar12 = operator_new(0x1d0);
                    /* try { // try from 002bcb7e to 002bcb85 has its CatchHandler @ 002bdc61 */
    Desktop::Desktop(pDVar12);
    Desktop::instance = pDVar12;
  }
  pDVar12 = Desktop::instance;
  uVar22 = ModifierKeys::currentModifiers & 0xfffffe0f;
  uVar23 = *(uint *)(this + 0x3c);
  if (local_228 == (long *)0x0) {
    lVar20 = 0;
  }
  else {
    lVar20 = local_228[2];
  }
  local_68 = getNumberOfMultipleClicks(this);
  uStack_b8 = SUB84((double)(float)local_d8 + _DAT_005d9a90,0);
  uStack_b4 = SUB84((double)local_d8._4_4_ + _UNK_005d9a98,0);
  local_c0 = (float)local_d8;
  fStack_bc = local_d8._4_4_;
  local_ac = local_f8;
  uStack_a4 = uStack_f0;
  local_9c = (undefined4)local_1e8;
  local_98 = local_d8;
  local_67 = 0;
                    /* try { // try from 002bccb4 to 002bcccd has its CatchHandler @ 002bdcae */
  local_b0 = uVar22 | uVar23;
  local_90 = (long *)lVar20;
  local_88 = (long *)lVar20;
  local_80 = param_5;
  local_78 = param_5;
  local_70 = this;
  HierarchyChecker::HierarchyChecker
            ((HierarchyChecker *)&local_1e0,(long *)&local_228,(undefined8 *)&local_c0);
  if (local_228 == (long *)0x0) {
    plVar17 = (long *)0x0;
  }
  else {
    plVar17 = (long *)local_228[2];
  }
  if ((ModalComponentManager::singletonHolder != 0) &&
     (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
    uVar15 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
    do {
      lVar20 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                        (ulong)((int)uVar15 - 2) * 8);
      if (*(char *)(lVar20 + 0x5c) != '\0') {
        plVar14 = *(long **)(lVar20 + 0x40);
        if ((plVar14 != (long *)0x0) && (plVar14 != plVar17)) goto LAB_002bcd3a;
        break;
      }
      uVar15 = uVar15 - 1;
    } while (1 < uVar15);
  }
  goto LAB_002bcd66;
  while (lVar20 = lVar20 + 8, (long)*(int *)(pDVar12 + 0xdc) * 8 != lVar20) {
LAB_002bcad0:
    if (*(long **)(*(long *)(*(long *)(pDVar12 + 0xd0) + lVar20) + 8) == plVar14) {
      uVar19 = *(undefined4 *)(*(long *)(*(long *)(pDVar12 + 0xd0) + lVar20) + 0xa8);
      goto LAB_002bcaf5;
    }
  }
  uVar19 = 0;
  goto LAB_002bcaf5;
  while (plVar17 = (long *)plVar17[6], plVar17 != plVar14) {
LAB_002bcd3a:
    if (plVar17 == (long *)0x0) {
                    /* try { // try from 002bcd58 to 002bcd5d has its CatchHandler @ 002bdc91 */
      cVar11 = (**(code **)(*plVar14 + 0x170))();
      if (cVar11 == '\0') {
        lVar20 = local_228[2];
        *(undefined2 *)(lVar20 + 0xe8) = *(undefined2 *)(lVar20 + 0xe8);
        *(byte *)(lVar20 + 0xea) = *(byte *)(lVar20 + 0xea) | 2;
        if ((ModalComponentManager::singletonHolder == 0) ||
           ((int)*(uint *)(ModalComponentManager::singletonHolder + 0x24) < 1)) goto LAB_002bd48c;
        uVar15 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
        goto LAB_002bd133;
      }
      break;
    }
  }
  goto LAB_002bcd66;
  while (uVar15 = uVar15 - 1, 1 < uVar15) {
LAB_002bd133:
    lVar20 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                      (ulong)((int)uVar15 - 2) * 8);
    if (*(char *)(lVar20 + 0x5c) != '\0') {
      plVar17 = *(long **)(lVar20 + 0x40);
      if (plVar17 != (long *)0x0) {
                    /* try { // try from 002bd486 to 002bd48b has its CatchHandler @ 002bdc91 */
        (**(code **)(*plVar17 + 0x178))();
      }
      break;
    }
  }
LAB_002bd48c:
  plVar17 = local_1e0;
  for (plVar14 = local_1d8; plVar14 != local_1d0; plVar14 = plVar14 + 1) {
    if ((*plVar14 != 0) && (lVar20 = *(long *)(*plVar14 + 0x10), lVar20 != 0)) {
      puVar16 = *(undefined8 **)(lVar20 + 0xd8);
      if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bd67a to 002bd683 has its CatchHandler @ 002bdc91 */
        puVar16 = operator_new(0x18);
        *(undefined4 *)(puVar16 + 1) = 0;
        *puVar16 = &PTR__ReferenceCountedObject_00714b80;
        puVar16[2] = lVar20;
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        plVar14 = *(long **)(lVar20 + 0xd8);
        *(undefined8 **)(lVar20 + 0xd8) = puVar16;
        if (plVar14 != (long *)0x0) {
          LOCK();
          plVar18 = plVar14 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)(*plVar14 + 8))();
          }
          puVar16 = *(undefined8 **)(lVar20 + 0xd8);
          if (puVar16 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
      UNLOCK();
      plVar14 = (long *)*plVar17;
      *plVar17 = (long)puVar16;
      goto joined_r0x002bd4d5;
    }
  }
  plVar14 = (long *)*plVar17;
  *plVar17 = 0;
joined_r0x002bd4d5:
  if (plVar14 != (long *)0x0) {
    LOCK();
    plVar17 = plVar14 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*plVar14 + 8))();
    }
  }
  if ((*local_1e0 != 0) && (*(long *)(*local_1e0 + 0x10) != 0)) {
    if (local_228 == (long *)0x0) {
      plVar17 = (long *)0x0;
    }
    else {
      plVar17 = (long *)local_228[2];
    }
    if ((ModalComponentManager::singletonHolder != 0) &&
       (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
      uVar15 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        lVar20 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                          (ulong)((int)uVar15 - 2) * 8);
        if (*(char *)(lVar20 + 0x5c) != '\0') {
          plVar14 = *(long **)(lVar20 + 0x40);
          if ((plVar14 != (long *)0x0) && (plVar14 != plVar17)) goto LAB_002bd6f0;
          break;
        }
        uVar15 = uVar15 - 1;
      } while (1 < uVar15);
    }
    goto LAB_002bcd66;
  }
  goto LAB_002bd5fa;
  while( true ) {
    plVar14 = *(long **)(*plVar17 + (long)local_230 * 8);
    if (plVar14 != (long *)0x0) {
      local_ff = local_167 != '\0';
      local_158 = (int *)CONCAT44(fStack_1bc,local_1c0);
      pHStack_150 = (HierarchyChecker *)
                    CONCAT44(SUB84((double)fStack_1bc + _UNK_005d9a98,0),
                             SUB84((double)local_1c0 + _DAT_005d9a90,0));
      local_148 = local_1b0;
      local_144 = local_1ac;
      uStack_13c = uStack_1a4;
      local_134 = local_19c;
      local_130 = local_198;
      local_118 = local_180;
      uStack_114 = uStack_17c;
      uStack_110 = uStack_178;
      uStack_10c = uStack_174;
      local_108 = local_170;
      local_100 = local_168;
                    /* try { // try from 002bd957 to 002bd95c has its CatchHandler @ 002bda4e */
      local_128 = lVar20;
      local_120 = lVar20;
      (**(code **)(*plVar14 + 0x28))((double)local_1c0 + _DAT_005d9a90,plVar14,&local_158);
    }
    local_230 = local_230 + 1;
    if (local_22c <= local_230) break;
LAB_002bd7f7:
    plVar14 = local_1e0;
    for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
      if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
        puVar16 = *(undefined8 **)(lVar20 + 0xd8);
        if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bd962 to 002bd96b has its CatchHandler @ 002bda4c */
          puVar16 = operator_new(0x18);
          *(undefined4 *)(puVar16 + 1) = 0;
          *puVar16 = &PTR__ReferenceCountedObject_00714b80;
          puVar16[2] = lVar20;
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar18 = *(long **)(lVar20 + 0xd8);
          *(undefined8 **)(lVar20 + 0xd8) = puVar16;
          if (plVar18 != (long *)0x0) {
            LOCK();
            plVar13 = plVar18 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)(*plVar18 + 8))();
            }
            puVar16 = *(undefined8 **)(lVar20 + 0xd8);
            if (puVar16 == (undefined8 *)0x0) break;
          }
        }
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        plVar18 = (long *)*plVar14;
        *plVar14 = (long)puVar16;
        goto joined_r0x002bd842;
      }
    }
    plVar18 = (long *)*plVar14;
    *plVar14 = 0;
joined_r0x002bd842:
    if (plVar18 != (long *)0x0) {
      LOCK();
      plVar14 = plVar18 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)(*plVar18 + 8))();
      }
    }
    if ((*local_1e0 == 0) || (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 == 0)) break;
  }
LAB_002bd9bf:
  ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_40&&)::{lambda()#1}>
  ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__40,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__40&&)::_lambda()_1_>
                 *)&local_208);
  if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar15 = *(ulong *)(p_Var6 + 8);
    if (uVar15 == 0x100000001) {
      *(undefined8 *)(p_Var6 + 8) = 0;
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var2 = p_Var6 + 8;
        uVar15 = (ulong)*(uint *)p_Var2;
        *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var6 + 8) = (int)uVar15 + -1;
      }
      if ((int)uVar15 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
      }
    }
  }
  goto LAB_002bd5fa;
  while (plVar17 = (long *)plVar17[6], plVar17 != plVar14) {
LAB_002bd6f0:
    if (plVar17 == (long *)0x0) {
                    /* try { // try from 002bd706 to 002bd71b has its CatchHandler @ 002bdc91 */
      cVar11 = (**(code **)(*plVar14 + 0x170))();
      if (cVar11 == '\0') {
        Desktop::resetTimer(pDVar12);
        if (*(int *)(pDVar12 + 0x68) != 2) goto LAB_002bd5fa;
        plVar17 = *(long **)(pDVar12 + 0x48);
        p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar12 + 0x50);
        if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
          }
        }
        local_230 = 0;
        local_22c = *(int *)((long)plVar17 + 0xc);
        pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                   **)(pDVar12 + 0x58);
        plVar14 = *(long **)(pvVar4 + 8);
        local_158 = &local_230;
        if (plVar14 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002bd788 to 002bd794 has its CatchHandler @ 002bda47 */
          std::
          vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
          ::
          _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                    (pvVar4,plVar14,&local_158);
        }
        else {
          *plVar14 = (long)&local_230;
          *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
        }
        local_208 = *(undefined8 *)(pDVar12 + 0x58);
        lStack_200 = *(long *)(pDVar12 + 0x60);
        if (lStack_200 != 0) {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
            UNLOCK();
          }
          else {
            *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
          }
        }
        local_1f8 = &local_230;
        if (local_22c <= local_230) goto LAB_002bd9bf;
        goto LAB_002bd7f7;
      }
      break;
    }
  }
LAB_002bcd66:
  plVar17 = local_1d0;
  lVar20 = local_228[2];
  *(undefined2 *)(lVar20 + 0xe8) = *(undefined2 *)(lVar20 + 0xe8);
  *(byte *)(lVar20 + 0xea) = *(byte *)(lVar20 + 0xea) & 0xfd;
  plVar14 = local_1d8;
  if (local_1d8 != local_1d0) {
    do {
      if (((*plVar14 != 0) &&
          (this_00 = *(Component **)(*plVar14 + 0x10), this_00 != (Component *)0x0)) &&
         ((*(ushort *)(this_00 + 0xe8) & 0x2000) != 0)) {
                    /* try { // try from 002bce28 to 002bce31 has its CatchHandler @ 002bdd86 */
        Component::toFront(this_00,'\x01');
      }
      plVar18 = local_1e0;
      plVar14 = plVar14 + 1;
    } while (plVar14 != plVar17);
    for (plVar17 = local_1d8; plVar17 != local_1d0; plVar17 = plVar17 + 1) {
      if ((*plVar17 != 0) && (lVar20 = *(long *)(*plVar17 + 0x10), lVar20 != 0)) {
        puVar16 = *(undefined8 **)(lVar20 + 0xd8);
        if (puVar16 == (undefined8 *)0x0) {
          puVar16 = operator_new(0x18);
          *(undefined4 *)(puVar16 + 1) = 0;
          *puVar16 = &PTR__ReferenceCountedObject_00714b80;
          puVar16[2] = lVar20;
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar17 = *(long **)(lVar20 + 0xd8);
          *(undefined8 **)(lVar20 + 0xd8) = puVar16;
          if (plVar17 != (long *)0x0) {
            LOCK();
            plVar14 = plVar17 + 1;
            *(int *)plVar14 = (int)*plVar14 + -1;
            UNLOCK();
            if ((int)*plVar14 == 0) {
              (**(code **)(*plVar17 + 8))();
            }
            puVar16 = *(undefined8 **)(lVar20 + 0xd8);
            if (puVar16 == (undefined8 *)0x0) goto LAB_002bcda1;
          }
        }
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        plVar17 = (long *)*plVar18;
        *plVar18 = (long)puVar16;
        goto joined_r0x002bcee1;
      }
    }
  }
  plVar18 = local_1e0;
LAB_002bcda1:
  plVar17 = (long *)*plVar18;
  *plVar18 = 0;
joined_r0x002bcee1:
  if (plVar17 != (long *)0x0) {
    LOCK();
    plVar14 = plVar17 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)(*plVar17 + 8))();
    }
  }
  if ((*local_1e0 != 0) && (*(long *)(*local_1e0 + 0x10) != 0)) {
                    /* try { // try from 002bcde0 to 002bcded has its CatchHandler @ 002bdc91 */
    Component::grabKeyboardFocusInternal((Component *)local_228[2],0,'\x01',0);
    plVar17 = local_1e0;
    for (plVar14 = local_1d8; plVar14 != local_1d0; plVar14 = plVar14 + 1) {
      if ((*plVar14 != 0) && (lVar20 = *(long *)(*plVar14 + 0x10), lVar20 != 0)) {
        puVar16 = *(undefined8 **)(lVar20 + 0xd8);
        if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bd08c to 002bd095 has its CatchHandler @ 002bdc91 */
          puVar16 = operator_new(0x18);
          *(undefined4 *)(puVar16 + 1) = 0;
          *puVar16 = &PTR__ReferenceCountedObject_00714b80;
          puVar16[2] = lVar20;
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar14 = *(long **)(lVar20 + 0xd8);
          *(undefined8 **)(lVar20 + 0xd8) = puVar16;
          if (plVar14 != (long *)0x0) {
            LOCK();
            plVar18 = plVar14 + 1;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)*plVar18 == 0) {
              (**(code **)(*plVar14 + 8))();
            }
            puVar16 = *(undefined8 **)(lVar20 + 0xd8);
            if (puVar16 == (undefined8 *)0x0) break;
          }
        }
        LOCK();
        *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
        UNLOCK();
        plVar14 = (long *)*plVar17;
        *plVar17 = (long)puVar16;
        goto joined_r0x002bce81;
      }
    }
    plVar14 = (long *)*plVar17;
    *plVar17 = 0;
joined_r0x002bce81:
    if (plVar14 != (long *)0x0) {
      LOCK();
      plVar17 = plVar14 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)(*plVar14 + 8))();
      }
    }
    if ((*local_1e0 != 0) && (*(long *)(*local_1e0 + 0x10) != 0)) {
      plVar17 = (long *)local_228[2];
      if ((*(ushort *)(plVar17 + 0x1d) & 0x4000) != 0) {
                    /* try { // try from 002bcf42 to 002bcf64 has its CatchHandler @ 002bdc91 */
        Component::internalRepaintUnchecked((long)plVar17,0,plVar17[8],'\x01');
        plVar17 = (long *)local_228[2];
      }
      (**(code **)(*plVar17 + 0x28))(plVar17,&local_c0);
      plVar17 = local_1e0;
      for (plVar14 = local_1d8; plVar14 != local_1d0; plVar14 = plVar14 + 1) {
        if ((*plVar14 != 0) && (lVar20 = *(long *)(*plVar14 + 0x10), lVar20 != 0)) {
          puVar16 = *(undefined8 **)(lVar20 + 0xd8);
          if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bd153 to 002bd15c has its CatchHandler @ 002bdc91 */
            puVar16 = operator_new(0x18);
            *(undefined4 *)(puVar16 + 1) = 0;
            *puVar16 = &PTR__ReferenceCountedObject_00714b80;
            puVar16[2] = lVar20;
            LOCK();
            *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
            UNLOCK();
            plVar14 = *(long **)(lVar20 + 0xd8);
            *(undefined8 **)(lVar20 + 0xd8) = puVar16;
            if (plVar14 != (long *)0x0) {
              LOCK();
              plVar18 = plVar14 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)(*plVar14 + 8))();
              }
              puVar16 = *(undefined8 **)(lVar20 + 0xd8);
              if (puVar16 == (undefined8 *)0x0) break;
            }
          }
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          plVar14 = (long *)*plVar17;
          *plVar17 = (long)puVar16;
          goto joined_r0x002bcfae;
        }
      }
      plVar14 = (long *)*plVar17;
      *plVar17 = 0;
joined_r0x002bcfae:
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar17 = plVar14 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      if ((*local_1e0 != 0) && (*(long *)(*local_1e0 + 0x10) != 0)) {
                    /* try { // try from 002bcfed to 002bd038 has its CatchHandler @ 002bdc91 */
        Desktop::resetTimer(pDVar12);
        if (*(int *)(pDVar12 + 0x68) == 2) {
          plVar17 = *(long **)(pDVar12 + 0x48);
          p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar12 + 0x50);
          if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var6 + 8) = *(int *)(p_Var6 + 8) + 1;
            }
          }
          local_230 = 0;
          local_22c = *(int *)((long)plVar17 + 0xc);
          pvVar4 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                     **)(pDVar12 + 0x58);
          plVar14 = *(long **)(pvVar4 + 8);
          local_158 = &local_230;
          if (plVar14 == *(long **)(pvVar4 + 0x10)) {
                    /* try { // try from 002bd1eb to 002bd1f7 has its CatchHandler @ 002bdad8 */
            std::
            vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
            ::
            _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                      (pvVar4,plVar14,&local_158);
          }
          else {
            *plVar14 = (long)&local_230;
            *(long *)(pvVar4 + 8) = *(long *)(pvVar4 + 8) + 8;
          }
          local_208 = *(undefined8 *)(pDVar12 + 0x58);
          lStack_200 = *(long *)(pDVar12 + 0x60);
          if (lStack_200 != 0) {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
              UNLOCK();
            }
            else {
              *(int *)(lStack_200 + 8) = *(int *)(lStack_200 + 8) + 1;
            }
          }
          local_1f8 = &local_230;
          if (local_230 < local_22c) {
            do {
              plVar14 = local_1e0;
              for (plVar18 = local_1d8; plVar18 != local_1d0; plVar18 = plVar18 + 1) {
                if ((*plVar18 != 0) && (lVar20 = *(long *)(*plVar18 + 0x10), lVar20 != 0)) {
                  puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                  if (puVar16 == (undefined8 *)0x0) {
                    /* try { // try from 002bd3ff to 002bd408 has its CatchHandler @ 002bdae0 */
                    puVar16 = operator_new(0x18);
                    *(undefined4 *)(puVar16 + 1) = 0;
                    *puVar16 = &PTR__ReferenceCountedObject_00714b80;
                    puVar16[2] = lVar20;
                    LOCK();
                    *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                    UNLOCK();
                    plVar18 = *(long **)(lVar20 + 0xd8);
                    *(undefined8 **)(lVar20 + 0xd8) = puVar16;
                    if (plVar18 != (long *)0x0) {
                      LOCK();
                      plVar13 = plVar18 + 1;
                      *(int *)plVar13 = (int)*plVar13 + -1;
                      UNLOCK();
                      if ((int)*plVar13 == 0) {
                        (**(code **)(*plVar18 + 8))();
                      }
                      puVar16 = *(undefined8 **)(lVar20 + 0xd8);
                      if (puVar16 == (undefined8 *)0x0) break;
                    }
                  }
                  LOCK();
                  *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
                  UNLOCK();
                  plVar18 = (long *)*plVar14;
                  *plVar14 = (long)puVar16;
                  goto joined_r0x002bd2dd;
                }
              }
              plVar18 = (long *)*plVar14;
              *plVar14 = 0;
joined_r0x002bd2dd:
              if (plVar18 != (long *)0x0) {
                LOCK();
                plVar14 = plVar18 + 1;
                *(int *)plVar14 = (int)*plVar14 + -1;
                UNLOCK();
                if ((int)*plVar14 == 0) {
                  (**(code **)(*plVar18 + 8))();
                }
              }
              if ((*local_1e0 == 0) || (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 == 0)) break;
              plVar14 = *(long **)(*plVar17 + (long)local_230 * 8);
              if (plVar14 != (long *)0x0) {
                local_ff = local_167 != '\0';
                local_158 = (int *)CONCAT44(fStack_1bc,local_1c0);
                pHStack_150 = (HierarchyChecker *)
                              CONCAT44(SUB84((double)fStack_1bc + _UNK_005d9a98,0),
                                       SUB84((double)local_1c0 + _DAT_005d9a90,0));
                local_148 = local_1b0;
                local_144 = local_1ac;
                uStack_13c = uStack_1a4;
                local_134 = local_19c;
                local_130 = local_198;
                local_118 = local_180;
                uStack_114 = uStack_17c;
                uStack_110 = uStack_178;
                uStack_10c = uStack_174;
                local_108 = local_170;
                local_100 = local_168;
                    /* try { // try from 002bd3ef to 002bd3f9 has its CatchHandler @ 002bdb8a */
                local_128 = lVar20;
                local_120 = lVar20;
                (**(code **)(*plVar14 + 0x28))((double)local_1c0 + _DAT_005d9a90,plVar14,&local_158)
                ;
              }
              local_230 = local_230 + 1;
            } while (local_230 < local_22c);
          }
          ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_42&&)::{lambda()#1}>
          ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__42,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDown(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__42&&)::_lambda()_1_>
                         *)&local_208);
          if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
            uVar15 = *(ulong *)(p_Var6 + 8);
            if (uVar15 == 0x100000001) {
              *(undefined8 *)(p_Var6 + 8) = 0;
              (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
              (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
            }
            else {
              if (*PTR___libc_single_threaded_00715c50 == '\0') {
                LOCK();
                p_Var2 = p_Var6 + 8;
                uVar15 = (ulong)*(uint *)p_Var2;
                *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
                UNLOCK();
              }
              else {
                *(int *)(p_Var6 + 8) = (int)uVar15 + -1;
              }
              if ((int)uVar15 == 1) {
                std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
              }
            }
          }
        }
        local_208 = _DAT_005dd290;
        lStack_200 = _UNK_005dd298;
        local_158 = (int *)&local_208;
        pHStack_150 = (HierarchyChecker *)&local_1e0;
                    /* try { // try from 002bd5b3 to 002bd5bf has its CatchHandler @ 002bdaf2 */
        if ((((*local_1e0 != 0) && (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 != 0)) &&
            (bVar10 = Component::MouseListenerList::
                      sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                      ::{lambda(auto:1&,auto:2)#1}::operator()(&local_158,lVar20), bVar10)) &&
           ((*local_1e0 != 0 && (lVar20 = *(long *)(*local_1e0 + 0x10), lVar20 != 0)))) {
          do {
            lVar20 = *(long *)(lVar20 + 0x30);
            if (lVar20 == 0) break;
                    /* try { // try from 002bd5eb to 002bd5f5 has its CatchHandler @ 002bdb80 */
            bVar10 = Component::MouseListenerList::
                     sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                     ::{lambda(auto:1&,auto:2)#1}::operator()(&local_158,lVar20);
          } while (bVar10);
        }
      }
    }
  }
LAB_002bd5fa:
  plVar17 = local_1d8;
  if (local_1d8 != local_1d0) {
    do {
      plVar14 = (long *)*plVar17;
      if (plVar14 != (long *)0x0) {
        LOCK();
        plVar18 = plVar14 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
          (**(code **)(*plVar14 + 8))();
        }
      }
      plVar17 = plVar17 + 1;
    } while (plVar17 != local_1d0);
  }
  if (local_1d8 != (long *)0x0) {
    operator_delete(local_1d8);
  }
  if (local_228 != (long *)0x0) {
    LOCK();
    plVar17 = local_228 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)(*local_228 + 8))();
    }
  }
LAB_002bd65c:
  return local_15c != *(int *)pMVar21;
}


