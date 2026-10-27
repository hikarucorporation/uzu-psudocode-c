// Function : getLocalArea
// Namespace: juce:Component
// Entry    : 002d6760
// Prototype: undefined getLocalArea(ComponentHelpers * param_1, ComponentHelpers * param_2, undefined8 param_3, undefined8 param_4)
// Body     : 002d6760 - 002d6764


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Component::getLocalArea(juce::Component const*, juce::Rectangle<int>) const */

undefined1  [16] __cdecl
juce::Component::getLocalArea
          (ComponentHelpers *param_1,ComponentHelpers *param_2,undefined8 param_3,undefined8 param_4
          )

{
  ComponentHelpers *pCVar1;
  undefined1 auVar2 [16];
  ComponentHelpers *pCStack_58;
  undefined1 *puStack_50;
  Rectangle<int> aRStack_48 [16];
  undefined1 auStack_38 [16];
  
  auVar2._8_8_ = param_4;
  auVar2._0_8_ = param_3;
  if (param_2 == (ComponentHelpers *)0x0) {
LAB_00220bb2:
    if (param_1 != (ComponentHelpers *)0x0) {
      pCVar1 = param_1;
      do {
        param_2 = pCVar1;
        pCVar1 = *(ComponentHelpers **)(param_2 + 0x30);
      } while (*(ComponentHelpers **)(param_2 + 0x30) != (ComponentHelpers *)0x0);
      auVar2 = detail::ComponentHelpers::convertFromParentSpace<juce::Rectangle<int>>
                         (param_2,auVar2._0_8_,auVar2._8_8_);
      if (param_2 != param_1) {
LAB_00220be2:
        auVar2 = detail::ComponentHelpers::convertFromDistantParentSpace<juce::Rectangle<int>>
                           (param_2,param_1,auVar2._0_8_,auVar2._8_8_);
      }
    }
  }
  else {
    while (param_2 != param_1) {
      pCVar1 = param_1;
      while (pCVar1 != (ComponentHelpers *)0x0) {
        pCVar1 = *(ComponentHelpers **)(pCVar1 + 0x30);
        if (pCVar1 == param_2) goto LAB_00220be2;
      }
      pCStack_58 = param_2;
      puStack_50 = auStack_38;
      auStack_38 = auVar2;
      auVar2 = detail::ComponentHelpers::
               convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
               ::{lambda()#1}::operator()((_lambda___1_ *)&pCStack_58);
      aRStack_48 = (Rectangle<int>  [16])auVar2;
      if (*(float **)(param_2 + 0x50) != (float *)0x0) {
        auVar2 = Rectangle<int>::transformedBy(aRStack_48,*(float **)(param_2 + 0x50));
      }
      param_2 = *(ComponentHelpers **)(param_2 + 0x30);
      if (param_2 == (ComponentHelpers *)0x0) goto LAB_00220bb2;
    }
  }
  return auVar2;
}


