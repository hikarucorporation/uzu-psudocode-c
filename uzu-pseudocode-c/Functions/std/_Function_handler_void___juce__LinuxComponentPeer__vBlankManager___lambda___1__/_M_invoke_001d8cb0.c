// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__LinuxComponentPeer__vBlankManager___lambda___1__
// Entry    : 001d8cb0
// Prototype: undefined _M_invoke(long * param_1)
// Body     : 001d8cb0 - 001d92f3


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (),
   juce::LinuxComponentPeer::vBlankManager::{lambda()#1}>::_M_invoke(std::_Any_data const&) */

void __cdecl
std::_Function_handler<void(),juce::LinuxComponentPeer::vBlankManager::{lambda()#1}>::_M_invoke
          (long *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  long *plVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  LinuxRepaintManager *this_00;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  XWindowSystem *pXVar15;
  _Rb_tree_node_base *p_Var16;
  long lVar17;
  int iVar18;
  uint uVar19;
  double dVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  undefined8 local_128;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_120;
  double local_118;
  long local_110;
  ulong local_108;
  undefined8 *local_100;
  long local_f8;
  timespec local_f0;
  undefined1 *local_e0;
  
  lVar17 = *param_1;
  clock_gettime(1,&local_f0);
  dVar20 = SUB168(SEXT816(0x20c49ba5e353f7cf) * SEXT816(local_f0.tv_nsec),8);
  lVar24 = local_f0.tv_sec * 1000000;
  if (*(int *)(lVar17 + 0x78) == 2) {
    plVar2 = *(long **)(lVar17 + 0x58);
    this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(lVar17 + 0x60);
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
    local_128 = (ulong)*(uint *)((long)plVar2 + 0xc) << 0x20;
    puVar12 = *(undefined8 **)(lVar17 + 0x68);
    puVar3 = (undefined8 *)puVar12[1];
    if (puVar3 == (undefined8 *)puVar12[2]) {
      puVar4 = (undefined8 *)*puVar12;
      lVar25 = (long)puVar3 - (long)puVar4;
      local_120 = this;
      if (lVar25 == 0x7ffffffffffffff8) {
                    /* try { // try from 001d92e8 to 001d92f3 has its CatchHandler @ 001d92fc */
                    /* WARNING: Subroutine does not return */
        std::__throw_length_error("vector::_M_realloc_insert");
      }
      uVar22 = lVar25 >> 3;
      uVar13 = 1;
      if (lVar25 != 0) {
        uVar13 = uVar22;
      }
      local_108 = uVar13 + uVar22;
      if (local_108 >> 0x3c != 0) {
        local_108 = 0xfffffffffffffff;
      }
      if (CARRY8(uVar13,uVar22)) {
        local_108 = 0xfffffffffffffff;
      }
      local_118 = dVar20;
      local_100 = puVar12;
      local_f8 = lVar24;
      if (local_108 == 0) {
        puVar12 = (undefined8 *)0x0;
        *(undefined8 **)(uVar22 * 8) = &local_128;
        if (0 < lVar25) goto LAB_001d8ded;
LAB_001d8e4c:
        puVar23 = puVar12 + uVar22;
      }
      else {
        local_110 = lVar25;
                    /* try { // try from 001d8dd4 to 001d8dd8 has its CatchHandler @ 001d92fc */
        puVar12 = operator_new(local_108 * 8);
        puVar12[uVar22] = &local_128;
        lVar25 = local_110;
        if (local_110 < 1) goto LAB_001d8e4c;
LAB_001d8ded:
        puVar23 = puVar12;
        if (puVar4 != puVar3) {
          puVar14 = puVar4;
          if (0x17 < lVar25 - 8U) {
            uVar26 = (lVar25 - 8U >> 3) + 1;
            uVar13 = uVar26 & 0xfffffffffffffffc;
            uVar21 = (uVar13 - 4 >> 2) + 1;
            uVar22 = (ulong)((uint)uVar21 & 3);
            if (uVar13 - 4 < 0xc) {
              lVar24 = 0;
            }
            else {
              uVar21 = uVar21 & 0x7ffffffffffffffc;
              lVar24 = 0;
              do {
                uVar7 = (puVar4 + lVar24)[1];
                uVar8 = puVar4[lVar24 + 2];
                uVar9 = (puVar4 + lVar24 + 2)[1];
                puVar12[lVar24] = puVar4[lVar24];
                (puVar12 + lVar24)[1] = uVar7;
                puVar12[lVar24 + 2] = uVar8;
                (puVar12 + lVar24 + 2)[1] = uVar9;
                uVar7 = (puVar4 + lVar24 + 4)[1];
                uVar8 = puVar4[lVar24 + 6];
                uVar9 = (puVar4 + lVar24 + 6)[1];
                puVar12[lVar24 + 4] = puVar4[lVar24 + 4];
                (puVar12 + lVar24 + 4)[1] = uVar7;
                puVar12[lVar24 + 6] = uVar8;
                (puVar12 + lVar24 + 6)[1] = uVar9;
                uVar7 = (puVar4 + lVar24 + 8)[1];
                uVar8 = puVar4[lVar24 + 10];
                uVar9 = (puVar4 + lVar24 + 10)[1];
                puVar12[lVar24 + 8] = puVar4[lVar24 + 8];
                (puVar12 + lVar24 + 8)[1] = uVar7;
                puVar12[lVar24 + 10] = uVar8;
                (puVar12 + lVar24 + 10)[1] = uVar9;
                uVar7 = (puVar4 + lVar24 + 0xc)[1];
                uVar8 = puVar4[lVar24 + 0xe];
                uVar9 = (puVar4 + lVar24 + 0xe)[1];
                puVar12[lVar24 + 0xc] = puVar4[lVar24 + 0xc];
                (puVar12 + lVar24 + 0xc)[1] = uVar7;
                puVar12[lVar24 + 0xe] = uVar8;
                (puVar12 + lVar24 + 0xe)[1] = uVar9;
                lVar24 = lVar24 + 0x10;
                uVar21 = uVar21 - 4;
              } while (uVar21 != 0);
            }
            if (uVar22 != 0) {
              lVar25 = 0;
              do {
                puVar14 = (undefined8 *)((long)puVar4 + lVar25 + lVar24 * 8);
                uVar7 = puVar14[1];
                puVar23 = (undefined8 *)((long)puVar4 + lVar25 + lVar24 * 8 + 0x10);
                uVar8 = *puVar23;
                uVar9 = puVar23[1];
                puVar23 = (undefined8 *)((long)puVar12 + lVar25 + lVar24 * 8);
                *puVar23 = *puVar14;
                puVar23[1] = uVar7;
                puVar23 = (undefined8 *)((long)puVar12 + lVar25 + lVar24 * 8 + 0x10);
                *puVar23 = uVar8;
                puVar23[1] = uVar9;
                lVar25 = lVar25 + 0x20;
              } while (uVar22 * 0x20 != lVar25);
            }
            puVar23 = puVar12 + uVar13;
            if (uVar26 == uVar13) goto LAB_001d8f53;
            puVar14 = puVar4 + uVar13;
          }
          do {
            *puVar23 = *puVar14;
            puVar14 = puVar14 + 1;
            puVar23 = puVar23 + 1;
          } while (puVar14 != puVar3);
        }
      }
LAB_001d8f53:
      if (puVar4 != (undefined8 *)0x0) {
        operator_delete(puVar4);
      }
      *local_100 = puVar12;
      local_100[1] = puVar23 + 1;
      local_100[2] = puVar12 + local_108;
      local_f0.tv_sec = *(ulong *)(lVar17 + 0x68);
      local_f0.tv_nsec = *(long *)(lVar17 + 0x70);
      uVar13 = local_128;
      this = local_120;
      dVar20 = local_118;
      lVar24 = local_f8;
    }
    else {
      *puVar3 = &local_128;
      puVar12[1] = puVar12[1] + 8;
      local_f0.tv_sec = *(ulong *)(lVar17 + 0x68);
      local_f0.tv_nsec = *(long *)(lVar17 + 0x70);
      uVar13 = local_128;
    }
    if (local_f0.tv_nsec != 0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_f0.tv_nsec + 8) = *(int *)(local_f0.tv_nsec + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_f0.tv_nsec + 8) = *(int *)(local_f0.tv_nsec + 8) + 1;
      }
    }
    local_e0 = (undefined1 *)&local_128;
    local_128._0_4_ = (int)uVar13;
    local_128._4_4_ = (int)(uVar13 >> 0x20);
    if ((int)local_128 < local_128._4_4_) {
      local_118 = ((double)((((long)dVar20 >> 7) - ((long)dVar20 >> 0x3f)) + lVar24) * DAT_00651e50)
                  / DAT_006544a0;
      iVar11 = (int)local_128;
      local_e0 = (undefined1 *)&local_128;
      iVar18 = local_128._4_4_;
      do {
        local_128 = uVar13;
        plVar5 = *(long **)(*plVar2 + (long)iVar11 * 8);
        if (plVar5 != (long *)0x0) {
                    /* try { // try from 001d901d to 001d9025 has its CatchHandler @ 001d9301 */
          (**(code **)(*plVar5 + 0x10))(SUB84(local_118,0));
          iVar11 = (int)local_128;
          iVar18 = local_128._4_4_;
        }
        iVar11 = iVar11 + 1;
        local_128 = CONCAT44(local_128._4_4_,iVar11);
        uVar13 = local_128;
      } while (iVar11 < iVar18);
    }
    local_128 = uVar13;
    juce::
    ScopeGuard<juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComponentPeer::callVBlankListeners(double)::$_158,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::VBlankListener*,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ComponentPeer::callVBlankListeners(double)::$_158&&)::{lambda()#1}>
    ::~ScopeGuard((ScopeGuard<juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::callCheckedExcluding<juce::ComponentPeer::callVBlankListeners(double)::__158,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::VBlankListener*,juce::ListenerList<juce::ComponentPeer::VBlankListener,juce::Array<juce::ComponentPeer::VBlankListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::ComponentPeer::callVBlankListeners(double)::__158&&)::_lambda()_1_>
                   *)&local_f0);
    if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(this + 8) == 0x100000001) {
        *(undefined8 *)(this + 8) = 0;
        (**(code **)(*(long *)this + 0x10))(this);
        (**(code **)(*(long *)this + 0x18))(this);
        this_00 = *(LinuxRepaintManager **)(lVar17 + 0xd0);
        goto joined_r0x001d92e0;
      }
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = this + 8;
        iVar11 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar11 = (int)*(long *)(this + 8);
        *(int *)(this + 8) = iVar11 + -1;
      }
      if (iVar11 == 1) {
        _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
        this_00 = *(LinuxRepaintManager **)(lVar17 + 0xd0);
        goto joined_r0x001d92e0;
      }
    }
  }
  this_00 = *(LinuxRepaintManager **)(lVar17 + 0xd0);
joined_r0x001d92e0:
  if (this_00 != (LinuxRepaintManager *)0x0) {
    pXVar15 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         juce::XWindowSystem::singletonHolder);
    uVar13 = *(ulong *)(*(long *)this_00 + 0x120);
    cVar10 = juce::XSHMHelpers::isShmAvailable(*(long *)(pXVar15 + 0x148));
    if ((cVar10 != '\0') &&
       (local_f0.tv_sec = uVar13,
       cVar10 = juce::XSHMHelpers::isShmAvailable(*(long *)(pXVar15 + 0x148)), cVar10 != '\0')) {
      p_Var16 = map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                ::operator[]((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                              *)(pXVar15 + 0x160),(ulong *)&local_f0);
      if (0 < *(int *)p_Var16) {
        if ((juce::XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar17 = *(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148), lVar17 != 0)) {
          lVar24 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar24 + 0x210))(lVar17);
        }
        while( true ) {
                    /* try { // try from 001d9140 to 001d917d has its CatchHandler @ 001d9399 */
          lVar17 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          iVar11 = (**(code **)(lVar17 + 0x38))
                             (*(undefined8 *)(pXVar15 + 0x148),uVar13,*(undefined4 *)(pXVar15 + 400)
                              ,&local_f0);
          if (iVar11 == 0) break;
          local_128 = uVar13;
          cVar10 = juce::XSHMHelpers::isShmAvailable(*(long *)(pXVar15 + 0x148));
          if (cVar10 != '\0') {
            p_Var16 = map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                      ::operator[]((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                                    *)(pXVar15 + 0x160),&local_128);
            *(int *)p_Var16 = *(int *)p_Var16 + -1;
          }
        }
        if ((juce::XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar17 = *(long *)(juce::XWindowSystem::singletonHolder._40_8_ + 0x148), lVar17 != 0)) {
                    /* try { // try from 001d919b to 001d91a8 has its CatchHandler @ 001d92f4 */
          lVar24 = juce::SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar24 + 0x360))(lVar17);
        }
      }
    }
    pXVar15 = juce::SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         juce::XWindowSystem::singletonHolder);
    local_f0.tv_sec = *(long *)(*(long *)this_00 + 0x120);
    cVar10 = juce::XSHMHelpers::isShmAvailable(*(long *)(pXVar15 + 0x148));
    if ((cVar10 == '\0') ||
       (p_Var16 = map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                  ::operator[]((map<unsigned_long,int,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
                                *)(pXVar15 + 0x160),(ulong *)&local_f0), *(int *)p_Var16 < 1)) {
      if (*(int *)(this_00 + 0x2c) == 0) {
        uVar19 = _ZN4juce11TimeHelpersL18lastMSCounterValueE_0;
        if (_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 == 0) {
          clock_gettime(1,&local_f0);
          auVar6 = SEXT816(local_f0.tv_nsec / 1000 + local_f0.tv_sec * 1000000) *
                   SEXT816(0x20c49ba5e353f7cf);
          uVar19 = (int)(auVar6._8_8_ >> 7) - (auVar6._12_4_ >> 0x1f);
          if ((_ZN4juce11TimeHelpersL18lastMSCounterValueE_0 <= uVar19) ||
             (uVar19 < _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 - 1000)) {
            LOCK();
            UNLOCK();
            _ZN4juce11TimeHelpersL18lastMSCounterValueE_0 = uVar19;
          }
        }
        if (*(int *)(this_00 + 0x18) + 3000U < uVar19) {
          plVar2 = *(long **)(this_00 + 0x10);
          *(undefined8 *)(this_00 + 0x10) = 0;
          if (plVar2 != (long *)0x0) {
            LOCK();
            plVar5 = plVar2 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
              (**(code **)(*plVar2 + 8))();
            }
          }
        }
      }
      else {
        juce::LinuxComponentPeer::LinuxRepaintManager::performAnyPendingRepaintsNow(this_00);
      }
    }
  }
  return;
}


