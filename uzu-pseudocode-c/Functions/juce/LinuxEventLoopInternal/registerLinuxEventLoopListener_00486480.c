// Function : registerLinuxEventLoopListener
// Namespace: juce:LinuxEventLoopInternal
// Entry    : 00486480
// Prototype: undefined registerLinuxEventLoopListener(long param_1)
// Body     : 00486480 - 004866be


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LinuxEventLoopInternal::registerLinuxEventLoopListener(juce::LinuxEventLoopInternal::Listener&)
    */

void __cdecl juce::LinuxEventLoopInternal::registerLinuxEventLoopListener(long param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  void *__ptr;
  int iVar7;
  long lVar8;
  uint uVar9;
  bool bVar10;
  
  uVar3 = InternalRunLoop::singletonHolder._40_8_;
  if (InternalRunLoop::singletonHolder._40_8_ != 0) {
    if (*(int *)(InternalRunLoop::singletonHolder._40_8_ + 0xa8) != 2) {
      LOCK();
      bVar10 = *(int *)(InternalRunLoop::singletonHolder._40_8_ + 0xa8) == 0;
      if (bVar10) {
        *(int *)(InternalRunLoop::singletonHolder._40_8_ + 0xa8) = 1;
      }
      UNLOCK();
      if (bVar10) {
                    /* try { // try from 004864bb to 004864c4 has its CatchHandler @ 004866c7 */
        puVar4 = operator_new(0x20);
        puVar4[1] = 0x100000001;
        *puVar4 = &PTR___Sp_counted_base_00712fc8;
        puVar4[2] = 0;
        puVar4[3] = 0;
        *(undefined8 **)(uVar3 + 0x88) = puVar4 + 2;
        p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(uVar3 + 0x90);
        *(undefined8 **)(uVar3 + 0x90) = puVar4;
        if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar5 = *(ulong *)(p_Var2 + 8);
          if (uVar5 == 0x100000001) {
            *(undefined8 *)(p_Var2 + 8) = 0;
            (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
            (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var1 = p_Var2 + 8;
              uVar5 = (ulong)*(uint *)p_Var1;
              *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var2 + 8) = (int)uVar5 + -1;
            }
            if ((int)uVar5 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
            }
          }
        }
                    /* try { // try from 0048656f to 00486578 has its CatchHandler @ 004866bf */
        puVar4 = operator_new(0x28);
        puVar4[1] = 0x100000001;
        *puVar4 = &PTR___Sp_counted_base_00713018;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        *(undefined8 **)(uVar3 + 0x98) = puVar4 + 2;
        p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(uVar3 + 0xa0);
        *(undefined8 **)(uVar3 + 0xa0) = puVar4;
        if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar5 = *(ulong *)(p_Var2 + 8);
          if (uVar5 == 0x100000001) {
            *(undefined8 *)(p_Var2 + 8) = 0;
            (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
            (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var1 = p_Var2 + 8;
              uVar5 = (ulong)*(uint *)p_Var1;
              *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var2 + 8) = (int)uVar5 + -1;
            }
            if ((int)uVar5 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
            }
          }
        }
        LOCK();
        *(undefined4 *)(uVar3 + 0xa8) = 2;
        UNLOCK();
      }
      else {
        while (*(int *)(uVar3 + 0xa8) != 2) {
          sched_yield();
        }
      }
    }
    puVar4 = *(undefined8 **)(uVar3 + 0x88);
    __ptr = (void *)*puVar4;
    iVar7 = *(int *)((long)puVar4 + 0xc);
    lVar6 = (long)iVar7;
    if (lVar6 != 0) {
      lVar8 = 0;
      do {
        if (*(long *)((long)__ptr + lVar8) == param_1) {
          return;
        }
        lVar8 = lVar8 + 8;
      } while (lVar6 * 8 != lVar8);
    }
    if ((int)*(uint *)(puVar4 + 1) <= iVar7) {
      uVar9 = iVar7 + ((iVar7 - (iVar7 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar4 + 1) != uVar9) {
        if ((int)uVar9 < 1) {
          free(__ptr);
          *puVar4 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar9 << 3);
          *puVar4 = __ptr;
        }
      }
      *(uint *)(puVar4 + 1) = uVar9;
      iVar7 = *(int *)((long)puVar4 + 0xc);
      lVar6 = (long)iVar7;
    }
    *(int *)((long)puVar4 + 0xc) = iVar7 + 1;
    *(long *)((long)__ptr + lVar6 * 8) = param_1;
  }
  return;
}


