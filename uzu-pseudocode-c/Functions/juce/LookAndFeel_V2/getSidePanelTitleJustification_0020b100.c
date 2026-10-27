// Function : getSidePanelTitleJustification
// Namespace: juce:LookAndFeel_V2
// Entry    : 0020b100
// Prototype: int getSidePanelTitleJustification(undefined8 param_1_00, long param_2)
// Body     : 0020b100 - 0020b10f


/* non-virtual thunk to juce::LookAndFeel_V2::getSidePanelTitleJustification(juce::SidePanel&) */

int __thiscall
juce::LookAndFeel_V2::getSidePanelTitleJustification(undefined8 param_1_00,long param_2)

{
  return 0x22 - (uint)(*(char *)(param_2 + 0x600) == '\0');
}


