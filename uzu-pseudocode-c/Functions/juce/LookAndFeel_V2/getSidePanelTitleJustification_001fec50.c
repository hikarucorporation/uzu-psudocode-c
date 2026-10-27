// Function : getSidePanelTitleJustification
// Namespace: juce:LookAndFeel_V2
// Entry    : 001fec50
// Prototype: int getSidePanelTitleJustification(undefined8 param_1_00, long param_2)
// Body     : 001fec50 - 001fec5f


/* juce::LookAndFeel_V2::getSidePanelTitleJustification(juce::SidePanel&) */

int __thiscall
juce::LookAndFeel_V2::getSidePanelTitleJustification(undefined8 param_1_00,long param_2)

{
  return 0x22 - (uint)(*(char *)(param_2 + 0x600) == '\0');
}


