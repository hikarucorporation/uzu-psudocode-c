// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_std__function_void____std__allocator_void_____gnu_cxx___Lock_polic~c0ea8434
// Entry    : 00480380
// Prototype: undefined8 _M_dispose(_Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00480380 - 00480399


/* std::_Sp_counted_ptr_inplace<std::function<void ()>, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

undefined8 __thiscall
std::_Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<std::function<void()>,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  undefined8 in_RAX;
  
  if (*(code **)(this + 0x20) != (code *)0x0) {
                    /* try { // try from 0048038e to 00480397 has its CatchHandler @ 0048039a */
    (**(code **)(this + 0x20))(this + 0x10,this + 0x10,3);
  }
  return in_RAX;
}


