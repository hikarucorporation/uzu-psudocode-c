// Function : setPointerState
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e3ce0
// Prototype: undefined setPointerState(undefined8 param_1_00, undefined8 param_2, MouseInputSourceImpl * this, float * param_4, long param_5, char param_6)
// Body     : 001e3ce0 - 001e52de


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::MouseInputSourceImpl::setPointerState(juce::detail::PointerState const&,
   juce::Time, bool) */

void __thiscall
juce::detail::MouseInputSourceImpl::setPointerState
          (undefined8 param_1_00,undefined8 param_2,MouseInputSourceImpl *this,float *param_4,
          long param_5,char param_6)

{
  MouseInputSourceImpl *pMVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  uint uVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var4;
  vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *pvVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  MouseInputSourceImpl MVar14;
  char cVar15;
  bool bVar16;
  Component *pCVar17;
  ulong uVar18;
  Desktop *pDVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  undefined8 *puVar23;
  XWindowSystem *this_00;
  long lVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  int iVar28;
  float fVar29;
  undefined8 uVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 uVar31;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_var [12];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  undefined8 extraout_XMM1_Qa;
  undefined8 extraout_XMM1_Qa_00;
  undefined8 extraout_XMM1_Qa_01;
  undefined8 extraout_XMM1_Qa_02;
  undefined8 extraout_XMM1_Qa_03;
  undefined8 extraout_XMM1_Qa_04;
  undefined8 extraout_XMM1_Qa_05;
  undefined8 extraout_XMM1_Qa_06;
  float fVar36;
  undefined8 extraout_XMM1_Qa_07;
  undefined8 extraout_XMM1_Qa_08;
  float fVar37;
  undefined1 in_XMM2 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int local_1f0;
  int local_1ec;
  long *local_1e8;
  MouseInputSourceImpl *local_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  long lStack_1c0;
  int *local_1b8;
  float local_1ac;
  undefined1 local_1a8 [16];
  long *local_198;
  float local_188;
  float fStack_184;
  undefined4 local_178;
  undefined8 local_174;
  undefined8 uStack_16c;
  uint local_164;
  undefined8 local_160;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined1 local_130;
  char local_12f;
  long local_128;
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  uint local_f4;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  Component *local_b8;
  undefined1 *puStack_b0;
  uint local_a8;
  undefined1 local_a4 [16];
  float local_94;
  Component *local_90;
  long *local_88;
  long *local_80;
  long local_78;
  long local_70;
  MouseInputSourceImpl *local_68;
  undefined2 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if ((*(ushort *)(this + 0x3c) & 0x1f0) == 0) {
    local_128 = *(long *)param_4;
    uStack_120 = 0;
    lVar24 = *(long *)(this + 0x58);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e3d37 to 001e3d40 has its CatchHandler @ 001e5416 */
      pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e3d44 to 001e3d4b has its CatchHandler @ 001e5403 */
      Desktop::Desktop(pDVar19);
      iVar25 = *(int *)(pDVar19 + 0xdc);
      Desktop::instance = pDVar19;
      param_2 = extraout_XMM1_Qa;
    }
    else {
      iVar25 = *(int *)(Desktop::instance + 0xdc);
    }
    if ((long)iVar25 != 0) {
      lVar26 = 0;
      do {
        if (*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar26) == lVar24) {
          plVar21 = *(long **)(this + 0x58);
          goto LAB_001e3d8f;
        }
        lVar26 = lVar26 + 8;
      } while ((long)iVar25 * 8 != lVar26);
    }
    *(undefined8 *)(this + 0x58) = 0;
    plVar21 = (long *)0x0;
LAB_001e3d8f:
    pCVar17 = findComponentAt((undefined4)local_128,plVar21);
    setComponentUnderMouse
              (extraout_XMM0_Qa,param_2,in_XMM2._0_8_,this,(long)pCVar17,(undefined8 *)param_4,
               param_5);
  }
  auVar41._0_8_ = in_XMM2._0_8_;
  fVar29 = (float)*(undefined8 *)(this + 0x20);
  if ((*param_4 == fVar29) && (!NAN(*param_4) && !NAN(fVar29))) {
    fVar29 = (float)((ulong)*(undefined8 *)(this + 0x20) >> 0x20);
    if ((param_4[1] == fVar29) && (!NAN(param_4[1]) && !NAN(fVar29))) {
      if ((param_4[2] == *(float *)(this + 0x28)) &&
         (!NAN(param_4[2]) && !NAN(*(float *)(this + 0x28)))) {
        if ((param_4[3] == *(float *)(this + 0x2c)) &&
           (!NAN(param_4[3]) && !NAN(*(float *)(this + 0x2c)))) {
          if ((param_4[4] == *(float *)(this + 0x30)) &&
             (!NAN(param_4[4]) && !NAN(*(float *)(this + 0x30)))) {
            if ((param_4[5] == *(float *)(this + 0x34)) &&
               (!NAN(param_4[5]) && !NAN(*(float *)(this + 0x34)))) {
              if (((param_4[6] == *(float *)(this + 0x38)) &&
                  (!NAN(param_4[6]) && !NAN(*(float *)(this + 0x38)))) && (param_6 == '\0')) {
                return;
              }
            }
          }
        }
      }
    }
  }
  LOCK();
  *(undefined4 *)(*(long *)(this + 8) + 0x18) = 0;
  UNLOCK();
  pMVar1 = this + 0x20;
  uVar30 = *(undefined8 *)param_4;
  uVar31 = *(undefined8 *)(param_4 + 2);
  uVar7 = *(undefined8 *)(param_4 + 3);
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar30;
  auVar43._8_8_ = uVar7;
  auVar43._0_8_ = uVar30;
  uVar8 = *(undefined8 *)(param_4 + 5);
  *(undefined8 *)(this + 0x2c) = uVar7;
  *(undefined8 *)(this + 0x34) = uVar8;
  *(undefined8 *)pMVar1 = uVar30;
  *(undefined8 *)(this + 0x28) = uVar31;
  local_128 = param_5;
  if (*(long *)(this + 0x48) == 0) goto LAB_001e52a9;
  pCVar17 = *(Component **)(*(long *)(this + 0x48) + 0x10);
  auVar43 = auVar9;
  if (pCVar17 == (Component *)0x0) goto LAB_001e52a9;
  if ((*(ushort *)(this + 0x3c) & 0x1f0) == 0) {
    local_1e8 = *(long **)(pCVar17 + 0xd8);
    if (local_1e8 == (long *)0x0) {
      local_1e8 = operator_new(0x18);
      *(undefined4 *)(local_1e8 + 1) = 0;
      *local_1e8 = (long)&PTR__ReferenceCountedObject_00714b80;
      local_1e8[2] = (long)pCVar17;
      LOCK();
      *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
      UNLOCK();
      plVar21 = *(long **)(pCVar17 + 0xd8);
      *(long **)(pCVar17 + 0xd8) = local_1e8;
      if (plVar21 == (long *)0x0) goto LAB_001e3f4b;
      LOCK();
      plVar22 = plVar21 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
        (**(code **)(*plVar21 + 8))();
      }
      local_1e8 = *(long **)(pCVar17 + 0xd8);
      if (local_1e8 != (long *)0x0) goto LAB_001e3f4b;
    }
    else {
LAB_001e3f4b:
      LOCK();
      *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
      UNLOCK();
    }
                    /* try { // try from 001e3f55 to 001e3f61 has its CatchHandler @ 001e5490 */
    local_1d8._0_8_ = ScalingHelpers::screenPosToLocalPos(*(undefined8 *)param_4,(long *)pCVar17);
    local_1d8._8_8_ = extraout_XMM0_Qb;
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e40b2 to 001e40bb has its CatchHandler @ 001e5490 */
      pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e40bf to 001e40c6 has its CatchHandler @ 001e533b */
      Desktop::Desktop(pDVar19);
      Desktop::instance = pDVar19;
      if (local_1e8 == (long *)0x0) goto LAB_001e40dc;
LAB_001e3f80:
      plVar21 = (long *)local_1e8[2];
      pDVar19 = Desktop::instance;
    }
    else {
      if (local_1e8 != (long *)0x0) goto LAB_001e3f80;
LAB_001e40dc:
      plVar21 = (long *)0x0;
      pDVar19 = Desktop::instance;
    }
    Desktop::instance = pDVar19;
    if ((ModalComponentManager::singletonHolder != 0) &&
       (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24))) {
      uVar18 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        lVar24 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                          (ulong)((int)uVar18 - 2) * 8);
        if (*(char *)(lVar24 + 0x5c) != '\0') {
          plVar22 = *(long **)(lVar24 + 0x40);
          if ((plVar22 != (long *)0x0) && (plVar22 != plVar21)) goto LAB_001e4180;
          break;
        }
        uVar18 = uVar18 - 1;
      } while (1 < uVar18);
    }
    goto LAB_001e47ed;
  }
  uVar18 = *(ulong *)param_4;
  MVar14 = (MouseInputSourceImpl)0x1;
  if (this[0xf8] == (MouseInputSourceImpl)0x0) {
    fVar29 = hypotf(*(float *)(this + 0x70) - (float)uVar18,
                    *(float *)(this + 0x74) - (float)(uVar18 >> 0x20));
    MVar14 = (MouseInputSourceImpl)(DAT_005d94d4 <= fVar29);
    uVar18 = *(ulong *)param_4;
  }
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar18;
  this[0xf8] = MVar14;
  uVar18 = CONCAT44((float)((ulong)*(undefined8 *)(this + 0x18) >> 0x20) + (float)(uVar18 >> 0x20),
                    (float)*(undefined8 *)(this + 0x18) + (float)uVar18);
  local_48 = *(undefined8 *)(param_4 + 2);
  uStack_40 = *(undefined8 *)(param_4 + 4);
  local_1ac = param_4[6];
  local_1e8 = *(long **)(pCVar17 + 0xd8);
  if (local_1e8 == (long *)0x0) {
    local_1d8._8_8_ = 0;
    local_1d8._0_8_ = uVar18;
    local_1e8 = operator_new(0x18);
    *(undefined4 *)(local_1e8 + 1) = 0;
    *local_1e8 = (long)&PTR__ReferenceCountedObject_00714b80;
    local_1e8[2] = (long)pCVar17;
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
    plVar21 = *(long **)(pCVar17 + 0xd8);
    *(long **)(pCVar17 + 0xd8) = local_1e8;
    if (plVar21 == (long *)0x0) {
      uVar18 = local_1d8._0_8_;
      goto LAB_001e3eed;
    }
    LOCK();
    plVar22 = plVar21 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      (**(code **)(*plVar21 + 8))();
    }
    local_1e8 = *(long **)(pCVar17 + 0xd8);
    uVar18 = local_1d8._0_8_;
    if (local_1e8 != (long *)0x0) goto LAB_001e3ef2;
  }
  else {
LAB_001e3eed:
LAB_001e3ef2:
    LOCK();
    *(int *)(local_1e8 + 1) = (int)local_1e8[1] + 1;
    UNLOCK();
  }
                    /* try { // try from 001e3ef7 to 001e3f09 has its CatchHandler @ 001e54a1 */
  local_58 = (Component *)ScalingHelpers::screenPosToLocalPos(uVar18,(long *)pCVar17);
  if (local_1e8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = (long *)local_1e8[2];
  }
  local_1e0 = this;
  if (ModalComponentManager::singletonHolder != 0) {
    if (0 < (int)*(uint *)(ModalComponentManager::singletonHolder + 0x24)) {
      uVar18 = (ulong)*(uint *)(ModalComponentManager::singletonHolder + 0x24) + 1;
      do {
        lVar24 = *(long *)(*(long *)(ModalComponentManager::singletonHolder + 0x18) +
                          (ulong)((int)uVar18 - 2) * 8);
        if (*(char *)(lVar24 + 0x5c) != '\0') {
          plVar22 = *(long **)(lVar24 + 0x40);
          if ((plVar22 != (long *)0x0) && (plVar22 != plVar21)) goto LAB_001e4140;
          break;
        }
        uVar18 = uVar18 - 1;
      } while (1 < uVar18);
    }
  }
  goto LAB_001e41a8;
  while (plVar21 = (long *)plVar21[6], plVar21 != plVar22) {
LAB_001e4180:
    if (plVar21 == (long *)0x0) {
                    /* try { // try from 001e47df to 001e47e4 has its CatchHandler @ 001e5490 */
      cVar15 = (**(code **)(*plVar22 + 0x170))();
      if (cVar15 == '\0') {
                    /* try { // try from 001e51a4 to 001e51ab has its CatchHandler @ 001e5490 */
        auVar43 = Desktop::sendMouseMove(pDVar19);
        goto LAB_001e5292;
      }
      break;
    }
  }
LAB_001e47ed:
  local_a8 = ModifierKeys::currentModifiers & 0xfffffe0f | *(uint *)(this + 0x3c);
  if (local_1e8 == (long *)0x0) {
    local_88 = (long *)0x0;
  }
  else {
    local_88 = (long *)local_1e8[2];
  }
  local_b8 = local_1d8._0_8_;
  puStack_b0 = (undefined1 *)
               CONCAT44(SUB84((double)local_1d8._4_4_ + _UNK_005d9a98,0),
                        SUB84((double)local_1d8._0_4_ + _DAT_005d9a90,0));
  local_a4 = (undefined1  [16])0x0;
  local_94 = 0.0;
  local_78 = local_128;
  local_70 = local_128;
  local_60 = 0;
                    /* try { // try from 001e48a0 to 001e48b9 has its CatchHandler @ 001e53fe */
  in_XMM2 = local_1d8;
  local_90 = local_b8;
  local_80 = local_88;
  local_68 = this;
  HierarchyChecker::HierarchyChecker((HierarchyChecker *)local_1a8,(long *)&local_1e8,&local_b8);
                    /* try { // try from 001e48c6 to 001e48d0 has its CatchHandler @ 001e548e */
  auVar43 = (**(code **)(*(long *)local_1e8[2] + 0x10))();
  auVar41._0_8_ = auVar43._8_8_;
  plVar21 = (long *)local_1a8._8_8_;
  while( true ) {
    uVar30 = local_1a8._0_8_;
    if (plVar21 == local_198) break;
    if ((*plVar21 != 0) && (lVar24 = *(long *)(*plVar21 + 0x10), lVar24 != 0)) {
      puVar23 = *(undefined8 **)(lVar24 + 0xd8);
      if (puVar23 == (undefined8 *)0x0) {
                    /* try { // try from 001e49d4 to 001e49dd has its CatchHandler @ 001e548e */
        puVar23 = operator_new(0x18);
        auVar43._8_8_ = auVar41._0_8_;
        auVar43._0_8_ = extraout_XMM0_Qa_02;
        *(undefined4 *)(puVar23 + 1) = 0;
        *puVar23 = &PTR__ReferenceCountedObject_00714b80;
        puVar23[2] = lVar24;
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
        plVar21 = *(long **)(lVar24 + 0xd8);
        *(undefined8 **)(lVar24 + 0xd8) = puVar23;
        if (plVar21 != (long *)0x0) {
          LOCK();
          plVar22 = plVar21 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            auVar43 = (**(code **)(*plVar21 + 8))();
          }
          puVar23 = *(undefined8 **)(lVar24 + 0xd8);
          if (puVar23 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
      UNLOCK();
      plVar21 = *(long **)uVar30;
      *(undefined8 **)uVar30 = puVar23;
      goto joined_r0x001e491f;
    }
    plVar21 = plVar21 + 1;
  }
  plVar21 = *(long **)uVar30;
  *(undefined8 *)uVar30 = 0;
joined_r0x001e491f:
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar22 = plVar21 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      auVar43 = (**(code **)(*plVar21 + 8))();
    }
  }
  if ((*(long *)local_1a8._0_8_ == 0) || (*(long *)(*(long *)local_1a8._0_8_ + 0x10) == 0)) {
    plVar21 = (long *)local_1a8._8_8_;
    if ((long *)local_1a8._8_8_ != local_198) {
      do {
        plVar22 = (long *)*plVar21;
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar20 = plVar22 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            auVar43 = (**(code **)(*plVar22 + 8))();
          }
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != local_198);
      goto LAB_001e5280;
    }
  }
  else {
                    /* try { // try from 001e4958 to 001e495f has its CatchHandler @ 001e548e */
    Desktop::resetTimer(pDVar19);
    auVar41._0_8_ = extraout_XMM1_Qa_04;
    if (*(int *)(pDVar19 + 0x68) == 2) {
      plVar21 = *(long **)(pDVar19 + 0x48);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar19 + 0x50);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        }
      }
      local_1f0 = 0;
      local_1ec = *(int *)((long)plVar21 + 0xc);
      pvVar5 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                 **)(pDVar19 + 0x58);
      local_118 = (undefined1  [8])&local_1f0;
      plVar22 = *(long **)(pvVar5 + 8);
      if (plVar22 == *(long **)(pvVar5 + 0x10)) {
                    /* try { // try from 001e4a6c to 001e4a78 has its CatchHandler @ 001e52f2 */
        std::
        vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
        ::
        _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                  (pvVar5,plVar22,(undefined8 *)local_118);
      }
      else {
        *plVar22 = (long)&local_1f0;
        *(long *)(pvVar5 + 8) = *(long *)(pvVar5 + 8) + 8;
      }
      local_1c8 = *(undefined8 *)(pDVar19 + 0x58);
      lStack_1c0 = *(long *)(pDVar19 + 0x60);
      if (lStack_1c0 != 0) {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          *(int *)(lStack_1c0 + 8) = *(int *)(lStack_1c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(lStack_1c0 + 8) = *(int *)(lStack_1c0 + 8) + 1;
        }
      }
      local_1e0 = this;
      local_1b8 = &local_1f0;
      if (local_1f0 < local_1ec) {
        do {
          plVar22 = (long *)local_1a8._8_8_;
          while( true ) {
            auVar41._0_8_ = local_1a8._0_8_;
            if (plVar22 == local_198) break;
            if ((*plVar22 != 0) && (lVar24 = *(long *)(*plVar22 + 0x10), lVar24 != 0)) {
              puVar23 = *(undefined8 **)(lVar24 + 0xd8);
              if (puVar23 == (undefined8 *)0x0) {
                    /* try { // try from 001e4c4f to 001e4c58 has its CatchHandler @ 001e52fa */
                puVar23 = operator_new(0x18);
                *(undefined4 *)(puVar23 + 1) = 0;
                *puVar23 = &PTR__ReferenceCountedObject_00714b80;
                puVar23[2] = lVar24;
                LOCK();
                *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                UNLOCK();
                plVar22 = *(long **)(lVar24 + 0xd8);
                *(undefined8 **)(lVar24 + 0xd8) = puVar23;
                if (plVar22 != (long *)0x0) {
                  LOCK();
                  plVar20 = plVar22 + 1;
                  *(int *)plVar20 = (int)*plVar20 + -1;
                  UNLOCK();
                  if ((int)*plVar20 == 0) {
                    (**(code **)(*plVar22 + 8))();
                  }
                  puVar23 = *(undefined8 **)(lVar24 + 0xd8);
                  if (puVar23 == (undefined8 *)0x0) break;
                }
              }
              LOCK();
              *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
              UNLOCK();
              plVar22 = *(long **)auVar41._0_8_;
              *(undefined8 **)auVar41._0_8_ = puVar23;
              goto joined_r0x001e4b2f;
            }
            plVar22 = plVar22 + 1;
          }
          plVar22 = *(long **)auVar41._0_8_;
          *(undefined8 *)auVar41._0_8_ = 0;
joined_r0x001e4b2f:
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar20 = plVar22 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          if ((*(long *)local_1a8._0_8_ == 0) ||
             (lVar24 = *(long *)(*(long *)local_1a8._0_8_ + 0x10), lVar24 == 0)) break;
          plVar22 = *(long **)(*plVar21 + (long)local_1f0 * 8);
          if (plVar22 != (long *)0x0) {
            in_XMM2 = ZEXT416(local_164);
            local_bf = local_12f != '\0';
            local_118._4_4_ = fStack_184;
            local_118._0_4_ = local_188;
            uStack_110._0_4_ = SUB84((double)local_188 + _DAT_005d9a90,0);
            uStack_110._4_4_ = SUB84((double)fStack_184 + _UNK_005d9a98,0);
            local_108 = local_178;
            local_104 = local_174;
            uStack_fc = uStack_16c;
            local_f4 = local_164;
            local_f0 = local_160;
            local_d8 = local_148;
            uStack_d4 = uStack_144;
            uStack_d0 = uStack_140;
            uStack_cc = uStack_13c;
            local_c8 = local_138;
            local_c0 = local_130;
                    /* try { // try from 001e4c44 to 001e4c49 has its CatchHandler @ 001e5375 */
            local_e8 = lVar24;
            local_e0 = lVar24;
            (**(code **)(*plVar22 + 0x10))((double)local_188 + _DAT_005d9a90);
          }
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1ec);
      }
      ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::$_47&&)::{lambda()#1}>
      ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::__47,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseMove(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::Point<float>,juce::Time)::__47&&)::_lambda()_1_>
                     *)&local_1c8);
      this = local_1e0;
      auVar41._0_8_ = extraout_XMM1_Qa_05;
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar18 = *(ulong *)(p_Var4 + 8);
        if (uVar18 == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          auVar41._0_8_ = extraout_XMM1_Qa_06;
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = p_Var4 + 8;
            uVar18 = (ulong)*(uint *)p_Var2;
            *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var4 + 8) = (int)uVar18 + -1;
          }
          if ((int)uVar18 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
            auVar41._0_8_ = extraout_XMM1_Qa_08;
          }
        }
      }
    }
    local_1c8 = _DAT_005dcc50;
    lStack_1c0 = _UNK_005dcc58;
    uStack_110 = (HierarchyChecker *)local_1a8;
    local_118 = (undefined1  [8])&local_1c8;
    uVar30 = _DAT_005dcc50;
    if ((*(long *)local_1a8._0_8_ != 0) &&
       (lVar24 = *(long *)(*(long *)local_1a8._0_8_ + 0x10), lVar24 != 0)) {
                    /* try { // try from 001e51fd to 001e5209 has its CatchHandler @ 001e5304 */
      bVar16 = Component::MouseListenerList::
               sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
               ::{lambda(auto:1&,auto:2)#1}::operator()((long *)local_118,lVar24);
      uVar30 = extraout_XMM0_Qa_06;
      if (bVar16) {
        if ((*(long *)local_1a8._0_8_ != 0) &&
           (lVar24 = *(long *)(*(long *)local_1a8._0_8_ + 0x10), lVar24 != 0)) {
          do {
            lVar24 = *(long *)(lVar24 + 0x30);
            if (lVar24 == 0) break;
                    /* try { // try from 001e5235 to 001e523f has its CatchHandler @ 001e5366 */
            bVar16 = Component::MouseListenerList::
                     sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                     ::{lambda(auto:1&,auto:2)#1}::operator()((long *)local_118,lVar24);
            uVar30 = extraout_XMM0_Qa_07;
          } while (bVar16);
        }
      }
    }
    auVar43._8_8_ = auVar41._0_8_;
    auVar43._0_8_ = uVar30;
    plVar21 = (long *)local_1a8._8_8_;
    if ((long *)local_1a8._8_8_ != local_198) {
      do {
        plVar22 = (long *)*plVar21;
        if (plVar22 != (long *)0x0) {
          LOCK();
          plVar20 = plVar22 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            auVar43 = (**(code **)(*plVar22 + 8))();
          }
        }
        plVar21 = plVar21 + 1;
      } while (plVar21 != local_198);
LAB_001e5280:
    }
  }
  auVar41._0_8_ = auVar43._8_8_;
  if ((long *)local_1a8._8_8_ != (long *)0x0) {
    operator_delete((void *)local_1a8._8_8_);
    auVar43._8_8_ = auVar41._0_8_;
    auVar43._0_8_ = extraout_XMM0_Qa_08;
  }
LAB_001e5292:
  auVar41._0_8_ = in_XMM2._0_8_;
  if (local_1e8 != (long *)0x0) {
    LOCK();
    plVar21 = local_1e8 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      auVar43 = (**(code **)(*local_1e8 + 8))();
      auVar41._0_8_ = in_XMM2._0_8_;
    }
  }
  goto LAB_001e52a9;
  while( true ) {
    plVar21 = (long *)plVar21[6];
    if (plVar21 == plVar22) break;
LAB_001e4140:
    if (plVar21 == (long *)0x0) {
                    /* try { // try from 001e419a to 001e419f has its CatchHandler @ 001e54a1 */
      cVar15 = (**(code **)(*plVar22 + 0x170))();
      auVar43._8_8_ = extraout_XMM1_Qa_00;
      auVar43._0_8_ = extraout_XMM0_Qa_00;
      if (cVar15 == '\0') goto LAB_001e4dce;
      break;
    }
  }
LAB_001e41a8:
  uVar27 = ModifierKeys::currentModifiers & 0xfffffe0f;
  if (local_1e8 == (long *)0x0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = (long *)local_1e8[2];
  }
  uVar3 = *(uint *)(this + 0x3c);
  local_1d8._8_8_ = 0;
  local_1d8._0_8_ = *(ulong *)(this + 0x70);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e41e2 to 001e41eb has its CatchHandler @ 001e5370 */
    pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e41ef to 001e41f6 has its CatchHandler @ 001e536b */
    Desktop::Desktop(pDVar19);
    Desktop::instance = pDVar19;
  }
  fVar29 = *(float *)(Desktop::instance + 0x130);
  fVar34 = (float)(_DAT_005d91c0 & (uint)fVar29);
  if (fVar34 == DAT_005d94c8) {
    if ((fVar29 != DAT_005d9038) || (NAN(fVar29) || NAN(DAT_005d9038))) {
LAB_001e4256:
      auVar32._4_4_ = fVar29;
      auVar32._0_4_ = fVar29;
      auVar32._8_4_ = fVar29;
      auVar32._12_4_ = fVar29;
      local_1d8 = divps(local_1d8,auVar32);
    }
  }
  else {
    fVar37 = (float)((uint)(DAT_005d9054 + fVar29) & _DAT_005d91c0);
    auVar38 = ZEXT416((uint)fVar37);
    if (DAT_005d94cc < fVar37) {
      fVar35 = DAT_005d9038;
      if (DAT_005d9038 <= fVar34) {
        fVar35 = fVar34;
      }
      if (fVar35 * DAT_005d94d0 < fVar37) goto LAB_001e4256;
    }
  }
  plVar22 = plVar21;
  do {
    plVar20 = plVar22;
    plVar22 = (long *)plVar20[6];
  } while ((long *)plVar20[6] != (long *)0x0);
                    /* try { // try from 001e427c to 001e4382 has its CatchHandler @ 001e54a1 */
  uVar30 = ComponentHelpers::convertFromParentSpace<juce::Point<float>>(local_1d8._0_8_,plVar20);
  auVar41._0_8_ = extraout_XMM0_Qb_00;
  if (plVar20 != plVar21) {
    uVar30 = ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
                       (uVar30,(long)plVar20,plVar21);
    auVar41._0_8_ = extraout_XMM0_Qb_01;
  }
  local_1d8._8_8_ = auVar41._0_8_;
  local_1d8._0_8_ = uVar30;
  lVar24 = *(long *)(this + 0x78);
  cVar15 = getNumberOfMultipleClicks(this);
  local_b8 = local_58;
  puStack_b0 = (undefined1 *)
               CONCAT44(SUB84((double)local_58._4_4_ + _UNK_005d9a98,0),
                        SUB84((double)(float)local_58 + _DAT_005d9a90,0));
  local_a4._8_8_ = uStack_40;
  local_a4._0_8_ = local_48;
  local_94 = local_1ac;
  local_90 = (Component *)local_1d8._0_8_;
  local_78 = local_128;
  local_60 = CONCAT11(lVar24 + 300 < *(long *)(this + 0xf0) ||
                      this[0xf8] != (MouseInputSourceImpl)0x0,cVar15);
  local_a8 = uVar27 | uVar3;
  local_88 = plVar21;
  local_80 = plVar21;
  local_70 = lVar24;
  local_68 = this;
  HierarchyChecker::HierarchyChecker((HierarchyChecker *)local_1a8,(long *)&local_1e8,&local_b8);
                    /* try { // try from 001e438f to 001e4399 has its CatchHandler @ 001e5492 */
  auVar43 = (**(code **)(*(long *)local_1e8[2] + 0x30))();
  auVar41._0_8_ = auVar43._8_8_;
  plVar21 = (long *)local_1a8._8_8_;
  while( true ) {
    uVar30 = local_1a8._0_8_;
    if (plVar21 == local_198) break;
    if ((*plVar21 != 0) && (lVar24 = *(long *)(*plVar21 + 0x10), lVar24 != 0)) {
      puVar23 = *(undefined8 **)(lVar24 + 0xd8);
      if (puVar23 == (undefined8 *)0x0) {
        puVar23 = operator_new(0x18);
        auVar43._8_8_ = auVar41._0_8_;
        auVar43._0_8_ = extraout_XMM0_Qa_01;
        *(undefined4 *)(puVar23 + 1) = 0;
        *puVar23 = &PTR__ReferenceCountedObject_00714b80;
        puVar23[2] = lVar24;
        LOCK();
        *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
        UNLOCK();
        plVar21 = *(long **)(lVar24 + 0xd8);
        *(undefined8 **)(lVar24 + 0xd8) = puVar23;
        if (plVar21 != (long *)0x0) {
          LOCK();
          plVar22 = plVar21 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            auVar43 = (**(code **)(*plVar21 + 8))();
          }
          puVar23 = *(undefined8 **)(lVar24 + 0xd8);
          if (puVar23 == (undefined8 *)0x0) break;
        }
      }
      LOCK();
      *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
      UNLOCK();
      plVar21 = *(long **)uVar30;
      *(undefined8 **)uVar30 = puVar23;
      goto joined_r0x001e43ed;
    }
    plVar21 = plVar21 + 1;
  }
  plVar21 = *(long **)uVar30;
  *(undefined8 *)uVar30 = 0;
joined_r0x001e43ed:
  if (plVar21 != (long *)0x0) {
    LOCK();
    plVar22 = plVar21 + 1;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)*plVar22 == 0) {
      auVar43 = (**(code **)(*plVar21 + 8))();
    }
  }
  if ((*(long *)local_1a8._0_8_ != 0) && (*(long *)(*(long *)local_1a8._0_8_ + 0x10) != 0)) {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e4438 to 001e4441 has its CatchHandler @ 001e5492 */
      pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e4445 to 001e444c has its CatchHandler @ 001e530e */
      Desktop::Desktop(pDVar19);
      Desktop::instance = pDVar19;
    }
                    /* try { // try from 001e4454 to 001e44ad has its CatchHandler @ 001e5492 */
    pDVar19 = Desktop::instance;
    Desktop::resetTimer(Desktop::instance);
    auVar41._0_8_ = extraout_XMM1_Qa_01;
    if (*(int *)(pDVar19 + 0x68) == 2) {
      plVar21 = *(long **)(pDVar19 + 0x48);
      p_Var4 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(pDVar19 + 0x50);
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(p_Var4 + 8) = *(int *)(p_Var4 + 8) + 1;
        }
      }
      local_1f0 = 0;
      local_1ec = *(int *)((long)plVar21 + 0xc);
      pvVar5 = *(vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
                 **)(pDVar19 + 0x58);
      local_118 = (undefined1  [8])&local_1f0;
      plVar22 = *(long **)(pvVar5 + 8);
      if (plVar22 == *(long **)(pvVar5 + 0x10)) {
                    /* try { // try from 001e453c to 001e4548 has its CatchHandler @ 001e52fc */
        std::
        vector<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>>
        ::
        _M_realloc_insert<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::Iterator*>
                  (pvVar5,plVar22,(undefined8 *)local_118);
      }
      else {
        *plVar22 = (long)&local_1f0;
        *(long *)(pvVar5 + 8) = *(long *)(pvVar5 + 8) + 8;
      }
      local_1c8 = *(undefined8 *)(pDVar19 + 0x58);
      lStack_1c0 = *(long *)(pDVar19 + 0x60);
      if (lStack_1c0 != 0) {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          *(int *)(lStack_1c0 + 8) = *(int *)(lStack_1c0 + 8) + 1;
          UNLOCK();
        }
        else {
          *(int *)(lStack_1c0 + 8) = *(int *)(lStack_1c0 + 8) + 1;
        }
      }
      local_1b8 = &local_1f0;
      if (local_1f0 < local_1ec) {
        do {
          plVar22 = (long *)local_1a8._8_8_;
          while( true ) {
            auVar41._0_8_ = local_1a8._0_8_;
            if (plVar22 == local_198) break;
            if ((*plVar22 != 0) && (lVar24 = *(long *)(*plVar22 + 0x10), lVar24 != 0)) {
              puVar23 = *(undefined8 **)(lVar24 + 0xd8);
              if (puVar23 == (undefined8 *)0x0) {
                    /* try { // try from 001e4763 to 001e476c has its CatchHandler @ 001e5309 */
                puVar23 = operator_new(0x18);
                *(undefined4 *)(puVar23 + 1) = 0;
                *puVar23 = &PTR__ReferenceCountedObject_00714b80;
                puVar23[2] = lVar24;
                LOCK();
                *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
                UNLOCK();
                plVar22 = *(long **)(lVar24 + 0xd8);
                *(undefined8 **)(lVar24 + 0xd8) = puVar23;
                if (plVar22 != (long *)0x0) {
                  LOCK();
                  plVar20 = plVar22 + 1;
                  *(int *)plVar20 = (int)*plVar20 + -1;
                  UNLOCK();
                  if ((int)*plVar20 == 0) {
                    (**(code **)(*plVar22 + 8))();
                  }
                  puVar23 = *(undefined8 **)(lVar24 + 0xd8);
                  if (puVar23 == (undefined8 *)0x0) break;
                }
              }
              LOCK();
              *(int *)(puVar23 + 1) = *(int *)(puVar23 + 1) + 1;
              UNLOCK();
              plVar22 = *(long **)auVar41._0_8_;
              *(undefined8 **)auVar41._0_8_ = puVar23;
              goto joined_r0x001e463d;
            }
            plVar22 = plVar22 + 1;
          }
          plVar22 = *(long **)auVar41._0_8_;
          *(undefined8 *)auVar41._0_8_ = 0;
joined_r0x001e463d:
          if (plVar22 != (long *)0x0) {
            LOCK();
            plVar20 = plVar22 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)(*plVar22 + 8))();
            }
          }
          if ((*(long *)local_1a8._0_8_ == 0) ||
             (lVar24 = *(long *)(*(long *)local_1a8._0_8_ + 0x10), lVar24 == 0)) break;
          plVar22 = *(long **)(*plVar21 + (long)local_1f0 * 8);
          if (plVar22 != (long *)0x0) {
            auVar38 = ZEXT416(local_164);
            local_bf = local_12f != '\0';
            local_118._4_4_ = fStack_184;
            local_118._0_4_ = local_188;
            uStack_110._0_4_ = SUB84((double)local_188 + _DAT_005d9a90,0);
            uStack_110._4_4_ = SUB84((double)fStack_184 + _UNK_005d9a98,0);
            local_108 = local_178;
            local_104 = local_174;
            uStack_fc = uStack_16c;
            local_f4 = local_164;
            local_f0 = local_160;
            local_d8 = local_148;
            uStack_d4 = uStack_144;
            uStack_d0 = uStack_140;
            uStack_cc = uStack_13c;
            local_c8 = local_138;
            local_c0 = local_130;
                    /* try { // try from 001e474f to 001e4759 has its CatchHandler @ 001e541e */
            local_e8 = lVar24;
            local_e0 = lVar24;
            (**(code **)(*plVar22 + 0x30))((double)local_188 + _DAT_005d9a90);
          }
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1ec);
      }
      ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::$_46&&)::{lambda()#1}>
      ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__46,juce::HierarchyChecker>(juce::MouseListener*,juce::HierarchyChecker_const&,juce::Component::internalMouseDrag(juce::Component::SafePointer<juce::Component>,juce::MouseInputSource,juce::detail::PointerState_const&,juce::Time)::__46&&)::_lambda()_1_>
                     *)&local_1c8);
      auVar41._0_8_ = extraout_XMM1_Qa_02;
      if (p_Var4 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar18 = *(ulong *)(p_Var4 + 8);
        if (uVar18 == 0x100000001) {
          *(undefined8 *)(p_Var4 + 8) = 0;
          (**(code **)(*(long *)p_Var4 + 0x10))(p_Var4);
          (**(code **)(*(long *)p_Var4 + 0x18))(p_Var4);
          auVar41._0_8_ = extraout_XMM1_Qa_03;
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var2 = p_Var4 + 8;
            uVar18 = (ulong)*(uint *)p_Var2;
            *(uint *)p_Var2 = *(uint *)p_Var2 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var4 + 8) = (int)uVar18 + -1;
          }
          if ((int)uVar18 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var4);
            auVar41._0_8_ = extraout_XMM1_Qa_07;
          }
        }
      }
    }
    local_1c8 = ram0x005dcc40;
    lStack_1c0 = _UNK_005dcc48;
    uStack_110 = local_1a8;
    local_118 = (undefined1  [8])&local_1c8;
    uVar30 = ram0x005dcc40;
    if ((*(long *)local_1a8._0_8_ != 0) &&
       (lVar24 = *(long *)(*(long *)local_1a8._0_8_ + 0x10), lVar24 != 0)) {
                    /* try { // try from 001e4d62 to 001e4d6e has its CatchHandler @ 001e531e */
      bVar16 = Component::MouseListenerList::
               sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
               ::{lambda(auto:1&,auto:2)#1}::operator()((long *)local_118,lVar24);
      uVar30 = extraout_XMM0_Qa_03;
      if (bVar16) {
        if ((*(long *)local_1a8._0_8_ != 0) &&
           (lVar24 = *(long *)(*(long *)local_1a8._0_8_ + 0x10), lVar24 != 0)) {
          do {
            lVar24 = *(long *)(lVar24 + 0x30);
            if (lVar24 == 0) break;
                    /* try { // try from 001e4d9a to 001e4da4 has its CatchHandler @ 001e53f9 */
            bVar16 = Component::MouseListenerList::
                     sendMouseEvent<void(juce::MouseListener::*)(juce::MouseEvent_const&)>(juce::HierarchyChecker&,void(juce::MouseListener::*&&)(juce::MouseEvent_const&))
                     ::{lambda(auto:1&,auto:2)#1}::operator()((long *)local_118,lVar24);
            uVar30 = extraout_XMM0_Qa_04;
          } while (bVar16);
        }
      }
    }
    auVar43._8_8_ = auVar41._0_8_;
    auVar43._0_8_ = uVar30;
    this = local_1e0;
  }
  auVar41._0_8_ = auVar43._8_8_;
  plVar21 = (long *)local_1a8._8_8_;
  if ((long *)local_1a8._8_8_ != local_198) {
    do {
      plVar22 = (long *)*plVar21;
      if (plVar22 != (long *)0x0) {
        LOCK();
        plVar20 = plVar22 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          auVar43 = (**(code **)(*plVar22 + 8))();
        }
      }
      auVar41._0_8_ = auVar43._8_8_;
      plVar21 = plVar21 + 1;
    } while (plVar21 != local_198);
  }
  if ((long *)local_1a8._8_8_ != (long *)0x0) {
    operator_delete((void *)local_1a8._8_8_);
    auVar43._8_8_ = auVar41._0_8_;
    auVar43._0_8_ = extraout_XMM0_Qa_05;
  }
LAB_001e4dce:
  auVar41._0_8_ = auVar38._0_8_;
  if (local_1e8 != (long *)0x0) {
    LOCK();
    plVar21 = local_1e8 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      auVar43 = (**(code **)(*local_1e8 + 8))();
      auVar41._0_8_ = auVar38._0_8_;
    }
  }
  if (this[0x40] == (MouseInputSourceImpl)0x0) goto LAB_001e52a9;
  auVar41 = Component::getParentMonitorArea(pCVar17);
  iVar25 = 4;
  if (4 < auVar41._12_4_) {
    iVar25 = auVar41._12_4_;
  }
  iVar28 = 0;
  if (4 < auVar41._8_4_) {
    iVar28 = auVar41._8_4_ + -4;
  }
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e4e26 to 001e4e2f has its CatchHandler @ 001e535e */
    pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e4e33 to 001e4e3a has its CatchHandler @ 001e534b */
    Desktop::Desktop(pDVar19);
    Desktop::instance = pDVar19;
  }
  this = local_1e0;
  fVar35 = (float)(auVar41._0_4_ + _DAT_00651fa0);
  fVar36 = (float)(auVar41._4_4_ + _UNK_00651fa4);
  uVar30 = CONCAT44(fVar36,fVar35);
  fVar34 = (float)iVar28;
  fVar37 = (float)(iVar25 + -4);
  fVar29 = *(float *)(Desktop::instance + 0x130);
  fVar39 = (float)(_DAT_005d91c0 & (uint)fVar29);
  if (fVar39 == DAT_005d94c8) {
    if ((fVar29 != DAT_005d9038) || (NAN(fVar29) || NAN(DAT_005d9038))) {
LAB_001e4ec2:
      uVar30 = CONCAT44(fVar36 * fVar29,fVar35 * fVar29);
      fVar34 = fVar34 * fVar29;
      fVar37 = fVar37 * fVar29;
    }
  }
  else {
    fVar40 = (float)((uint)(DAT_005d9054 + fVar29) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar40) {
      fVar6 = DAT_005d9038;
      if (DAT_005d9038 <= fVar39) {
        fVar6 = fVar39;
      }
      if (fVar6 * DAT_005d94d0 < fVar40) goto LAB_001e4ec2;
    }
  }
  auVar41._0_8_ = *(undefined8 *)pMVar1;
  fVar35 = (float)auVar41._0_8_;
  fVar36 = (float)((ulong)auVar41._0_8_ >> 0x20);
  fVar29 = (float)uVar30;
  if (fVar29 <= fVar35) {
    fVar39 = (float)((ulong)uVar30 >> 0x20);
    auVar41._0_8_ = CONCAT44(fVar39,fVar39);
    auVar41._8_4_ = fVar39;
    auVar41._12_4_ = fVar39;
    if (fVar39 <= fVar36) {
      fVar34 = fVar34 + fVar29;
      fVar37 = fVar37 + fVar39;
      uVar31 = CONCAT44(fVar37,fVar34);
      auVar11._8_8_ = uVar30;
      auVar11._0_8_ = uVar31;
      auVar10._8_8_ = uVar30;
      auVar10._0_8_ = uVar31;
      auVar43._8_8_ = uVar30;
      auVar43._0_8_ = uVar31;
      if ((fVar35 < fVar34) && (fVar36 < fVar37)) {
        if ((local_1e0[0x41] != (MouseInputSourceImpl)0x0) &&
           ((((*(float *)(local_1e0 + 0x18) != 0.0 || (NAN(*(float *)(local_1e0 + 0x18)))) ||
             (*(float *)(local_1e0 + 0x1c) != 0.0)) ||
            (auVar43 = auVar10, NAN(*(float *)(local_1e0 + 0x1c)))))) {
          fVar35 = fVar35 + (float)*(undefined8 *)(local_1e0 + 0x18);
          fVar36 = fVar36 + (float)((ulong)*(undefined8 *)(local_1e0 + 0x18) >> 0x20);
          auVar43 = auVar11;
          if (fVar29 <= fVar35) {
            uVar30 = CONCAT44(fVar36,fVar36);
            auVar13._8_8_ = uVar30;
            auVar13._0_8_ = uVar31;
            auVar12._8_8_ = uVar30;
            auVar12._0_8_ = uVar31;
            auVar43._8_8_ = uVar30;
            if (((fVar39 <= fVar36) && (auVar43 = auVar12, fVar35 < fVar34)) &&
               (auVar43 = auVar13, fVar36 < fVar37)) {
              local_128 = CONCAT44(fVar36,fVar35);
              uStack_120 = 0;
              this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                                  ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>
                                    *)XWindowSystem::singletonHolder);
              if (Desktop::instance == (Desktop *)0x0) {
                pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e5134 to 001e513b has its CatchHandler @ 001e52df */
                Desktop::Desktop(pDVar19);
                Desktop::instance = pDVar19;
              }
              auVar33._0_4_ =
                   Displays::logicalToPhysical<float>
                             (local_128,*(long **)(Desktop::instance + 0xe0));
              auVar33._4_12_ = extraout_var;
              auVar43 = XWindowSystem::setMousePosition(auVar33._0_8_,this_00);
              *(undefined8 *)(this + 0x18) = 0;
            }
          }
        }
        goto LAB_001e52a9;
      }
    }
  }
  auVar42._8_8_ = 0;
  auVar42._0_8_ = *(ulong *)(pCVar17 + 0x40);
  auVar42 = auVar42 << 0x40;
  do {
    local_1a8 = auVar42;
    local_b8 = pCVar17;
    puStack_b0 = local_1a8;
    auVar42 = ComponentHelpers::
              convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
              ::{lambda()#1}::operator()((_lambda___1_ *)&local_b8);
    _local_118 = auVar42;
    if (*(float **)(pCVar17 + 0x50) != (float *)0x0) {
      auVar42 = Rectangle<int>::transformedBy
                          ((Rectangle<int> *)local_118,*(float **)(pCVar17 + 0x50));
    }
    this = local_1e0;
    pCVar17 = *(Component **)(pCVar17 + 0x30);
  } while (pCVar17 != (Component *)0x0);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e4f98 to 001e4fa1 has its CatchHandler @ 001e5336 */
    pDVar19 = operator_new(0x1d0);
                    /* try { // try from 001e4fa5 to 001e4fac has its CatchHandler @ 001e5323 */
    Desktop::Desktop(pDVar19);
    Desktop::instance = pDVar19;
  }
  fVar34 = (float)auVar42._8_4_ * _DAT_005d9920 + (float)auVar42._0_4_;
  fVar37 = (float)auVar42._12_4_ * _UNK_005d9924 + (float)auVar42._4_4_;
  uVar30 = CONCAT44(fVar37,fVar34);
  fVar29 = *(float *)(Desktop::instance + 0x130);
  fVar35 = (float)(_DAT_005d91c0 & (uint)fVar29);
  auVar41._0_8_ = uVar30;
  if (fVar35 == DAT_005d94c8) {
    if ((fVar29 != DAT_005d9038) || (NAN(fVar29) || NAN(DAT_005d9038))) {
LAB_001e502d:
      auVar41._0_8_ = CONCAT44(fVar29 * fVar37,fVar29 * fVar34);
    }
  }
  else {
    fVar36 = (float)((uint)(DAT_005d9054 + fVar29) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar36) {
      fVar39 = DAT_005d9038;
      if (DAT_005d9038 <= fVar35) {
        fVar39 = fVar35;
      }
      if (fVar39 * DAT_005d94d0 < fVar36) goto LAB_001e502d;
    }
  }
  *(float *)(this + 0x18) =
       (*(float *)(this + 0x20) - (float)auVar41._0_8_) + *(float *)(this + 0x18);
  fVar29 = (*(float *)(this + 0x24) - (float)((ulong)auVar41._0_8_ >> 0x20)) +
           *(float *)(this + 0x1c);
  auVar41 = ZEXT416((uint)fVar29);
  *(float *)(this + 0x1c) = fVar29;
  auVar43 = setScreenPosition(uVar30);
LAB_001e52a9:
  revealCursor(auVar43._0_8_,auVar43._8_8_,auVar41._0_8_,this,'\0');
  return;
}


