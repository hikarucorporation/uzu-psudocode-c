// Function : revealCursor
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e5b00
// Prototype: undefined revealCursor(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, MouseInputSourceImpl * this, char param_5)
// Body     : 001e5b00 - 001e5cbc


/* juce::detail::MouseInputSourceImpl::revealCursor(bool) */

void __thiscall
juce::detail::MouseInputSourceImpl::revealCursor
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,MouseInputSourceImpl *this,
          char param_5)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  long lVar3;
  long lVar4;
  Desktop *this_00;
  LookAndFeel_V4 *pLVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var6;
  undefined8 uVar7;
  long local_48;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Stack_40;
  long local_30;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *local_28;
  
  if ((*(long *)(this + 0x48) == 0) ||
     (lVar3 = *(long *)(*(long *)(this + 0x48) + 0x10), lVar3 == 0)) {
    uVar7 = 0;
    local_48 = 0;
    p_Stack_40 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    p_Var6 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
  }
  else {
    lVar4 = lVar3;
    do {
      if ((*(long *)(lVar4 + 0x68) != 0) &&
         (pLVar5 = *(LookAndFeel_V4 **)(*(long *)(lVar4 + 0x68) + 0x10),
         pLVar5 != (LookAndFeel_V4 *)0x0)) goto LAB_001e5b8b;
      lVar4 = *(long *)(lVar4 + 0x30);
    } while (lVar4 != 0);
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e5b64 to 001e5b6d has its CatchHandler @ 001e5cd0 */
      this_00 = operator_new(0x1d0);
                    /* try { // try from 001e5b71 to 001e5b78 has its CatchHandler @ 001e5cbd */
      Desktop::Desktop(this_00);
      Desktop::instance = this_00;
    }
    pLVar5 = Desktop::getDefaultLookAndFeel(Desktop::instance);
LAB_001e5b8b:
                    /* try { // try from 001e5b8e to 001e5b9b has its CatchHandler @ 001e5cd8 */
    uVar7 = (**(code **)(*(long *)pLVar5 + 0x80))(&local_30,pLVar5,lVar3);
    local_48 = local_30;
    p_Stack_40 = local_28;
    if (local_28 == (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
      p_Var6 = (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0;
    }
    else {
      p_Var6 = local_28;
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      else {
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      }
    }
  }
                    /* try { // try from 001e5bcf to 001e5bdd has its CatchHandler @ 001e5cdf */
  showMouseCursor(uVar7,param_2,param_3,this,&local_48,param_5);
  p_Var1 = p_Stack_40;
  if (p_Stack_40 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Stack_40 + 8) == 0x100000001) {
      *(undefined8 *)(p_Stack_40 + 8) = 0;
      (**(code **)(*(long *)p_Stack_40 + 0x10))(p_Stack_40);
      (**(code **)(*(long *)p_Var1 + 0x18))(p_Var1);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Stack_40 + 8;
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = (int)*(long *)(p_Stack_40 + 8);
        *(int *)(p_Stack_40 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Stack_40);
      }
    }
  }
  if (p_Var6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(p_Var6 + 8) == 0x100000001) {
      *(undefined8 *)(p_Var6 + 8) = 0;
      (**(code **)(*(long *)p_Var6 + 0x10))(p_Var6);
      (**(code **)(*(long *)p_Var6 + 0x18))(p_Var6);
    }
    else {
      if (*PTR___libc_single_threaded_00715c50 == '\0') {
        LOCK();
        p_Var1 = p_Var6 + 8;
        iVar2 = *(int *)p_Var1;
        *(int *)p_Var1 = *(int *)p_Var1 + -1;
        UNLOCK();
      }
      else {
        iVar2 = (int)*(long *)(p_Var6 + 8);
        *(int *)(p_Var6 + 8) = iVar2 + -1;
      }
      if (iVar2 == 1) {
        std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(p_Var6);
      }
    }
  }
  return;
}


