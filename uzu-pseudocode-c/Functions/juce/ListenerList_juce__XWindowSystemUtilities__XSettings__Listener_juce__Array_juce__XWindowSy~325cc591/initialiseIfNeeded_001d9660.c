// Function : initialiseIfNeeded
// Namespace: juce:ListenerList_juce__XWindowSystemUtilities__XSettings__Listener_juce__Array_juce__XWindowSy~325cc591
// Entry    : 001d9660
// Prototype: int initialiseIfNeeded(ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>> * this)
// Body     : 001d9660 - 001d97d9


/* juce::ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,
   juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*, juce::DummyCriticalSection, 0>
   >::initialiseIfNeeded() */

int __thiscall
juce::
ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
::initialiseIfNeeded
          (ListenerList<juce::XWindowSystemUtilities::XSettings::Listener,juce::Array<juce::XWindowSystemUtilities::XSettings::Listener*,juce::DummyCriticalSection,0>>
           *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  undefined8 *puVar4;
  ulong uVar5;
  bool bVar6;
  
  iVar3 = *(int *)(this + 0x20);
  if (iVar3 != 2) {
    LOCK();
    bVar6 = *(int *)(this + 0x20) == 0;
    if (bVar6) {
      *(int *)(this + 0x20) = 1;
    }
    UNLOCK();
    if (bVar6) {
                    /* try { // try from 001d9682 to 001d968b has its CatchHandler @ 001d97e2 */
      puVar4 = operator_new(0x20);
      puVar4[1] = 0x100000001;
      *puVar4 = &PTR___Sp_counted_base_0070dc80;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined8 **)this = puVar4 + 2;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 8);
      *(undefined8 **)(this + 8) = puVar4;
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
                    /* try { // try from 001d972c to 001d9735 has its CatchHandler @ 001d97da */
      puVar4 = operator_new(0x28);
      puVar4[1] = 0x100000001;
      *puVar4 = &PTR___Sp_counted_base_0070dcd0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      *(undefined8 **)(this + 0x10) = puVar4 + 2;
      p_Var2 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(this + 0x18);
      *(undefined8 **)(this + 0x18) = puVar4;
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
      iVar3 = *(int *)(this + 0x20);
      *(int *)(this + 0x20) = 2;
      UNLOCK();
    }
    else {
      while (iVar3 = *(int *)(this + 0x20), iVar3 != 2) {
        sched_yield();
      }
    }
  }
  return iVar3;
}


