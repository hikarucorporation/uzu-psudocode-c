// Function : ~ListenerList
// Namespace: juce:ListenerList_juce__MouseListener_juce__Array_juce__MouseListener__juce__DummyCriticalSecti~760b89b3
// Entry    : 001de1f0
// Prototype: undefined ~ListenerList(ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>> * this)
// Body     : 001de1f0 - 001de33b


/* juce::ListenerList<juce::MouseListener, juce::Array<juce::MouseListener*,
   juce::DummyCriticalSection, 0> >::~ListenerList() */

void __thiscall
juce::
ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>::
~ListenerList(ListenerList<juce::MouseListener,juce::Array<juce::MouseListener*,juce::DummyCriticalSection,0>>
              *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var5;
  long *plVar6;
  
  if (*(int *)(this + 0x20) == 2) {
    puVar3 = *(undefined8 **)this;
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    if (*(int *)(puVar3 + 1) != 0) {
      free((void *)*puVar3);
      *puVar3 = 0;
    }
    *(undefined4 *)(puVar3 + 1) = 0;
    plVar4 = (long *)(*(undefined8 **)(this + 0x10))[1];
    for (plVar6 = (long *)**(undefined8 **)(this + 0x10); plVar6 != plVar4; plVar6 = plVar6 + 1) {
      *(undefined4 *)(*plVar6 + 4) = 0;
    }
  }
  p_Var5 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x18);
  if (p_Var5 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var5 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var5 + 8) = 0;
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
      (**(code **)(*(long *)p_Var5 + 0x18))(p_Var5);
      p_Var5 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
      goto joined_r0x001de316;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var5 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(p_Var5 + 8);
      *(int *)(p_Var5 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var5);
      p_Var5 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
      goto joined_r0x001de316;
    }
  }
  p_Var5 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
joined_r0x001de316:
  if (p_Var5 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var5 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var5 + 8) = 0;
      (**(code **)(*(long *)p_Var5 + 0x10))(p_Var5);
                    /* WARNING: Could not recover jumptable at 0x001de2dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)p_Var5 + 0x18))(p_Var5);
      return;
    }
    if (*PTR___libc_single_threaded_00715c50 == '\0') {
      LOCK();
      p_Var1 = p_Var5 + 8;
      iVar2 = *(int *)p_Var1;
      *(int *)p_Var1 = *(int *)p_Var1 + -1;
      UNLOCK();
    }
    else {
      iVar2 = (int)*(long *)(p_Var5 + 8);
      *(int *)(p_Var5 + 8) = iVar2 + -1;
    }
    if (iVar2 == 1) {
      std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var5);
      return;
    }
  }
  return;
}


