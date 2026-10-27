// Function : modalStateFinished
// Namespace: juce:ModalCallbackFunction:create_std__function_void_int_____std__function_void_int____:Callable
// Entry    : 00281560
// Prototype: undefined8 modalStateFinished(Callable * this, undefined4 param_1)
// Body     : 00281560 - 0028157c


/* modalStateFinished(int) */

undefined8 __thiscall
juce::ModalCallbackFunction::create<std::function<void(int)>&>(std::function<void(int)>&)::Callable
::modalStateFinished(Callable *this,undefined4 param_1)

{
  undefined8 in_RAX;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if (*(long *)(this + 0x18) != 0) {
    uStack_8 = CONCAT44(param_1,(int)in_RAX);
    (**(code **)(this + 0x20))(this + 8,(long)&uStack_8 + 4);
  }
  return uStack_8;
}


