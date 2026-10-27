// Function : _M_release_last_use_cold
// Namespace: std:_Sp_counted_base____gnu_cxx___Lock_policy_2_
// Entry    : 0016cb30
// Prototype: undefined _M_release_last_use_cold(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 0016cb30 - 0016cb6e


/* std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold() */

void __thiscall
std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
          (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  (**(code **)(*(long *)this + 0x10))();
  if (*PTR___libc_single_threaded_00715c50 == '\0') {
    LOCK();
    p_Var1 = this + 0xc;
    iVar2 = *(int *)p_Var1;
    *(int *)p_Var1 = *(int *)p_Var1 + -1;
    UNLOCK();
  }
  else {
    iVar2 = *(int *)(this + 0xc);
    *(int *)(this + 0xc) = iVar2 + -1;
  }
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0016cb5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))(this);
    return;
  }
  return;
}


