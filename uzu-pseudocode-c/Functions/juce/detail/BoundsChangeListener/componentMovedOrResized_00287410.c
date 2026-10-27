// Function : componentMovedOrResized
// Namespace: juce:detail:BoundsChangeListener
// Entry    : 00287410
// Prototype: undefined componentMovedOrResized(long param_1, undefined8 param_2, undefined8 param_3)
// Body     : 00287410 - 00287427


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::detail::BoundsChangeListener::componentMovedOrResized(juce::Component&, bool, bool) */

void __cdecl
juce::detail::BoundsChangeListener::componentMovedOrResized
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_RAX;
  
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_bad_function_call();
  }
                    /* WARNING: Could not recover jumptable at 0x00287420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(param_1 + 8,param_2,param_3,in_RAX);
  return;
}


