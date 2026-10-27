// Function : updateScaleFactorFromNewBounds
// Namespace: juce:LinuxComponentPeer
// Entry    : 002ca590
// Prototype: undefined updateScaleFactorFromNewBounds(LinuxComponentPeer * this, int * param_1, char param_2)
// Body     : 002ca590 - 002caaad


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int> const&, bool) */

void __thiscall
juce::LinuxComponentPeer::updateScaleFactorFromNewBounds
          (LinuxComponentPeer *this,int *param_1,char param_2)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  undefined8 *puVar2;
  long *plVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined8 *puVar4;
  long *plVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  long *plVar7;
  double dVar8;
  double dVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  Desktop *pDVar15;
  long lVar16;
  long *plVar17;
  ulong uVar18;
  long *plVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  double dVar28;
  double dVar29;
  int local_70;
  int local_6c;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  long local_60;
  ulong local_58;
  undefined8 *local_50;
  undefined8 local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_40;
  int *local_38;
  
  if (*(long *)(this + 0x128) == 0) {
    uVar14 = 0;
    iVar21 = 0;
  }
  else {
    uVar14 = getScreenPosition(this,param_2);
    iVar21 = (int)((ulong)uVar14 >> 0x20);
  }
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar15 = operator_new(0x1d0);
                    /* try { // try from 002ca5f2 to 002ca5f9 has its CatchHandler @ 002caab3 */
    Desktop::Desktop(pDVar15);
    Desktop::instance = pDVar15;
  }
  pDVar15 = Desktop::instance;
  lVar16 = Displays::getDisplayForRect
                     (**(long **)(Desktop::instance + 0xe0),
                      *(int *)((long)*(long **)(Desktop::instance + 0xe0) + 0xc),
                      CONCAT44(iVar21 + param_1[1],(int)uVar14 + *param_1),
                      *(undefined8 *)(param_1 + 2),param_2);
  if (lVar16 == 0) {
    return;
  }
  dVar8 = *(double *)(lVar16 + 0x50) / (double)*(float *)(pDVar15 + 0x130);
  dVar29 = *(double *)(this + 0x158);
  dVar28 = (double)((ulong)dVar8 & _DAT_005d91b0);
  if (dVar28 == DAT_005d94e0) {
LAB_002ca6b6:
    if ((dVar8 == dVar29) && (!NAN(dVar8) && !NAN(dVar29))) {
      return;
    }
  }
  else {
    dVar9 = (double)(_DAT_005d91b0 & (ulong)dVar29);
    uVar26 = SUB84(dVar9,0);
    uVar27 = (undefined4)((ulong)dVar9 >> 0x20);
    if (dVar9 == DAT_005d94e0) goto LAB_002ca6b6;
    dVar29 = (double)((ulong)(dVar8 - dVar29) & _DAT_005d91b0);
    if (dVar29 <= DAT_005db368) {
      return;
    }
    if (dVar9 <= dVar28) {
      uVar26 = SUB84(dVar28,0);
      uVar27 = (undefined4)((ulong)dVar28 >> 0x20);
    }
    if (dVar29 <= (double)CONCAT44(uVar27,uVar26) * DAT_005db370) {
      return;
    }
  }
  *(double *)(this + 0x158) = dVar8;
  if (*(int *)(this + 0x50) != 2) {
    return;
  }
  plVar3 = *(long **)(this + 0x30);
  this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x38);
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
      UNLOCK();
    }
    else {
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
  }
  local_70 = 0;
  local_6c = *(int *)((long)plVar3 + 0xc);
  puVar4 = *(undefined8 **)(this + 0x40);
  plVar5 = (long *)puVar4[1];
  if (plVar5 != (long *)puVar4[2]) {
    *plVar5 = (long)&local_70;
    puVar4[1] = puVar4[1] + 8;
    local_48 = *(undefined8 *)(this + 0x40);
    p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x48);
    goto joined_r0x002ca955;
  }
  plVar7 = (long *)*puVar4;
  lVar16 = (long)plVar5 - (long)plVar7;
  local_68 = this_00;
  local_50 = puVar4;
  if (lVar16 == 0x7ffffffffffffff8) {
                    /* try { // try from 002caaa2 to 002caaad has its CatchHandler @ 002caaae */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar24 = lVar16 >> 3;
  uVar18 = 1;
  if (lVar16 != 0) {
    uVar18 = uVar24;
  }
  local_58 = uVar18 + uVar24;
  if (local_58 >> 0x3c != 0) {
    local_58 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar18,uVar24)) {
    local_58 = 0xfffffffffffffff;
  }
  if (local_58 == 0) {
    plVar17 = (long *)0x0;
  }
  else {
    local_60 = lVar16;
                    /* try { // try from 002ca7ac to 002ca7b0 has its CatchHandler @ 002caaae */
    plVar17 = operator_new(local_58 * 8);
    lVar16 = local_60;
  }
  plVar17[uVar24] = (long)&local_70;
  if (lVar16 < 1) {
    plVar25 = plVar17 + uVar24;
  }
  else {
    plVar25 = plVar17;
    if (plVar7 != plVar5) {
      plVar19 = plVar7;
      if (0x17 < lVar16 - 8U) {
        uVar23 = (lVar16 - 8U >> 3) + 1;
        uVar18 = uVar23 & 0xfffffffffffffffc;
        uVar20 = (uVar18 - 4 >> 2) + 1;
        uVar24 = (ulong)((uint)uVar20 & 3);
        if (uVar18 - 4 < 0xc) {
          lVar16 = 0;
        }
        else {
          uVar20 = uVar20 & 0x7ffffffffffffffc;
          lVar16 = 0;
          do {
            lVar22 = (plVar7 + lVar16)[1];
            lVar10 = plVar7[lVar16 + 2];
            lVar11 = (plVar7 + lVar16 + 2)[1];
            plVar17[lVar16] = plVar7[lVar16];
            (plVar17 + lVar16)[1] = lVar22;
            plVar17[lVar16 + 2] = lVar10;
            (plVar17 + lVar16 + 2)[1] = lVar11;
            lVar22 = (plVar7 + lVar16 + 4)[1];
            lVar10 = plVar7[lVar16 + 6];
            lVar11 = (plVar7 + lVar16 + 6)[1];
            plVar17[lVar16 + 4] = plVar7[lVar16 + 4];
            (plVar17 + lVar16 + 4)[1] = lVar22;
            plVar17[lVar16 + 6] = lVar10;
            (plVar17 + lVar16 + 6)[1] = lVar11;
            lVar22 = (plVar7 + lVar16 + 8)[1];
            lVar10 = plVar7[lVar16 + 10];
            lVar11 = (plVar7 + lVar16 + 10)[1];
            plVar17[lVar16 + 8] = plVar7[lVar16 + 8];
            (plVar17 + lVar16 + 8)[1] = lVar22;
            plVar17[lVar16 + 10] = lVar10;
            (plVar17 + lVar16 + 10)[1] = lVar11;
            lVar22 = (plVar7 + lVar16 + 0xc)[1];
            lVar10 = plVar7[lVar16 + 0xe];
            lVar11 = (plVar7 + lVar16 + 0xe)[1];
            plVar17[lVar16 + 0xc] = plVar7[lVar16 + 0xc];
            (plVar17 + lVar16 + 0xc)[1] = lVar22;
            plVar17[lVar16 + 0xe] = lVar10;
            (plVar17 + lVar16 + 0xe)[1] = lVar11;
            lVar16 = lVar16 + 0x10;
            uVar20 = uVar20 - 4;
          } while (uVar20 != 0);
        }
        if (uVar24 != 0) {
          lVar22 = 0;
          do {
            puVar2 = (undefined8 *)((long)plVar7 + lVar22 + lVar16 * 8);
            uVar14 = puVar2[1];
            puVar4 = (undefined8 *)((long)plVar7 + lVar22 + lVar16 * 8 + 0x10);
            uVar12 = *puVar4;
            uVar13 = puVar4[1];
            puVar4 = (undefined8 *)((long)plVar17 + lVar22 + lVar16 * 8);
            *puVar4 = *puVar2;
            puVar4[1] = uVar14;
            puVar4 = (undefined8 *)((long)plVar17 + lVar22 + lVar16 * 8 + 0x10);
            *puVar4 = uVar12;
            puVar4[1] = uVar13;
            lVar22 = lVar22 + 0x20;
          } while (uVar24 * 0x20 != lVar22);
        }
        plVar25 = plVar17 + uVar18;
        if (uVar23 == uVar18) goto LAB_002ca914;
        plVar19 = plVar7 + uVar18;
      }
      do {
        *plVar25 = *plVar19;
        plVar19 = plVar19 + 1;
        plVar25 = plVar25 + 1;
      } while (plVar19 != plVar5);
    }
  }
LAB_002ca914:
  if (plVar7 != (long *)0x0) {
    operator_delete(plVar7);
  }
  *local_50 = plVar17;
  local_50[1] = plVar25 + 1;
  local_50[2] = plVar17 + local_58;
  local_48 = *(undefined8 *)(this + 0x40);
  p_Var6 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x48);
  this_00 = local_68;
joined_r0x002ca955:
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
  local_38 = &local_70;
  local_40 = p_Var6;
  iVar21 = local_6c;
  for (; local_70 < iVar21; local_70 = local_70 + 1) {
    plVar5 = *(long **)(*plVar3 + (long)local_70 * 8);
    if (plVar5 != (long *)0x0) {
                    /* try { // try from 002ca9b6 to 002ca9b8 has its CatchHandler @ 002caac6 */
      (**(code **)(*plVar5 + 0x10))((int)*(undefined8 *)(this + 0x158));
      iVar21 = local_6c;
    }
  }
  ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>
  ::
  callCheckedExcluding<juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1},juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::ComponentPeer::ScaleFactorListener*,juce::ListenerList<juce::ComponentPeer::ScaleFactorListener,juce::Array<juce::ComponentPeer::ScaleFactorListener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::LinuxComponentPeer::updateScaleFactorFromNewBounds(juce::Rectangle<int>const&,bool)::{lambda(juce::ComponentPeer::ScaleFactorListener&)#1}&&)
  ::{lambda()#1}::operator()((_lambda___1_ *)&local_48);
  if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar18 = *(ulong *)(p_Var6 + 8);
    if (uVar18 == 0x100000001) {
      *(undefined8 *)(p_Var6 + 8) = 0;
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var6 + 8;
        uVar18 = (ulong)*(uint *)p_Var1;
        *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var6 + 8) = (int)uVar18 + -1;
      }
      if ((int)uVar18 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
      }
    }
  }
  if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    uVar18 = *(ulong *)(this_00 + 8);
    if (uVar18 == 0x100000001) {
      *(undefined8 *)(this_00 + 8) = 0;
      (**(code **)(*(long *)this_00 + 0x10))(this_00);
      (**(code **)(*(long *)this_00 + 0x18))(this_00);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var6 = this_00 + 8;
        uVar18 = (ulong)*(uint *)p_Var6;
        *(uint *)p_Var6 = *(uint *)p_Var6 - 1;
        UNLOCK();
      }
      else {
        *(int *)(this_00 + 8) = (int)uVar18 + -1;
      }
      if ((int)uVar18 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
      }
    }
  }
  return;
}


