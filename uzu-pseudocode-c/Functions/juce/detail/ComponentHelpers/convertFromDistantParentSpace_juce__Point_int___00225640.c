// Function : convertFromDistantParentSpace<juce::Point<int>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00225640
// Prototype: Point convertFromDistantParentSpace<juce::Point<int>>(long param_1, long * param_2, ulong param_3)
// Body     : 00225640 - 00225660


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Point<int> juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>
   >(juce::Component const*, juce::Component const&, juce::Point<int>) */

void __cdecl
juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<int>>
          (long param_1,long *param_2,ulong param_3)

{
  if ((long *)param_2[6] != (long *)param_1) {
    param_3 = convertFromDistantParentSpace<juce::Point<int>>(param_1,(long *)param_2[6],param_3);
  }
  convertFromParentSpace<juce::Point<int>>(param_2,param_3);
  return;
}


