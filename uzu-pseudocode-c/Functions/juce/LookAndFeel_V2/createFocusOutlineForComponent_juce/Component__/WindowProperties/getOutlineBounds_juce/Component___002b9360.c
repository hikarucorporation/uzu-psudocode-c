// Function : Component&)
// Namespace: juce:LookAndFeel_V2:createFocusOutlineForComponent_juce:Component__:WindowProperties:getOutlineBounds_juce
// Entry    : 002b9360
// Prototype: undefined Component&)(undefined8 param_1, long param_2)
// Body     : 002b9360 - 002b93dd


/* juce::LookAndFeel_V2::createFocusOutlineForComponent(juce::Component&)::WindowProperties::getOutlineBounds(juce::Component&)
    */

void juce::LookAndFeel_V2::createFocusOutlineForComponent(juce::Component&)::WindowProperties::
     getOutlineBounds(juce::Component__(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  long local_50;
  undefined1 *local_48;
  Rectangle<int> local_40 [16];
  undefined1 local_30 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *(ulong *)(param_2 + 0x40);
  auVar1 = auVar1 << 0x40;
  do {
    local_50 = param_2;
    local_48 = local_30;
    local_30 = auVar1;
    auVar1 = detail::ComponentHelpers::
             convertToParentSpace<juce::Rectangle<int>>(juce::Component_const&,juce::Rectangle<int>)
             ::{lambda()#1}::operator()((_lambda___1_ *)&local_50);
    local_40 = (Rectangle<int>  [16])auVar1;
    if (*(float **)(param_2 + 0x50) != (float *)0x0) {
      auVar1 = Rectangle<int>::transformedBy(local_40,*(float **)(param_2 + 0x50));
    }
    param_2 = *(long *)(param_2 + 0x30);
  } while (param_2 != 0);
  return;
}


