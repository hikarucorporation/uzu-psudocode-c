// Function : ~__shared_ptr
// Namespace: std:__shared_ptr_std__function_void_______gnu_cxx___Lock_policy_2_
// Entry    : 0047fb80
// Prototype: undefined ~__shared_ptr(__shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 0047fb80 - 0047fbe7


/* std::__shared_ptr<std::function<void ()>, (__gnu_cxx::_Lock_policy)2>::~__shared_ptr() */

void __thiscall
std::__shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2>::~__shared_ptr
          (__shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2> *this)

{
  __shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  
  if (this != (__shared_ptr<std::function<void()>,(__gnu_cxx::_Lock_policy)2> *)0x0) {
    if (*(long *)(this + 8) == 0x100000001) {
      *(undefined8 *)(this + 8) = 0;
      (**(code **)(*(long *)this + 0x10))(this);
                    /* WARNING: Could not recover jumptable at 0x0047fbb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)this + 0x18))(this);
      return;
    }
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
      _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold
                ((_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)this);
      return;
    }
  }
  return;
}


