// Function : createNewPeer
// Namespace: juce:AudioProcessorEditor
// Entry    : 001be0c0
// Prototype: LinuxComponentPeer * createNewPeer(AudioProcessorEditor * this, undefined4 param_1, long param_2)
// Body     : 001be0c0 - 001be0c4


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::AudioProcessorEditor::createNewPeer(int, void*) */

LinuxComponentPeer * __thiscall
juce::AudioProcessorEditor::createNewPeer
          (AudioProcessorEditor *this,undefined4 param_1,long param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  int iVar11;
  __pid_t _Var12;
  LinuxComponentPeer *this_00;
  Desktop *this_01;
  undefined8 *puVar13;
  long lVar14;
  XWindowSystem *pXVar15;
  XWindowSystem *pXVar16;
  long lVar17;
  undefined8 uVar18;
  XWindowSystem *pXVar19;
  int *piVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  void *pvVar26;
  byte bVar27;
  LinuxComponentPeer *pLVar28;
  long lVar29;
  byte *pbVar31;
  byte *pbVar30;
  uint uVar32;
  char *pcVar33;
  ulong uVar34;
  ulong uVar35;
  long *plVar36;
  ulong uVar37;
  ulong uVar38;
  uint uVar39;
  char cVar40;
  ulong uVar41;
  bool bVar42;
  long *plStack_130;
  long lStack_118;
  long lStack_100;
  long *plStack_f8;
  LinuxComponentPeer *pLStack_f0;
  undefined8 *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  Timer *pTStack_b8;
  undefined8 uStack_b0;
  undefined8 auStack_a8 [3];
  undefined8 uStack_90;
  undefined8 uStack_60;
  uint uStack_50;
  undefined8 uStack_48;
  
  lStack_c0 = param_2;
  this_00 = operator_new(0x180);
  *(undefined ***)this_00 = &PTR__ComponentPeer_0070cbd8;
  *(AudioProcessorEditor **)(this_00 + 8) = this;
  *(undefined4 *)(this_00 + 0x10) = param_1;
  *(undefined8 *)(this_00 + 0x14) = 0;
  *(undefined8 *)(this_00 + 0x1c) = 0;
  *(undefined8 *)(this_00 + 0x58) = 0;
  *(undefined8 *)(this_00 + 0x60) = 0;
  *(undefined8 *)(this_00 + 0x68) = 0;
  *(undefined8 *)(this_00 + 0x70) = 0;
  *(undefined4 *)(this_00 + 0x78) = 0;
  *(undefined4 *)(this_00 + 0x80) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined8 *)(this_00 + 0x44) = 0;
  *(undefined8 *)(this_00 + 0x4c) = 0;
  *(undefined8 *)(this_00 + 0x88) = 0;
  *(undefined8 *)(this_00 + 0x90) = 0;
  *(undefined8 *)(this_00 + 0x98) = 0;
  *(undefined8 *)(this_00 + 0xa0) = 0;
  lastUniquePeerID = lastUniquePeerID + 2;
  *(int *)(this_00 + 0xa8) = lastUniquePeerID;
  *(undefined8 *)(this_00 + 0xb0) = 0;
  this_00[0xb8] = (LinuxComponentPeer)0x0;
  if (Desktop::instance == (Desktop *)0x0) {
    this_01 = operator_new(0x1d0);
    Desktop::Desktop(this_01);
    uVar39 = *(uint *)(this_01 + 0xd8);
    iVar11 = *(int *)(this_01 + 0xdc);
    Desktop::instance = this_01;
    if ((int)uVar39 <= iVar11) goto LAB_001d7034;
  }
  else {
    uVar39 = *(uint *)(Desktop::instance + 0xd8);
    iVar11 = *(int *)(Desktop::instance + 0xdc);
    this_01 = Desktop::instance;
    if ((int)uVar39 <= iVar11) {
LAB_001d7034:
      this_01 = Desktop::instance;
      uVar32 = iVar11 + ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (uVar39 != uVar32) {
        if ((int)uVar32 < 1) {
          free(*(void **)(Desktop::instance + 0xd0));
          *(undefined8 *)(this_01 + 0xd0) = 0;
        }
        else {
          pvVar26 = realloc(*(void **)(Desktop::instance + 0xd0),(ulong)uVar32 << 3);
          *(void **)(this_01 + 0xd0) = pvVar26;
        }
      }
      *(uint *)(this_01 + 0xd8) = uVar32;
      iVar11 = *(int *)(this_01 + 0xdc);
    }
  }
  *(int *)(this_01 + 0xdc) = iVar11 + 1;
  *(LinuxComponentPeer **)(*(long *)(this_01 + 0xd0) + (long)iVar11 * 8) = this_00;
  if (*(int *)(this_01 + 0x90) != 2) {
    LOCK();
    bVar42 = *(int *)(this_01 + 0x90) == 0;
    if (bVar42) {
      *(int *)(this_01 + 0x90) = 1;
    }
    UNLOCK();
    if (bVar42) {
      puVar13 = operator_new(0x20);
      puVar13[1] = 0x100000001;
      *puVar13 = &PTR___Sp_counted_base_00711110;
      puVar13[2] = 0;
      puVar13[3] = 0;
      *(undefined8 **)(this_01 + 0x70) = puVar13 + 2;
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_01 + 0x78);
      *(undefined8 **)(this_01 + 0x78) = puVar13;
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar41 = *(ulong *)(p_Var3 + 8);
        if (uVar41 == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = p_Var3 + 8;
            uVar41 = (ulong)*(uint *)p_Var1;
            *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var3 + 8) = (int)uVar41 + -1;
          }
          if ((int)uVar41 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
          }
        }
      }
      puVar13 = operator_new(0x28);
      puVar13[1] = 0x100000001;
      *puVar13 = &PTR___Sp_counted_base_00711160;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13[4] = 0;
      *(undefined8 **)(this_01 + 0x80) = puVar13 + 2;
      p_Var3 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this_01 + 0x88);
      *(undefined8 **)(this_01 + 0x88) = puVar13;
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        uVar41 = *(ulong *)(p_Var3 + 8);
        if (uVar41 == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = p_Var3 + 8;
            uVar41 = (ulong)*(uint *)p_Var1;
            *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
            UNLOCK();
          }
          else {
            *(int *)(p_Var3 + 8) = (int)uVar41 + -1;
          }
          if ((int)uVar41 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
          }
        }
      }
      LOCK();
      *(undefined4 *)(this_01 + 0x90) = 2;
      UNLOCK();
    }
    else {
      while (*(int *)(this_01 + 0x90) != 2) {
        sched_yield();
      }
    }
  }
  puVar13 = *(undefined8 **)(this_01 + 0x70);
  pvVar26 = (void *)*puVar13;
  iVar11 = *(int *)((long)puVar13 + 0xc);
  lVar14 = (long)iVar11;
  if (lVar14 != 0) {
    lVar29 = 0;
    do {
      if (*(LinuxComponentPeer **)((long)pvVar26 + lVar29) == this_00) goto LAB_001d729c;
      lVar29 = lVar29 + 8;
    } while (lVar14 * 8 != lVar29);
  }
  if ((int)*(uint *)(puVar13 + 1) <= iVar11) {
    uVar39 = iVar11 + ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
    if (*(uint *)(puVar13 + 1) != uVar39) {
      if ((int)uVar39 < 1) {
        free(pvVar26);
        *puVar13 = 0;
        pvVar26 = (void *)0x0;
      }
      else {
        pvVar26 = realloc(pvVar26,(ulong)uVar39 << 3);
        *puVar13 = pvVar26;
      }
    }
    *(uint *)(puVar13 + 1) = uVar39;
    iVar11 = *(int *)((long)puVar13 + 0xc);
    lVar14 = (long)iVar11;
  }
  *(int *)((long)puVar13 + 0xc) = iVar11 + 1;
  *(LinuxComponentPeer **)((long)pvVar26 + lVar14 * 8) = this_00;
LAB_001d729c:
  *(undefined ***)this_00 = &PTR__LinuxComponentPeer_0070dad8;
  *(undefined ***)(this_00 + 0xc0) = &PTR__LinuxComponentPeer_0070dc48;
  *(undefined2 *)(this_00 + 200) = 0;
  pLVar28 = this_00 + 0xd0;
  *(undefined8 *)(this_00 + 0xd0) = 0;
  pTStack_b8 = (Timer *)(this_00 + 0xd8);
  Timer::Timer(pTStack_b8);
  *(undefined ***)(this_00 + 0xd8) = &PTR__TimedCallback_00712f18;
  *(code **)(this_00 + 0x118) =
       std::_Function_handler<void(),juce::LinuxComponentPeer::vBlankManager::{lambda()#1}>::
       _M_invoke;
  *(LinuxComponentPeer **)(this_00 + 0x100) = this_00;
  *(undefined8 *)(this_00 + 0x108) = 0;
  *(code **)(this_00 + 0x110) =
       std::_Function_handler<void(),juce::LinuxComponentPeer::vBlankManager::{lambda()#1}>::
       _M_manager;
  *(undefined8 *)(this_00 + 0x120) = 0;
  *(undefined8 *)(this_00 + 0x128) = 0;
  *(undefined8 *)(this_00 + 0x130) = 0;
  *(undefined8 *)(this_00 + 0x138) = 0;
  this_00[0x140] = (LinuxComponentPeer)0x0;
  *(undefined8 *)(this_00 + 0x144) = 0;
  *(undefined8 *)(this_00 + 0x14c) = 0;
  this_00[0x154] = (LinuxComponentPeer)0x0;
  this_00[0x155] = (LinuxComponentPeer)((byte)((ushort)*(undefined2 *)(this + 0xe8) >> 0xb) & 1);
  *(undefined8 *)(this_00 + 0x158) = 0x3ff0000000000000;
  *(undefined8 *)(this_00 + 0x160) = 0;
  *(undefined8 *)(this_00 + 0x168) = 0;
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  pXVar15 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  if (pXVar15[8] == (XWindowSystem)0x0) {
    return this_00;
  }
  if (this_00[0x155] != (LinuxComponentPeer)0x0) {
    WindowUtilsInternal::numAlwaysOnTopPeers = WindowUtilsInternal::numAlwaysOnTopPeers + 1;
  }
  puVar13 = operator_new(0x38);
  *puVar13 = this_00;
  *(byte *)(puVar13 + 1) = (byte)((uint)*(undefined4 *)(this_00 + 0x10) >> 0x1e) & 1;
  puVar13[2] = 0;
  *(undefined4 *)(puVar13 + 3) = 0;
  puVar13[4] = 0;
  puVar13[5] = 0;
  pXVar16 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  uVar9 = XWindowSystem::canUseARGBImages(pXVar16);
  *(undefined1 *)(puVar13 + 6) = uVar9;
  pvVar26 = *(void **)pLVar28;
  *(undefined8 **)pLVar28 = puVar13;
  if (pvVar26 != (void *)0x0) {
    *(undefined4 *)((long)pvVar26 + 0x2c) = 0;
    free(*(void **)((long)pvVar26 + 0x20));
    plVar22 = *(long **)((long)pvVar26 + 0x10);
    if (plVar22 != (long *)0x0) {
      LOCK();
      plVar21 = plVar22 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)(*plVar22 + 8))();
      }
    }
    operator_delete(pvVar26);
  }
  if (pXVar15[8] == (XWindowSystem)0x0) {
    lStack_118 = 0;
    goto LAB_001d883a;
  }
  uVar39 = *(uint *)(this_00 + 0x10);
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
    lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar29 + 0x210))(lVar14);
  }
  pLStack_f0 = pLVar28;
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pcVar4 = *(code **)(lVar14 + 0x2a8);
  uVar18 = *(undefined8 *)(pXVar15 + 0x148);
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  pXVar16 = pXVar15 + 0x148;
  uVar10 = (**(code **)(lVar14 + 0xb0))(*(undefined8 *)pXVar16);
  lVar17 = (*pcVar4)(uVar18,uVar10);
  plVar22 = *(long **)(pXVar15 + 0x150);
  lVar14 = plVar22[2];
  lVar29 = lVar14;
  if (((uVar39 & 0x40000000) == 0) || (cVar40 = ' ', lVar14 == 0)) {
    lVar5 = plVar22[1];
    if (lVar5 != 0) {
      lVar29 = lVar5;
    }
    if (lVar5 == 0 && lVar14 == 0) {
      lVar29 = *plVar22;
      cVar40 = '\x10';
    }
    else {
      cVar40 = (lVar5 == 0) * '\b' + '\x18';
    }
  }
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  uVar18 = (**(code **)(lVar14 + 0x68))(*(undefined8 *)pXVar16,lVar17,lVar29,0);
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar14 + 0x1e8))(*(undefined8 *)pXVar16,uVar18);
  uStack_90 = 0;
  auStack_a8[0] = 0;
  uStack_50 = uVar39 >> 1 & 1;
  uStack_60 = 0x62c073;
  if ((uVar39 & 4) == 0) {
    uStack_60 = 0x62c07f;
  }
  uStack_48 = uVar18;
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  if (lStack_c0 != 0) {
    lVar17 = lStack_c0;
  }
  lStack_118 = (**(code **)(lVar14 + 0xa0))
                         (*(undefined8 *)pXVar16,lVar17,0,0,1,1,0,cVar40,1,lVar29,0x2a09,auStack_a8)
  ;
  uVar18 = *(undefined8 *)(this_00 + 0x178);
  lVar14 = *(long *)(this_00 + 0x170);
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  if (lVar14 != 0) {
    pXVar19 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
    uVar6 = *(undefined8 *)(pXVar19 + 0x148);
    puStack_e8 = (undefined8 *)0x0;
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar11 = (**(code **)(lVar14 + 0x118))(uVar6,uVar18,windowHandleXContext,&puStack_e8);
    if (iVar11 == 0) {
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar14 + 0xd0))(uVar6,uVar18,windowHandleXContext);
    }
  }
  pXVar19 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  uVar18 = *(undefined8 *)(pXVar19 + 0x148);
  lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  iVar11 = (**(code **)(lVar14 + 0x2b0))(uVar18,lStack_118,windowHandleXContext);
  pLVar28 = (LinuxComponentPeer *)0x0;
  if (iVar11 == 0) {
    pLVar28 = this_00;
  }
  lVar14 = *(long *)(this_00 + 0x170);
  *(LinuxComponentPeer **)(this_00 + 0x170) = pLVar28;
  uVar18 = *(undefined8 *)(this_00 + 0x178);
  *(long *)(this_00 + 0x178) = lStack_118;
  if (lVar14 != 0) {
    pXVar19 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
    uVar6 = *(undefined8 *)(pXVar19 + 0x148);
    puStack_e8 = (undefined8 *)0x0;
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar11 = (**(code **)(lVar14 + 0x118))(uVar6,uVar18,windowHandleXContext,&puStack_e8);
    if (iVar11 == 0) {
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar14 + 0xd0))(uVar6,uVar18,windowHandleXContext);
    }
    pLVar28 = *(LinuxComponentPeer **)(this_00 + 0x170);
  }
  if (pLVar28 == (LinuxComponentPeer *)0x0) {
    piVar20 = operator_new__(0x4b);
    LOCK();
    *piVar20 = 0;
    UNLOCK();
    piVar20[2] = 0x34;
    piVar20[3] = 0;
    bVar27 = 0x46;
    lVar14 = 2;
    pbVar30 = (byte *)(piVar20 + 4);
    while( true ) {
      if ((char)bVar27 < '\0') {
        *pbVar30 = bVar27 >> 6 | 0xc0;
        pbVar30[1] = bVar27 & 0x3f | 0x80;
        pbVar31 = pbVar30 + 2;
        pbVar30 = pbVar30 + 1;
      }
      else {
        *pbVar30 = bVar27;
        pbVar31 = pbVar30 + 1;
      }
      if (lVar14 == 0x32) break;
      bVar27 = "_XSETTINGS_S0"[lVar14 + 0xd];
      if ((char)bVar27 < '\0') {
        pbVar30[1] = bVar27 >> 6 | 0xc0;
        pbVar30[2] = bVar27 & 0x3f | 0x80;
      }
      else {
        *pbVar31 = bVar27;
        pbVar31 = pbVar30;
      }
      pbVar30 = pbVar31 + 2;
      bVar27 = "Failed to create context information for window.\n"[lVar14];
      lVar14 = lVar14 + 2;
    }
    *pbVar31 = 0;
    Logger::outputDebugString((char *)(piVar20 + 4));
    LOCK();
    iVar11 = *piVar20;
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar20);
    }
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0xe8))(*(undefined8 *)pXVar16,lStack_118);
    lStack_118 = 0;
  }
  else {
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    puVar13 = (undefined8 *)(**(code **)(lVar14 + 0x10))();
    puStack_e8 = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = 3;
      puVar13[1] = 0x100000001;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar14 + 0x300))(*(undefined8 *)pXVar16,lStack_118,puVar13);
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar14 + 0x128))(puVar13);
    }
    if (*(long *)(pXVar15 + 0x58) != 0) {
      if ((uVar39 & 2) == 0) {
        pcVar33 = "_NET_WM_WINDOW_TYPE_NORMAL";
        if ((uVar39 & 0x100) == 0) {
          SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                    ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                     XWindowSystem::singletonHolder);
        }
      }
      else {
        pcVar33 = "_NET_WM_WINDOW_TYPE_COMBO";
      }
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      puStack_e8 = (undefined8 *)(**(code **)(lVar14 + 0x1f0))(uVar18,pcVar33,1);
      if (puStack_e8 != (undefined8 *)0x0) {
        uVar18 = *(undefined8 *)(pXVar15 + 0x58);
        lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar14 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,uVar18,4,0x20,0,&puStack_e8,1);
      }
    }
    if (*(long *)(pXVar15 + 0x60) != 0) {
      if ((uVar39 & 1) == 0) {
        uVar18 = *(undefined8 *)pXVar16;
        lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        lVar14 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_NET_WM_STATE_SKIP_TASKBAR",1);
        if (lVar14 == 0) {
          plStack_130 = (long *)0x0;
          plVar22 = (long *)0x0;
        }
        else {
          plStack_130 = operator_new(8);
          *plStack_130 = lVar14;
          plVar22 = plStack_130 + 1;
        }
      }
      else {
        plStack_130 = (long *)0x0;
        plVar22 = (long *)0x0;
      }
      lVar14 = getPeerFor(lStack_118);
      if ((*(ushort *)(*(long *)(lVar14 + 8) + 0xe8) & 0x800) == 0) {
LAB_001d7a6f:
        plVar21 = plStack_130;
      }
      else {
        uVar18 = *(undefined8 *)pXVar16;
        lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        lVar14 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_NET_WM_STATE_ABOVE",1);
        if (lVar14 == 0) goto LAB_001d7a6f;
        uVar41 = (long)plVar22 - (long)plStack_130;
        if (uVar41 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
          std::__throw_length_error("vector::_M_realloc_insert");
        }
        uVar34 = (long)uVar41 >> 3;
        uVar35 = 1;
        if (uVar41 != 0) {
          uVar35 = uVar34;
        }
        uVar37 = uVar35 + uVar34;
        if (uVar37 >> 0x3c != 0) {
          uVar37 = 0xfffffffffffffff;
        }
        if (CARRY8(uVar35,uVar34)) {
          uVar37 = 0xfffffffffffffff;
        }
        if (uVar37 == 0) {
          plVar21 = (long *)0x0;
          *(long *)(uVar34 * 8) = lVar14;
          if (0 < (long)uVar41) goto LAB_001d7a3e;
LAB_001d7a82:
          plVar36 = plVar21 + uVar34;
        }
        else {
          plVar21 = operator_new(uVar37 << 3);
          plVar21[uVar34] = lVar14;
          if ((long)uVar41 < 1) goto LAB_001d7a82;
LAB_001d7a3e:
          plVar36 = plVar21;
          if (plStack_130 != plVar22) {
            memcpy(plVar21,plStack_130,uVar41 & 0xfffffffffffffff8);
            plVar36 = (long *)((long)plVar21 + (uVar41 - 8 & 0xfffffffffffffff8) + 8);
          }
        }
        plVar22 = plVar36 + 1;
        if (plStack_130 != (long *)0x0) {
          operator_delete(plStack_130);
        }
      }
      uVar41 = (ulong)((long)plVar22 - (long)plVar21) >> 3;
      if (0 < (int)uVar41) {
        uVar18 = *(undefined8 *)(pXVar15 + 0x60);
        lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar14 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,uVar18,4,0x20,0,plVar21,uVar41);
      }
      if (plVar21 != (long *)0x0) {
        operator_delete(plVar21);
      }
    }
    if ((uVar39 & 8) == 0) {
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lStack_100 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_MOTIF_WM_HINTS",1);
      if (lStack_100 != 0) {
        uStack_d0 = 0;
        uStack_c8 = 0;
        uStack_e0 = 0;
        uStack_d8 = 0;
        puStack_e8 = (undefined8 *)0x2;
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x210))(lVar14);
        }
        lVar14 = lStack_100;
        lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar29 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,lVar14,lVar14,0x20,0,&puStack_e8,4);
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x360))(lVar14);
        }
      }
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lStack_100 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_WIN_HINTS",1);
      if (lStack_100 != 0) {
        puStack_e8 = (undefined8 *)0x0;
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x210))(lVar14);
        }
        lVar14 = lStack_100;
        lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar29 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,lVar14,lVar14,0x20,0,&puStack_e8,1);
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x360))(lVar14);
        }
      }
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lStack_100 = (**(code **)(lVar14 + 0x1f0))(uVar18,"KWM_WIN_DECORATION",1);
      if (lStack_100 != 0) {
        puStack_e8 = (undefined8 *)0x2;
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x210))(lVar14);
        }
        lVar14 = lStack_100;
        lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar29 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,lVar14,lVar14,0x20,0,&puStack_e8,1);
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x360))(lVar14);
        }
      }
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lStack_100 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_KDE_NET_WM_WINDOW_TYPE_OVERRIDE",1);
      if (lStack_100 != 0) {
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x210))(lVar14);
        }
        uVar18 = *(undefined8 *)(pXVar15 + 0x58);
        lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar14 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,uVar18,4,0x20,0,&lStack_100,1);
        if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
           (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x360))(lVar14);
        }
      }
    }
    else {
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
        lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar29 + 0x210))(lVar14);
      }
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lVar14 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_MOTIF_WM_HINTS",1);
      if (lVar14 != 0) {
        uStack_d0 = 0;
        uStack_c8 = 0;
        puStack_e8 = (undefined8 *)0x3;
        uVar41 = (ulong)((uVar39 & 0xff) >> 7) << 5;
        uStack_e0 = uVar41 | 4;
        uStack_d8 = 0x1a;
        if ((uVar39 & 0x20) != 0) {
          uStack_e0 = uVar41 | 0xc;
          uStack_d8 = 0x3a;
        }
        if ((uVar39 & 0x40) != 0) {
          uStack_e0 = uStack_e0 | 0x10;
          uStack_d8 = uStack_d8 | 0x40;
        }
        if ((uVar39 & 0x10) != 0) {
          uStack_e0 = uStack_e0 | 2;
          uStack_d8 = uStack_d8 | 4;
        }
        lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar29 + 0x30))
                  (*(undefined8 *)pXVar16,lStack_118,lVar14,lVar14,0x20,0,&puStack_e8,5);
      }
      uVar18 = *(undefined8 *)pXVar16;
      lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      lVar14 = (**(code **)(lVar14 + 0x1f0))(uVar18,"_NET_WM_ALLOWED_ACTIONS",1);
      if (lVar14 != 0) {
        if ((uVar39 & 0x10) == 0) {
          plVar22 = (long *)0x0;
          plVar21 = (long *)0x0;
          if ((uVar39 & 0x40) != 0) goto LAB_001d7fef;
LAB_001d7f26:
          plStack_f8 = plVar21;
          if ((uVar39 & 0x20) != 0) goto LAB_001d8129;
LAB_001d7f35:
        }
        else {
          uVar18 = *(undefined8 *)pXVar16;
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          lVar29 = (**(code **)(lVar29 + 0x1f0))(uVar18,"_NET_WM_ACTION_RESIZE",1);
          if (lVar29 == 0) {
            plVar22 = (long *)0x0;
            plVar21 = (long *)0x0;
          }
          else {
            plVar22 = operator_new(8);
            *plVar22 = lVar29;
            plVar21 = plVar22 + 1;
          }
          if ((uVar39 & 0x40) == 0) goto LAB_001d7f26;
LAB_001d7fef:
          uVar18 = *(undefined8 *)pXVar16;
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          lVar29 = (**(code **)(lVar29 + 0x1f0))(uVar18,"_NET_WM_ACTION_FULLSCREEN",1);
          if (lVar29 == 0) {
            plStack_f8 = plVar21;
          }
          else {
            uVar41 = (long)plVar21 - (long)plVar22;
            if (uVar41 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
              std::__throw_length_error("vector::_M_realloc_insert");
            }
            uVar34 = (long)uVar41 >> 3;
            uVar35 = 1;
            if (uVar41 != 0) {
              uVar35 = uVar34;
            }
            uVar37 = uVar35 + uVar34;
            if (uVar37 >> 0x3c != 0) {
              uVar37 = 0xfffffffffffffff;
            }
            if (CARRY8(uVar35,uVar34)) {
              uVar37 = 0xfffffffffffffff;
            }
            if (uVar37 == 0) {
              plVar36 = (long *)0x0;
            }
            else {
              plVar36 = operator_new(uVar37 * 8);
            }
            plVar36[uVar34] = lVar29;
            if ((long)uVar41 < 1) {
              plVar23 = plVar36 + uVar34;
            }
            else {
              plVar23 = plVar36;
              if (plVar22 != plVar21) {
                memcpy(plVar36,plVar22,uVar41 & 0xfffffffffffffff8);
                plVar23 = (long *)((long)plVar36 + (uVar41 - 8 & 0xfffffffffffffff8) + 8);
              }
            }
            if (plVar22 != (long *)0x0) {
              operator_delete(plVar22);
            }
            plVar21 = plVar23 + 1;
            plVar22 = plVar36;
            plStack_f8 = plVar36 + uVar37;
          }
          if ((uVar39 & 0x20) == 0) goto LAB_001d7f35;
LAB_001d8129:
          uVar18 = *(undefined8 *)pXVar16;
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          lVar29 = (**(code **)(lVar29 + 0x1f0))(uVar18,"_NET_WM_ACTION_MINIMIZE",1);
          if (lVar29 != 0) {
            if (plVar21 == plStack_f8) {
              plVar36 = (long *)((long)plVar21 - (long)plVar22);
              if (plVar36 == (long *)0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar35 = (long)plVar36 >> 3;
              uVar41 = 1;
              if (plVar36 != (long *)0x0) {
                uVar41 = uVar35;
              }
              uVar34 = uVar41 + uVar35;
              if (uVar34 >> 0x3c != 0) {
                uVar34 = 0xfffffffffffffff;
              }
              if (CARRY8(uVar41,uVar35)) {
                uVar34 = 0xfffffffffffffff;
              }
              if (uVar34 == 0) {
                plVar23 = (long *)0x0;
              }
              else {
                plStack_f8 = plVar36;
                plVar23 = operator_new(uVar34 * 8);
                plVar36 = plStack_f8;
              }
              plVar23[uVar35] = lVar29;
              if ((long)plVar36 < 1) {
                plVar25 = plVar23 + uVar35;
              }
              else {
                plVar25 = plVar23;
                if (plVar22 != plVar21) {
                  plVar24 = plVar22;
                  if (&DAT_00000017 < plVar36 + -1) {
                    uVar38 = ((ulong)(plVar36 + -1) >> 3) + 1;
                    uVar41 = uVar38 & 0xfffffffffffffffc;
                    uVar37 = (uVar41 - 4 >> 2) + 1;
                    uVar35 = (ulong)((uint)uVar37 & 3);
                    if (uVar41 - 4 < 0xc) {
                      lVar29 = 0;
                    }
                    else {
                      uVar37 = uVar37 & 0x7ffffffffffffffc;
                      lVar29 = 0;
                      do {
                        lVar17 = (plVar22 + lVar29)[1];
                        lVar5 = plVar22[lVar29 + 2];
                        lVar7 = (plVar22 + lVar29 + 2)[1];
                        plVar23[lVar29] = plVar22[lVar29];
                        (plVar23 + lVar29)[1] = lVar17;
                        plVar23[lVar29 + 2] = lVar5;
                        (plVar23 + lVar29 + 2)[1] = lVar7;
                        lVar17 = (plVar22 + lVar29 + 4)[1];
                        lVar5 = plVar22[lVar29 + 6];
                        lVar7 = (plVar22 + lVar29 + 6)[1];
                        plVar23[lVar29 + 4] = plVar22[lVar29 + 4];
                        (plVar23 + lVar29 + 4)[1] = lVar17;
                        plVar23[lVar29 + 6] = lVar5;
                        (plVar23 + lVar29 + 6)[1] = lVar7;
                        lVar17 = (plVar22 + lVar29 + 8)[1];
                        lVar5 = plVar22[lVar29 + 10];
                        lVar7 = (plVar22 + lVar29 + 10)[1];
                        plVar23[lVar29 + 8] = plVar22[lVar29 + 8];
                        (plVar23 + lVar29 + 8)[1] = lVar17;
                        plVar23[lVar29 + 10] = lVar5;
                        (plVar23 + lVar29 + 10)[1] = lVar7;
                        lVar17 = (plVar22 + lVar29 + 0xc)[1];
                        lVar5 = plVar22[lVar29 + 0xe];
                        lVar7 = (plVar22 + lVar29 + 0xe)[1];
                        plVar23[lVar29 + 0xc] = plVar22[lVar29 + 0xc];
                        (plVar23 + lVar29 + 0xc)[1] = lVar17;
                        plVar23[lVar29 + 0xe] = lVar5;
                        (plVar23 + lVar29 + 0xe)[1] = lVar7;
                        lVar29 = lVar29 + 0x10;
                        uVar37 = uVar37 - 4;
                      } while (uVar37 != 0);
                    }
                    if (uVar35 != 0) {
                      lVar17 = 0;
                      do {
                        puVar2 = (undefined8 *)((long)plVar22 + lVar17 + lVar29 * 8);
                        uVar18 = puVar2[1];
                        puVar13 = (undefined8 *)((long)plVar22 + lVar17 + lVar29 * 8 + 0x10);
                        uVar6 = *puVar13;
                        uVar8 = puVar13[1];
                        puVar13 = (undefined8 *)((long)plVar23 + lVar17 + lVar29 * 8);
                        *puVar13 = *puVar2;
                        puVar13[1] = uVar18;
                        puVar13 = (undefined8 *)((long)plVar23 + lVar17 + lVar29 * 8 + 0x10);
                        *puVar13 = uVar6;
                        puVar13[1] = uVar8;
                        lVar17 = lVar17 + 0x20;
                      } while (uVar35 * 0x20 != lVar17);
                    }
                    plVar25 = plVar23 + uVar41;
                    if (uVar38 == uVar41) goto LAB_001d8352;
                    plVar24 = plVar22 + uVar41;
                  }
                  do {
                    *plVar25 = *plVar24;
                    plVar24 = plVar24 + 1;
                    plVar25 = plVar25 + 1;
                  } while (plVar24 != plVar21);
                }
              }
LAB_001d8352:
              if (plVar22 != (long *)0x0) {
                operator_delete(plVar22);
              }
              plVar21 = plVar25 + 1;
              plStack_f8 = plVar23 + uVar34;
              plVar22 = plVar23;
            }
            else {
              *plVar21 = lVar29;
              plVar21 = plVar21 + 1;
            }
          }
        }
        if ((uVar39 & 0x80) == 0) {
        }
        else {
          uVar18 = *(undefined8 *)pXVar16;
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          lVar29 = (**(code **)(lVar29 + 0x1f0))(uVar18,"_NET_WM_ACTION_CLOSE",1);
          if (lVar29 != 0) {
            if (plVar21 == plStack_f8) {
              lVar17 = (long)plVar21 - (long)plVar22;
              if (lVar17 == 0x7ffffffffffffff8) {
                    /* WARNING: Subroutine does not return */
                std::__throw_length_error("vector::_M_realloc_insert");
              }
              uVar35 = lVar17 >> 3;
              uVar41 = 1;
              if (lVar17 != 0) {
                uVar41 = uVar35;
              }
              uVar34 = uVar41 + uVar35;
              if (uVar34 >> 0x3c != 0) {
                uVar34 = 0xfffffffffffffff;
              }
              if (CARRY8(uVar41,uVar35)) {
                uVar34 = 0xfffffffffffffff;
              }
              if (uVar34 == 0) {
                plVar36 = (long *)0x0;
              }
              else {
                plVar36 = operator_new(uVar34 << 3);
              }
              plVar36[uVar35] = lVar29;
              if (lVar17 < 1) {
                plVar23 = plVar36 + uVar35;
              }
              else {
                plVar23 = plVar36;
                if (plVar22 != plVar21) {
                  plVar25 = plVar22;
                  if (0x17 < lVar17 - 8U) {
                    uVar37 = (lVar17 - 8U >> 3) + 1;
                    uVar41 = uVar37 & 0xfffffffffffffffc;
                    uVar34 = (uVar41 - 4 >> 2) + 1;
                    uVar35 = (ulong)((uint)uVar34 & 3);
                    if (uVar41 - 4 < 0xc) {
                      lVar29 = 0;
                    }
                    else {
                      uVar34 = uVar34 & 0x7ffffffffffffffc;
                      lVar29 = 0;
                      do {
                        lVar17 = (plVar22 + lVar29)[1];
                        lVar5 = plVar22[lVar29 + 2];
                        lVar7 = (plVar22 + lVar29 + 2)[1];
                        plVar36[lVar29] = plVar22[lVar29];
                        (plVar36 + lVar29)[1] = lVar17;
                        plVar36[lVar29 + 2] = lVar5;
                        (plVar36 + lVar29 + 2)[1] = lVar7;
                        lVar17 = (plVar22 + lVar29 + 4)[1];
                        lVar5 = plVar22[lVar29 + 6];
                        lVar7 = (plVar22 + lVar29 + 6)[1];
                        plVar36[lVar29 + 4] = plVar22[lVar29 + 4];
                        (plVar36 + lVar29 + 4)[1] = lVar17;
                        plVar36[lVar29 + 6] = lVar5;
                        (plVar36 + lVar29 + 6)[1] = lVar7;
                        lVar17 = (plVar22 + lVar29 + 8)[1];
                        lVar5 = plVar22[lVar29 + 10];
                        lVar7 = (plVar22 + lVar29 + 10)[1];
                        plVar36[lVar29 + 8] = plVar22[lVar29 + 8];
                        (plVar36 + lVar29 + 8)[1] = lVar17;
                        plVar36[lVar29 + 10] = lVar5;
                        (plVar36 + lVar29 + 10)[1] = lVar7;
                        lVar17 = (plVar22 + lVar29 + 0xc)[1];
                        lVar5 = plVar22[lVar29 + 0xe];
                        lVar7 = (plVar22 + lVar29 + 0xe)[1];
                        plVar36[lVar29 + 0xc] = plVar22[lVar29 + 0xc];
                        (plVar36 + lVar29 + 0xc)[1] = lVar17;
                        plVar36[lVar29 + 0xe] = lVar5;
                        (plVar36 + lVar29 + 0xe)[1] = lVar7;
                        lVar29 = lVar29 + 0x10;
                        uVar34 = uVar34 - 4;
                      } while (uVar34 != 0);
                    }
                    if (uVar35 != 0) {
                      lVar17 = 0;
                      do {
                        puVar2 = (undefined8 *)((long)plVar22 + lVar17 + lVar29 * 8);
                        uVar18 = puVar2[1];
                        puVar13 = (undefined8 *)((long)plVar22 + lVar17 + lVar29 * 8 + 0x10);
                        uVar6 = *puVar13;
                        uVar8 = puVar13[1];
                        puVar13 = (undefined8 *)((long)plVar36 + lVar17 + lVar29 * 8);
                        *puVar13 = *puVar2;
                        puVar13[1] = uVar18;
                        puVar13 = (undefined8 *)((long)plVar36 + lVar17 + lVar29 * 8 + 0x10);
                        *puVar13 = uVar6;
                        puVar13[1] = uVar8;
                        lVar17 = lVar17 + 0x20;
                      } while (uVar35 * 0x20 != lVar17);
                    }
                    plVar23 = plVar36 + uVar41;
                    if (uVar37 == uVar41) goto LAB_001d85ca;
                    plVar25 = plVar22 + uVar41;
                  }
                  do {
                    *plVar23 = *plVar25;
                    plVar25 = plVar25 + 1;
                    plVar23 = plVar23 + 1;
                  } while (plVar25 != plVar21);
                }
              }
LAB_001d85ca:
              plVar21 = plVar23 + 1;
              if (plVar22 != (long *)0x0) {
                operator_delete(plVar22);
              }
              plVar22 = plVar36;
            }
            else {
              *plVar21 = lVar29;
              plVar21 = plVar21 + 1;
            }
          }
        }
        uVar41 = (ulong)((long)plVar21 - (long)plVar22) >> 3;
        if (0 < (int)uVar41) {
          lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
          (**(code **)(lVar29 + 0x30))
                    (*(undefined8 *)pXVar16,lStack_118,lVar14,4,0x20,0,plVar22,uVar41);
        }
        if (plVar22 != (long *)0x0) {
          operator_delete(plVar22);
        }
      }
      if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
         (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
        lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
        (**(code **)(lVar29 + 0x360))(lVar14);
      }
    }
    _Var12 = getpid();
    lStack_100 = (long)_Var12;
    uVar18 = *(undefined8 *)(pXVar15 + 0x50);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))(*(undefined8 *)pXVar16,lStack_118,uVar18,6,0x20,0,&lStack_100,1);
    uVar18 = *(undefined8 *)(pXVar15 + 0x10);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))
              (*(undefined8 *)(pXVar15 + 0x148),lStack_118,uVar18,4,0x20,0,pXVar15 + 0x18,2);
    uVar18 = *(undefined8 *)(pXVar15 + 0xb0);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))
              (*(undefined8 *)(pXVar15 + 0x148),lStack_118,uVar18,4,0x20,0,pXVar15 + 0x110,4);
    uVar18 = *(undefined8 *)(pXVar15 + 0xb8);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))
              (*(undefined8 *)(pXVar15 + 0x148),lStack_118,uVar18,4,0x20,0,pXVar15 + 0xe8,5);
    uVar18 = *(undefined8 *)(pXVar15 + 0xc0);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))(*(undefined8 *)pXVar16,lStack_118,uVar18,0x1f,8,0,&DAT_005e2ee7,0);
    uStack_b0 = 3;
    uVar18 = *(undefined8 *)(pXVar15 + 0x70);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))(*(undefined8 *)pXVar16,lStack_118,uVar18,4,0x20,0,&uStack_b0,1);
    puStack_e8 = _DAT_005d99f0;
    uStack_e0 = _UNK_005d99f8;
    uVar18 = *(undefined8 *)(pXVar15 + 0xe0);
    lVar14 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar14 + 0x30))
              (*(undefined8 *)pXVar16,lStack_118,uVar18,uVar18,0x20,0,&puStack_e8,2);
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar14 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar14 != 0)) {
    lVar29 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar29 + 0x360))(lVar14);
  }
LAB_001d883a:
  *(long *)(this_00 + 0x120) = lStack_118;
  *(long *)(this_00 + 0x128) = lStack_c0;
  lVar14 = *(long *)(*(long *)(this_00 + 8) + 8);
  piVar20 = (int *)(lVar14 + -0x10);
  if (piVar20 != &emptyString) {
    LOCK();
    *piVar20 = *piVar20 + 1;
    UNLOCK();
  }
  pXVar16 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                      ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                       XWindowSystem::singletonHolder);
  XWindowSystem::setTitle(pXVar16,*(undefined8 *)(this_00 + 0x120),lVar14);
  if (piVar20 != &emptyString) {
    LOCK();
    iVar11 = *piVar20;
    *piVar20 = *piVar20 + -1;
    UNLOCK();
    if (iVar11 == 0) {
      operator_delete__(piVar20);
    }
  }
  lVar14 = *(long *)(pXVar15 + 0x158);
  if (lVar14 != 0) {
    ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
    ::initialiseIfNeeded
              ((ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
                *)(lVar14 + 0x58));
    puVar13 = *(undefined8 **)(lVar14 + 0x58);
    pvVar26 = (void *)*puVar13;
    iVar11 = *(int *)((long)puVar13 + 0xc);
    lVar14 = (long)iVar11;
    if (lVar14 != 0) {
      lVar29 = 0;
      do {
        if (*(LinuxComponentPeer **)((long)pvVar26 + lVar29) == this_00 + 0xc0) goto LAB_001d8965;
        lVar29 = lVar29 + 8;
      } while (lVar14 * 8 != lVar29);
    }
    if ((int)*(uint *)(puVar13 + 1) <= iVar11) {
      uVar39 = iVar11 + ((iVar11 - (iVar11 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar13 + 1) != uVar39) {
        if ((int)uVar39 < 1) {
          free(pvVar26);
          *puVar13 = 0;
          pvVar26 = (void *)0x0;
        }
        else {
          pvVar26 = realloc(pvVar26,(ulong)uVar39 << 3);
          *puVar13 = pvVar26;
        }
      }
      *(uint *)(puVar13 + 1) = uVar39;
      iVar11 = *(int *)((long)puVar13 + 0xc);
      lVar14 = (long)iVar11;
    }
    *(int *)((long)puVar13 + 0xc) = iVar11 + 1;
    *(LinuxComponentPeer **)((long)pvVar26 + lVar14 * 8) = this_00 + 0xc0;
  }
LAB_001d8965:
  uVar18 = ComponentPeer::getNativeRealtimeModifiers._16_8_;
  auStack_a8[0] = ComponentPeer::getNativeRealtimeModifiers._0_8_;
  auStack_a8[1] = ComponentPeer::getNativeRealtimeModifiers._8_8_;
  ComponentPeer::getNativeRealtimeModifiers._0_8_ = 0;
  ComponentPeer::getNativeRealtimeModifiers._8_8_ = 0;
  auStack_a8[2] = ComponentPeer::getNativeRealtimeModifiers._16_8_;
  ComponentPeer::getNativeRealtimeModifiers._16_8_ =
       std::
       _Function_handler<juce::ModifierKeys(),juce::LinuxComponentPeer::LinuxComponentPeer(juce::Component&,int,unsigned_long)::{lambda()#1}>
       ::_M_manager;
  uStack_90 = ComponentPeer::getNativeRealtimeModifiers._24_8_;
  ComponentPeer::getNativeRealtimeModifiers._24_8_ =
       std::
       _Function_handler<juce::ModifierKeys(),juce::LinuxComponentPeer::LinuxComponentPeer(juce::Component&,int,unsigned_long)::{lambda()#1}>
       ::_M_invoke;
  if (uVar18 != 0) {
    (*(code *)uVar18)(auStack_a8,auStack_a8,3);
  }
  LinuxComponentPeer::updateVBlankTimer(this_00);
  return this_00;
}


