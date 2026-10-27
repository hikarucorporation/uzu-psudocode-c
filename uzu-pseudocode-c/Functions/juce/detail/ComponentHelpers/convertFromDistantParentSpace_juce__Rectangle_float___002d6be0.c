// Function : convertFromDistantParentSpace<juce::Rectangle<float>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 002d6be0
// Prototype: Rectangle convertFromDistantParentSpace<juce::Rectangle<float>>(undefined8 param_1_00, undefined8 param_2_00, long param_3, ComponentHelpers * param_4)
// Body     : 002d6be0 - 002d6bfa


/* WARNING: Unknown calling convention: __cdecl */
/* juce::Rectangle<float>
   juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<float>
   >(juce::Component const*, juce::Component const&, juce::Rectangle<float>) */

void __cdecl
juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<float>>
          (undefined8 param_1_00,undefined8 param_2_00,long param_3,ComponentHelpers *param_4)

{
  if (*(ComponentHelpers **)(param_4 + 0x30) != (ComponentHelpers *)param_3) {
    param_1_00 = convertFromDistantParentSpace<juce::Rectangle<float>>
                           (param_1_00,param_2_00,param_3,*(ComponentHelpers **)(param_4 + 0x30));
  }
  convertFromParentSpace<juce::Rectangle<float>>(param_1_00,param_2_00,param_4);
  return;
}


