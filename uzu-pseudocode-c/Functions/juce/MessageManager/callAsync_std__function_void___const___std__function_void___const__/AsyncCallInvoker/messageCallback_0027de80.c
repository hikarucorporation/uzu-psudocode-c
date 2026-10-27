// Function : messageCallback
// Namespace: juce:MessageManager:callAsync_std__function_void___const___std__function_void___const__:AsyncCallInvoker
// Entry    : 0027de80
// Prototype: undefined messageCallback(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 0027de80 - 0027de97


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* messageCallback() */

void __cdecl
juce::MessageManager::callAsync<std::function<void()>const&>(std::function<void()>const&)::
AsyncCallInvoker::messageCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
                    /* WARNING: Could not recover jumptable at 0x0027de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1 + 0x10,param_2,param_3,in_RAX);
  return;
}


