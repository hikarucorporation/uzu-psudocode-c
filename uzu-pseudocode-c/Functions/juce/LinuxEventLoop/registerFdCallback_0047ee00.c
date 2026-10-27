// Function : registerFdCallback
// Namespace: juce:LinuxEventLoop
// Entry    : 0047ee00
// Prototype: undefined registerFdCallback(uint param_1, undefined8 * param_2)
// Body     : 0047ee00 - 0047f93a


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LinuxEventLoop::registerFdCallback(int, std::function<void (int)>, short) */

void __cdecl juce::LinuxEventLoop::registerFdCallback(uint param_1,undefined8 *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong *puVar6;
  long *plVar7;
  vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
  *this;
  long *plVar8;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 __mutex;
  bool bVar15;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var16;
  _Rb_tree_node_base *p_Var17;
  _Rb_tree_node_base *p_Var18;
  _Rb_tree_node_base *p_Var19;
  _Rb_tree_node_base *p_Var20;
  ulong uVar21;
  ulong *puVar22;
  ulong *puVar23;
  int iVar24;
  ulong uVar25;
  undefined8 *puVar26;
  ulong *puVar27;
  ulong uVar28;
  long lVar29;
  ulong *puVar30;
  long lVar31;
  ulong uVar32;
  ulong uVar33;
  long lVar34;
  _Rb_tree_node_base *p_Var35;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  code *local_80;
  code *pcStack_78;
  int *local_70;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_68;
  int *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined8 uStack_40;
  uint local_38;
  
  __mutex = InternalRunLoop::singletonHolder._40_8_;
  if (InternalRunLoop::singletonHolder._40_8_ == 0) {
    return;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uVar4 = param_2[3];
  lVar29 = param_2[2];
  if (lVar29 != 0) {
    local_58 = *param_2;
    uStack_50 = param_2[1];
    param_2[2] = 0;
    param_2[3] = 0;
    local_48 = lVar29;
  }
  uStack_88 = 0;
  uStack_40 = uVar4;
  local_38 = param_1;
                    /* try { // try from 0047ee66 to 0047ee6f has its CatchHandler @ 0047f964 */
  local_90 = operator_new(0x28);
  *local_90 = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = uVar4;
  if (lVar29 != 0) {
    *local_90 = local_58;
    local_90[1] = uStack_50;
    local_90[2] = lVar29;
    local_48 = 0;
    uStack_40 = 0;
  }
  *(uint *)(local_90 + 4) = param_1;
  pcStack_78 = std::
               _Function_handler<void(),juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::$_10>
               ::_M_invoke;
  local_80 = std::
             _Function_handler<void(),juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::$_10>
             ::_M_manager;
  pthread_mutex_lock((pthread_mutex_t *)__mutex);
                    /* try { // try from 0047eec1 to 0047eeca has its CatchHandler @ 0047f957 */
  p_Var16 = operator_new(0x30);
  *(undefined8 *)(p_Var16 + 8) = 0x100000001;
  *(undefined ***)p_Var16 = &PTR___Sp_counted_base_00712f78;
  *(undefined8 *)(p_Var16 + 0x10) = 0;
  *(undefined8 *)(p_Var16 + 0x18) = 0;
  *(undefined8 *)(p_Var16 + 0x20) = 0;
  *(code **)(p_Var16 + 0x28) =
       std::
       _Function_handler<void(),juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::$_10>
       ::_M_invoke;
  *(undefined4 *)(p_Var16 + 0x10) = (undefined4)local_90;
  *(undefined4 *)(p_Var16 + 0x14) = local_90._4_4_;
  *(undefined4 *)(p_Var16 + 0x18) = (undefined4)uStack_88;
  *(undefined4 *)(p_Var16 + 0x1c) = uStack_88._4_4_;
  *(code **)(p_Var16 + 0x20) =
       std::
       _Function_handler<void(),juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::$_10>
       ::_M_manager;
  local_80 = (code *)0x0;
  pcStack_78 = (code *)0x0;
  p_Var17 = *(_Rb_tree_node_base **)(__mutex + 0x38);
  p_Var1 = (_Rb_tree_node_base *)(__mutex + 0x30);
  p_Var35 = p_Var1;
  if (p_Var17 == (_Rb_tree_node_base *)0x0) {
LAB_0047ef92:
                    /* try { // try from 0047ef92 to 0047ef9b has its CatchHandler @ 0047f94a */
    p_Var18 = operator_new(0x38);
    *(uint *)(p_Var18 + 0x20) = param_1;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var18 + 0x28) = p_Var16 + 0x10;
    *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(p_Var18 + 0x30) = p_Var16;
    p_Var17 = p_Var1;
    if (p_Var35 == p_Var1) {
      if ((*(long *)(__mutex + 0x50) == 0) ||
         (p_Var20 = *(_Rb_tree_node_base **)(__mutex + 0x48),
         (int)param_1 <= *(int *)(p_Var20 + 0x20))) {
        p_Var35 = *(_Rb_tree_node_base **)(__mutex + 0x38);
        if (*(_Rb_tree_node_base **)(__mutex + 0x38) == (_Rb_tree_node_base *)0x0) {
          p_Var20 = p_Var1;
          if (p_Var1 != *(_Rb_tree_node_base **)(__mutex + 0x40)) {
LAB_0047f136:
            p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var17);
            goto LAB_0047f148;
          }
        }
        else {
          do {
            p_Var20 = p_Var35;
            p_Var35 = *(_Rb_tree_node_base **)
                       (p_Var20 + (ulong)(*(int *)(p_Var20 + 0x20) <= (int)param_1) * 8 + 0x10);
          } while (*(_Rb_tree_node_base **)
                    (p_Var20 + (ulong)(*(int *)(p_Var20 + 0x20) <= (int)param_1) * 8 + 0x10) !=
                   (_Rb_tree_node_base *)0x0);
          p_Var17 = p_Var20;
          if (*(int *)(p_Var20 + 0x20) <= (int)param_1) goto LAB_0047f14c;
          if (p_Var20 != *(_Rb_tree_node_base **)(__mutex + 0x40)) goto LAB_0047f136;
        }
LAB_0047f20c:
        p_Var17 = (_Rb_tree_node_base *)0x0;
        if (p_Var20 == (_Rb_tree_node_base *)0x0) goto LAB_0047f246;
      }
      else {
LAB_0047f0a7:
        p_Var17 = (_Rb_tree_node_base *)0x0;
      }
LAB_0047f214:
      bVar15 = true;
      p_Var35 = p_Var20;
      if ((p_Var17 == (_Rb_tree_node_base *)0x0) && (p_Var20 != p_Var1)) {
        bVar15 = (int)param_1 < *(int *)(p_Var20 + 0x20);
      }
    }
    else {
      if (*(int *)(p_Var35 + 0x20) <= (int)param_1) {
        if (*(int *)(p_Var35 + 0x20) < (int)param_1) {
          p_Var20 = p_Var35;
          if (*(_Rb_tree_node_base **)(__mutex + 0x48) == p_Var35) goto LAB_0047f0a7;
          p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_increment(p_Var35);
          if ((int)param_1 < *(int *)(p_Var20 + 0x20)) {
            p_Var17 = (_Rb_tree_node_base *)0x0;
            p_Var19 = p_Var35;
            if (*(long *)(p_Var35 + 0x18) != 0) {
              p_Var17 = p_Var20;
              p_Var19 = p_Var20;
            }
            goto LAB_0047f099;
          }
          p_Var35 = *(_Rb_tree_node_base **)(__mutex + 0x38);
          if (*(_Rb_tree_node_base **)(__mutex + 0x38) != (_Rb_tree_node_base *)0x0) {
            do {
              p_Var20 = p_Var35;
              p_Var35 = *(_Rb_tree_node_base **)
                         (p_Var20 + (ulong)(*(int *)(p_Var20 + 0x20) <= (int)param_1) * 8 + 0x10);
            } while (*(_Rb_tree_node_base **)
                      (p_Var20 + (ulong)(*(int *)(p_Var20 + 0x20) <= (int)param_1) * 8 + 0x10) !=
                     (_Rb_tree_node_base *)0x0);
            p_Var17 = p_Var20;
            if (*(int *)(p_Var20 + 0x20) <= (int)param_1) goto LAB_0047f14c;
          }
          p_Var20 = p_Var17;
          if (p_Var17 == *(_Rb_tree_node_base **)(__mutex + 0x40)) goto LAB_0047f20c;
          p_Var20 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var17);
LAB_0047f148:
LAB_0047f14c:
          iVar24 = *(int *)(p_Var20 + 0x20);
joined_r0x0047f152:
          p_Var20 = p_Var17;
          if (iVar24 < (int)param_1) goto LAB_0047f20c;
        }
LAB_0047f246:
        if (*(long *)(p_Var16 + 8) == 0x100000001) {
          *(undefined8 *)(p_Var16 + 8) = 0;
          (**(code **)(*(long *)p_Var16 + 0x10))(p_Var16);
          (**(code **)(*(long *)p_Var16 + 0x18))(p_Var16);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var9 = p_Var16 + 8;
            iVar24 = *(int *)p_Var9;
            *(int *)p_Var9 = *(int *)p_Var9 + -1;
            UNLOCK();
          }
          else {
            iVar24 = (int)*(long *)(p_Var16 + 8);
            *(int *)(p_Var16 + 8) = iVar24 + -1;
          }
          if (iVar24 == 1) {
            std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
          }
        }
        operator_delete(p_Var18);
        goto LAB_0047f2a5;
      }
      p_Var20 = *(_Rb_tree_node_base **)(__mutex + 0x40);
      if (p_Var20 != p_Var35) {
        p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var35);
        if (*(int *)(p_Var19 + 0x20) < (int)param_1) {
          if (*(long *)(p_Var19 + 0x18) == 0) {
            p_Var17 = (_Rb_tree_node_base *)0x0;
          }
          else {
            p_Var17 = p_Var35;
            p_Var19 = p_Var35;
          }
LAB_0047f099:
          p_Var20 = p_Var19;
          goto LAB_0047f214;
        }
        p_Var35 = *(_Rb_tree_node_base **)(__mutex + 0x38);
        if (*(_Rb_tree_node_base **)(__mutex + 0x38) == (_Rb_tree_node_base *)0x0) {
LAB_0047f1ba:
          if (p_Var17 == p_Var20) goto LAB_0047f20c;
          p_Var19 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var17);
        }
        else {
          do {
            p_Var19 = p_Var35;
            p_Var35 = *(_Rb_tree_node_base **)
                       (p_Var19 + (ulong)(*(int *)(p_Var19 + 0x20) <= (int)param_1) * 8 + 0x10);
          } while (*(_Rb_tree_node_base **)
                    (p_Var19 + (ulong)(*(int *)(p_Var19 + 0x20) <= (int)param_1) * 8 + 0x10) !=
                   (_Rb_tree_node_base *)0x0);
          p_Var17 = p_Var19;
          if ((int)param_1 < *(int *)(p_Var19 + 0x20)) goto LAB_0047f1ba;
        }
        iVar24 = *(int *)(p_Var19 + 0x20);
        goto joined_r0x0047f152;
      }
      bVar15 = true;
    }
    std::_Rb_tree_insert_and_rebalance(bVar15,p_Var18,p_Var35,p_Var1);
    *(long *)(__mutex + 0x50) = *(long *)(__mutex + 0x50) + 1;
  }
  else {
    do {
      p_Var18 = p_Var17 + 0x18;
      if ((int)param_1 <= *(int *)(p_Var17 + 0x20)) {
        p_Var18 = p_Var17 + 0x10;
        p_Var35 = p_Var17;
      }
      p_Var17 = *(_Rb_tree_node_base **)p_Var18;
    } while (p_Var17 != (_Rb_tree_node_base *)0x0);
    if (p_Var35 == p_Var1) {
      p_Var35 = p_Var1;
      goto LAB_0047ef92;
    }
    if ((int)param_1 < *(int *)(p_Var35 + 0x20)) goto LAB_0047ef92;
    if (*(long *)(p_Var16 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var16 + 8) = 0;
      (**(code **)(*(long *)p_Var16 + 0x10))(p_Var16);
      (**(code **)(*(long *)p_Var16 + 0x18))(p_Var16);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var9 = p_Var16 + 8;
        iVar24 = *(int *)p_Var9;
        *(int *)p_Var9 = *(int *)p_Var9 + -1;
        UNLOCK();
      }
      else {
        iVar24 = (int)*(long *)(p_Var16 + 8);
        *(int *)(p_Var16 + 8) = iVar24 + -1;
      }
      if (iVar24 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
      }
    }
  }
LAB_0047f2a5:
  puVar5 = *(ulong **)(__mutex + 0x70);
  puVar6 = *(ulong **)(__mutex + 0x78);
  uVar21 = (long)puVar6 - (long)puVar5;
  puVar22 = puVar5;
  if (0 < (long)uVar21) {
    uVar25 = uVar21 >> 3;
    do {
      uVar28 = uVar25 >> 1;
      if ((int)puVar22[uVar28] < (int)param_1) {
        uVar25 = ~uVar28 + uVar25;
        puVar22 = puVar22 + uVar28 + 1;
      }
      else {
        uVar25 = uVar28;
      }
    } while (0 < (long)uVar25);
  }
  if (puVar22 == puVar6) {
    if (puVar6 != *(ulong **)(__mutex + 0x80)) {
      *puVar6 = (ulong)param_1 | 0x100000000;
      *(long *)(__mutex + 0x78) = *(long *)(__mutex + 0x78) + 8;
      goto LAB_0047f719;
    }
    lVar29 = (long)puVar22 - (long)puVar5;
    lVar34 = lVar29 >> 3;
  }
  else {
    if ((uint)*puVar22 == param_1) goto LAB_0047f719;
    lVar29 = (long)puVar22 - (long)puVar5;
    lVar34 = lVar29 >> 3;
    if (puVar6 != *(ulong **)(__mutex + 0x80)) {
      *puVar6 = puVar6[-1];
      lVar29 = *(long *)(__mutex + 0x78);
      *(long *)(__mutex + 0x78) = lVar29 + 8;
      puVar26 = (undefined8 *)(lVar29 + -8);
      uVar21 = (long)puVar26 - (long)(puVar5 + lVar34);
      if (0 < (long)uVar21) {
        uVar21 = (uVar21 >> 3) + 1;
        do {
          *puVar26 = puVar26[-1];
          puVar26 = puVar26 + -1;
          uVar21 = uVar21 - 1;
        } while (1 < uVar21);
      }
      puVar5[lVar34] = (ulong)param_1 | 0x100000000;
      goto LAB_0047f719;
    }
  }
  if (uVar21 == 0x7ffffffffffffff8) {
                    /* try { // try from 0047f92f to 0047f93a has its CatchHandler @ 0047f940 */
                    /* WARNING: Subroutine does not return */
    std::__throw_length_error("vector::_M_realloc_insert");
  }
  uVar28 = (long)uVar21 >> 3;
  uVar25 = 1;
  if (uVar21 != 0) {
    uVar25 = uVar28;
  }
  uVar21 = uVar25 + uVar28;
  if (uVar21 >> 0x3c != 0) {
    uVar21 = 0xfffffffffffffff;
  }
  if (CARRY8(uVar25,uVar28)) {
    uVar21 = 0xfffffffffffffff;
  }
  if (uVar21 == 0) {
    puVar22 = (ulong *)0x0;
  }
  else {
                    /* try { // try from 0047f426 to 0047f42a has its CatchHandler @ 0047f940 */
    puVar22 = operator_new(uVar21 * 8);
  }
  puVar23 = puVar5 + lVar34;
  puVar22[lVar29 >> 3] = (ulong)param_1 | 0x100000000;
  if (lVar29 < 1) {
    puVar27 = puVar22 + (lVar29 >> 3);
  }
  else {
    uVar25 = (long)puVar23 + (-8 - (long)puVar5);
    puVar27 = puVar22;
    puVar30 = puVar5;
    if (0x17 < uVar25) {
      uVar28 = (uVar25 >> 3) + 1;
      uVar33 = uVar28 & 0xfffffffffffffffc;
      uVar32 = (uVar33 - 4 >> 2) + 1;
      uVar25 = (ulong)((uint)uVar32 & 3);
      if (uVar33 - 4 < 0xc) {
        lVar29 = 0;
      }
      else {
        uVar32 = uVar32 & 0x7ffffffffffffffc;
        lVar29 = 0;
        do {
          uVar10 = (puVar5 + lVar29)[1];
          uVar11 = puVar5[lVar29 + 2];
          uVar12 = (puVar5 + lVar29 + 2)[1];
          puVar22[lVar29] = puVar5[lVar29];
          (puVar22 + lVar29)[1] = uVar10;
          puVar22[lVar29 + 2] = uVar11;
          (puVar22 + lVar29 + 2)[1] = uVar12;
          uVar10 = (puVar5 + lVar29 + 4)[1];
          uVar11 = puVar5[lVar29 + 6];
          uVar12 = (puVar5 + lVar29 + 6)[1];
          puVar22[lVar29 + 4] = puVar5[lVar29 + 4];
          (puVar22 + lVar29 + 4)[1] = uVar10;
          puVar22[lVar29 + 6] = uVar11;
          (puVar22 + lVar29 + 6)[1] = uVar12;
          uVar10 = (puVar5 + lVar29 + 8)[1];
          uVar11 = puVar5[lVar29 + 10];
          uVar12 = (puVar5 + lVar29 + 10)[1];
          puVar22[lVar29 + 8] = puVar5[lVar29 + 8];
          (puVar22 + lVar29 + 8)[1] = uVar10;
          puVar22[lVar29 + 10] = uVar11;
          (puVar22 + lVar29 + 10)[1] = uVar12;
          uVar10 = (puVar5 + lVar29 + 0xc)[1];
          uVar11 = puVar5[lVar29 + 0xe];
          uVar12 = (puVar5 + lVar29 + 0xe)[1];
          puVar22[lVar29 + 0xc] = puVar5[lVar29 + 0xc];
          (puVar22 + lVar29 + 0xc)[1] = uVar10;
          puVar22[lVar29 + 0xe] = uVar11;
          (puVar22 + lVar29 + 0xe)[1] = uVar12;
          lVar29 = lVar29 + 0x10;
          uVar32 = uVar32 - 4;
        } while (uVar32 != 0);
      }
      if (uVar25 != 0) {
        lVar31 = 0;
        do {
          puVar26 = (undefined8 *)((long)puVar5 + lVar31 + lVar29 * 8);
          uVar4 = puVar26[1];
          puVar3 = (undefined8 *)((long)puVar5 + lVar31 + lVar29 * 8 + 0x10);
          uVar13 = *puVar3;
          uVar14 = puVar3[1];
          puVar3 = (undefined8 *)((long)puVar22 + lVar31 + lVar29 * 8);
          *puVar3 = *puVar26;
          puVar3[1] = uVar4;
          puVar26 = (undefined8 *)((long)puVar22 + lVar31 + lVar29 * 8 + 0x10);
          *puVar26 = uVar13;
          puVar26[1] = uVar14;
          lVar31 = lVar31 + 0x20;
        } while (uVar25 * 0x20 != lVar31);
      }
      puVar27 = puVar22 + uVar33;
      if (uVar28 == uVar33) goto LAB_0047f5b3;
      puVar30 = puVar5 + uVar33;
    }
    do {
      *puVar27 = *puVar30;
      puVar30 = puVar30 + 1;
      puVar27 = puVar27 + 1;
    } while (puVar30 != puVar23);
  }
LAB_0047f5b3:
  puVar30 = puVar27 + 1;
  if ((long)puVar6 - (long)puVar23 < 1) {
    puVar30 = (ulong *)((long)puVar30 + ((long)puVar6 - (long)puVar23));
  }
  else if ((long)puVar6 - (long)puVar23 != 0) {
    uVar25 = ((long)puVar6 - (long)puVar23) - 8;
    if (0x17 < uVar25) {
      uVar32 = (uVar25 >> 3) + 1;
      uVar28 = uVar32 & 0xfffffffffffffffc;
      uVar25 = (uVar28 - 4 >> 2) + 1;
      uVar33 = (ulong)((uint)uVar25 & 3);
      if (uVar28 - 4 < 0xc) {
        lVar29 = 0;
      }
      else {
        uVar25 = uVar25 & 0x7ffffffffffffffc;
        lVar29 = 0;
        do {
          uVar10 = (puVar5 + lVar34 + lVar29)[1];
          uVar11 = puVar5[lVar34 + lVar29 + 2];
          uVar12 = (puVar5 + lVar34 + lVar29 + 2)[1];
          puVar27[lVar29 + 1] = puVar5[lVar34 + lVar29];
          (puVar27 + lVar29 + 1)[1] = uVar10;
          puVar27[lVar29 + 3] = uVar11;
          (puVar27 + lVar29 + 3)[1] = uVar12;
          uVar10 = (puVar5 + lVar34 + lVar29 + 4)[1];
          uVar11 = puVar5[lVar34 + lVar29 + 6];
          uVar12 = (puVar5 + lVar34 + lVar29 + 6)[1];
          puVar27[lVar29 + 5] = puVar5[lVar34 + lVar29 + 4];
          (puVar27 + lVar29 + 5)[1] = uVar10;
          puVar27[lVar29 + 7] = uVar11;
          (puVar27 + lVar29 + 7)[1] = uVar12;
          uVar10 = (puVar5 + lVar34 + lVar29 + 8)[1];
          uVar11 = puVar5[lVar34 + lVar29 + 10];
          uVar12 = (puVar5 + lVar34 + lVar29 + 10)[1];
          puVar27[lVar29 + 9] = puVar5[lVar34 + lVar29 + 8];
          (puVar27 + lVar29 + 9)[1] = uVar10;
          puVar27[lVar29 + 0xb] = uVar11;
          (puVar27 + lVar29 + 0xb)[1] = uVar12;
          uVar10 = (puVar5 + lVar34 + lVar29 + 0xc)[1];
          uVar11 = puVar5[lVar34 + lVar29 + 0xe];
          uVar12 = (puVar5 + lVar34 + lVar29 + 0xe)[1];
          puVar27[lVar29 + 0xd] = puVar5[lVar34 + lVar29 + 0xc];
          (puVar27 + lVar29 + 0xd)[1] = uVar10;
          puVar27[lVar29 + 0xf] = uVar11;
          (puVar27 + lVar29 + 0xf)[1] = uVar12;
          lVar29 = lVar29 + 0x10;
          uVar25 = uVar25 - 4;
        } while (uVar25 != 0);
      }
      if (uVar33 != 0) {
        lVar31 = 0;
        do {
          puVar3 = (undefined8 *)((long)puVar5 + lVar31 + (lVar34 + lVar29) * 8);
          uVar4 = puVar3[1];
          puVar26 = (undefined8 *)((long)puVar5 + lVar31 + (lVar34 + lVar29) * 8 + 0x10);
          uVar13 = *puVar26;
          uVar14 = puVar26[1];
          puVar26 = (undefined8 *)((long)puVar27 + lVar31 + lVar29 * 8 + 8);
          *puVar26 = *puVar3;
          puVar26[1] = uVar4;
          puVar26 = (undefined8 *)((long)puVar27 + lVar31 + lVar29 * 8 + 0x18);
          *puVar26 = uVar13;
          puVar26[1] = uVar14;
          lVar31 = lVar31 + 0x20;
        } while (uVar33 * 0x20 != lVar31);
      }
      puVar30 = puVar30 + uVar28;
      if (uVar32 == uVar28) goto LAB_0047f6f4;
      puVar23 = puVar23 + uVar28;
    }
    do {
      *puVar30 = *puVar23;
      puVar23 = puVar23 + 1;
      puVar30 = puVar30 + 1;
    } while (puVar23 != puVar6);
  }
LAB_0047f6f4:
  if (puVar5 != (ulong *)0x0) {
    operator_delete(puVar5);
  }
  *(ulong **)(__mutex + 0x70) = puVar22;
  *(ulong **)(__mutex + 0x78) = puVar30;
  *(ulong **)(__mutex + 0x80) = puVar22 + uVar21;
LAB_0047f719:
  pthread_mutex_unlock((pthread_mutex_t *)__mutex);
  if (*(int *)(__mutex + 0xa8) == 2) {
    plVar7 = *(long **)(__mutex + 0x88);
    p_Var16 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(__mutex + 0x90);
    if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var16 + 8) = *(int *)(p_Var16 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var16 + 8) = *(int *)(p_Var16 + 8) + 1;
      }
    }
    local_98 = 0;
    local_94 = *(int *)((long)plVar7 + 0xc);
    this = *(vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
             **)(__mutex + 0x98);
    plVar8 = *(long **)(this + 8);
    if (plVar8 == *(long **)(this + 0x10)) {
                    /* try { // try from 0047f791 to 0047f79a has its CatchHandler @ 0047f93b */
      local_70 = &local_98;
      std::
      vector<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*,std::allocator<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>>
      ::
      _M_realloc_insert<juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::Iterator*>
                (this,plVar8,&local_70);
    }
    else {
      *plVar8 = (long)&local_98;
      *(long *)(this + 8) = *(long *)(this + 8) + 8;
    }
    local_70 = *(int **)(__mutex + 0x98);
    p_Var9 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(__mutex + 0xa0);
    if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(p_Var9 + 8) = *(int *)(p_Var9 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(p_Var9 + 8) = *(int *)(p_Var9 + 8) + 1;
      }
    }
    local_68 = p_Var9;
    local_60 = &local_98;
    iVar24 = local_94;
    for (; local_98 < iVar24; local_98 = local_98 + 1) {
      plVar8 = *(long **)(*plVar7 + (long)local_98 * 8);
      if (plVar8 != (long *)0x0) {
                    /* try { // try from 0047f805 to 0047f807 has its CatchHandler @ 0047f985 */
        (**(code **)(*plVar8 + 0x10))();
        iVar24 = local_94;
      }
    }
    ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>
    ::
    callCheckedExcluding<juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1},juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker>(juce::LinuxEventLoopInternal::Listener*,juce::ListenerList<juce::LinuxEventLoopInternal::Listener,juce::Array<juce::LinuxEventLoopInternal::Listener*,juce::DummyCriticalSection,0>>::DummyBailOutChecker_const&,juce::InternalRunLoop::registerFdCallback(int,std::function<void()>&&,short)::{lambda(auto:1&)#1}&&)
    ::{lambda()#1}::operator()((_lambda___1_ *)&local_70);
    if (p_Var9 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var9 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var9 + 8) = 0;
        (**(code **)(*(long *)p_Var9 + 0x10))(p_Var9);
        (**(code **)(*(long *)p_Var9 + 0x18))(p_Var9);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var2 = p_Var9 + 8;
          iVar24 = *(int *)p_Var2;
          *(int *)p_Var2 = *(int *)p_Var2 + -1;
          UNLOCK();
        }
        else {
          iVar24 = (int)*(long *)(p_Var9 + 8);
          *(int *)(p_Var9 + 8) = iVar24 + -1;
        }
        if (iVar24 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var9);
        }
      }
    }
    if (p_Var16 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      if (*(long *)(p_Var16 + 8) == 0x100000001) {
        *(undefined8 *)(p_Var16 + 8) = 0;
        (**(code **)(*(long *)p_Var16 + 0x10))(p_Var16);
        (**(code **)(*(long *)p_Var16 + 0x18))(p_Var16);
      }
      else {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          p_Var9 = p_Var16 + 8;
          iVar24 = *(int *)p_Var9;
          *(int *)p_Var9 = *(int *)p_Var9 + -1;
          UNLOCK();
        }
        else {
          iVar24 = (int)*(long *)(p_Var16 + 8);
          *(int *)(p_Var16 + 8) = iVar24 + -1;
        }
        if (iVar24 == 1) {
          std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var16);
        }
      }
    }
  }
  if (local_80 != (code *)0x0) {
                    /* try { // try from 0047f8fd to 0047f90b has its CatchHandler @ 0047f942 */
    (*local_80)(&local_90,&local_90,3);
  }
  return;
}


