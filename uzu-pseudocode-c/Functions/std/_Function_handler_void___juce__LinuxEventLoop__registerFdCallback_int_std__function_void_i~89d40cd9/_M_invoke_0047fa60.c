// Function : _M_invoke
// Namespace: std:_Function_handler_void___juce__LinuxEventLoop__registerFdCallback_int_std__function_void_i~89d40cd9
// Entry    : 0047fa60
// Prototype: undefined8 _M_invoke(long * param_1)
// Body     : 0047fa60 - 0047fa80


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (), juce::LinuxEventLoop::registerFdCallback(int, std::function<void
   (int)>, short)::$_10>::_M_invoke(std::_Any_data const&) */

undefined8 __cdecl
std::
_Function_handler<void(),juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::$_10>
::_M_invoke(long *param_1)

{
  long lVar1;
  undefined4 in_EAX;
  undefined8 uStack_8;
  
  lVar1 = *param_1;
  uStack_8 = CONCAT44(*(undefined4 *)(lVar1 + 0x20),in_EAX);
  if (*(long *)(lVar1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
  (**(code **)(lVar1 + 0x18))(lVar1,(long)&uStack_8 + 4);
  return uStack_8;
}


