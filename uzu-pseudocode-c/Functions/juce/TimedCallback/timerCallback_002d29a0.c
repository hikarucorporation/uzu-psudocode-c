// Function : timerCallback
// Namespace: juce:TimedCallback
// Entry    : 002d29a0
// Prototype: undefined timerCallback(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 002d29a0 - 002d29b7


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::TimedCallback::timerCallback() */

void __cdecl juce::TimedCallback::timerCallback(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
                    /* WARNING: Could not recover jumptable at 0x002d29b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x40))(param_1 + 0x28,param_2,param_3,in_RAX);
  return;
}


