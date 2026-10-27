// Function : setMouseCursor
// Namespace: juce:Component
// Entry    : 0024a090
// Prototype: undefined setMouseCursor(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, long param_4, long param_5, _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> * param_6)
// Body     : 0024a090 - 0024a1b4


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Component::setMouseCursor(juce::MouseCursor const&) */

void __cdecl
juce::Component::setMouseCursor
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *param_6)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  long lVar3;
  Desktop *this_00;
  long lVar4;
  
  lVar4 = *(long *)(param_4 + 0x70) + 0x18;
  if (*(long *)(param_4 + 0x70) == 0) {
    lVar4 = 0;
  }
  lVar3 = param_5 + 0x18;
  if (param_5 == 0) {
    lVar3 = 0;
  }
  if (lVar4 != lVar3) {
    *(long *)(param_4 + 0x70) = param_5;
    this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_4 + 0x78);
    if (this != param_6) {
      if (param_6 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*PTR___libc_single_threaded_00715c50 == '\0') {
          LOCK();
          *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
          UNLOCK();
          this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_4 + 0x78);
        }
        else {
          *(int *)(param_6 + 8) = *(int *)(param_6 + 8) + 1;
        }
      }
      if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(this + 8) == 0x100000001) {
          *(undefined8 *)(this + 8) = 0;
          (**(code **)(*(long *)this + 0x10))(this);
          param_1_00 = (**(code **)(*(long *)this + 0x18))(this);
        }
        else {
          if (*PTR___libc_single_threaded_00715c50 == '\0') {
            LOCK();
            p_Var1 = this + 8;
            iVar2 = *(int *)p_Var1;
            *(int *)p_Var1 = *(int *)p_Var1 + -1;
            UNLOCK();
          }
          else {
            iVar2 = (int)*(long *)(this + 8);
            *(int *)(this + 8) = iVar2 + -1;
          }
          if (iVar2 == 1) {
            param_1_00 = std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                                   (this);
          }
        }
      }
      *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)(param_4 + 0x78) = param_6;
    }
    if ((*(ushort *)(param_4 + 0xe8) & 2) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
        this_00 = operator_new(0x1d0);
                    /* try { // try from 0024a182 to 0024a189 has its CatchHandler @ 0024a1b5 */
        param_1_00 = Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      detail::MouseInputSourceImpl::revealCursor
                (param_1_00,param_2,param_3,
                 (MouseInputSourceImpl *)
                 **(undefined8 **)(*(long *)(Desktop::instance + 0x40) + 0x28),'\x01');
      return;
    }
  }
  return;
}


