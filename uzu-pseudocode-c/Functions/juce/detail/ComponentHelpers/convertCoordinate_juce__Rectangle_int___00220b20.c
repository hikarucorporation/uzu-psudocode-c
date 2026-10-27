// Function : convertCoordinate<juce::Rectangle<int>>
// Namespace: juce:detail:ComponentHelpers
// Entry    : 00220b20
// Prototype: undefined1[16] convertCoordinate<juce::Rectangle<int>>(ComponentHelpers * this, ComponentHelpers * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 00220b20 - 00220c03


/* juce::Rectangle<int> juce::detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>
   >(juce::Component const*, juce::Component const*, juce::Rectangle<int>) */

undefined1  [16] __thiscall
juce::detail::ComponentHelpers::convertCoordinate<juce::Rectangle<int>>
          (ComponentHelpers *this,ComponentHelpers *param_1,undefined8 param_2,undefined8 param_3)

{
  ComponentHelpers *pCVar1;
  undefined1 auVar2 [16];
  ComponentHelpers *local_58;
  undefined1 *local_50;
  Rectangle<int> local_48 [16];
  undefined1 local_38 [16];
  
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  if (param_1 == (ComponentHelpers *)0x0) {
LAB_00220bb2:
    if (this != (ComponentHelpers *)0x0) {
      pCVar1 = this;
      do {
        param_1 = pCVar1;
        pCVar1 = *(ComponentHelpers **)(param_1 + 0x30);
      } while (*(ComponentHelpers **)(param_1 + 0x30) != (ComponentHelpers *)0x0);
      auVar2 = convertFromParentSpace<juce::Rectangle<int>>(param_1,auVar2._0_8_,auVar2._8_8_);
      if (param_1 != this) {
LAB_00220be2:
        auVar2 = convertFromDistantParentSpace<juce::Rectangle<int>>
                           (param_1,this,auVar2._0_8_,auVar2._8_8_);
      }
    }
  }
  else {
    while (param_1 != this) {
      pCVar1 = this;
      while (pCVar1 != (ComponentHelpers *)0x0) {
        pCVar1 = *(ComponentHelpers **)(pCVar1 + 0x30);
        if (pCVar1 == param_1) goto LAB_00220be2;
      }
      local_58 = param_1;
      local_50 = local_38;
      local_38 = auVar2;
      auVar2 = convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
               ::{lambda()#1}::operator()((_lambda___1_ *)&local_58);
      local_48 = (Rectangle<int>  [16])auVar2;
      if (*(float **)(param_1 + 0x50) != (float *)0x0) {
        auVar2 = Rectangle<int>::transformedBy(local_48,*(float **)(param_1 + 0x50));
      }
      param_1 = *(ComponentHelpers **)(param_1 + 0x30);
      if (param_1 == (ComponentHelpers *)0x0) goto LAB_00220bb2;
    }
  }
  return auVar2;
}


