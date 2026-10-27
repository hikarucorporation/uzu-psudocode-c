// Function : convertFromDistantParentSpace<juce::Point<float>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 0022c980
// Prototype: Point convertFromDistantParentSpace<juce::Point<float>>(undefined8 param_1_00, long param_2, long * param_3)
// Body     : 0022c980 - 0022c99a


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Point<float>
   juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>
   >(juce::Component const*, juce::Component const&, juce::Point<float>) */

void __cdecl
juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Point<float>>
          (undefined8 param_1_00,long param_2,long *param_3)

{
  if ((long *)param_3[6] != (long *)param_2) {
    param_1_00 = convertFromDistantParentSpace<juce::Point<float>>
                           (param_1_00,param_2,(long *)param_3[6]);
  }
  convertFromParentSpace<juce::Point<float>>(param_1_00,param_3);
  return;
}


