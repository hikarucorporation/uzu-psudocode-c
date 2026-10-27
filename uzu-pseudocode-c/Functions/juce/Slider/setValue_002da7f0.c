// Function : setValue
// Namespace: juce:Slider
// Entry    : 002da7f0
// Prototype: undefined setValue(double param_1, long param_2, int param_3)
// Body     : 002da7f0 - 002da7fb


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Slider::setValue(double, juce::NotificationType) */

void __cdecl juce::Slider::setValue(double param_1,long param_2,int param_3)

{
  Pimpl::setValue(param_1,*(Pimpl **)(param_2 + 0x1a0),param_3);
  return;
}


