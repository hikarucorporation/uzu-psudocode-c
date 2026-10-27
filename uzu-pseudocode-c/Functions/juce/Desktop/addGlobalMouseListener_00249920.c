// Function : addGlobalMouseListener
// Namespace: juce:Desktop
// Entry    : 00249920
// Prototype: undefined addGlobalMouseListener(Desktop * this, long param_1)
// Body     : 00249920 - 00249b49


/* juce::Desktop::addGlobalMouseListener(juce::MouseListener*) */

void __thiscall juce::Desktop::addGlobalMouseListener(Desktop *this,long param_1)

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
  
  if (*(int *)(this + 0x68) != 2) {
    LOCK();
    bVar9 = *(int *)(this + 0x68) == 0;
    if (bVar9) {
      *(int *)(this + 0x68) = 1;
    }
    UNLOCK();
    if (bVar9) {
                    /* try { // try from 00249948 to 00249951 has its CatchHandler @ 00249b52 */
      puVar3 = operator_new(0x20);
      puVar3[1] = 0x100000001;
      *puVar3 = &PTR___Sp_counted_base_007111b0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(undefined8 **)(this + 0x48) = puVar3 + 2;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x50);
      *(undefined8 **)(this + 0x50) = puVar3;
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
                    /* try { // try from 002499ec to 002499f5 has its CatchHandler @ 00249b4a */
      puVar3 = operator_new(0x28);
      puVar3[1] = 0x100000001;
      *puVar3 = &PTR___Sp_counted_base_00711200;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      *(undefined8 **)(this + 0x58) = puVar3 + 2;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x60);
      *(undefined8 **)(this + 0x60) = puVar3;
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
      *(undefined4 *)(this + 0x68) = 2;
      UNLOCK();
    }
    else {
      while (*(int *)(this + 0x68) != 2) {
        sched_yield();
      }
    }
  }
  if (param_1 != 0) {
    puVar3 = *(undefined8 **)(this + 0x48);
    __ptr = (void *)*puVar3;
    iVar6 = *(int *)((long)puVar3 + 0xc);
    lVar5 = (long)iVar6;
    if (lVar5 != 0) {
      lVar7 = 0;
      do {
        if (*(long *)((long)__ptr + lVar7) == param_1) goto LAB_00249b20;
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
LAB_00249b20:
  resetTimer(this);
  return;
}


