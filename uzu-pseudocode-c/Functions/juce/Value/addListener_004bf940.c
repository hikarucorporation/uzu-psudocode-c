// Function : addListener
// Namespace: juce:Value
// Entry    : 004bf940
// Prototype: undefined addListener(Value * this, long param_1)
// Body     : 004bf940 - 004bfb8e


/* juce::Value::addListener(juce::Value::Listener*) */

void __thiscall juce::Value::addListener(Value *this,long param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  void *__ptr;
  int iVar6;
  long lVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_1 != 0) {
    if ((*(int *)(this + 0x28) == 2) && (*(int *)(*(long *)(this + 8) + 0xc) != 0)) {
      iVar6 = *(int *)(this + 0x28);
    }
    else {
      SortedSet<juce::Value*,juce::DummyCriticalSection>::add
                ((SortedSet<juce::Value*,juce::DummyCriticalSection> *)(*(long *)this + 0x20),
                 (ulong)this);
      iVar6 = *(int *)(this + 0x28);
    }
    if (iVar6 != 2) {
      LOCK();
      bVar9 = *(int *)(this + 0x28) == 0;
      if (bVar9) {
        *(int *)(this + 0x28) = 1;
      }
      UNLOCK();
      if (bVar9) {
                    /* try { // try from 004bf99f to 004bf9a8 has its CatchHandler @ 004bfb97 */
        puVar3 = operator_new(0x20);
        puVar3[1] = 0x100000001;
        *puVar3 = &PTR___Sp_counted_base_007140d8;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined8 **)(this + 8) = puVar3 + 2;
        p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x10);
        *(undefined8 **)(this + 0x10) = puVar3;
        if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar4 = *(ulong *)(p_Var2 + 8);
          if (uVar4 == 0x100000001) {
            *(undefined8 *)(p_Var2 + 8) = 0;
            (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
            (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var1 = p_Var2 + 8;
              uVar4 = (ulong)*(uint *)p_Var1;
              *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var2 + 8) = (int)uVar4 + -1;
            }
            if ((int)uVar4 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
            }
          }
        }
                    /* try { // try from 004bfa4c to 004bfa55 has its CatchHandler @ 004bfb8f */
        puVar3 = operator_new(0x28);
        puVar3[1] = 0x100000001;
        *puVar3 = &PTR___Sp_counted_base_00714128;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        *(undefined8 **)(this + 0x18) = puVar3 + 2;
        p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x20);
        *(undefined8 **)(this + 0x20) = puVar3;
        if (p_Var2 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
          uVar4 = *(ulong *)(p_Var2 + 8);
          if (uVar4 == 0x100000001) {
            *(undefined8 *)(p_Var2 + 8) = 0;
            (**(code **)(*(long *)p_Var2 + 0x10))(p_Var2);
            (**(code **)(*(long *)p_Var2 + 0x18))(p_Var2);
          }
          else {
            if (*PTR___libc_single_threaded_00715c50 == '\0') {
              LOCK();
              p_Var1 = p_Var2 + 8;
              uVar4 = (ulong)*(uint *)p_Var1;
              *(uint *)p_Var1 = *(uint *)p_Var1 - 1;
              UNLOCK();
            }
            else {
              *(int *)(p_Var2 + 8) = (int)uVar4 + -1;
            }
            if ((int)uVar4 == 1) {
              std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var2);
            }
          }
        }
        LOCK();
        *(undefined4 *)(this + 0x28) = 2;
        UNLOCK();
      }
      else {
        while (*(int *)(this + 0x28) != 2) {
          sched_yield();
        }
      }
    }
    puVar3 = *(undefined8 **)(this + 8);
    __ptr = (void *)*puVar3;
    iVar6 = *(int *)((long)puVar3 + 0xc);
    lVar5 = (long)iVar6;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (*(long *)((long)__ptr + lVar7) == param_1) {
          return;
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 * 8 != lVar7);
    }
    if ((int)*(uint *)(puVar3 + 1) <= iVar6) {
      uVar8 = iVar6 + ((iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(puVar3 + 1) != uVar8) {
        if ((int)uVar8 < 1) {
          free(__ptr);
          *puVar3 = 0;
          __ptr = (void *)0x0;
        }
        else {
          __ptr = realloc(__ptr,(ulong)uVar8 << 3);
          *puVar3 = __ptr;
        }
      }
      *(uint *)(puVar3 + 1) = uVar8;
      iVar6 = *(int *)((long)puVar3 + 0xc);
      lVar5 = (long)iVar6;
    }
    *(int *)((long)puVar3 + 0xc) = iVar6 + 1;
    *(long *)((long)__ptr + lVar5 * 8) = param_1;
  }
  return;
}


