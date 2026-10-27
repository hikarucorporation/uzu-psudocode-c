// Function : _M_erase
// Namespace: std:_Rb_tree_int_std__pair_int_const_std__shared_ptr_std__function_void______std___Select1st_s~e1553199
// Entry    : 00480b10
// Prototype: undefined _M_erase(void * param_1)
// Body     : 00480b10 - 00480bbf


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<int, std::pair<int const, std::shared_ptr<std::function<void ()> > >,
   std::_Select1st<std::pair<int const, std::shared_ptr<std::function<void ()> > > >,
   std::less<int>, std::allocator<std::pair<int const, std::shared_ptr<std::function<void ()> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<int const, std::shared_ptr<std::function<void ()> > >
   >*) */

void __cdecl
std::
_Rb_tree<int,std::pair<int_const,std::shared_ptr<std::function<void()>>>,std::_Select1st<std::pair<int_const,std::shared_ptr<std::function<void()>>>>,std::less<int>,std::allocator<std::pair<int_const,std::shared_ptr<std::function<void()>>>>>
::_M_erase(void *param_1)

{
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var1;
  int iVar2;
  void *pvVar3;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this;
  undefined *puVar4;
  
  puVar4 = PTR___libc_single_threaded_00715c50;
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar3 = *(void **)((long)param_1 + 0x10);
      this = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)param_1 + 0x30);
      if (this != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(this + 8) == 0x100000001) {
          *(undefined8 *)(this + 8) = 0;
          (**(code **)(*(long *)this + 0x10))(this);
          (**(code **)(*(long *)this + 0x18))(this);
        }
        else {
          if (*puVar4 == '\0') {
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
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this);
          }
        }
      }
      operator_delete(param_1);
      param_1 = pvVar3;
    } while (pvVar3 != (void *)0x0);
  }
  return;
}


