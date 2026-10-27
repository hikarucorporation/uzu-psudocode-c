// Function : invoke
// Namespace: juce:ApplicationCommandManager
// Entry    : 0022e3d0
// Prototype: undefined invoke(long * param_1, int * param_2)
// Body     : 0022e3d0 - 0022e955


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::ApplicationCommandManager::invoke(juce::ApplicationCommandTarget::InvocationInfo const&,
   bool) */

void __cdecl juce::ApplicationCommandManager::invoke(long *param_1,int *param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ApplicationCommandTarget *pAVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ApplicationCommandTarget *pAVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  long *plVar23;
  long lVar24;
  ulong uVar25;
  bool bVar26;
  int local_f0;
  int local_ec;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_e8;
  int local_e0 [2];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  void *local_c0;
  ulong uStack_b8;
  undefined4 local_b0;
  long local_a8;
  long *local_a0;
  ulong local_98;
  undefined8 *local_90;
  long *local_88;
  long local_80;
  long local_78;
  int *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  local_e0[0] = 0;
  local_d8 = &DAT_0061ac58;
  local_d0 = &DAT_0061ac58;
  local_c8 = &DAT_0061ac58;
  local_c0 = (void *)0x0;
  uStack_b8 = 0;
  local_b0 = 0;
  iVar16 = *param_2;
                    /* try { // try from 0022e41a to 0022e454 has its CatchHandler @ 0022e9e9 */
  pAVar11 = (ApplicationCommandTarget *)(**(code **)(*param_1 + 0x18))(param_1,iVar16);
  if ((pAVar11 == (ApplicationCommandTarget *)0x0) ||
     (pAVar11 = ApplicationCommandTarget::getTargetForCommand(pAVar11,iVar16),
     pAVar11 == (ApplicationCommandTarget *)0x0)) goto LAB_0022e898;
  local_e0[0] = iVar16;
  (**(code **)(*(long *)pAVar11 + 0x20))(pAVar11,iVar16,local_e0);
  uStack_60 = *(undefined8 *)(param_2 + 2);
  local_58 = *(undefined8 *)(param_2 + 4);
  uStack_50 = *(undefined8 *)(param_2 + 6);
  local_48 = *(undefined8 *)(param_2 + 8);
  uStack_40 = *(undefined8 *)(param_2 + 10);
  local_68 = CONCAT44(local_b0,(int)*(undefined8 *)param_2);
  if ((int)param_1[9] == 2) {
    plVar3 = (long *)param_1[5];
    this = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_1[6];
    if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
      }
    }
    local_f0 = 0;
    local_ec = *(int *)((long)plVar3 + 0xc);
    puVar4 = (undefined8 *)param_1[7];
    plVar23 = (long *)puVar4[1];
    if (plVar23 == (long *)puVar4[2]) {
      plVar5 = (long *)*puVar4;
      lVar24 = (long)plVar23 - (long)plVar5;
      local_e8 = this;
      local_90 = puVar4;
      local_88 = param_1;
      if (lVar24 == 0x7ffffffffffffff8) {
                    /* try { // try from 0022e94a to 0022e955 has its CatchHandler @ 0022e956 */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar19 = lVar24 >> 3;
      uVar14 = 1;
      if (lVar24 != 0) {
        uVar14 = uVar19;
      }
      local_98 = uVar14 + uVar19;
      if (local_98 >> 0x3c != 0) {
        local_98 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar14,uVar19)) {
        local_98 = 0xfffffffffffffff;
      }
      if (local_98 == 0) {
        plVar12 = (long *)0x0;
        *(int **)(uVar19 * 8) = &local_f0;
        if (lVar24 < 1) goto LAB_0022e5fd;
LAB_0022e59c:
        plVar20 = plVar12;
        if (plVar5 != plVar23) {
          plVar13 = plVar5;
          if (0x17 < lVar24 - 8U) {
            uVar25 = (lVar24 - 8U >> 3) + 1;
            uVar14 = uVar25 & 0xfffffffffffffffc;
            uVar17 = (uVar14 - 4 >> 2) + 1;
            uVar19 = (ulong)((uint)uVar17 & 3);
            if (uVar14 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              uVar17 = uVar17 & 0x7ffffffffffffffc;
              lVar24 = 0;
              do {
                lVar21 = (plVar5 + lVar24)[1];
                lVar6 = plVar5[lVar24 + 2];
                lVar7 = (plVar5 + lVar24 + 2)[1];
                plVar12[lVar24] = plVar5[lVar24];
                (plVar12 + lVar24)[1] = lVar21;
                plVar12[lVar24 + 2] = lVar6;
                (plVar12 + lVar24 + 2)[1] = lVar7;
                lVar21 = (plVar5 + lVar24 + 4)[1];
                lVar6 = plVar5[lVar24 + 6];
                lVar7 = (plVar5 + lVar24 + 6)[1];
                plVar12[lVar24 + 4] = plVar5[lVar24 + 4];
                (plVar12 + lVar24 + 4)[1] = lVar21;
                plVar12[lVar24 + 6] = lVar6;
                (plVar12 + lVar24 + 6)[1] = lVar7;
                lVar21 = (plVar5 + lVar24 + 8)[1];
                lVar6 = plVar5[lVar24 + 10];
                lVar7 = (plVar5 + lVar24 + 10)[1];
                plVar12[lVar24 + 8] = plVar5[lVar24 + 8];
                (plVar12 + lVar24 + 8)[1] = lVar21;
                plVar12[lVar24 + 10] = lVar6;
                (plVar12 + lVar24 + 10)[1] = lVar7;
                lVar21 = (plVar5 + lVar24 + 0xc)[1];
                lVar6 = plVar5[lVar24 + 0xe];
                lVar7 = (plVar5 + lVar24 + 0xe)[1];
                plVar12[lVar24 + 0xc] = plVar5[lVar24 + 0xc];
                (plVar12 + lVar24 + 0xc)[1] = lVar21;
                plVar12[lVar24 + 0xe] = lVar6;
                (plVar12 + lVar24 + 0xe)[1] = lVar7;
                lVar24 = lVar24 + 0x10;
                uVar17 = uVar17 - 4;
              } while (uVar17 != 0);
            }
            if (uVar19 != 0) {
              lVar21 = 0;
              do {
                puVar2 = (undefined8 *)((long)plVar5 + lVar21 + lVar24 * 8);
                uVar8 = puVar2[1];
                puVar4 = (undefined8 *)((long)plVar5 + lVar21 + lVar24 * 8 + 0x10);
                uVar9 = *puVar4;
                uVar10 = puVar4[1];
                puVar4 = (undefined8 *)((long)plVar12 + lVar21 + lVar24 * 8);
                *puVar4 = *puVar2;
                puVar4[1] = uVar8;
                puVar4 = (undefined8 *)((long)plVar12 + lVar21 + lVar24 * 8 + 0x10);
                *puVar4 = uVar9;
                puVar4[1] = uVar10;
                lVar21 = lVar21 + 0x20;
              } while (uVar19 * 0x20 != lVar21);
            }
            plVar20 = plVar12 + uVar14;
            if (uVar25 == uVar14) goto LAB_0022e6f4;
            plVar13 = plVar5 + uVar14;
          }
          do {
            *plVar20 = *plVar13;
            plVar13 = plVar13 + 1;
            plVar20 = plVar20 + 1;
          } while (plVar13 != plVar23);
        }
      }
      else {
        local_a8 = lVar24;
        local_a0 = plVar23;
                    /* try { // try from 0022e57c to 0022e580 has its CatchHandler @ 0022e956 */
        plVar12 = operator_new(local_98 * 8);
        plVar12[uVar19] = (long)&local_f0;
        plVar23 = local_a0;
        lVar24 = local_a8;
        if (0 < local_a8) goto LAB_0022e59c;
LAB_0022e5fd:
        plVar20 = plVar12 + uVar19;
      }
LAB_0022e6f4:
      if (plVar5 != (long *)0x0) {
        operator_delete(plVar5);
      }
      *local_90 = plVar12;
      local_90[1] = plVar20 + 1;
      local_90[2] = plVar12 + local_98;
      local_80 = local_88[7];
      local_78 = local_88[8];
      this = local_e8;
      param_1 = local_88;
    }
    else {
      *plVar23 = (long)&local_f0;
      puVar4[1] = puVar4[1] + 8;
      local_80 = param_1[7];
      local_78 = param_1[8];
    }
    if (local_78 != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
      }
    }
    local_70 = &local_f0;
    if (local_f0 < local_ec) {
      iVar16 = local_ec;
      do {
        plVar23 = *(long **)(*plVar3 + (long)local_f0 * 8);
        if (plVar23 != (long *)0x0) {
                    /* try { // try from 0022e7a6 to 0022e7ab has its CatchHandler @ 0022e95b */
          (**(code **)(*plVar23 + 0x10))(plVar23,&local_68);
          iVar16 = local_ec;
        }
        local_f0 = local_f0 + 1;
      } while (local_f0 < iVar16);
    }
    ScopeGuard<juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ApplicationCommandManagerListener*,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::$_27&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::__27,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ApplicationCommandManagerListener*,juce::ListenerList<juce::ApplicationCommandManagerListener,juce::Array<juce::ApplicationCommandManagerListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ApplicationCommandManager::sendListenerInvokeCallback(juce::ApplicationCommandTarget::InvocationInfo_const&)::__27&&)::_lambda()_1_>
                   *)&local_80);
    if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      uVar14 = *(ulong *)(this + 8);
      if (uVar14 == 0x100000001) {
        *(undefined8 *)(this + 8) = 0;
        (**(code **)(*(long *)this + 0x10))(this);
        (**(code **)(*(long *)this + 0x18))(this);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = this + 8;
          uVar14 = (ulong)*(uint *)p_Var1;
          *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
          UNLOCK();
        }
        else {
          *(int *)(this + 8) = (int)uVar14 + -1;
        }
        if ((int)uVar14 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
        }
      }
    }
  }
  uVar18 = 0;
  pAVar15 = pAVar11;
  do {
                    /* try { // try from 0022e820 to 0022e837 has its CatchHandler @ 0022e9eb */
    uVar14 = ApplicationCommandTarget::tryToInvoke(pAVar15,(undefined4 *)&local_68);
    if ((((char)uVar14 != '\0') ||
        (pAVar15 = (ApplicationCommandTarget *)(**(code **)(*(long *)pAVar15 + 0x10))(pAVar15),
        pAVar15 == (ApplicationCommandTarget *)0x0)) || (99 < uVar18)) break;
    uVar18 = uVar18 + 1;
  } while (pAVar15 != pAVar11);
  LOCK();
  bVar26 = *(int *)(param_1[1] + 0x18) == 0;
  if (bVar26) {
    *(int *)(param_1[1] + 0x18) = 1;
  }
  UNLOCK();
  if (bVar26) {
    plVar3 = (long *)param_1[1];
    if (((MessageManager::instance == 0) || (*(int *)(MessageManager::instance + 8) != 0)) ||
       (InternalMessageQueue::singletonHolder._40_8_ == 0)) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      plVar23 = plVar3 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
      }
      LOCK();
      *(undefined4 *)(param_1[1] + 0x18) = 0;
      UNLOCK();
    }
    else {
      InternalMessageQueue::postMessage
                ((InternalMessageQueue *)InternalMessageQueue::singletonHolder._40_8_,(long)plVar3);
    }
  }
LAB_0022e898:
  uStack_b8 = uStack_b8 & 0xffffffff;
  free(local_c0);
  piVar22 = (int *)(local_c8 + -0x10);
  if (piVar22 != &emptyString) {
    LOCK();
    iVar16 = *piVar22;
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar22);
    }
  }
  piVar22 = (int *)(local_d0 + -0x10);
  if (piVar22 != &emptyString) {
    LOCK();
    iVar16 = *piVar22;
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar22);
    }
  }
  piVar22 = (int *)(local_d8 + -0x10);
  if (piVar22 != &emptyString) {
    LOCK();
    iVar16 = *piVar22;
    *piVar22 = *piVar22 + -1;
    UNLOCK();
    if (iVar16 == 0) {
      operator_delete__(piVar22);
    }
  }
  return;
}


