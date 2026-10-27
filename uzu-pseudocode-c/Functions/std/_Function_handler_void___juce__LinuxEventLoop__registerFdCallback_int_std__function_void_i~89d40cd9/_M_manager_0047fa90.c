// Function : _M_manager
// Namespace: std:_Function_handler_void___juce__LinuxEventLoop__registerFdCallback_int_std__function_void_i~89d40cd9
// Entry    : 0047fa90
// Prototype: undefined8 _M_manager(long * param_1, long * param_2, undefined4 param_3)
// Body     : 0047fa90 - 0047fb41


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Function_handler<void (), juce::LinuxEventLoop::registerFdCallback(int, std::function<void
   (int)>, short)::$_10>::_M_manager(std::_Any_data&, std::_Any_data const&,
   std::_Manager_operation) */

undefined8 __cdecl
std::
_Function_handler<void(),juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::$_10>
::_M_manager(long *param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  switch(param_3) {
  case 0:
    *param_1 = (long)&juce::LinuxEventLoop::registerFdCallback(int,std::function<void(int)>,short)::
                      $_10::typeinfo;
    break;
  case 1:
    *param_1 = *param_2;
    break;
  case 2:
    lVar1 = *param_2;
    puVar3 = operator_new(0x28);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
                    /* try { // try from 0047faea to 0047faf6 has its CatchHandler @ 0047fb4a */
      (**(code **)(lVar1 + 0x10))(puVar3,lVar1,2);
      puVar3[3] = *(undefined8 *)(lVar1 + 0x18);
      puVar3[2] = *(undefined8 *)(lVar1 + 0x10);
    }
    *(undefined4 *)(puVar3 + 4) = *(undefined4 *)(lVar1 + 0x20);
    *param_1 = (long)puVar3;
    break;
  case 3:
    pvVar2 = (void *)*param_1;
    if (pvVar2 != (void *)0x0) {
      if (*(code **)((long)pvVar2 + 0x10) != (code *)0x0) {
                    /* try { // try from 0047fb25 to 0047fb31 has its CatchHandler @ 0047fb42 */
        (**(code **)((long)pvVar2 + 0x10))(pvVar2,pvVar2,3);
      }
      operator_delete(pvVar2);
    }
  }
  return 0;
}


