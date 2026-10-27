// Function : showMouseCursor
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e5e20
// Prototype: undefined showMouseCursor(undefined8 param_1, undefined8 param_2, undefined8 param_3, MouseInputSourceImpl * this, long * param_5, char param_6)
// Body     : 001e5e20 - 001e60cc


/* juce::detail::MouseInputSourceImpl::showMouseCursor(juce::MouseCursor, bool) */

void __thiscall
juce::detail::MouseInputSourceImpl::showMouseCursor
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,MouseInputSourceImpl *this,
          long *param_5,char param_6)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  Desktop *this_00;
  XWindowSystem *pXVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  float fVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (this[0x40] == (MouseInputSourceImpl)0x0) {
LAB_001e5e5e:
    if (param_6 == '\0') {
      lVar11 = *param_5 + 0x18;
      if (*param_5 == 0) {
        lVar11 = 0;
      }
      if (*(long *)(this + 0x60) == lVar11) {
        return;
      }
    }
  }
  else {
    fVar14 = *(float *)(this + 0x18);
    if ((fVar14 == 0.0) && (!NAN(fVar14))) {
      fVar14 = *(float *)(this + 0x1c);
      if ((fVar14 == 0.0) && ((!NAN(fVar14) && (this[0x41] != (MouseInputSourceImpl)0x0))))
      goto LAB_001e5e5e;
    }
    MouseCursor::SharedCursorHandle::createStandard
              (0,(ulong)(uint)fVar14,param_3,(SharedCursorHandle *)&local_38,1);
    uVar4 = (undefined4)local_38;
    uVar5 = local_38._4_4_;
    uVar6 = (undefined4)uStack_30;
    uVar7 = uStack_30._4_4_;
    local_38 = 0;
    uStack_30 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    p_Var3 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)param_5[1];
    *(undefined4 *)param_5 = uVar4;
    *(undefined4 *)((long)param_5 + 4) = uVar5;
    *(undefined4 *)(param_5 + 1) = uVar6;
    *(undefined4 *)((long)param_5 + 0xc) = uVar7;
    if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var3 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var3 + 8) = 0;
        (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
        (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        p_Var3 = uStack_30;
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var1 = p_Var3 + 8;
          iVar2 = *(int *)p_Var1;
          *(int *)p_Var1 = *(int *)p_Var1 + -1;
          UNLOCK();
        }
        else {
          iVar2 = (int)*(long *)(p_Var3 + 8);
          *(int *)(p_Var3 + 8) = iVar2 + -1;
        }
        if (iVar2 != 1) goto LAB_001e5f81;
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
        p_Var3 = uStack_30;
      }
      uStack_30 = p_Var3;
      if (p_Var3 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(p_Var3 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var3 + 8) = 0;
          (**(code **)(*(long *)p_Var3 + 0x10))(p_Var3);
          (**(code **)(*(long *)p_Var3 + 0x18))(p_Var3);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = p_Var3 + 8;
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = (int)*(long *)(p_Var3 + 8);
            *(int *)(p_Var3 + 8) = iVar2 + -1;
          }
          if (iVar2 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var3);
          }
        }
      }
    }
  }
LAB_001e5f81:
  lVar11 = *param_5 + 0x18;
  if (*param_5 == 0) {
    lVar11 = 0;
  }
  *(long *)(this + 0x60) = lVar11;
  lVar11 = *(long *)(this + 0x58);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e5fb3 to 001e5fbc has its CatchHandler @ 001e60e0 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 001e5fc0 to 001e5fc7 has its CatchHandler @ 001e60cd */
    Desktop::Desktop(this_00);
    iVar2 = *(int *)(this_00 + 0xdc);
    Desktop::instance = this_00;
  }
  else {
    iVar2 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar2 != 0) {
    lVar10 = 0;
    do {
      if (*(long *)(*(long *)(Desktop::instance + 0xd0) + lVar10) == lVar11) {
        plVar12 = *(long **)(this + 0x58);
        lVar11 = *param_5;
        goto joined_r0x001e602b;
      }
      lVar10 = lVar10 + 8;
    } while ((long)iVar2 * 8 != lVar10);
  }
  *(undefined8 *)(this + 0x58) = 0;
  plVar12 = (long *)0x0;
  lVar11 = *param_5;
joined_r0x001e602b:
  if (lVar11 == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(undefined8 *)(lVar11 + 0x18);
  }
  if (plVar12 != (long *)0x0) {
    pXVar8 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                       ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                        XWindowSystem::singletonHolder);
    uVar9 = (**(code **)(*plVar12 + 0x18))(plVar12);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar11 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar11 != 0)) {
      lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar10 + 0x210))(lVar11);
    }
                    /* try { // try from 001e6076 to 001e608d has its CatchHandler @ 001e60f0 */
    lVar11 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
    (**(code **)(lVar11 + 200))(*(undefined8 *)(pXVar8 + 0x148),uVar9,uVar13);
    if ((XWindowSystem::singletonHolder._40_8_ != 0) &&
       (lVar11 = *(long *)(XWindowSystem::singletonHolder._40_8_ + 0x148), lVar11 != 0)) {
                    /* try { // try from 001e60a6 to 001e60b3 has its CatchHandler @ 001e60e8 */
      lVar10 = SingletonHolder<juce::X11Symbols,juce::CriticalSection,false>::get();
      (**(code **)(lVar10 + 0x360))(lVar11);
    }
  }
  return;
}


