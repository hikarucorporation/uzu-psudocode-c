// Function : ~LinuxComponentPeer
// Namespace: juce:LinuxComponentPeer
// Entry    : 002d29c0
// Prototype: undefined ~LinuxComponentPeer(LinuxComponentPeer * this)
// Body     : 002d29c0 - 002d3014


/* juce::LinuxComponentPeer::~LinuxComponentPeer() */

void __thiscall juce::LinuxComponentPeer::~LinuxComponentPeer(LinuxComponentPeer *this)

{
  ulong uVar1;
  juce *pjVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  XWindowSystem *pXVar6;
  long lVar7;
  juce *this_00;
  long lVar8;
  XWindowSystem *pXVar9;
  _Rb_tree_node_base *p_Var10;
  _Rb_tree_node_base *p_Var11;
  void *pvVar12;
  long *plVar13;
  _Rb_tree_node_base *p_Var14;
  _Rb_tree_node_base *p_Var15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  _Rb_tree_node_base *p_Var20;
  long *plVar21;
  _Rb_tree_node_base *p_Var22;
  _Rb_tree_node_base *p_Var23;
  undefined8 local_f0 [24];
  
                    /* try { // try from 002d29d4 to 002d29df has its CatchHandler @ 002d3049 */
  pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                     ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                      XWindowSystem::singletonHolder);
  pvVar12 = *(void **)(this + 0xd0);
  *(undefined8 *)(this + 0xd0) = 0;
  if (pvVar12 != (void *)0x0) {
    *(undefined4 *)((long)pvVar12 + 0x2c) = 0;
    free(*(void **)((long)pvVar12 + 0x20));
    plVar19 = *(long **)((long)pvVar12 + 0x10);
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar21 = plVar19 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)(*plVar19 + 8))();
      }
    }
    operator_delete(pvVar12);
  }
  uVar1 = *(ulong *)(this + 0x120);
                    /* try { // try from 002d2a2f to 002d2ca2 has its CatchHandler @ 002d3049 */
  lVar7 = getPeerFor(uVar1);
  if ((lVar7 == 0) ||
     (this_00 = (juce *)__dynamic_cast(lVar7,&ComponentPeer::typeinfo,&typeinfo,0),
     this_00 == (juce *)0x0)) goto LAB_002d2ed6;
  juce_handleXEmbedEvent(this_00,(int *)0x0);
  XWindowSystem::deleteIconPixmaps(pXVar6,uVar1);
  if (DAT_0071c600 == 0) {
    if (DAT_0071c5f8 != (long *)0x0) {
      plVar19 = DAT_0071c5f8;
      if ((juce *)DAT_0071c5f8[1] == this_00) {
        plVar21 = (long *)&DAT_0071c5f8;
      }
      else {
        do {
          plVar21 = plVar19;
          plVar19 = (long *)*plVar21;
          if (plVar19 == (long *)0x0) goto LAB_002d2c7d;
        } while ((juce *)plVar19[1] != this_00);
      }
      if (((ulong)this_00 | DAT_0071c5f0) >> 0x20 == 0) {
        uVar16 = ((ulong)this_00 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
      }
      else {
        uVar16 = (ulong)this_00 % DAT_0071c5f0;
      }
      plVar13 = *(long **)(dragAndDropStateMap + uVar16 * 8);
      if (plVar13 == plVar21) goto LAB_002d2be4;
LAB_002d2b79:
      plVar13 = plVar21;
      if (*plVar19 != 0) {
        uVar17 = *(ulong *)(*plVar19 + 8);
        if ((uVar17 | DAT_0071c5f0) >> 0x20 == 0) {
          uVar17 = (uVar17 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
        }
        else {
          uVar17 = uVar17 % DAT_0071c5f0;
        }
        if (uVar17 != uVar16) {
          *(long **)(dragAndDropStateMap + uVar17 * 8) = plVar21;
        }
      }
      goto LAB_002d2c5e;
    }
  }
  else {
    if (((ulong)this_00 | DAT_0071c5f0) >> 0x20 == 0) {
      uVar16 = ((ulong)this_00 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
      plVar13 = *(long **)(dragAndDropStateMap + uVar16 * 8);
    }
    else {
      uVar16 = (ulong)this_00 % DAT_0071c5f0;
      plVar13 = *(long **)(dragAndDropStateMap + uVar16 * 8);
    }
    if (plVar13 != (long *)0x0) {
      plVar19 = (long *)*plVar13;
      if ((juce *)plVar19[1] != this_00) {
        do {
          plVar21 = plVar19;
          plVar19 = (long *)*plVar21;
          if (plVar19 == (long *)0x0) goto LAB_002d2c7d;
          pjVar2 = (juce *)plVar19[1];
          if (((ulong)pjVar2 | DAT_0071c5f0) >> 0x20 == 0) {
            uVar17 = ((ulong)pjVar2 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
          }
          else {
            uVar17 = (ulong)pjVar2 % DAT_0071c5f0;
          }
          if (uVar17 != uVar16) goto LAB_002d2c7d;
        } while (pjVar2 != this_00);
        if (plVar13 != plVar21) goto LAB_002d2b79;
      }
LAB_002d2be4:
      plVar21 = (long *)*plVar19;
      if (plVar21 == (long *)0x0) {
        if ((long **)plVar13 == &DAT_0071c5f8) {
LAB_002d2c1a:
          DAT_0071c5f8 = plVar21;
        }
      }
      else {
        uVar17 = plVar21[1];
        if ((uVar17 | DAT_0071c5f0) >> 0x20 == 0) {
          uVar17 = (uVar17 & 0xffffffff) % (DAT_0071c5f0 & 0xffffffff);
        }
        else {
          uVar17 = uVar17 % DAT_0071c5f0;
        }
        if (uVar17 == uVar16) goto LAB_002d2c5e;
        *(long **)(dragAndDropStateMap + uVar17 * 8) = plVar13;
        if ((long **)*(undefined8 **)(dragAndDropStateMap + uVar16 * 8) == &DAT_0071c5f8)
        goto LAB_002d2c1a;
      }
      *(undefined8 *)(dragAndDropStateMap + uVar16 * 8) = 0;
LAB_002d2c5e:
      *plVar13 = *plVar19;
      std::
      allocator_traits<std::allocator<std::__detail::_Hash_node<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>,false>>>
      ::destroy<std::pair<juce::LinuxComponentPeer*const,juce::X11DragState>>((long)(plVar19 + 1));
      operator_delete(plVar19);
      DAT_0071c600 = DAT_0071c600 + -1;
    }
  }
LAB_002d2c7d:
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar7 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x210))(lVar7);
  }
  uVar18 = *(undefined8 *)(this_00 + 0x178);
  lVar7 = *(long *)(this_00 + 0x170);
  *(undefined8 *)(this_00 + 0x170) = 0;
  *(undefined8 *)(this_00 + 0x178) = 0;
  if (lVar7 != 0) {
                    /* try { // try from 002d2cbf to 002d2cca has its CatchHandler @ 002d3015 */
    pXVar9 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar3 = *(undefined8 *)(pXVar9 + 0x148);
    local_f0[0] = 0;
                    /* try { // try from 002d2cdb to 002d2d11 has its CatchHandler @ 002d3037 */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar5 = (**(code **)(lVar7 + 0x118))(uVar3,uVar18,windowHandleXContext,local_f0);
    if (iVar5 == 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0xd0))(uVar3,uVar18,windowHandleXContext);
    }
  }
                    /* try { // try from 002d2d12 to 002d2d3e has its CatchHandler @ 002d303f */
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar7 + 0xe8))(*(undefined8 *)(pXVar6 + 0x148),uVar1);
  lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
  (**(code **)(lVar7 + 0x330))(*(undefined8 *)(pXVar6 + 0x148),0);
  do {
                    /* try { // try from 002d2d50 to 002d2d72 has its CatchHandler @ 002d3052 */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    uVar18 = 0x62c073;
    if (((byte)this_00[0x10] & 4) == 0) {
      uVar18 = 0x62c07f;
    }
    iVar5 = (**(code **)(lVar7 + 0x40))(*(undefined8 *)(pXVar6 + 0x148),uVar1,uVar18,local_f0);
  } while (iVar5 == 1);
                    /* try { // try from 002d2d7f to 002d2d83 has its CatchHandler @ 002d3025 */
  cVar4 = XSHMHelpers::isShmAvailable(*(long *)(pXVar6 + 0x148));
  if (cVar4 != '\0') {
    p_Var23 = (_Rb_tree_node_base *)(pXVar6 + 0x168);
    p_Var11 = *(_Rb_tree_node_base **)(pXVar6 + 0x170);
    p_Var22 = p_Var23;
    if (p_Var11 == (_Rb_tree_node_base *)0x0) {
      p_Var15 = p_Var23;
    }
    else {
      p_Var14 = p_Var11;
      do {
        if (uVar1 <= *(ulong *)(p_Var14 + 0x20)) {
          if (uVar1 < *(ulong *)(p_Var14 + 0x20)) {
            p_Var15 = p_Var14 + 0x10;
            p_Var22 = p_Var14;
            goto LAB_002d2dc4;
          }
          p_Var10 = *(_Rb_tree_node_base **)(p_Var14 + 0x18);
          p_Var15 = *(_Rb_tree_node_base **)(p_Var14 + 0x10);
          while (p_Var15 != (_Rb_tree_node_base *)0x0) {
            p_Var20 = p_Var15 + 0x18;
            if (uVar1 <= *(ulong *)(p_Var15 + 0x20)) {
              p_Var20 = p_Var15 + 0x10;
              p_Var14 = p_Var15;
            }
            p_Var15 = *(_Rb_tree_node_base **)p_Var20;
          }
          while( true ) {
            p_Var15 = p_Var14;
            if (p_Var10 == (_Rb_tree_node_base *)0x0) break;
            p_Var15 = p_Var10 + 0x18;
            if (uVar1 < *(ulong *)(p_Var10 + 0x20)) {
              p_Var15 = p_Var10 + 0x10;
              p_Var22 = p_Var10;
            }
            p_Var10 = *(_Rb_tree_node_base **)p_Var15;
          }
          break;
        }
        p_Var15 = p_Var14 + 0x18;
LAB_002d2dc4:
        p_Var14 = *(_Rb_tree_node_base **)p_Var15;
        p_Var15 = p_Var22;
      } while (p_Var14 != (_Rb_tree_node_base *)0x0);
    }
    if ((*(_Rb_tree_node_base **)(pXVar6 + 0x178) == p_Var15) && (p_Var22 == p_Var23)) {
      std::
      _Rb_tree<unsigned_long,std::pair<unsigned_long_const,int>,std::_Select1st<std::pair<unsigned_long_const,int>>,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,int>>>
      ::_M_erase(p_Var11);
      *(undefined8 *)(pXVar6 + 0x170) = 0;
      *(_Rb_tree_node_base **)(pXVar6 + 0x178) = p_Var23;
      *(_Rb_tree_node_base **)(pXVar6 + 0x180) = p_Var23;
      *(undefined8 *)(pXVar6 + 0x188) = 0;
    }
    else {
      while (p_Var15 != p_Var22) {
        p_Var11 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var15);
        pvVar12 = (void *)std::_Rb_tree_rebalance_for_erase(p_Var15,p_Var23);
        operator_delete(pvVar12);
        *(long *)(pXVar6 + 0x188) = *(long *)(pXVar6 + 0x188) + -1;
        p_Var15 = p_Var11;
      }
    }
  }
  if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
     (lVar7 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar7 != 0)) {
                    /* try { // try from 002d2ec8 to 002d2ed5 has its CatchHandler @ 002d301d */
    lVar8 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar8 + 0x360))(lVar7);
  }
LAB_002d2ed6:
  if (*(long *)(pXVar6 + 0x158) != 0) {
    ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
    ::remove((ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
              *)(*(long *)(pXVar6 + 0x158) + 0x58),(long)(this + 0xc0));
  }
  if (this[0x155] != (LinuxComponentPeer)0x0) {
    WindowUtilsInternal::numAlwaysOnTopPeers = WindowUtilsInternal::numAlwaysOnTopPeers + -1;
  }
  if (*(long *)(this + 0x170) != 0) {
                    /* try { // try from 002d2f0d to 002d2f18 has its CatchHandler @ 002d302f */
    pXVar6 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar18 = *(undefined8 *)(pXVar6 + 0x148);
    uVar3 = *(undefined8 *)(this + 0x178);
    local_f0[0] = 0;
                    /* try { // try from 002d2f30 to 002d2f6a has its CatchHandler @ 002d3041 */
    lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    iVar5 = (**(code **)(lVar7 + 0x118))(uVar18,uVar3,windowHandleXContext,local_f0);
    if (iVar5 == 0) {
      lVar7 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar7 + 0xd0))(uVar18,*(undefined8 *)(this + 0x178),windowHandleXContext);
    }
  }
  *(undefined4 *)(this + 0x16c) = 0;
  free(*(void **)(this + 0x160));
  Timer::stopTimer((Timer *)(this + 0xd8));
  if (*(code **)(this + 0x110) != (code *)0x0) {
                    /* try { // try from 002d2fa4 to 002d2fad has its CatchHandler @ 002d3027 */
    (**(code **)(this + 0x110))(this + 0x100,this + 0x100,3);
  }
  Timer::~Timer((Timer *)(this + 0xd8));
  pvVar12 = *(void **)(this + 0xd0);
  if (pvVar12 != (void *)0x0) {
    *(undefined4 *)((long)pvVar12 + 0x2c) = 0;
    free(*(void **)((long)pvVar12 + 0x20));
    plVar19 = *(long **)((long)pvVar12 + 0x10);
    if (plVar19 != (long *)0x0) {
      LOCK();
      plVar21 = plVar19 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)(*plVar19 + 8))();
      }
    }
    operator_delete(pvVar12);
  }
  *(undefined8 *)(this + 0xd0) = 0;
  ComponentPeer::~ComponentPeer((ComponentPeer *)this);
  return;
}


