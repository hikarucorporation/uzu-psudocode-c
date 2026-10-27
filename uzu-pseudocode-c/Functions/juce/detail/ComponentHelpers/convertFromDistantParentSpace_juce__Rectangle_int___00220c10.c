// Function : convertFromDistantParentSpace<juce::Rectangle<int>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00220c10
// Prototype: undefined1[16] convertFromDistantParentSpace<juce::Rectangle<int>>(ComponentHelpers * this, ComponentHelpers * param_2, double param_3, double param_4)
// Body     : 00220c10 - 00220c3c


/* juce::Rectangle<int>
   juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>
   >(juce::Component const*, juce::Component const&, juce::Rectangle<int>) */

undefined1  [16] __thiscall
juce::detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>>
          (ComponentHelpers *this,ComponentHelpers *param_2,double param_3,double param_4)

{
  undefined1 auVar1 [16];
  
  if (*(ComponentHelpers **)(param_2 + 0x30) == this) {
    auVar1 = convertFromParentSpace<juce::Rectangle<int>>(param_2,param_3,param_4);
    return auVar1;
  }
  auVar1 = convertFromDistantParentSpace<juce::Rectangle<int>>
                     (this,*(ComponentHelpers **)(param_2 + 0x30),param_3,param_4);
  auVar1 = convertFromParentSpace<juce::Rectangle<int>>(param_2,auVar1._0_8_,auVar1._8_8_);
  return auVar1;
}


