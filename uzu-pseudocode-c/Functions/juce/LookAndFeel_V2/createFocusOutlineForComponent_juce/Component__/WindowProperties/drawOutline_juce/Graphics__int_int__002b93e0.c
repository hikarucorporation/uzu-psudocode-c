// Function : Graphics&,int,int)
// Namespace: juce:LookAndFeel_V2:createFocusOutlineForComponent_juce:Component__:WindowProperties:drawOutline_juce
// Entry    : 002b93e0
// Prototype: undefined Graphics&,int,int)(undefined8 param_1, Graphics * param_2, int param_3, int param_4)
// Body     : 002b93e0 - 002b9446


/* juce::LookAndFeel_V2::createFocusOutlineForComponent(juce::Component&)::WindowProperties::drawOutline(juce::Graphics&,
   int, int) */

void juce::LookAndFeel_V2::createFocusOutlineForComponent(juce::Component&)::WindowProperties::
     drawOutline(juce::Graphics__int_int_
               (undefined8 param_1,Graphics *param_2,int param_3,int param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  
  Graphics::setColour(param_2,_ZN4juce7ColoursL6yellowE_146 & 0xffffff | 0x99000000);
  uStack_20 = CONCAT44((float)param_4,(float)param_3);
  local_28 = 0;
  (**(code **)(**(long **)(param_2 + 8) + 0x118))(*(long **)(param_2 + 8),&local_28);
  return;
}


